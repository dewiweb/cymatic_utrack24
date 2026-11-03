"""app_config — petites preferences persistantes (~/.utrack_remote.json).

    cfg = load()
    cfg['utrack_host'] = '10.0.0.5'
    save(cfg)
"""
import json, os

PATH = os.path.expanduser('~/.utrack_remote.json')


def load():
    try:
        return json.load(open(PATH, encoding='utf-8'))
    except (OSError, ValueError):
        return {}


def save(cfg):
    try:
        json.dump(cfg, open(PATH, 'w', encoding='utf-8'), indent=1)
    except OSError:
        pass
