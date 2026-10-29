"""utrack_remote_qt — telecommande Qt (PySide6) du uTrack24 via UTrackControl (VNM local :55000)."""
import sys,os,subprocess,threading,time
from PySide6.QtCore import QTimer,Qt
from PySide6.QtWidgets import (QApplication,QMainWindow,QWidget,QTabWidget,
    QVBoxLayout,QHBoxLayout,QGridLayout,QPushButton,QLabel,QProgressBar,
    QSlider,QDial,QCheckBox,QComboBox,QSpinBox,QScrollArea,QGroupBox,QMessageBox,
    QTreeWidget,QTreeWidgetItem,QPlainTextEdit,QInputDialog,QFrame,QHeaderView,
    QGraphicsBlurEffect)

sys.path.insert(0,os.path.dirname(__file__))
from utrack_control import UTrackControl,SETTINGS,att_raw,att_db,ms_raw,ms_val
TEL_HOST='192.168.10.198'

DARK = """
/* uTrack24 Remote — theme "console studio" : gris/bleus profonds, accent #3fa7ff */
*{font-family:'Segoe UI';font-size:9.5pt;color:#dde2e8}
QMainWindow,QWidget{background:#15171b}
QWidget#overlay{background:rgba(8,10,13,195)}

/* ---- cadres / cartes / groupes ---- */
QFrame#card{background:#1d2128;border:1px solid #2f353f;border-radius:8px}
QFrame#strip{background:#1b1f26;border:1px solid #30363f;border-radius:8px}
QFrame#stripBus{background:#1c222b;border:1px solid #3d5f80;border-top:2px solid #3fa7ff;border-radius:8px}
QGroupBox{background:#1d2128;border:1px solid #2f353f;border-radius:8px;margin-top:16px;padding:16px 10px 10px 10px;font-weight:600}
QGroupBox::title{subcontrol-origin:margin;subcontrol-position:top left;left:12px;padding:0 8px;color:#8b94a1}
QGroupBox:disabled{color:#545b66}

/* ---- labels ---- */
QLabel#dim{color:#8b94a1}
QLabel#info{color:#8b94a1}
QLabel#ch{font-weight:700;font-size:9.5pt;padding:2px;color:#c8cfd8}
QLabel#chBus{font-weight:700;font-size:9.5pt;padding:2px;color:#8fc9ff}
QLabel#raw{color:#767f8b;font-family:Consolas;font-size:8pt}
QLabel#chip,QLabel#err{background:#181b20;border:1px solid #2d333d;border-radius:6px;padding:4px 10px;color:#96a0ac;font-size:8.5pt}
QLabel#err[on="true"]{background:rgba(224,82,82,28);border:1px solid #e05252;color:#ff9d94;font-weight:700}
QLabel#statePill{background:rgba(63,167,255,22);border:1px solid #3fa7ff;border-radius:9px;padding:4px 14px;color:#8fc9ff;font-weight:600}
QLabel:disabled{color:#545b66}

/* ---- boutons ---- */
QPushButton{background:#272c34;border:1px solid #3a414c;border-radius:5px;padding:6px 14px;font-weight:600;color:#d3d9e0}
QPushButton:hover{background:#2f3540;border-color:#4a5260}
QPushButton:pressed{background:#3a424e}
QPushButton:checked{background:#3fa7ff;border-color:#3fa7ff;color:#0d1117}
QPushButton:disabled{color:#545b66;background:#1a1e24;border-color:#282e37}
/* mute rouge / solo ambre quand actifs */
QPushButton#mute:hover{border-color:#d4574b}
QPushButton#mute:checked{background:#b23a2e;border-color:#d4574b;color:#fff}
QPushButton#solo:hover{border-color:#e8b93e}
QPushButton#solo:checked{background:#d9a026;border-color:#e8b93e;color:#161309}
/* transport type console */
QPushButton#play{background:#1e5b3c;border:1px solid #31a065;color:#dcf4e7;min-width:64px}
QPushButton#play:hover{background:#27804f;border-color:#3cb877}
QPushButton#play:pressed{background:#31a065}
QPushButton#rec{background:#7c2721;border:1px solid #d24539;color:#ffe7e3;min-width:64px}
QPushButton#rec:hover{background:#a03429;border-color:#e0574a}
QPushButton#rec:pressed{background:#b23a2e}
QPushButton#stop{background:#2b313a;border-color:#454d59;min-width:64px}
QPushButton#prev,QPushButton#next,QPushButton#save{background:#232830;border-color:#39404b}
QPushButton#marker{background:#233246;border:1px solid #3fa7ff;color:#8fc9ff}
QPushButton#marker:hover{background:#2a3d55}
QPushButton#marker:disabled{color:#545b66;background:#1a1e24;border-color:#282e37}

/* ---- saisie ---- */
QComboBox,QSpinBox{background:#14161a;border:1px solid #3a414c;border-radius:4px;padding:4px 8px;min-width:120px;color:#dde2e8}
QComboBox:hover,QSpinBox:hover{border-color:#4a5260}
QComboBox:disabled,QSpinBox:disabled{color:#545b66;background:#171a1f;border-color:#282e37}
QComboBox::drop-down{border:none;width:22px}
QComboBox QAbstractItemView{background:#1d2128;border:1px solid #3a414c;selection-background-color:#3fa7ff;selection-color:#fff;outline:none}
QSpinBox::up-button,QSpinBox::down-button{background:#272c34;border:none;width:16px}
QSpinBox::up-button:hover,QSpinBox::down-button:hover{background:#2f3540}
QCheckBox{spacing:8px}
QCheckBox:disabled{color:#545b66}
QCheckBox::indicator{width:15px;height:15px;border:1px solid #3a414c;border-radius:3px;background:#14161a}
QCheckBox::indicator:hover{border-color:#3fa7ff}
QCheckBox::indicator:checked{background:#3fa7ff;border-color:#3fa7ff}
QCheckBox::indicator:disabled{border-color:#282e37;background:#1a1e24}

/* ---- faders / potards / vu-metres ---- */
QSlider::groove:vertical{background:#101216;width:6px;border:1px solid #2b3038;border-radius:3px}
QSlider::sub-page:vertical{background:rgba(63,167,255,60);border-radius:3px}
QSlider::handle:vertical{background:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #e8ecf1,stop:0.45 #aab3bf,stop:0.55 #7c8794,stop:1 #cfd6de);border:1px solid #14161a;border-radius:3px;height:12px;margin:0 -8px}
QSlider::handle:vertical:hover{background:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 #ffffff,stop:0.45 #c2cad4,stop:0.55 #8b96a3,stop:1 #e0e6ec)}
QDial{background:#272c34}
QProgressBar{background:#101216;border:1px solid #2b3038;border-radius:4px}
QProgressBar::chunk{background:qlineargradient(x1:0,y1:1,x2:0,y2:0,stop:0 #1d7a46,stop:0.55 #2f9e63,stop:0.8 #d9a026,stop:1 #e05252);border-radius:3px}
QProgressBar#meter{background:#0e1013;border:1px solid #2b3038;padding:1px}
QProgressBar#busy{height:5px;border:none;background:#2b3038;border-radius:2px}
QProgressBar#busy::chunk{background:#3fa7ff;border-radius:2px}

/* ---- arbres / listes / journal ---- */
QTreeWidget{background:#14161a;border:1px solid #2e343e;border-radius:6px;alternate-background-color:#181c22}
QTreeWidget::item{height:24px}
QTreeWidget::item:hover{background:#1e242c}
QTreeWidget::item:selected{background:#28517a;color:#fff}
QHeaderView::section{background:#20242b;border:none;border-bottom:1px solid #2e343e;padding:6px 8px;font-weight:600;color:#8b94a1}
QPlainTextEdit{background:#14161a;border:1px solid #2e343e;border-radius:6px;font-family:Consolas;font-size:9pt;color:#c8cfd8}

/* ---- onglets ---- */
QTabWidget::pane{border:1px solid #2e343e;border-radius:6px;top:-1px;background:#191d23}
QTabBar::tab{background:#21252d;border:1px solid #2e343e;border-bottom:none;border-top-left-radius:6px;border-top-right-radius:6px;padding:8px 26px;color:#8b94a1;margin-right:3px}
QTabBar::tab:selected{background:#191d23;color:#e6ebf1;border-top:2px solid #3fa7ff}
QTabBar::tab:hover:!selected{background:#262b34;color:#c2c9d2}

/* ---- scrollbars ---- */
QScrollArea{border:none;background:transparent}
QScrollBar:horizontal{height:10px;background:#14161a;margin:0}
QScrollBar::handle:horizontal{background:#3a404a;border-radius:5px;min-width:30px}
QScrollBar::handle:horizontal:hover{background:#4a5260}
QScrollBar::add-line:horizontal,QScrollBar::sub-line:horizontal{width:0}
QScrollBar:vertical{width:10px;background:#14161a}
QScrollBar::handle:vertical{background:#3a404a;border-radius:5px;min-height:30px}
QScrollBar::handle:vertical:hover{background:#4a5260}
QScrollBar::add-line:vertical,QScrollBar::sub-line:vertical{height:0}
QScrollBar::add-page,QScrollBar::sub-page{background:none}

/* ---- statut / overlay / divers ---- */
QStatusBar{background:#111318;border-top:1px solid #262b33;color:#8b94a1}
QStatusBar[conn="ok"]{color:#58c184}
QStatusBar[conn="wait"]{color:#e0b04e}
QStatusBar[conn="err"]{color:#ff7a70}
QLabel#wait{color:#dde2e8;font-size:12pt;font-weight:600}
QToolTip{background:#20242b;border:1px solid #3a414c;color:#dde2e8;padding:5px}
QMessageBox{background:#15171b}
"""

class Dial(QDial):
    def mouseDoubleClickEvent(self,e):self.setValue(0x8000)

def _bs(w,v):
    w.blockSignals(True);w.setValue(v);w.blockSignals(False)

def _fmt(e):
    if e is None:return '—'
    return e[1] if e[1] else (str(e[0]) if e[0] is not None else '—')

class Win(QMainWindow):
    def __init__(self,u=None,connected=False,tel=None):
        super().__init__()
        self.setWindowTitle('uTrack24 Remote');self.resize(1500,700)
        self.u=u or UTrackControl();self._pend={};self._conn=None
        self.tel=tel;self._takes_data=None;self._reclog=None;self._loaded=None;self._take_err=None
        self.alan=None;self._alan_data=None;self._matrix_state=[None]*24
        self._meters={};self._meters_ts=0;self._tlock=threading.Lock()
        root=QWidget();rv=QVBoxLayout(root);rv.setContentsMargins(0,0,0,0)
        self.content=QFrame();v=QVBoxLayout(self.content)
        v.setContentsMargins(12,10,12,10);v.setSpacing(10)
        rv.addWidget(self.content);self.setCentralWidget(root)
        hd=QFrame();hd.setObjectName('card');h=QHBoxLayout(hd);h.setSpacing(6);h.setContentsMargins(10,8,10,8);self.hdr={}
        for ctrl,name in ((0xf000,'Nom'),(0xf003,'Fréquence'),(0xf004,'Résolution'),(0xf005,'Pistes'),(0xf040,'Date'),(0xf010,'État'),(0xf006,'Restant'),(0xf060,'Err')):
            l=QLabel('%s : —'%name);l.setObjectName('err' if ctrl==0xf060 else 'chip')
            self.hdr[ctrl]=(l,name);h.addWidget(l)
        h.addSpacing(6);self.hdr_status=QLabel('—');self.hdr_status.setObjectName('statePill');h.addWidget(self.hdr_status)
        h.addStretch(1);v.addWidget(hd)
        tr=QHBoxLayout();tr.setSpacing(10)
        for label,fn,oid in (('|◄','prev','prev'),('►|','next','next'),('PLAY','play','play'),('STOP','stop','stop'),('REC','rec','rec'),('SAVE','save','save')):
            b=QPushButton(label);b.setObjectName(oid);b.setMinimumHeight(38)
            if fn=='rec':b.clicked.connect(self._rec)
            elif fn=='stop':b.clicked.connect(self._stop)
            else:b.clicked.connect(lambda _,f=fn:self.u and getattr(self.u,f)())
            tr.addWidget(b)
        self.pos=QSpinBox();self.pos.setRange(0,0x7fffffff);self.pos.setMaximumWidth(130)
        self.pos.setToolTip('Position en échantillons (0xd001-3: locate/loop start/loop end)')
        for lab,cid in (('►|','d001'),('⟲A','d002'),('B⟲','d003')):
            b=QPushButton(lab);b.setFixedHeight(28);b.setEnabled(False)
            b.setToolTip('0x%s = controle texte (ASCII decimal) — ecriture non encore implementee'%cid)
            tr.addWidget(b)
        self.pos.setEnabled(False)
        tr.addWidget(self.pos)
        self.mk=QPushButton('MARQUEUR');self.mk.setObjectName('marker');self.mk.setEnabled(False);self.mk.setMinimumHeight(38)
        self.mk.setToolTip("Ajoute un marqueur à l'enregistrement en cours (actif après REC lancé depuis cette fenêtre)")
        self.mk.clicked.connect(lambda:self.u and self.u.marker());tr.addWidget(self.mk)
        self.gb_tr=QGroupBox('Transport');self.gb_tr.setObjectName('transport');self.gb_tr.setLayout(tr);v.addWidget(self.gb_tr)
        self.tabs=QTabWidget();v.addWidget(self.tabs)
        self.tabs.addTab(self._mixer(),'Mixer');self.tabs.addTab(self._settings(),'Réglages');self.tabs.addTab(self._takes(),'Prises');self.tabs.addTab(self._audiolan(),'AES67 (AudioLAN)');self.tabs.addTab(self._matrix(),'Matrice')
        self.gb_tr.setEnabled(connected);self.tabs.setEnabled(connected)
        self.overlay=QWidget(root);self.overlay.setObjectName('overlay')
        ov=QVBoxLayout(self.overlay);ov.addStretch(2)
        hb=QHBoxLayout();hb.addStretch(1)
        box=QFrame();box.setObjectName('card');bv=QVBoxLayout(box)
        lb=QLabel('Connexion au uTrack24…');lb.setObjectName('wait');lb.setAlignment(Qt.AlignCenter)
        pb=QProgressBar();pb.setObjectName('busy');pb.setRange(0,0);pb.setTextVisible(False);pb.setFixedWidth(280)
        bv.addWidget(lb);bv.addWidget(pb);hb.addWidget(box);hb.addStretch(1);ov.addLayout(hb);ov.addStretch(3)
        self.blur=QGraphicsBlurEffect(self);self.blur.setBlurRadius(14)
        self.blur.setBlurHints(QGraphicsBlurEffect.PerformanceHint)
        if not connected:
            self.content.setGraphicsEffect(self.blur)
        else:self.overlay.hide()
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
            if self.u:self.u.rec();self.mk.setEnabled(True)

    def _stop(self):
        if self.u:self.u.stop()
        self.mk.setEnabled(False)

    def _mixer(self):
        sc=QScrollArea();sc.setWidgetResizable(True)
        row=QWidget();h=QHBoxLayout(row);h.setSpacing(8);h.setContentsMargins(10,10,10,10);self.strips=[]
        for ch in range(26):
            w=QFrame();w.setObjectName('stripBus' if ch>=24 else 'strip');w.setFixedWidth(82)
            s=QVBoxLayout(w);s.setSpacing(4);s.setContentsMargins(6,8,6,8)
            s.addWidget(QLabel({24:'MON',25:'BUS'}.get(ch,'CH %d'%(ch+1)),alignment=Qt.AlignCenter,objectName='chBus' if ch>=24 else 'ch'))
            mid=QHBoxLayout();mid.setAlignment(Qt.AlignCenter)
            m=QProgressBar();m.setObjectName('meter');m.setOrientation(Qt.Vertical);m.setRange(0,65535);m.setFormat('')
            m.setFixedSize(14,132)
            f=QSlider(Qt.Vertical);f.setRange(0,65535);f.setMinimumHeight(132)
            mid.addWidget(m);mid.addSpacing(4);mid.addWidget(f);s.addLayout(mid)
            raw=QLabel('brut —',alignment=Qt.AlignCenter,objectName='raw');s.addWidget(raw)
            p=Dial();p.setRange(0,65535);p.setFixedSize(44,44);s.addWidget(p,0,Qt.AlignCenter)
            mb=QPushButton('M');mb.setCheckable(True);mb.setObjectName('mute');mb.setFixedHeight(24)
            sb=QPushButton('S');sb.setCheckable(True);sb.setObjectName('solo');sb.setFixedHeight(24)
            mm=QHBoxLayout();mm.setSpacing(4);mm.addWidget(mb);mm.addWidget(sb);s.addLayout(mm)
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
                 0xb104:'Pistes',0xb203:'Mode de lecture',0xb204:'Sorties stéréo 88/96k',0xb205:'Sorties stéréo 44/48k'}

    def _set_ask(self,ctrl,val):
        if not self.u:return
        msg=self.ASK.get(ctrl)
        if msg and QMessageBox.question(self,'Confirmation',msg)!=QMessageBox.Yes:
            self._refresh();return
        self.u.set(ctrl,val)

    def _settings(self):
        w=QWidget();v=QVBoxLayout(w);v.setContentsMargins(12,12,12,12);v.setSpacing(12)
        g1=QGroupBox('Options');gr1=QGridLayout();gr1.setSpacing(8);self.chk={}
        for i,(ctrl,label) in enumerate(((0xb200,'Lecture auto (Auto-Play)'),(0xb105,'Pré-enregistrement'),
                           (0xb207,'Sorties multipistes post-fader'),(0xb206,'Sorties stéréo post-fader'),(0xb003,'DHCP'))):
            cb=QCheckBox(label);cb.toggled.connect(lambda on,c=ctrl:self._set_ask(c,1 if on else 0))
            self.chk[ctrl]=cb;gr1.addWidget(cb,i//2,i%2)
        g1.setLayout(gr1);v.addWidget(g1)
        g2=QGroupBox('Réglages');gr=QGridLayout();gr.setSpacing(8);self.cmb={}
        for i,ctrl in enumerate((0xb000,0xb001,0xb102,0xb103,0xb104,0xb203,0xb204,0xb205)):
            gr.addWidget(QLabel(self.COMBO_LABEL[ctrl],objectName='dim'),i//2,(i%2)*2)
            cb=QComboBox()
            for val,lab in SETTINGS[ctrl]:cb.addItem(lab,val)
            cb.activated.connect(lambda i,c=ctrl,b=cb:self._set_ask(c,b.itemData(i)))
            self.cmb[ctrl]=cb;gr.addWidget(cb,i//2,(i%2)*2+1)
        self.sp={}
        for ctrl,lab,rng,unit,to_raw in ((0xb201,'Atténuation de sortie',(-30,0),' dB',att_raw),
                                         (0xb202,'Offset MIDI',(-1000,1000),' ms',ms_raw)):
            i=len(self.cmb)+len(self.sp)
            gr.addWidget(QLabel(lab,objectName='dim'),i//2,(i%2)*2)
            sb=QSpinBox();sb.setRange(*rng);sb.setSuffix(unit);sb.setEnabled(False)
            sb.setToolTip('0x%x: ecriture numerique non effective (chemin commit uCL+0x848 requis)'%ctrl)
            self.sp[ctrl]=(sb,to_raw);gr.addWidget(sb,i//2,(i%2)*2+1)
        g2.setLayout(gr);v.addWidget(g2)
        g=QGroupBox('Lecture seule');gr2=QGridLayout();gr2.setSpacing(8);self.ro={}
        for i,(ctrl,label) in enumerate(((0xb004,'IP'),(0xb005,'Masque'),(0xb002,'Date'),(0xb206,'b206'))):
            gr2.addWidget(QLabel(label,objectName='dim'),i//2,(i%2)*2)
            l=QLabel('—');self.ro[ctrl]=l;gr2.addWidget(l,i//2,(i%2)*2+1)
        g.setLayout(gr2);v.addWidget(g);v.addStretch(1)
        return w

    def _takes(self):
        w=QWidget();v=QVBoxLayout(w);v.setContentsMargins(12,12,12,12);v.setSpacing(8)
        hb=QHBoxLayout()
        self.btn_ref=QPushButton('Rafraîchir');self.btn_ref.clicked.connect(self._takes_refresh);hb.addWidget(self.btn_ref)
        self.btn_ren=QPushButton('Renommer…');self.btn_ren.setEnabled(False);self.btn_ren.clicked.connect(self._take_rename);hb.addWidget(self.btn_ren)
        self.btn_del=QPushButton('Supprimer');self.btn_del.setEnabled(False);self.btn_del.clicked.connect(self._take_delete);hb.addWidget(self.btn_del)
        self.btn_stat=QPushButton('Statut');self.btn_stat.clicked.connect(self._stat_refresh);hb.addWidget(self.btn_stat)
        self.stat_lbl=QLabel('—',objectName='info');hb.addWidget(self.stat_lbl)
        self.btn_load=QPushButton('Charger');self.btn_load.setEnabled(False)
        self.btn_load.setToolTip('Charge la prise selectionnee (CopperLan file-select 0xc010)')
        self.btn_load.clicked.connect(self._take_load);hb.addWidget(self.btn_load)
        hb.addStretch(1);v.addLayout(hb)
        self.tree=QTreeWidget();self.tree.setHeaderLabels(['Prise','Date','Format','Durée','Marqueurs'])
        self.tree.setAlternatingRowColors(True);self.tree.header().setStretchLastSection(True)
        self.tree.setSelectionMode(QTreeWidget.SingleSelection)
        self.tree.currentItemChanged.connect(self._take_sel);v.addWidget(self.tree,2)
        lg=QGroupBox('Journal (reclog.txt)');lv=QVBoxLayout(lg)
        self.reclog=QPlainTextEdit(readOnly=True);lv.addWidget(self.reclog);v.addWidget(lg,1)
        return w

    def _audiolan(self):
        w=QWidget();v=QVBoxLayout(w);v.setContentsMargins(12,12,12,12);v.setSpacing(8)
        hb=QHBoxLayout()
        self.btn_alan=QPushButton('Rafraîchir');self.btn_alan.clicked.connect(self._alan_refresh);hb.addWidget(self.btn_alan)
        self.btn_alan_apply=QPushButton('Appliquer');self.btn_alan_apply.setEnabled(False)
        self.btn_alan_apply.clicked.connect(self._alan_apply);hb.addWidget(self.btn_alan_apply)
        self.btn_alan_reb=QPushButton('Redémarrer');self.btn_alan_reb.clicked.connect(self._alan_reboot);hb.addWidget(self.btn_alan_reb)
        self.btn_alan_fw=QPushButton('Firmware…');self.btn_alan_fw.clicked.connect(self._alan_upload);hb.addWidget(self.btn_alan_fw)
        self.alan_info=QLabel('—');hb.addWidget(self.alan_info);hb.addStretch(1);v.addLayout(hb)
        gb=QGroupBox('Routing — réseau → audio (24 sorties)');rg=QVBoxLayout(gb)
        self.route_grid=QGridLayout();self.route_grid.setSpacing(4)
        rg.addLayout(self.route_grid)
        scw=QWidget();scw.setLayout(rg)
        sc=QScrollArea();sc.setWidgetResizable(True);sc.setWidget(scw);sc.setMaximumHeight(300)
        v.addWidget(sc,1)
        self.atree=QTreeWidget();self.atree.setHeaderLabels(['Élément','Détail'])
        self.atree.setAlternatingRowColors(True);self.atree.setSelectionMode(QTreeWidget.SingleSelection)
        v.addWidget(self.atree,1)
        return w

    def _alan_refresh(self):
        self.btn_alan.setEnabled(False);self.statusBar().showMessage('Lecture AudioLAN…')
        def run():
            try:
                if self.alan is None:
                    from audiolan_api import AudioLan
                    self.alan=AudioLan()
                self._alan_data=(self.alan.general(),self.alan.sources(),self.alan.outputs(),self.alan.stream_list())
            except Exception as e:self._alan_data=e
        threading.Thread(target=run,daemon=True).start()

    def _fill_alan(self,data):
        g,src,out,sl=data
        self.atree.clear();self._edit_items=[]
        cfg=g.get('ArchwaveAES67',{}).get('config',{})
        self.alan_info.setText('%s — %s'%(cfg.get('name','?'),cfg.get('currentIPaddress','?')))
        self._alan_cfg=cfg
        g1=QTreeWidgetItem(['Réseau',''])
        def leaf(par,lab,d,k,kind='str',ro=False):
            v=d.get(k,'—');it=QTreeWidgetItem(par,[lab,('' if v is None else str(v))])
            if ro:return it
            it.setFlags(it.flags()|(Qt.ItemIsUserCheckable if kind=='bool' else Qt.ItemIsEditable))
            if kind=='bool':
                it.setCheckState(1,Qt.Checked if v else Qt.Unchecked);it.setText(1,'')
            self._edit_items.append((it,d,k,kind));return it
        leaf(g1,'DHCP',cfg,'DHCPenable','bool')
        leaf(g1,'IP',cfg,'currentIPaddress',ro=True)
        leaf(g1,'Masque',cfg,'currentIPmask',ro=True)
        leaf(g1,'Passerelle',cfg,'currentIPgateway',ro=True)
        leaf(g1,'IP statique',cfg,'IPaddress')
        leaf(g1,'Masque statique',cfg,'IPmask')
        leaf(g1,'Passerelle statique',cfg,'IPgateway')
        leaf(g1,'Nom',cfg,'name')
        leaf(g1,'DNS 1',cfg,'IPDNS1');leaf(g1,'DNS 2',cfg,'IPDNS2')
        leaf(g1,'Sample rate',cfg,'samplingRate','str',ro=True)
        leaf(g1,'Résolution',cfg,'resolution','str',ro=True)
        leaf(g1,'Mode audio',cfg,'audioMode','str',ro=True)
        leaf(g1,'Syntonized',cfg,'syntonizedMode','bool')
        pd=cfg.get('playoutDelay') or {}
        leaf(g1,'Playout delay (samples)',pd,'delayInSamples')
        ptp=cfg.get('PTP') or {}
        leaf(g1,'PTP domain',ptp,'domain')
        leaf(g1,'PTP preferred master',ptp,'preferredMaster','bool')
        leaf(g1,'PTP slave only',ptp,'slaveOnly','bool')
        self._alan_cfg['playoutDelay']=pd;self._alan_cfg['PTP']=ptp
        sap=cfg.get('SAP') or {}
        leaf(g1,'SAP annonces',sap,'SessionAnnouncementEnabled','bool')
        leaf(g1,'SAP browsing',sap,'BrowsingEnabled','bool')
        self._alan_cfg['SAP']=sap
        self.atree.addTopLevelItem(g1);g1.setExpanded(True)
        g0=QTreeWidgetItem(['Système',''])
        try:
            sv=self.alan.sw_versions().get('ArchwaveVER',{})
            for k,v in sv.items():
                if isinstance(v,dict):QTreeWidgetItem(g0,[k,v.get('version','—')])
            dl=self.alan.device_list().get('ArchwaveAES67',{}).get('devices',[])
            for d in dl:QTreeWidgetItem(g0,['Device',d.get('hostname','?')+' @ '+d.get('IPaddress','?')])
        except Exception:pass
        self.atree.addTopLevelItem(g0);g0.setExpanded(False)
        g2=QTreeWidgetItem(['Sources (audio → réseau)',''])
        self._alan_src=src.get('ArchwaveAES67',{}).get('sources',[])
        for s in self._alan_src:
            it=QTreeWidgetItem(g2,[s.get('name','?'),''])
            it.setFlags(it.flags()|Qt.ItemIsEditable)
            self._edit_items.append((it,s,'name','text0'))
            leaf(it,'Activé',s,'streamEnable','bool')
            leaf(it,'Config auto',s,'automaticConfigEnabled','bool')
            leaf(it,'Multicast',s,'multicastAddress')
            leaf(it,'RTP TTL',s,'RTPTTL')
            leaf(it,'SIP user',s,'SIPusername')
        self.atree.addTopLevelItem(g2);g2.setExpanded(True)
        self.btn_alan_apply.setEnabled(bool(self._edit_items))
        self._alan_out=out.get('ArchwaveAES67',{}).get('outputs',[])
        streams=sl.get('ArchwaveAES67',{}).get('streams',[])
        choices=['—']
        for s in streams:
            for ch in range(1,int(s.get('channelCount',8))+1):
                choices.append('%s/%d'%(s.get('name','?'),ch))
        # table streamStatus officielle (GET /parameter_strings)
        SS={0:'Idle',1:'OK',2:'Transmitting',3:'Transmitting (unicast)',4:'Disabled',5:'Not enough Decoders',
            6:'Address Collision',7:'Waiting',8:'Receiving (no sync)',9:'Receiving (unicast, no sync)',
            10:'Receiving',11:'Receiving (unicast)',12:'Receiving (sync error)',13:'Receiving (time step warning)',
            14:'Invalid Sampling Rate',15:'Invalid PTP Domain'}
        stat={}
        try:stat={i:o.get('status') for i,o in enumerate(self.alan.status().get('ArchwaveAES67',{}).get('outputs',[]))}
        except Exception:pass
        # vider la grille precedente
        while self.route_grid.count():
            it=self.route_grid.takeAt(0)
            if it.widget():it.widget().deleteLater()
        self._route_boxes=[]
        for i,o in enumerate(self._alan_out):
            r=i//4;c=(i%4)*3
            lb=QLabel('ch%d'% (i+1));lb.setObjectName('dim');lb.setFixedWidth(34)
            st=stat.get(i)
            sl2=QLabel(SS.get(st,'') if st is not None else '');sl2.setObjectName('dim')
            sl2.setFixedWidth(120);sl2.setStyleSheet('font-size:8pt')
            if st in (10,11):sl2.setStyleSheet('font-size:8pt;color:#58c184')
            elif st in (14,15):sl2.setStyleSheet('font-size:8pt;color:#e06c6c')
            cb=QComboBox();cb.addItems(choices);cb.setMinimumWidth(200)
            cur=o.get('streamPath') or ''
            ix=cb.findText(cur)
            cb.setCurrentIndex(ix if ix>=0 else 0)
            self.route_grid.addWidget(lb,r,c)
            self.route_grid.addWidget(cb,r,c+1)
            self.route_grid.addWidget(sl2,r,c+2)
            self._route_boxes.append((cb,o))
        g4=QTreeWidgetItem(['Streams actifs',''])
        for s in sl.get('ArchwaveAES67',{}).get('streams',[]):
            QTreeWidgetItem(g4,[str(s)[:80],''])
        self.atree.addTopLevelItem(g4);g4.setExpanded(True)
        self.statusBar().showMessage('AudioLAN : %d sources, %d sorties'%(len(self._alan_src),len(self._alan_out)))

    def _alan_reboot(self):
        if self.alan is None:return
        if QMessageBox.question(self,'AudioLAN','Redémarrer la carte AudioLAN ?')!=QMessageBox.Yes:return
        try:self.alan.reboot();self.statusBar().showMessage('AudioLAN : reboot envoyé')
        except Exception as e:self.statusBar().showMessage('Erreur reboot : %s'%e)

    def _alan_upload(self):
        if self.alan is None:return
        from PySide6.QtWidgets import QFileDialog
        p,_=QFileDialog.getOpenFileName(self,'Firmware','','BCD (*.bcd);;Tous (*)')
        if not p:return
        if QMessageBox.question(self,'Firmware','Flasher %s sur la carte AudioLAN ?\nOpération à risque — coupure de courant interdite.'%p)!=QMessageBox.Yes:return
        if QMessageBox.question(self,'Firmware','CONFIRMER le flashage ?')!=QMessageBox.Yes:return
        self.statusBar().showMessage('Upload firmware…')
        def run():
            try:self.alan.upload(p);self._stat_txt='Upload envoyé — vérifier installProgress'
            except Exception as e:self._stat_txt='Erreur upload : %s'%e
        threading.Thread(target=run,daemon=True).start()

    def _alan_apply(self):
        if self.alan is None or not getattr(self,'_edit_items',None):return
        import copy
        src=copy.deepcopy(self._alan_src);cfg=copy.deepcopy(self._alan_cfg);out=copy.deepcopy(self._alan_out)
        # map original->copie (les _edit_items/_route_boxes referencent les originaux)
        idmap={id(a):b for a,b in zip(self._alan_src,src)}
        idmap.update({id(a):b for a,b in zip(self._alan_out,out)});idmap[id(self._alan_cfg)]=cfg
        for sub in ('playoutDelay','PTP','SAP'):  # sous-dicts editables
            if isinstance(self._alan_cfg.get(sub),dict):idmap[id(self._alan_cfg[sub])]=cfg[sub]
        for it,d,k,kind in self._edit_items:
            t=idmap.get(id(d))
            if t is None:continue
            if kind=='bool':t[k]=it.checkState(1)==Qt.Checked
            elif kind=='text0':t[k]=it.text(0)
            else:
                v=it.text(1)
                t[k]=int(v) if isinstance(d.get(k),int) and v.lstrip('-').isdigit() else v
        for cb,o in getattr(self,'_route_boxes',[]):
            t=idmap.get(id(o))
            if t is None:continue
            p=cb.currentText()
            t['streamPath']='' if p=='—' else p
            t['manualSDP']=''  # unsubscribe = les deux vides ; subscribe = manualSDP vide
        if QMessageBox.question(self,'AudioLAN','Appliquer les modifications sur la carte ?')!=QMessageBox.Yes:return
        self.btn_alan_apply.setEnabled(False);self.statusBar().showMessage('Écriture AudioLAN…')
        def run():
            try:
                self.alan.set_sources(src);self.alan.set_general(cfg);self.alan.set_outputs(out)
                self._alan_data=(self.alan.general(),self.alan.sources(),self.alan.outputs(),self.alan.stream_list())
            except Exception as e:self._alan_data=e
        threading.Thread(target=run,daemon=True).start()

    def _matrix(self):
        w=QWidget();v=QVBoxLayout(w);v.setContentsMargins(12,12,12,12);v.setSpacing(10)
        v.addWidget(QLabel("Source des entrées — état lu en live via CopperLan 0xf050 ; écriture SDS inputselect",objectName='info'))
        self.mcells=[];self.mbtns=[]
        grd=QGridLayout();grd.setSpacing(10)
        for blk in range(3):
            gb=QGroupBox('Canaux %d-%d'%(blk*8+1,blk*8+8));gg=QGridLayout(gb);gg.setSpacing(6)
            for i in range(8):
                ch=blk*8+i
                lb=QLabel('%d'%(ch+1));lb.setAlignment(Qt.AlignCenter);lb.setFixedSize(38,38)
                lb.setStyleSheet('border:1px solid #3a414c;border-radius:6px;background:#22262d;color:#9aa4b0;font-weight:700;')
                gg.addWidget(lb,0,i);self.mcells.append(lb)
            ba=QPushButton('Analog');bd=QPushButton('Digital');ba.setFixedHeight(26);bd.setFixedHeight(26)
            ba.clicked.connect(lambda _,b=blk:self._matrix_set(b,'analog'))
            bd.clicked.connect(lambda _,b=blk:self._matrix_set(b,'digital'))
            gg.addWidget(ba,1,0,1,4);gg.addWidget(bd,1,4,1,4);self.mbtns+= [ba,bd]
            grd.addWidget(gb,0,blk)
        v.addLayout(grd)
        self.mleg=QLabel("vert = analogique · bleu = digital (AES67) — état réel lu en live via 0xf050",objectName='info')
        v.addWidget(self.mleg);v.addStretch(1)
        return w

    def _matrix_set(self,blk,mode):
        if not self.tel:
            try:
                from utrack_telnet import UTrack24 as Tel
                self.tel=Tel(TEL_HOST)
            except Exception as e:self.statusBar().showMessage('Erreur telnet : %s'%e);return
        if QMessageBox.question(self,'Matrice','Basculer les canaux %d-%d en %s ?'%(blk*8+1,blk*8+8,mode))!=QMessageBox.Yes:return
        self.statusBar().showMessage('inputselect %d %s…'%(blk+1,mode))
        def run():
            try:
                with self._tlock:self.tel.cmd('inputselect %d %s'%(blk+1,mode))
                for i in range(8):self._matrix_state[blk*8+i]=mode
                self._take_err=None
            except OSError as e:self._take_err=e;self.tel=None
            except Exception as e:self._take_err=e
        threading.Thread(target=run,daemon=True).start()

    def _meters_tick(self):
        """poll SDS mixer querylevels ~1 fois/s en tache de fond."""
        import time as _t
        if _t.time()-self._meters_ts<1.0 or getattr(self,'_meters_busy',False):return
        self._meters_ts=_t.time();self._meters_busy=True
        def run():
            try:
                if self.tel is None:
                    from utrack_telnet import UTrack24 as Tel
                    self.tel=Tel(TEL_HOST)
                with self._tlock:out=self.tel.cmd('mixer querylevels',1.5)
                import re
                d={int(n):min(65535,int(v,16)>>7) for n,v in re.findall(r'CH (\d+): (0x[0-9a-fA-F]+)',out)}
                if d:self._meters=d
            except Exception:
                self.tel=None  # session morte : reconnexion au prochain tick
            finally:self._meters_busy=False
        threading.Thread(target=run,daemon=True).start()

    def _fill_matrix(self,st):
        sel=self.u.input_select() if self.u else None
        for ch,lb in enumerate(self.mcells):
            blk=ch//8
            if sel is not None:
                m='analog' if sel[blk] else 'digital'  # bit set = analog (RE: isDigital^1)
            else:
                m=self._matrix_state[ch]
            col='#2e7d4f' if m=='analog' else '#2f5fae' if m=='digital' else '#22262d'
            txt={'analog':'A','digital':'D'}.get(m,'?')
            lb.setStyleSheet('border:1px solid #3a414c;border-radius:6px;background:%s;color:%s;font-weight:700;'%(col,'#fff' if m else '#9aa4b0'))
            lb.setText(txt)

    def _takes_refresh(self):
        self.btn_ref.setEnabled(False);self.statusBar().showMessage('Lecture des prises…')
        def run():
            try:
                if self.tel is None:
                    from utrack_telnet import UTrack24 as Tel
                    self.tel=Tel(TEL_HOST)
                with self._tlock:self._takes_data=self.tel.takes()
            except OSError as e:self._takes_data=e;self.tel=None  # socket morte : reconnexion au prochain essai
            except Exception as e:self._takes_data=e
        threading.Thread(target=run,daemon=True).start()

    def _take_sel(self,it,prev):
        t=it.data(0,Qt.UserRole) if it else None
        en=bool(t) and t['name']!=self._loaded
        self.btn_ren.setEnabled(en);self.btn_del.setEnabled(en);self.btn_load.setEnabled(en)
        if not t:return
        self.reclog.setPlainText('Chargement…')
        def run():
            try:
                if self.tel is None:
                    from utrack_telnet import UTrack24 as Tel
                    self.tel=Tel(TEL_HOST)
                with self._tlock:self._reclog=self.tel.read_file('/MultiTrack/%s/reclog.txt'%t['name']).decode('latin-1').replace('\r\n','\n')
            except OSError as e:self._reclog='Erreur : %s'%e;self.tel=None
            except Exception as e:self._reclog='Erreur : %s'%e
        threading.Thread(target=run,daemon=True).start()

    def _take_load(self):
        it=self.tree.currentItem()
        if not it:return
        idx=self.tree.indexOfTopLevelItem(it)
        if QMessageBox.question(self,'Prises','Charger %s sur le device ?'%it.text(0))!=QMessageBox.Yes:return
        self.u and self.u.num(0xc010,idx)  # file-select par index (RE: 0xc010)

    def _stat_refresh(self):
        """filerec/fileplay stat + espace disque (RE ghidra_utrack_files.md)."""
        self.btn_stat.setEnabled(False)
        def run():
            try:
                if self.tel is None:
                    from utrack_telnet import UTrack24 as Tel
                    self.tel=Tel(TEL_HOST)
                with self._tlock:
                    out=(self.tel.filerec('stat') or '')+'\n'+(self.tel.fileplay('stat') or '')+'\n'+(self.tel.cmd('file dir free') or '')
                self._stat_txt='\n'.join(l.strip() for l in out.splitlines() if l.strip() and '###' not in l)[:300]
            except OSError as e:self._stat_txt='Erreur : %s'%e;self.tel=None
            except Exception as e:self._stat_txt='Erreur : %s'%e
        threading.Thread(target=run,daemon=True).start()

    def _fill_takes(self,d):
        self.tree.clear()
        for t in d:
            w=t.get('wave')
            fmt=('%d Hz / %d bits / %d voies'%(w['sample_rate'],w['bits'],w['channels'])) if w else '—'
            dur='—'
            if 'duration' in t:dur='%d:%02d:%04.1f'%(int(t['duration'])//3600,int(t['duration'])%3600//60,t['duration']%60)
            mk='—'
            if 'markers_s' in t:mk='%d (%s)'%(len(t['markers_s']),', '.join('%.1f s'%s for s in t['markers_s']))
            it=QTreeWidgetItem([t['name'],t['date'],fmt,dur,mk])
            it.setData(0,Qt.UserRole,t);self.tree.addTopLevelItem(it)
        for i in range(5):self.tree.resizeColumnToContents(i)
        self.statusBar().showMessage('Prises : %d'%len(d))

    def _take_rename(self):
        it=self.tree.currentItem();t=it.data(0,Qt.UserRole) if it else None
        if not t:return
        new,ok=QInputDialog.getText(self,'Renommer','Nouveau nom :',text=t['name'])
        if ok and new.strip() and new.strip()!=t['name']:self._take_op('rename',t['name'],new.strip())

    def _take_delete(self):
        it=self.tree.currentItem();t=it.data(0,Qt.UserRole) if it else None
        if t and QMessageBox.question(self,'Supprimer','Supprimer %s ? (irréversible)'%t['name'])==QMessageBox.Yes:
            self._take_op('delete',t['name'])

    def _take_op(self,op,name,new=None):
        self.btn_ref.setEnabled(False);self.btn_ren.setEnabled(False);self.btn_del.setEnabled(False)
        self.statusBar().showMessage('%s %s…'%(op,name))
        def run():
            try:
                with self._tlock:
                    if op=='rename':self.tel.rename_take(name,new,loaded=self._loaded)
                    else:self.tel.delete_take(name,loaded=self._loaded)
                    self._takes_data=self.tel.takes()
            except Exception as e:self._take_err=e
        threading.Thread(target=run,daemon=True).start()

    def _refresh(self):
        if self._conn=='ok':
            self.statusBar().showMessage('Connecté — %d contrôles'%len(self.u.state));self._conn='done'
        elif self._conn not in (None,'done'):
            self.statusBar().showMessage('Erreur : %s'%self._conn);self._conn='done'
            self.overlay.hide();self.content.setGraphicsEffect(None)
        # etat connexion suivi en continu : (re)active l'UI quand la session revient
        alive=bool(self.u and self.u.alive)
        # pastille couleur de la barre de statut : vert connecté / ambre (re)connexion
        sb=self.statusBar();cs='ok' if alive else 'wait'
        if sb.property('conn')!=cs:
            sb.setProperty('conn',cs);sb.style().unpolish(sb);sb.style().polish(sb)
        if alive and not self.tabs.isEnabled():
            self.gb_tr.setEnabled(True);self.tabs.setEnabled(True)
            self.overlay.hide();self.content.setGraphicsEffect(None)
            self.statusBar().showMessage('Connecté — %d contrôles'%len(self.u.state))
        elif not alive and self.tabs.isEnabled() and self._conn=='done':
            self.gb_tr.setEnabled(False);self.tabs.setEnabled(False)
            self.statusBar().showMessage('Déconnecté — reconnexion…')
            if hasattr(self.u,'ensure_alive'):self.u.ensure_alive()
        if self._reclog is not None:self.reclog.setPlainText(self._reclog);self._reclog=None
        if getattr(self,'_stat_txt',None) is not None:
            self.stat_lbl.setText(self._stat_txt.splitlines()[0][:120] if self._stat_txt else '—')
            self.reclog.setPlainText(self._stat_txt);self._stat_txt=None
            self.btn_stat.setEnabled(True)
        if self._takes_data is not None:
            d,self._takes_data=self._takes_data,None;self.btn_ref.setEnabled(True)
            if isinstance(d,Exception):self.statusBar().showMessage('Erreur prises : %s'%d)
            else:self._fill_takes(d)
        if self._alan_data is not None:
            d,self._alan_data=self._alan_data,None;self.btn_alan.setEnabled(True)
            if isinstance(d,Exception):self.statusBar().showMessage('Erreur AudioLAN : %s'%d)
            else:self._fill_alan(d)
        if self._take_err is not None:
            e,self._take_err=self._take_err,None;self.btn_ref.setEnabled(True);self.btn_ren.setEnabled(True);self.btn_del.setEnabled(True)
            QMessageBox.warning(self,'Prises','Erreur : %s'%e)
            self.statusBar().showMessage('Erreur : %s'%e)
        u=self.u
        with u.slock:st=dict(u.state)
        e=st.get(0xc000) or st.get(0xf000)
        if e and e[1]:self._loaded=e[1].split('/')[-1]
        for ctrl,(l,name) in self.hdr.items():l.setText('%s : %s'%(name,_fmt(st.get(ctrl))))
        # chip Err en rouge quand un code erreur est remonté (0xf060)
        err=st.get(0xf060);on=bool(err and (err[1] or err[0]));el=self.hdr[0xf060][0]
        if bool(el.property('on'))!=on:
            el.setProperty('on',on);el.style().unpolish(el);el.style().polish(el)
        # 0xf050 decode: channelmode + board ID + sync lock
        s=u.op_status()
        if s is not None:
            cm={0:'24In/26Out',1:'24In/2Out',2:'8In/26Out',3:'8In/10Out'}.get((s>>4)&0x3,'?')
            bd={0:'none',1:'MADI',2:'ADAT',3:'AudioLAN'}.get((s>>8)&0x7,'id%d'%((s>>8)&0x7))
            self.hdr_status.setText('%s · %s · %s'%(cm,bd,'lock' if s&1 else 'no lock'))
        if self.u and hasattr(self.u,'ensure_alive'):self.u.ensure_alive()
        self._meters_tick()
        for ch,s in enumerate(self.strips):
            e=st.get(0xe000+ch)
            fresh=e and isinstance(e,(tuple,list)) and len(e)>2 and time.time()-e[2]<2.0
            v=e[0] if fresh else None
            if v is None:v=self._meters.get(ch)
            if v is not None:s['m'].setValue(v)
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
        self._fill_matrix(st)
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

    def resizeEvent(self,e):
        self.overlay.setGeometry(0,0,e.size().width(),e.size().height());super().resizeEvent(e)

    def closeEvent(self,e):
        self.u and self.u.close();self.tel and self.tel.close();e.accept()

def main():
    out=subprocess.run(['tasklist','/FI','IMAGENAME eq uRemote.exe'],capture_output=True,text=True).stdout
    app=QApplication(sys.argv);app.setStyleSheet(DARK)
    if 'uRemote' in out:
        QMessageBox.warning(None,'uTrack24 Remote','uRemote est en cours — les deux ne peuvent pas tourner (même identité CopperLan).');return
    Win().show();sys.exit(app.exec())

if __name__=='__main__':main()
