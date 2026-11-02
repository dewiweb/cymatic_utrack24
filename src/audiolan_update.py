"""Firmware update AudioLAN — POST /api/fileupload (multipart) + burn poll.

Spec (audiolan_http_api.md §4.5): field 'uploadedFile', .bcd <=16MiB,
POST response JSON {status,message}. Ensuite le burn tourne en arriere-plan:
poll GET /api/installProgress (1s) jusqu'a status:'success', puis
GET /api/installProgress?action=reset, puis POST /command reboot.
DANGER: un upload interrompu/mauvais image bricke la carte."""
import socket, json, os, time, re


class UpdateError(Exception):
    pass


def _http(host, port, method, path, headers=None, body=b'', timeout=10.0):
    s = socket.create_connection((host, port), timeout)
    req = (f'{method} {path} HTTP/1.1\r\nHost: {host}\r\n'
           f'Connection: close\r\n')
    for k, v in (headers or {}).items():
        req += f'{k}: {v}\r\n'
    if body:
        req += f'Content-Length: {len(body)}\r\n'
    s.sendall(req.encode() + b'\r\n' + body)
    resp = b''
    try:
        while True:
            c = s.recv(65536)
            if not c:
                break
            resp += c
    except socket.timeout:
        pass
    s.close()
    head, _, rest = resp.partition(b'\r\n\r\n')
    return head.decode('latin1'), rest


def _json_body(head, body):
    m = re.search(rb'\{.*\}', body, re.S)
    return json.loads(m.group(0)) if m else {}


def upload_bcd(host: str, bcd_path: str, port: int = 80, timeout: float = 120.0,
               progress=None):
    """Envoie un .bcd a la carte. Retourne le dict de reponse JSON."""
    data = open(bcd_path, 'rb').read()
    if len(data) > 16777216:
        raise UpdateError('.bcd > 16 MiB')
    if not data.startswith(b'BcOd'):
        raise UpdateError('pas un conteneur BcOd')
    boundary = '----DevinBoundary7MA4YWxkTrZu0gW'
    name = os.path.basename(bcd_path)
    pre = (f'--{boundary}\r\nContent-Disposition: form-data; '
           f'name="uploadedFile"; filename="{name}"\r\n'
           f'Content-Type: application/octet-stream\r\n\r\n').encode()
    post = f'\r\n--{boundary}--\r\n'.encode()
    head, resp = _http(host, port, 'POST', '/api/fileupload',
                       {'Content-Type': f'multipart/form-data; boundary={boundary}'},
                       pre + data + post, timeout)
    if progress:
        progress(head.splitlines()[0] if head else '')
    j = _json_body(head, resp)
    if j.get('status') != 'ok':
        raise UpdateError(f'upload refuse: {j}')
    return j


def wait_burn(host: str, port: int = 80, poll_s: float = 1.0, timeout_s: float = 600.0,
              progress=None):
    """Poll /api/installProgress jusqu'a success/failure."""
    t0 = time.time()
    last = ''
    while time.time() - t0 < timeout_s:
        _, resp = _http(host, port, 'GET', '/api/installProgress', timeout=15.0)
        j = _json_body('', resp)
        msg = j.get('message', '')
        if msg != last and progress:
            progress(msg)
        last = msg
        st = j.get('status', '')
        if st == 'success':
            return j
        if st in ('error', 'failed'):
            raise UpdateError(f'burn failed: {j}')
        time.sleep(poll_s)
    raise UpdateError('timeout en attente du burn')


def progress_reset(host: str, port: int = 80):
    """GET /api/installProgress?action=reset."""
    return _http(host, port, 'GET', '/api/installProgress?action=reset')


def reboot(host: str, port: int = 80):
    """POST /command reboot — corps JSON {command:"reboot",version:1}."""
    body = json.dumps({'command': 'reboot', 'version': 1}).encode()
    return _http(host, port, 'POST', '/command',
                 {'Content-Type': 'application/json'}, body)


def update(host: str, bcd_path: str, port: int = 80, do_reboot: bool = True):
    """Chaine complete: upload -> burn -> reset -> reboot."""
    print('upload', bcd_path)
    upload_bcd(host, bcd_path, port, progress=print)
    print('burn en cours...')
    r = wait_burn(host, port, progress=lambda m: print('  ', m))
    print('resultat:', r)
    progress_reset(host, port)
    if do_reboot:
        print('reboot...')
        reboot(host, port)
    return r


if __name__ == '__main__':
    import sys
    if len(sys.argv) < 3:
        print('usage: audiolan_update.py <host> <firmware.bcd> [--no-reboot]')
        sys.exit(1)
    update(sys.argv[1], sys.argv[2], do_reboot='--no-reboot' not in sys.argv)
