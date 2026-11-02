"""Client RTSP minimal pour la carte AudioLAN (AES67/RAVENNA).

Spec RE (audiolan_http_api.md):
  DESCRIBE rtsp://<ip>/by-name/<name>  -> SDP apres le premier CRLF CRLF
  SETUP/PLAY/TEARDOWN/GET_PARAMETER supportes (status list §table).
  Discovery: mDNS _rtsp._tcp,_ravenna_session (instance name = stream name).
"""
import socket, re


class RTSPError(Exception):
    pass


class AudiolanRTSP:
    def __init__(self, host: str, port: int = 554, timeout: float = 3.0):
        self.host, self.port, self.timeout = host, port, timeout
        self.cseq = 0
        self.session = None
        self._s = None

    def connect(self):
        self._s = socket.create_connection((self.host, self.port), self.timeout)
        return self

    def close(self):
        if self._s:
            try:
                self._s.close()
            finally:
                self._s = None

    def _req(self, method: str, url: str, extra: dict = None, body: str = ''):
        """Envoie une requete RTSP, retourne (status, headers, body)."""
        self.cseq += 1
        lines = [f'{method} {url} RTSP/1.0', f'CSeq: {self.cseq}']
        if self.session:
            lines.append(f'Session: {self.session}')
        for k, v in (extra or {}).items():
            lines.append(f'{k}: {v}')
        if body:
            lines.append(f'Content-Length: {len(body)}')
        req = '\r\n'.join(lines) + '\r\n\r\n' + body
        self._s.sendall(req.encode())
        resp = b''
        while b'\r\n\r\n' not in resp:
            chunk = self._s.recv(65536)
            if not chunk:
                raise RTSPError('connexion fermee')
            resp += chunk
        head, _, rest = resp.partition(b'\r\n\r\n')
        lines = head.decode('latin1').split('\r\n')
        m = re.match(r'RTSP/1\.0 (\d+)', lines[0])
        status = int(m.group(1)) if m else 0
        headers = {}
        for l in lines[1:]:
            if ': ' in l:
                k, v = l.split(': ', 1)
                headers[k.lower()] = v
        clen = int(headers.get('content-length', '0'))
        while len(rest) < clen:
            chunk = self._s.recv(65536)
            if not chunk:
                break
            rest += chunk
        if 'session' in headers and self.session is None:
            self.session = headers['session'].split(';')[0]
        return status, headers, rest.decode('latin1', 'replace')

    # ------------------ API ------------------
    def describe(self, stream_name: str):
        """DESCRIBE par nom de stream -> SDP (apres CRLFCRLF)."""
        url = f'rtsp://{self.host}/by-name/{stream_name}'
        status, hdrs, body = self._req('DESCRIBE', url)
        if status != 200:
            raise RTSPError(f'DESCRIBE {stream_name}: {status}')
        return body

    def setup(self, url: str, transport: str = ''):
        extra = {'Transport': transport} if transport else {}
        status, hdrs, body = self._req('SETUP', url, extra)
        if status != 200:
            raise RTSPError(f'SETUP: {status}')
        return hdrs, body

    def play(self, url: str):
        status, hdrs, body = self._req('PLAY', url)
        if status != 200:
            raise RTSPError(f'PLAY: {status}')
        return hdrs, body

    def teardown(self, url: str):
        status, hdrs, body = self._req('TEARDOWN', url)
        if status != 200:
            raise RTSPError(f'TEARDOWN: {status}')
        self.session = None
        return hdrs, body

    def get_parameter(self, url: str, params: str = ''):
        status, hdrs, body = self._req('GET_PARAMETER', url,
                                       {'Content-Type': 'text/parameters'}, params)
        return status, hdrs, body


def parse_sdp(sdp: str) -> dict:
    """Parse minimal d'un SDP AES67 -> {channels, rate, multicast, media}."""
    out = {'multicast': None, 'rate': None, 'channels': None, 'l24': False,
           'mediaclk': None, 'ptp': None, 'session_name': None}
    for line in sdp.splitlines():
        if line.startswith('s='):
            out['session_name'] = line[2:]
        elif line.startswith('c=IN IP4 '):
            out['multicast'] = line[9:].split('/')[0]
        elif 'a=rtpmap:' in line:
            m = re.search(r'L24/(\d+)/(\d+)', line)
            if m:
                out['l24'] = True
                out['rate'] = int(m.group(1))
                out['channels'] = int(m.group(2))
        elif 'a=mediaclk' in line:
            out['mediaclk'] = line.split(':', 1)[1]
        elif 'a=ts-refclk' in line:
            out['ptp'] = line.split(':', 1)[1]
    return out


if __name__ == '__main__':
    import sys
    host = sys.argv[1] if len(sys.argv) > 1 else '192.168.10.175'
    name = sys.argv[2] if len(sys.argv) > 2 else 'transmitter1'
    c = AudiolanRTSP(host).connect()
    sdp = c.describe(name)
    print(sdp)
    print(parse_sdp(sdp))
    c.close()
