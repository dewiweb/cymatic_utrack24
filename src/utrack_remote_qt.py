"""utrack_remote_qt — telecommande Qt (PySide6) du uTrack24 via UTrackControl (VNM local :55000)."""
import sys,os,subprocess,threading
from PySide6.QtCore import QTimer,Qt
from PySide6.QtWidgets import (QApplication,QMainWindow,QWidget,QTabWidget,
    QVBoxLayout,QHBoxLayout,QGridLayout,QPushButton,QLabel,QProgressBar,
    QSlider,QDial,QCheckBox,QComboBox,QSpinBox,QScrollArea,QGroupBox,QMessageBox)

sys.path.insert(0,os.path.dirname(__file__))
from utrack_control import UTrackControl,SETTINGS,att_raw,att_db,ms_raw,ms_val

DARK = """QMainWindow,QWidget{background:#1c1e22;color:#ddd;font:10pt Consolas}
QPushButton{background:#2d3138;border:1px solid #555;border-radius:4px;padding:8px}
QPushButton:hover{background:#3a4048} QPushButton:pressed{background:#ff8800;color:#000}
QPushButton:checked{background:#ff8800;color:#000}
QPlainTextEdit,QLineEdit{background:#14161a;border:1px solid #444;padding:4px}
QProgressBar{border:1px solid #444;height:14px;text-align:center}
QProgressBar::chunk{background:#3fa7ff} QGroupBox{border:1px solid #444;margin-top:10px}
QTabBar::tab{background:#2d3138;padding:8px 20px} QTabBar::tab:selected{background:#ff8800;color:#000}"""

class Dial(QDial):
    def mouseDoubleClickEvent(self,e):self.setValue(0x8000)

def _bs(w,v):
    w.blockSignals(True);w.setValue(v);w.blockSignals(False)

def _fmt(e):
    if e is None:return '—'
    return e[1] if e[1] else (str(e[0]) if e[0] is not None else '—')

class Win(QMainWindow):
    def __init__(self,u=None,connected=False):
        super().__init__()
        self.setWindowTitle('uTrack24 Remote');self.resize(1400,620)
        self.u=u or UTrackControl();self._pend={};self._conn=None
        v=QVBoxLayout();root=QWidget();root.setLayout(v);self.setCentralWidget(root)
        hd=QHBoxLayout();self.hdr={}
        for ctrl,name in ((0xf000,'Nom'),(0xf003,'Fréquence'),(0xf004,'Résolution'),(0xf005,'Pistes'),(0xf040,'Date')):
            l=QLabel('%s : —'%name);self.hdr[ctrl]=(l,name);hd.addWidget(l)
        hd.addStretch(1);v.addLayout(hd)
        tr=QHBoxLayout()
        for label,fn in (('PLAY','play'),('STOP','stop'),('REC','rec')):
            b=QPushButton(label)
            if fn=='rec':b.clicked.connect(self._rec)
            else:b.clicked.connect(lambda _,f=fn:self.u and getattr(self.u,f)())
            tr.addWidget(b)
        gb=QGroupBox('Transport');gb.setLayout(tr);v.addWidget(gb)
        tabs=QTabWidget();v.addWidget(tabs)
        tabs.addTab(self._mixer(),'Mixer');tabs.addTab(self._settings(),'Réglages')
        self.tm=QTimer(self);self.tm.timeout.connect(self._refresh);self.tm.start(100)
        self.rate=QTimer(self);self.rate.timeout.connect(self._flush);self.rate.start(40)
        if connected:self.statusBar().showMessage('Connecté — %d contrôles'%len(self.u.state));self._conn='done'
        else:self._connect_async()

    def _connect_async(self):
        self.statusBar().showMessage('Connexion…')
        def run():
            try:self.u.connect();self._conn='ok'
            except Exception as e:self._conn=e
        threading.Thread(target=run,daemon=True).start()

    def _rec(self):
        if QMessageBox.question(self,'REC','Lancer un enregistrement sur le disque du uTrack ?')==QMessageBox.Yes:
            self.u and self.u.rec()

    def _mixer(self):
        sc=QScrollArea();sc.setWidgetResizable(True)
        row=QWidget();h=QHBoxLayout(row);self.strips=[]
        for ch in range(24):
            w=QWidget();s=QVBoxLayout(w);s.setSpacing(2)
            s.addWidget(QLabel('CH %d'%(ch+1),alignment=Qt.AlignCenter))
            mid=QHBoxLayout()
            m=QProgressBar();m.setOrientation(Qt.Vertical);m.setRange(0,65535);m.setFormat('');m.setMinimumHeight(110)
            f=QSlider(Qt.Vertical);f.setRange(0,65535);f.setMinimumHeight(110)
            mid.addWidget(m);mid.addWidget(f);s.addLayout(mid)
            raw=QLabel('brut —',alignment=Qt.AlignCenter);s.addWidget(raw)
            p=Dial();p.setRange(0,65535);s.addWidget(p,0,Qt.AlignCenter)
            mb=QPushButton('M');mb.setCheckable(True);sb=QPushButton('S');sb.setCheckable(True)
            mm=QHBoxLayout();mm.addWidget(mb);mm.addWidget(sb);s.addLayout(mm)
            f.valueChanged.connect(lambda v,c=ch:self._mark('f',c,v))
            f.sliderReleased.connect(lambda c=ch:self._release('f',c))
            p.valueChanged.connect(lambda v,c=ch:self._mark('p',c,v))
            p.sliderReleased.connect(lambda c=ch:self._release('p',c))
            mb.clicked.connect(lambda chk,c=ch:self.u and self.u.mute(c,chk))
            sb.clicked.connect(lambda chk,c=ch:self.u and self.u.solo(c,chk))
            self.strips.append({'m':m,'f':f,'p':p,'raw':raw,'M':mb,'S':sb})
            h.addWidget(w)
        h.addStretch(1);sc.setWidget(row);return sc

    def _mark(self,kind,ch,v):self._pend[(kind,ch)]=v

    def _release(self,kind,ch):
        w=self.strips[ch]['f' if kind=='f' else 'p']
        v=self._pend.pop((kind,ch),w.value())
        if self.u:(self.u.fader if kind=='f' else self.u.pan)(ch,v)

    def _flush(self):
        for (kind,ch),v in list(self._pend.items()):
            del self._pend[(kind,ch)]
            if self.u:(self.u.fader if kind=='f' else self.u.pan)(ch,v)

    ASK={0xb000:'Changer l\'horloge peut faire perdre la synchro. Continuer ?',
         0xb003:'Le DHCP peut changer l\'adresse IP et couper la liaison. Continuer ?',
         0xb102:'Change le format d\'enregistrement. Continuer ?',
         0xb103:'Change le format d\'enregistrement. Continuer ?',
         0xb104:'Change le format d\'enregistrement. Continuer ?'}
    COMBO_LABEL={0xb000:'Horloge',0xb001:'Commutateur au pied',0xb102:'Fréquence',0xb103:'Résolution',
                 0xb104:'Pistes',0xb203:'Mode de lecture',0xb204:'Sorties stéréo 1',0xb205:'Sorties stéréo 2'}

    def _set_ask(self,ctrl,val):
        if not self.u:return
        msg=self.ASK.get(ctrl)
        if msg and QMessageBox.question(self,'Confirmation',msg)!=QMessageBox.Yes:
            self._refresh();return
        self.u.set(ctrl,val)

    def _settings(self):
        w=QWidget();v=QVBoxLayout(w)
        self.chk={}
        for ctrl,label in ((0xb200,'Lecture auto (Auto-Play)'),(0xb105,'Pré-enregistrement'),
                           (0xb207,'Sorties multipistes post-fader'),(0xb003,'DHCP')):
            cb=QCheckBox(label);cb.toggled.connect(lambda on,c=ctrl:self._set_ask(c,1 if on else 0))
            self.chk[ctrl]=cb;v.addWidget(cb)
        gr=QGridLayout();self.cmb={}
        for i,ctrl in enumerate((0xb000,0xb001,0xb102,0xb103,0xb104,0xb203,0xb204,0xb205)):
            gr.addWidget(QLabel(self.COMBO_LABEL[ctrl]),i//2,(i%2)*2)
            cb=QComboBox()
            for val,lab in SETTINGS[ctrl]:cb.addItem(lab,val)
            cb.activated.connect(lambda i,c=ctrl,b=cb:self._set_ask(c,b.itemData(i)))
            self.cmb[ctrl]=cb;gr.addWidget(cb,i//2,(i%2)*2+1)
        self.sp={}
        for ctrl,lab,rng,unit,to_raw in ((0xb201,'Atténuation de sortie',(-30,0),' dB',att_raw),
                                         (0xb202,'Délai',(-1000,1000),' ms',ms_raw)):
            i=len(self.cmb)+len(self.sp)
            gr.addWidget(QLabel(lab),i//2,(i%2)*2)
            sb=QSpinBox();sb.setRange(*rng);sb.setSuffix(unit)
            sb.editingFinished.connect(lambda c=ctrl,f=to_raw,s=sb:self.u and self.u.num(c,f(s.value())))
            self.sp[ctrl]=(sb,to_raw);gr.addWidget(sb,i//2,(i%2)*2+1)
        v.addLayout(gr)
        g=QGroupBox('Lecture seule');gr2=QGridLayout();self.ro={}
        for i,(ctrl,label) in enumerate(((0xb004,'IP'),(0xb005,'Masque'),(0xb002,'Date'),(0xb206,'b206'))):
            gr2.addWidget(QLabel(label),i//2,(i%2)*2)
            l=QLabel('—');self.ro[ctrl]=l;gr2.addWidget(l,i//2,(i%2)*2+1)
        g.setLayout(gr2);v.addWidget(g);v.addStretch(1)
        return w

    def _refresh(self):
        if self._conn=='ok':
            self.statusBar().showMessage('Connecté — %d contrôles'%len(self.u.state));self._conn='done'
        elif self._conn not in (None,'done'):
            self.statusBar().showMessage('Erreur : %s'%self._conn);self._conn='done'
        u=self.u
        with u.slock:st=dict(u.state)
        for ctrl,(l,name) in self.hdr.items():l.setText('%s : %s'%(name,_fmt(st.get(ctrl))))
        for ch,s in enumerate(self.strips):
            e=st.get(0xe000+ch)
            if e and e[0] is not None:s['m'].setValue(e[0])
            e=st.get(0xd050+ch)
            if e and e[0] is not None and not s['p'].isSliderDown():_bs(s['p'],e[0])
            e=st.get(0xd070+ch)
            if e and e[0] is not None:
                if not s['f'].isSliderDown():_bs(s['f'],e[0])
                s['raw'].setText('brut %04x'%e[0])
            e=st.get(0xd030+ch)
            if e and e[0] is not None and s['M'].isChecked()!=(e[0]==1):
                s['M'].blockSignals(True);s['M'].setChecked(e[0]==1);s['M'].blockSignals(False)
            e=st.get(0xd010+ch)
            if e and e[0] is not None and s['S'].isChecked()!=(e[0]==1):
                s['S'].blockSignals(True);s['S'].setChecked(e[0]==1);s['S'].blockSignals(False)
        for ctrl,cb in self.chk.items():
            e=st.get(ctrl)
            if e and e[0] is not None and cb.isChecked()!=(e[0]==1):
                cb.blockSignals(True);cb.setChecked(e[0]==1);cb.blockSignals(False)
        for ctrl,cb in self.cmb.items():
            e=st.get(ctrl)
            if e and e[0] is not None:
                cur=-1 if e[0]==0xffff else e[0];i=cb.findData(cur)
                if i>=0:
                    if e[1]:cb.setItemText(i,e[1])
                    cb.blockSignals(True);cb.setCurrentIndex(i);cb.blockSignals(False)
        for ctrl,(sb,to_raw) in self.sp.items():
            e=st.get(ctrl)
            if e and e[0] is not None and not sb.hasFocus():
                disp=(att_db if ctrl==0xb201 else ms_val)(e[0])
                sb.blockSignals(True);sb.setValue(disp);sb.blockSignals(False)
        for ctrl,l in self.ro.items():l.setText(_fmt(st.get(ctrl)))

    def closeEvent(self,e):
        self.u and self.u.close();e.accept()

def main():
    out=subprocess.run(['tasklist','/FI','IMAGENAME eq uRemote.exe'],capture_output=True,text=True).stdout
    app=QApplication(sys.argv);app.setStyleSheet(DARK)
    if 'uRemote' in out:
        QMessageBox.warning(None,'uTrack24 Remote','uRemote est en cours — les deux ne peuvent pas tourner (même identité CopperLan).');return
    Win().show();sys.exit(app.exec())

if __name__=='__main__':main()
