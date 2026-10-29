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
TEL_HOST='192.168.10.197'

DARK = """
*{font-family:'Segoe UI';font-size:9.5pt;color:#e8eaed}
QMainWindow,QWidget{background:#1e2126}
QFrame#card,QGroupBox{background:#262a31;border:1px solid #383d45;border-radius:8px}
QGroupBox{margin-top:14px;padding-top:10px;font-weight:600}
QGroupBox::title{subcontrol-origin:margin;left:10px;padding:0 6px;color:#9aa0a8}
QLabel#dim{color:#9aa0a8}
QLabel#ch{font-weight:700;font-size:10pt;padding:2px}
QLabel#raw{color:#9aa0a8;font-family:Consolas;font-size:8pt}
QPushButton{background:#30353d;border:1px solid #4a5058;border-radius:5px;padding:6px 14px;font-weight:600}
QPushButton:hover{background:#3a4048;border-color:#5a6169}
QPushButton:pressed{background:#4a5058}
QPushButton:disabled{color:#5a6067;background:#262a31;border-color:#33383f}
QPushButton:checked{background:#f39c12;color:#000;border-color:#f39c12}
QPushButton#solo:checked{background:#f1c40f}
QPushButton#play{background:#1f6f43;border-color:#27a35e;color:#fff}
QPushButton#play:hover{background:#27a35e}
QPushButton#rec{background:#7e2b24;border-color:#c0392b;color:#fff}
QPushButton#rec:hover{background:#c0392b}
QComboBox,QSpinBox{background:#1a1d21;border:1px solid #4a5058;border-radius:4px;padding:4px 8px;min-width:120px}
QComboBox:hover,QSpinBox:hover{border-color:#5a6169}
QComboBox::drop-down{border:none;width:20px}
QComboBox QAbstractItemView{background:#262a31;border:1px solid #4a5058;selection-background-color:#3fa7ff}
QCheckBox{spacing:8px}
QCheckBox::indicator{width:16px;height:16px;border:1px solid #4a5058;border-radius:3px;background:#1a1d21}
QCheckBox::indicator:checked{background:#3fa7ff;border-color:#3fa7ff}
QSlider::groove:vertical{background:#1a1d21;width:8px;border:1px solid #383d45;border-radius:4px}
QSlider::handle:vertical{background:#3fa7ff;border:1px solid #5cb8ff;border-radius:6px;height:18px;margin:0 -6px}
QSlider::handle:vertical:hover{background:#5cb8ff}
QDial{background:#262a31}
QProgressBar{background:#1a1d21;border:1px solid #383d45;border-radius:3px}
QProgressBar::chunk{background:qlineargradient(x1:0,y1:1,x2:0,y2:0,stop:0 #27a35e,stop:0.75 #f1c40f,stop:1 #e74c3c);border-radius:2px}
QTreeWidget{background:#1a1d21;border:1px solid #383d45;border-radius:6px;alternate-background-color:#21252c}
QTreeWidget::item{padding:4px}
QTreeWidget::item:selected{background:#3fa7ff;color:#fff}
QHeaderView::section{background:#262a31;border:none;border-bottom:1px solid #383d45;padding:6px;font-weight:600;color:#9aa0a8}
QPlainTextEdit{background:#1a1d21;border:1px solid #383d45;border-radius:6px;font-family:Consolas;font-size:9pt}
QTabWidget::pane{border:1px solid #383d45;border-radius:6px;top:-1px}
QTabBar::tab{background:#262a31;border:1px solid #383d45;border-bottom:none;border-top-left-radius:6px;border-top-right-radius:6px;padding:8px 24px;color:#9aa0a8}
QTabBar::tab:selected{background:#3fa7ff;color:#fff}
QTabBar::tab:hover:!selected{background:#30353d}
QScrollArea{border:none}
QStatusBar{background:#1a1d21;border-top:1px solid #383d45;color:#9aa0a8}
QWidget#overlay{background:rgba(15,17,20,175)}
QLabel#wait{color:#e8eaed;font-size:12pt;font-weight:600}
QProgressBar#busy{height:6px;border:none;background:#383d45}
QProgressBar#busy::chunk{background:#3fa7ff}
QToolTip{background:#262a31;border:1px solid #4a5058;color:#e8eaed;padding:4px}
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
        v.setContentsMargins(10,8,10,8);v.setSpacing(8)
        rv.addWidget(self.content);self.setCentralWidget(root)
        hd=QFrame();hd.setObjectName('card');h=QHBoxLayout(hd);self.hdr={}
        for ctrl,name in ((0xf000,'Nom'),(0xf003,'Fréquence'),(0xf004,'Résolution'),(0xf005,'Pistes'),(0xf040,'Date')):
            l=QLabel('%s : —'%name);self.hdr[ctrl]=(l,name);h.addWidget(l);h.addSpacing(18)
        h.addStretch(1);v.addWidget(hd)
        tr=QHBoxLayout();tr.setSpacing(10)
        for label,fn,oid in (('PLAY','play','play'),('STOP','stop','stop'),('REC','rec','rec')):
            b=QPushButton(label);b.setObjectName(oid);b.setMinimumHeight(38)
            if fn=='rec':b.clicked.connect(self._rec)
            elif fn=='stop':b.clicked.connect(self._stop)
            else:b.clicked.connect(lambda _,f=fn:self.u and getattr(self.u,f)())
            tr.addWidget(b)
        self.mk=QPushButton('MARQUEUR');self.mk.setEnabled(False);self.mk.setMinimumHeight(38)
        self.mk.setToolTip("Ajoute un marqueur à l'enregistrement en cours (actif après REC lancé depuis cette fenêtre)")
        self.mk.clicked.connect(lambda:self.u and self.u.marker());tr.addWidget(self.mk)
        self.gb_tr=QGroupBox('Transport');self.gb_tr.setLayout(tr);v.addWidget(self.gb_tr)
        self.tabs=QTabWidget();v.addWidget(self.tabs)
        self.tabs.addTab(self._mixer(),'Mixer');self.tabs.addTab(self._settings(),'Réglages');self.tabs.addTab(self._takes(),'Prises');self.tabs.addTab(self._audiolan(),'AudioLAN');self.tabs.addTab(self._matrix(),'Matrice')
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
        row=QWidget();h=QHBoxLayout(row);h.setSpacing(6);h.setContentsMargins(8,8,8,8);self.strips=[]
        for ch in range(24):
            w=QFrame();w.setObjectName('card');s=QVBoxLayout(w);s.setSpacing(4);s.setContentsMargins(6,6,6,6)
            s.addWidget(QLabel('CH %d'%(ch+1),alignment=Qt.AlignCenter,objectName='ch'))
            mid=QHBoxLayout();mid.setAlignment(Qt.AlignCenter)
            m=QProgressBar();m.setOrientation(Qt.Vertical);m.setRange(0,65535);m.setFormat('')
            m.setFixedSize(14,120)
            f=QSlider(Qt.Vertical);f.setRange(0,65535);f.setMinimumHeight(120)
            mid.addWidget(m);mid.addSpacing(4);mid.addWidget(f);s.addLayout(mid)
            raw=QLabel('brut —',alignment=Qt.AlignCenter,objectName='raw');s.addWidget(raw)
            p=Dial();p.setRange(0,65535);p.setFixedSize(46,46);s.addWidget(p,0,Qt.AlignCenter)
            mb=QPushButton('M');mb.setCheckable(True);mb.setFixedHeight(24)
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
                 0xb104:'Pistes',0xb203:'Mode de lecture',0xb204:'Sorties stéréo 1',0xb205:'Sorties stéréo 2'}

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
                           (0xb207,'Sorties multipistes post-fader'),(0xb003,'DHCP'))):
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
                                         (0xb202,'Délai',(-1000,1000),' ms',ms_raw)):
            i=len(self.cmb)+len(self.sp)
            gr.addWidget(QLabel(lab,objectName='dim'),i//2,(i%2)*2)
            sb=QSpinBox();sb.setRange(*rng);sb.setSuffix(unit)
            sb.editingFinished.connect(lambda c=ctrl,f=to_raw,s=sb:self.u and self.u.num(c,f(s.value())))
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
        self.alan_info=QLabel('—');hb.addWidget(self.alan_info);hb.addStretch(1);v.addLayout(hb)
        self.atree=QTreeWidget();self.atree.setHeaderLabels(['Élément','Détail'])
        self.atree.setAlternatingRowColors(True);self.atree.setSelectionMode(QTreeWidget.SingleSelection)
        v.addWidget(self.atree)
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
        self.atree.addTopLevelItem(g1);g1.setExpanded(True)
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
        g3=QTreeWidgetItem(['Sorties (réseau → audio)',''])
        self._alan_out=out.get('ArchwaveAES67',{}).get('outputs',[])
        streams=sl.get('ArchwaveAES67',{}).get('streams',[])
        choices=['—']
        for s in streams:
            for ch in range(1,int(s.get('channelCount',8))+1):
                choices.append('%s/%d'%(s.get('name','?'),ch))
        self._route_boxes=[]
        for o in self._alan_out:
            it=QTreeWidgetItem(g3,[o.get('name','?'),''])
            cb=QComboBox();cb.addItems(choices)
            cur=o.get('streamPath') or ''
            ix=cb.findText(cur)
            cb.setCurrentIndex(ix if ix>=0 else 0)
            self.atree.setItemWidget(it,1,cb)
            self._route_boxes.append((cb,o))
        self.atree.addTopLevelItem(g3);g3.setExpanded(True)
        g4=QTreeWidgetItem(['Streams actifs',''])
        for s in sl.get('ArchwaveAES67',{}).get('streams',[]):
            QTreeWidgetItem(g4,[str(s)[:80],''])
        self.atree.addTopLevelItem(g4);g4.setExpanded(True)
        self.statusBar().showMessage('AudioLAN : %d sources, %d sorties'%(len(self._alan_src),len(self._alan_out)))

    def _alan_apply(self):
        if self.alan is None or not getattr(self,'_edit_items',None):return
        import copy
        src=copy.deepcopy(self._alan_src);cfg=copy.deepcopy(self._alan_cfg);out=copy.deepcopy(self._alan_out)
        idmap={id(o):o for o in src};idmap.update({id(o):o for o in out});idmap[id(self._alan_cfg)]=cfg
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
            if p!='—':t['manualSDP']=''
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
        grd=QGridLayout();grd.setSpacing(6)
        for blk in range(3):
            gb=QGroupBox('Canaux %d-%d'%(blk*8+1,blk*8+8));gg=QGridLayout(gb)
            for i in range(8):
                ch=blk*8+i
                lb=QLabel('%d'%(ch+1));lb.setAlignment(Qt.AlignCenter);lb.setFixedSize(34,34)
                lb.setStyleSheet('border:1px solid #444;border-radius:4px;background:#2a6e3a;')
                gg.addWidget(lb,0,i);self.mcells.append(lb)
            ba=QPushButton('Analog');bd=QPushButton('Digital');ba.setFixedHeight(26);bd.setFixedHeight(26)
            ba.clicked.connect(lambda _,b=blk:self._matrix_set(b,'analog'))
            bd.clicked.connect(lambda _,b=blk:self._matrix_set(b,'digital'))
            gg.addWidget(ba,1,0,1,4);gg.addWidget(bd,1,4,1,4);self.mbtns+= [ba,bd]
            grd.addWidget(gb,0,blk)
        v.addLayout(grd)
        self.mleg=QLabel("vert = analogique · bleu = digital (AES67) · '?' = inconnu (jamais commandé) — "
                         "l'état de sélection n'est pas lisible sur l'appareil",objectName='info')
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
        if _t.time()-self._meters_ts<1.0:return
        self._meters_ts=_t.time()
        def run():
            try:
                if self.tel is None:
                    from utrack_telnet import UTrack24 as Tel
                    self.tel=Tel(TEL_HOST)
                with self._tlock:out=self.tel.cmd('mixer querylevels',1.5)
                import re
                d={int(n):min(65535,int(v,16)>>12) for n,v in re.findall(r'CH (\d+): (0x[0-9a-fA-F]+)',out)}
                if d:self._meters=d
            except Exception:
                self.tel=None  # session morte : reconnexion au prochain tick
        threading.Thread(target=run,daemon=True).start()

    def _fill_matrix(self,st):
        sel=self.u.input_select() if self.u else None
        for ch,lb in enumerate(self.mcells):
            blk=ch//8
            if sel is not None:
                m='digital' if sel[blk] else 'analog'
            else:
                m=self._matrix_state[ch]
            col='#2a6e3a' if m=='analog' else '#2a4e8e' if m=='digital' else '#333'
            txt={'analog':'A','digital':'D'}.get(m,'?')
            lb.setStyleSheet('border:1px solid #444;border-radius:4px;background:%s;color:#fff;'%col)
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
        self.btn_ren.setEnabled(en);self.btn_del.setEnabled(en)
        if not t or self.tel is None:return
        self.reclog.setPlainText('Chargement…')
        def run():
            try:
                with self._tlock:self._reclog=self.tel.read_file('/MultiTrack/%s/reclog.txt'%t['name']).decode('latin-1').replace('\r\n','\n')
            except OSError as e:self._reclog='Erreur : %s'%e;self.tel=None
            except Exception as e:self._reclog='Erreur : %s'%e
        threading.Thread(target=run,daemon=True).start()

    def _fill_takes(self,d):
        self.tree.clear()
        for t in d:
            w=t.get('wave')
            fmt=('%d Hz / %d bits / %d voies'%(w['sample_rate'],w['bits'],w['channels'])) if w else '—'
            dur='—'
            if 'duration' in t:dur='%d:%04.1f'%(int(t['duration'])//60,t['duration']%60)
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
            self.gb_tr.setEnabled(True);self.tabs.setEnabled(True)
            self.overlay.hide();self.content.setGraphicsEffect(None)
        elif self._conn not in (None,'done'):
            self.statusBar().showMessage('Erreur : %s'%self._conn);self._conn='done'
            self.overlay.hide();self.content.setGraphicsEffect(None)
        if self._reclog is not None:self.reclog.setPlainText(self._reclog);self._reclog=None
        if self._takes_data is not None:
            d,self._takes_data=self._takes_data,None;self.btn_ref.setEnabled(True)
            if isinstance(d,Exception):self.statusBar().showMessage('Erreur prises : %s'%d)
            else:self._fill_takes(d)
        if self._alan_data is not None:
            d,self._alan_data=self._alan_data,None;self.btn_alan.setEnabled(True)
            if isinstance(d,Exception):self.statusBar().showMessage('Erreur AudioLAN : %s'%d)
            else:self._fill_alan(d)
        if self._take_err is not None:
            e,self._take_err=self._take_err,None;self.btn_ref.setEnabled(True)
            QMessageBox.warning(self,'Prises','Erreur : %s'%e)
            self.statusBar().showMessage('Erreur : %s'%e)
        u=self.u
        with u.slock:st=dict(u.state)
        e=st.get(0xc000) or st.get(0xf000)
        if e and e[1]:self._loaded=e[1].split('/')[-1]
        for ctrl,(l,name) in self.hdr.items():l.setText('%s : %s'%(name,_fmt(st.get(ctrl))))
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
        self.u and self.u.close();e.accept()

def main():
    out=subprocess.run(['tasklist','/FI','IMAGENAME eq uRemote.exe'],capture_output=True,text=True).stdout
    app=QApplication(sys.argv);app.setStyleSheet(DARK)
    if 'uRemote' in out:
        QMessageBox.warning(None,'uTrack24 Remote','uRemote est en cours — les deux ne peuvent pas tourner (même identité CopperLan).');return
    Win().show();sys.exit(app.exec())

if __name__=='__main__':main()
