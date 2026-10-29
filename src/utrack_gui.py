#!/usr/bin/env python3
"""utrack_gui — Tkinter GUI for the Cymatic uTrack24 + AudioLAN multitool."""

import sys, time, threading, re
import tkinter as tk
from tkinter import ttk, scrolledtext

sys.path.insert(0, __import__('os').path.dirname(__file__))
from utrack_telnet import UTrack24
from audiolan import AudioLAN

UT_HOST, AL_HOST = '192.168.10.198', '192.168.10.175'


class App(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title('uTrack24 multitool')
        self.geometry('880x560')
        try:
            self.u = UTrack24(UT_HOST)
            self.al = AudioLAN(AL_HOST)
            self.al.status()
        except Exception as e:
            print('conn err', e); self.u = None; self.al = None
        self._build()
        self._refresh()

    def _build(self):
        top = ttk.Frame(self); top.pack(fill='x', padx=8, pady=4)
        self.lbl = ttk.Label(top, text='', font=('Consolas', 10, 'bold'))
        self.lbl.pack(side='left')
        ttk.Button(top, text='Refresh', command=self._refresh).pack(side='right')

        nb = ttk.Notebook(self); nb.pack(fill='both', expand=True, padx=8, pady=4)
        self.tab_trans = ttk.Frame(nb); nb.add(self.tab_trans, text='Transport')
        self.tab_mix = ttk.Frame(nb); nb.add(self.tab_mix, text='Mixer')
        self.tab_aes = ttk.Frame(nb); nb.add(self.tab_aes, text='AES67')
        self.tab_sds = ttk.Frame(nb); nb.add(self.tab_sds, text='SDS shell')

        # transport
        for i, (t, c) in enumerate((('PLAY', 'start'), ('PAUSE', 'pause'), ('STOP', 'stop'))):
            ttk.Button(self.tab_trans, text=t, width=12,
                       command=lambda x=c: self._u_cmd('fileplay ' + x)).grid(row=0, column=i, padx=6, pady=10)
        ttk.Button(self.tab_trans, text='REC', width=12,
                   command=lambda: self._u_cmd('filerec start')).grid(row=0, column=3, padx=6)
        ttk.Button(self.tab_trans, text='REC-STOP', width=12,
                   command=lambda: self._u_cmd('filerec stop')).grid(row=0, column=4, padx=6)
        self.stat = scrolledtext.ScrolledText(self.tab_trans, height=18, font=('Consolas', 9))
        self.stat.grid(row=1, column=0, columnspan=5, sticky='nsew', padx=6, pady=4)
        self.tab_trans.rowconfigure(1, weight=1)

        # mixer levels
        self.mix = scrolledtext.ScrolledText(self.tab_mix, font=('Consolas', 9))
        self.mix.pack(fill='both', expand=True, padx=6, pady=6)

        # aes67
        self.aes = scrolledtext.ScrolledText(self.tab_aes, font=('Consolas', 9))
        self.aes.pack(fill='both', expand=True, padx=6, pady=6)

        # sds shell
        fr = ttk.Frame(self.tab_sds); fr.pack(fill='x')
        self.sds_in = ttk.Entry(fr); self.sds_in.pack(side='left', fill='x', expand=True, padx=4, pady=4)
        ttk.Button(fr, text='Run', command=self._sds).pack(side='right', padx=4)
        self.sds_out = scrolledtext.ScrolledText(self.tab_sds, font=('Consolas', 9))
        self.sds_out.pack(fill='both', expand=True, padx=4, pady=4)

    def _u_cmd(self, c):
        if not self.u: return '(disconnected)'
        try: return self.u.cmd(c)
        except Exception as e: return f'ERR {e}'

    def _sds(self):
        out = self._u_cmd(self.sds_in.get())
        self.sds_out.insert('end', f'> {self.sds_in.get()}\n{out}\n'); self.sds_out.see('end')

    def _refresh(self):
        if not self.u:
            self.lbl.config(text='uTrack unreachable'); return
        try:
            info = self.u.device_info()
            self.lbl.config(text=f"{info.get('name','?')} @ {UT_HOST} | AudioLAN @ {AL_HOST}")
        except Exception:
            self.lbl.config(text='read err')
        # aes67 streams
        if self.al:
            try:
                st = self.al.status(); aw = st.get('ArchwaveAES67', st)
                self.aes.delete('1.0', 'end')
                for s in aw.get('sources', []):
                    sdp = s.get('SDP', '')
                    name = next((l.split('s=')[-1].strip() for l in sdp.splitlines() if l.startswith('s=')), '?')
                    dst = next((l.split('IP4 ')[-1].strip() for l in sdp.splitlines() if 'c=IN IP4' in l), '?')
                    self.aes.insert('end', f'[{s.get("status")}] {name} -> {dst}\n')
            except Exception as e:
                self.aes.insert('end', str(e))
        # mixer levels
        try:
            out = self.u.cmd('mixer levels')
            vals = re.findall(r'CH (\d+):\s+(0x[0-9a-fA-F]+)', out)
            self.mix.delete('1.0', 'end')
            self.mix.insert('end', ' '.join(f'{c}:{int(v,16):08x}' for c, v in vals))
        except Exception as e:
            self.mix.insert('end', str(e))


if __name__ == '__main__':
    App().mainloop()
