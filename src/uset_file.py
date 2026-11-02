"""Formats fichiers uTrack24 — .set (device), .play (playlist device),
.playlistprj (projet uTool2 PC). Schémas issus du RE (rea_maps.md §12,
utool2_rea.md). stdlib only."""
import xml.etree.ElementTree as ET
from xml.dom import minidom


# ---------------------------------------------------------------- .set ---
class SongChannel:
    __slots__ = ('id', 'output_level', 'output_mute', 'output_channel',
                 'track_name', 'monitor_volume', 'monitor_mute', 'monitor_pan')

    def __init__(self, id):
        self.id = id
        self.output_level = 0
        self.output_mute = 0
        self.output_channel = id
        self.track_name = f'Channel {id + 1}'
        self.monitor_volume = -12
        self.monitor_mute = 0
        self.monitor_pan = 0


class SongMarker:
    __slots__ = ('global_time_in_samples', 'file_number', 'local_time_in_samples')

    def __init__(self, global_samples, file_number=1, local_samples=None):
        self.global_time_in_samples = global_samples
        self.file_number = file_number
        self.local_time_in_samples = global_samples if local_samples is None else local_samples


class SongSettings:
    """<song_settings> — le .set écrit par la machine dans le dossier du take."""

    def __init__(self):
        self.version = 1
        self.creator = 'cymatic audio uTrack24'
        self.target_device = 'uTrack24'
        self.song_name = ''
        self.sync_device = 'Standalone'
        self.wave_file_count = 1
        self.total_sample_count = 0
        self.sampling_rate = 44100
        self.resolution = 16
        self.channel_count = 0
        self.playback_type = 'multitrack'
        self.channels = []
        self.markers = []

    # ---- parse ----
    @classmethod
    def parse(cls, xml_text):
        s = cls()
        root = ET.fromstring(xml_text)
        def t(name, cast=str, default=None):
            e = root.find(name)
            return cast(e.text) if e is not None and e.text is not None else default
        s.version = t('version', int, 1)
        s.creator = t('creator', str, s.creator)
        s.target_device = t('target_device', str, s.target_device)
        s.song_name = t('song_name', str, '')
        s.sync_device = t('sync_device', str, 'Standalone')
        s.wave_file_count = t('wave_file_count', int, 0)
        s.total_sample_count = t('total_sample_count', int, 0)
        s.sampling_rate = t('sampling_rate', int, 44100)
        s.resolution = t('resolution', int, 16)
        s.channel_count = t('channel_count', int, 0)
        s.playback_type = t('playback_type', str, 'multitrack')
        for ce in root.findall('./channels/channel'):
            c = SongChannel(int(ce.get('id', '0')))
            c.output_level = int(ce.findtext('output_level', '0'))
            c.output_mute = int(ce.findtext('output_mute', '0'))
            c.output_channel = int(ce.findtext('output_channel', str(c.id)))
            c.track_name = ce.findtext('track_name', c.track_name)
            c.monitor_volume = int(ce.findtext('monitor_volume', '-12'))
            c.monitor_mute = int(ce.findtext('monitor_mute', '0'))
            c.monitor_pan = int(ce.findtext('monitor_pan', '0'))
            s.channels.append(c)
        for me in root.findall('marker'):
            s.markers.append(SongMarker(
                int(me.findtext('global_time_in_samples', '0')),
                int(me.findtext('file_number', '1')),
                int(me.findtext('local_time_in_samples', '0'))))
        return s

    # ---- generate ----
    def to_xml(self):
        lines = ['<song_settings>',
                 f'\t<version>{self.version}</version>',
                 f'\t<creator>{self.creator}</creator>',
                 f'\t<target_device>{self.target_device}</target_device>',
                 f'\t<song_name>{self.song_name}</song_name>',
                 f'\t<sync_device>{self.sync_device}</sync_device>',
                 f'\t<wave_file_count>{self.wave_file_count}</wave_file_count>',
                 f'\t<total_sample_count>{self.total_sample_count}</total_sample_count>',
                 f'\t<sampling_rate>{self.sampling_rate}</sampling_rate>',
                 f'\t<resolution>{self.resolution}</resolution>',
                 f'\t<channel_count>{self.channel_count}</channel_count>',
                 f'\t<playback_type>{self.playback_type}</playback_type>',
                 '\t<channels>']
        for c in self.channels:
            lines += [f'\t\t<channel id="{c.id}">',
                      f'\t\t\t<output_level>{c.output_level}</output_level>',
                      f'\t\t\t<output_mute>{c.output_mute}</output_mute>',
                      f'\t\t\t<output_channel>{c.output_channel}</output_channel>',
                      f'\t\t\t<track_name>{c.track_name}</track_name>',
                      f'\t\t\t<monitor_volume>{c.monitor_volume}</monitor_volume>',
                      f'\t\t\t<monitor_mute>{c.monitor_mute}</monitor_mute>',
                      f'\t\t\t<monitor_pan>{c.monitor_pan}</monitor_pan>',
                      '\t\t</channel>']
        lines.append('\t</channels>')
        for m in self.markers:
            lines += ['\t<marker>',
                      f'\t\t<global_time_in_samples>{m.global_time_in_samples}</global_time_in_samples>',
                      f'\t\t<file_number>{m.file_number}</file_number>',
                      f'\t\t<local_time_in_samples>{m.local_time_in_samples}</local_time_in_samples>',
                      '\t</marker>']
        lines.append('</song_settings>')
        return '\n'.join(lines) + '\n'

    def add_marker(self, global_samples, file_number=1):
        self.markers.append(SongMarker(global_samples, file_number))

    def duration_seconds(self):
        return self.total_sample_count / self.sampling_rate if self.sampling_rate else 0


# --------------------------------------------------------------- .play ---
class Playlist:
    """.play device — XML lu par le firmware (playlistname + entries).
    Dans #PLAYLISTS/ ; autoplay.play = lue au boot."""

    def __init__(self, name=''):
        self.name = name
        self.songs = []  # [{name, path, type}]

    @classmethod
    def parse(cls, xml_text):
        p = cls()
        root = ET.fromstring(xml_text)
        p.name = root.findtext('playlistname', root.findtext('playlist_name', ''))
        for se in root.iter():
            if se.tag.lower() in ('song', 'entry', 'item'):
                p.songs.append({'name': se.findtext('song_name', se.findtext('name', '')),
                                'type': se.findtext('song_type', se.findtext('type', 'multitrack')),
                                'path': se.findtext('path', '')})
        return p

    def to_xml(self):
        lines = ['<playlist>', f'\t<playlistname>{self.name}</playlistname>']
        for s in self.songs:
            lines += ['\t<song>',
                      f'\t\t<song_name>{s["name"]}</song_name>',
                      f'\t\t<song_type>{s.get("type", "multitrack")}</song_type>',
                      f'\t\t<path>{s.get("path", "")}</path>',
                      '\t</song>']
        lines.append('</playlist>')
        return '\n'.join(lines) + '\n'


# --------------------------------------------------------- .playlistprj ---
NS = 'http://www.cymaticaudio.com/PlaylistProject/1.0'
ET.register_namespace('', NS)


class PlaylistProject:
    """.playlistprj — projet playlist uTool2 (PC).
    ns0:playlist_project > playlist_name + song_projects>song_project."""

    def __init__(self, name=''):
        self.name = name
        self.songs = []  # [{song_project_name, song_name, track_count, song_type, markers:[int]}]

    @classmethod
    def parse(cls, path_or_text):
        p = cls()
        root = ET.parse(path_or_text).getroot() if not path_or_text.startswith('<') else ET.fromstring(path_or_text)
        p.name = root.findtext(f'{{{NS}}}playlist_name', '')
        for sp in root.iter(f'{{{NS}}}song_project'):
            p.songs.append({
                'song_project_name': sp.findtext(f'{{{NS}}}song_project_name', ''),
                'song_name': sp.findtext(f'{{{NS}}}song_name', ''),
                'track_count': int(sp.findtext(f'{{{NS}}}track_count', '0')),
                'song_type': sp.findtext(f'{{{NS}}}song_type', 'multitrack'),
                'markers': [int(m.text) for m in sp.iter(f'{{{NS}}}marker') if m.text],
            })
        return p

    def to_xml(self):
        root = ET.Element(f'{{{NS}}}playlist_project')
        ET.SubElement(root, f'{{{NS}}}playlist_name').text = self.name
        sps = ET.SubElement(root, f'{{{NS}}}song_projects')
        for s in self.songs:
            sp = ET.SubElement(sps, f'{{{NS}}}song_project')
            for tag in ('song_project_name', 'song_name', 'track_count', 'song_type'):
                ET.SubElement(sp, f'{{{NS}}}{tag}').text = str(s.get(tag, ''))
            ms = ET.SubElement(sp, f'{{{NS}}}markers')
            for m in s.get('markers', []):
                ET.SubElement(ms, f'{{{NS}}}marker').text = str(m)
        xml = minidom.parseString(ET.tostring(root)).toprettyxml(indent='\t')
        return '\n'.join(l for l in xml.splitlines() if l.strip())
