#!/usr/bin/env python3
"""utrack_qt — Qt (PySide6) multitool GUI for the Cymatic uTrack24 + AudioLAN card."""

import sys, re
from PySide6.QtCore import QTimer, Qt
from PySide6.QtWidgets import (QApplication, QMainWindow, QWidget, QTabWidget,
    QVBoxLayout, QHBoxLayout, QPushButton, QLabel, QPlainTextEdit, QLineEdit,
    QProgressBar, QGridLayout, QGroupBox)

sys.path.insert(0, __import__('os').path.dirname(__file__))
from utrack_telnet import UTrack24
from audiolan import AudioLAN

UT_HOST, AL_HOST = '192.168.10.198', '192.168.10.175'
DARK = """QMainWindow,QWidget{background:#1c1e22;color:#ddd;font:10pt Consolas}
QPushButton{background:#2d3138;border:1px solid #555;border-radius:4px;padding:8px}
QPushButton:hover{background:#3a4048} QPushButton:pressed{background:#ff8800;color:#000}
QPlainTextEdit,QLineEdit{background:#14161a;border:1px solid #444;padding:4px}
QProgressBar{border:1px solid #444;height:14px;text-align:center}
QProgressBar::chunk{background:#3fa7ff} QGroupBox{border:1px solid #444;margin-top:10px}
QTabBar::tab{background:#2d3138;padding:8px 20px} QTabBar::tab:selected{background:#ff8800;color:#000}"""


class Win(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle('uTrack24 Multitool'); self.resize(960, 640)
        self.u = self.al = None
        self._connect()
        tabs = QTabWidget(); self.setCentralWidget(tabs)
        tabs.addTab(self._transport_tab(), 'Transport')
        tabs.addTab(self._mixer_tab(), 'Mixer')
        tabs.addTab(self._aes_tab(), 'AES67')
        tabs.addTab(self._sds_tab(), 'SDS Shell')
        self.tm = QTimer(self); self.tm.timeout.connect(self._poll); self.tm.start(1500)

    def _connect(self):
        try:
            self.u = UTrack24(UT_HOST)
        except Exception:
            self.u = None
        try:
            self.al = AudioLAN(AL_HOST); self.al.status()
        except Exception:
            self.al = None

    # ---------- tabs ----------
    def _transport_tab(self):
        w = QWidget(); v = QVBoxLayout(w)
        btns = QHBoxLayout()
        for label, cmd, col in (('PLAY', 'fileplay start', '#3fa7ff'), ('PAUSE', 'fileplay pause', '#888'),
                                ('STOP', 'fileplay stop', '#888'), ('REC', 'filerec start', '#e33'),
                                ('REC STOP', 'filerec stop', '#888'), ('STAT', 'fileplay stat', '#888')):
            b = QPushButton(label); b.setStyleSheet(f'QPushButton:pressed{{background:{col};color:#000}}')
            b.clicked.connect(lambda _, c=cmd: self._send(c))
            btns.addWidget(b)
        v.addLayout(btns)
        self.tr_out = QPlainTextEdit(readOnly=True); v.addWidget(self.tr_out)
        return w

    def _mixer_tab(self):
        w = QWidget(); v = QVBoxLayout(w)
        g = QGridLayout(); self.bars = []
        for i in range(24):
            lab = QLabel(f'CH{i+1:02d}'); bar = QProgressBar(); bar.setRange(0, 0xFF); bar.setFormat('')
            self.bars.append(bar)
            r, c = divmod(i, 8); g.addWidget(lab, r, c * 2); g.addWidget(bar, r, c * 2 + 1)
        box = QGroupBox('Input levels (mixer levels)'); box.setLayout(g); v.addWidget(box)
        return w

    def _aes_tab(self):
        w = QWidget(); v = QVBoxLayout(w)
        self.aes_out = QPlainTextEdit(readOnly=True); v.addWidget(self.aes_out)
        return w

    def _sds_tab(self):
        w = QWidget(); v = QVBoxLayout(w)
        row = QHBoxLayout()
        self.sds_in = QLineEdit(); self.sds_in.setPlaceholderText('sds command (get …, ls …, mixer …)')
        run = QPushButton('Run'); run.clicked.connect(self._sds)
        self.sds_in.returnPressed.connect(self._sds)
        row.addWidget(self.sds_in); row.addWidget(run); v.addLayout(row)
        self.sds_out = QPlainTextEdit(readOnly=True); v.addWidget(self.sds_out)
        return w

    # ---------- io ----------
    def _send(self, c):
        if not self.u: return
        try:
            out = self.u.cmd(c, 1.0)
            self.tr_out.appendPlainText(f'> {c}\n{out.strip()}\n')
        except Exception as e:
            self.tr_out.appendPlainText(f'ERR {e}')

    def _sds(self):
        c = self.sds_in.text().strip()
        if not c or not self.u: return
        try:
            out = self.u.cmd(c, 1.2)
        except Exception as e:
            out = f'ERR {e}'
        self.sds_out.appendPlainText(f'> {c}\n{out.strip()}\n')

    def _poll(self):
        # AES67 view + mixer levels
        if self.al:
            try:
                st = self.al.status(); aw = st.get('ArchwaveAES67', st)
                lines = []
                for s in aw.get('sources', []):
                    sdp = s.get('SDP', '')
                    name = next((l.split('s=')[-1].strip() for l in sdp.splitlines() if l.startswith('s=')), '?')
                    dst = next((l.split('IP4 ')[-1].strip() for l in sdp.splitlines() if 'c=IN IP4' in l), '?')
                    lines.append(f"[{s.get('status')}] {name}  ->  {dst}")
                self.aes_out.setPlainText('AudioLAN @ %s\n\n%s' % (AL_HOST, '\n'.join(lines)))
            except Exception:
                pass
        if self.u:
            try:
                out = self.u.cmd('mixer levels', 0.8)
                vals = re.findall(r'CH (\d+):\s+0x([0-9a-fA-F]+)', out)
                for ch, v in vals[:24]:
                    self.bars[int(ch) - 1].setValue(int(v, 16) & 0xFF)
            except Exception:
                pass


if __name__ == '__main__':
    app = QApplication(sys.argv); app.setStyleSheet(DARK)
    Win().show(); sys.exit(app.exec())
