"""audiolan — REST client for the uTrack24 AudioLAN AES67 card (archWave AES67 API).

The card exposes a JSON API on port 80:
  /status        full status incl. sources[] with SDP, clock, streams
  /sources       AES67 sources (device streams -> network)
  /outputs       sink/destination streams (network -> device outputs)
  /general       general settings (name, sync, sample rate)
  /configuration card configuration
"""

import json
import urllib.request

DEFAULT_HOST = '192.168.10.175'


class AudioLAN:
    def __init__(self, host: str = DEFAULT_HOST, timeout: float = 4.0):
        self.base = f'http://{host}'
        self.timeout = timeout

    def _get(self, path: str):
        with urllib.request.urlopen(self.base + path, timeout=self.timeout) as r:
            return json.loads(r.read().decode())

    def status(self):
        """Full status: sources[], clock, ptp, link state."""
        return self._get('/status')

    def sources(self):
        return self._get('/sources')

    def outputs(self):
        return self._get('/outputs')

    def general(self):
        return self._get('/general')

    def configuration(self):
        return self._get('/configuration')

    def summary(self):
        """Compact human-readable summary of streams/clock."""
        st = self.status()
        aw = st.get('ArchwaveAES67', st)
        out = []
        for s in aw.get('sources', []):
            sdp = s.get('SDP', '')
            name = next((l.split('s=')[-1].strip() for l in sdp.splitlines() if l.startswith('s=')), '?')
            dst = next((l.split('IP4 ')[-1].strip() for l in sdp.splitlines() if 'c=IN IP4' in l), '?')
            out.append({'name': name, 'multicast': dst, 'status': s.get('status')})
        return out


if __name__ == '__main__':
    import sys
    a = AudioLAN(sys.argv[1] if len(sys.argv) > 1 else DEFAULT_HOST)
    for s in a.summary():
        print(s)
