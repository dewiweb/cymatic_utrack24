"""Smoke test offscreen de utrack_remote_qt : injecte un faux controle, verifie refresh + envois."""
import os,sys,threading
os.environ['QT_QPA_PLATFORM']='offscreen'
sys.path.insert(0,os.path.join(os.path.dirname(__file__),'..','..','src'))
from PySide6.QtWidgets import QApplication,QMessageBox
import utrack_remote_qt as G
from utrack_remote_qt import Win
from utrack_control import att_raw

class Fake:
    def __init__(self):
        self.slock=threading.Lock();self.calls=[]
        self.state={0xe000:(30000,None,0),0xd050:(0x8000,None,0),0xd070:(0xe7ce,None,0),
                    0xd030:(0,None,0),0xd010:(1,None,0),0xb200:(1,'On',0),0xb105:(0,'Off',0),
                    0xb003:(1,'On',0),0xb206:(0,'?',0),
                    0xb001:(1,'Play-Pause',0),0xb000:(0,'Internal',0),0xb102:(2,'48 kHz',0),
                    0xb103:(24,'24-bit',0),0xb104:(24,'24 Ch',0),0xb203:(0xffff,'Single',0),
                    0xb204:(1,'1-2',0),0xb205:(3,'3-4',0),0xb201:(63350,None,0),0xb202:(32408,None,0),
                    0xb004:(None,'192.168.4.233',0),0xc000:(None,'/MultiTrack/Take0001',0),
                    0xf000:(None,'uTrack24',0),0xf003:(None,'48 kHz',0),0xf004:(None,'24-bit',0),
                    0xf005:(None,'24 Ch',0),0xf040:(None,'2026-10-28',0)}
    def __getattr__(self,n):
        if n=='ensure_alive':return lambda *a:None
        if n=='input_select':return lambda *a:None
        if n=='op_status':return lambda *a:None
        def f(*a):self.calls.append((n,)+a)
        return f

class FakeTel:
    def __init__(self):
        self.calls=[]
        self._takes=[{'name':'Take0012','date':'2026-10-28','time':'10:05:30','files':[],'wavs':[('Take0012(0001).wav',6634856)],
                      'wave':{'sample_rate':44100,'bits':16,'channels':8,'samples':414672,'markers':[143912,277568]},
                      'duration':414672/44100,'markers_s':[143912/44100,277568/44100]},
                     {'name':'Take0013','date':'2026-10-28','time':'10:07:00','files':[],'wavs':[]}]
    def cmd(self,c,t=1.0):self.calls.append(('cmd',c));return ''
    def takes(self):self.calls.append('takes');return self._takes
    def rename_take(self,old,new,loaded=None):self.calls.append(('rename',old,new,loaded))
    def delete_take(self,name,loaded=None):self.calls.append(('delete',name,loaded))
    def read_file(self,path):
        self.calls.append(('read_file',path))
        return b'line1\r\nline2 log\r\n'

app=QApplication([])
f=Fake();tel=FakeTel();w=Win(u=f,connected=True,tel=tel)
w._meters={0:30000}
w._refresh()
s=w.strips[0]
assert s['m'].value()==30000,s['m'].value()
assert s['f'].value()==0xe7ce,s['f'].value()
assert s['p'].value()==0x8000
assert s['raw'].text()=='brut e7ce',s['raw'].text()
assert s['M'].isChecked() is False and s['S'].isChecked() is True
assert w.chk[0xb200].isChecked() and not w.chk[0xb105].isChecked() and w.chk[0xb003].isChecked()
assert 'uTrack24' in w.hdr[0xf000][0].text() and '48 kHz' in w.hdr[0xf003][0].text()
assert w.ro[0xb004].text()=='192.168.4.233'

# combos : peuplees et selectionnees depuis l'etat (b203 0xffff -> Single index 0)
assert w.cmb[0xb001].count()==4 and w.cmb[0xb001].currentIndex()==1
assert w.cmb[0xb001].itemText(1)=='Play-Pause'
assert w.cmb[0xb203].currentIndex()==0 and w.cmb[0xb203].itemText(0)=='Single'
assert w.cmb[0xb102].currentIndex()==1 and w.cmb[0xb102].itemText(1)=='48 kHz'
assert w.cmb[0xb204].currentIndex()==0 and w.cmb[0xb205].currentIndex()==1
assert w.sp[0xb201][0].value()==-1 and w.sp[0xb202][0].value()==-11
assert f.calls==[],f.calls   # le refresh n'a rien envoye

# activation combo sans confirmation -> set
w.cmb[0xb001].activated.emit(2)
assert f.calls==[('set',0xb001,2)],f.calls
f.calls.clear()

# b102 avec confirmation : No -> rien n'est envoye et l'index revient
G.QMessageBox.question=lambda *a,**k:QMessageBox.No
w.cmb[0xb102].activated.emit(0)
assert f.calls==[],f.calls
assert w.cmb[0xb102].currentIndex()==1
G.QMessageBox.question=lambda *a,**k:QMessageBox.Yes
w.cmb[0xb102].activated.emit(0)
assert f.calls==[('set',0xb102,1)],f.calls
f.calls.clear()

# spinbox 0xb201/0xb202 : desactives (ecriture numerique non effective, cf gui_review P1-3)
assert not w.sp[0xb201][0].isEnabled() and not w.sp[0xb202][0].isEnabled()

s['f'].setValue(0x1234)      # drag -> pending seulement
assert f.calls==[]
s['f'].sliderReleased.emit() # release -> envoi final
assert f.calls==[('fader',0,0x1234)],f.calls
s['M'].click()               # M etait off -> on
assert f.calls[-1]==('mute',0,True),f.calls

# onglet Prises : refresh en thread -> attendre _takes_data, tree peuplee, reclog
import time
w.btn_ref.click()
for _ in range(200):
    if tel.calls:break
    time.sleep(0.01)
for _ in range(200):
    if w.tree.topLevelItemCount():break
    time.sleep(0.01);w._refresh()
assert w.tree.topLevelItemCount()==2
it=w.tree.topLevelItem(0)
assert it.text(0)=='Take0012' and '44100' in it.text(2) and it.text(3)=='0:00:09.4'
assert '2' in it.text(4) and '6.3 s' in it.text(4)
assert w.tree.topLevelItem(1).text(2)=='—'
w.tree.setCurrentItem(it)
for _ in range(200):
    if ('read_file','/MultiTrack/Take0012/reclog.txt') in tel.calls:break
    time.sleep(0.01)
for _ in range(200):
    if 'line1' in w.reclog.toPlainText():break
    time.sleep(0.01);w._refresh()
assert w.reclog.toPlainText()=='line1\nline2 log\n'
assert w.btn_ref.isEnabled()

# prise chargee (0xc000) -> boutons actifs seulement sur une autre prise
assert w._loaded=='Take0001'
w.tree.setCurrentItem(w.tree.topLevelItem(0))
assert w.btn_ren.isEnabled() and w.btn_del.isEnabled()

# suppression : No -> rien ; Yes -> delete_take + rafraichissement
G.QMessageBox.question=lambda *a,**k:QMessageBox.No
w.btn_del.click();time.sleep(0.05)
assert not any(c[0]=='delete' for c in tel.calls if isinstance(c,tuple)),tel.calls
G.QMessageBox.question=lambda *a,**k:QMessageBox.Yes
w.btn_del.click()
for _ in range(200):
    if ('delete','Take0012','Take0001') in tel.calls:break
    time.sleep(0.01)
assert ('delete','Take0012','Take0001') in tel.calls
for _ in range(200):
    if w.btn_ref.isEnabled():break
    time.sleep(0.01);w._refresh()

# renommage : QInputDialog -> rename_take avec loaded
G.QInputDialog.getText=lambda *a,**k:('NouveauNom',True)
w.tree.setCurrentItem(w.tree.topLevelItem(0))
w.btn_ren.click()
for _ in range(200):
    if ('rename','Take0012','NouveauNom','Take0001') in tel.calls:break
    time.sleep(0.01)
assert ('rename','Take0012','NouveauNom','Take0001') in tel.calls

# prise chargee -> boutons desactives
f.state[0xc000]=(None,'/MultiTrack/Take0012',0)
w._refresh();w.tree.setCurrentItem(w.tree.topLevelItem(0))
assert not w.btn_ren.isEnabled() and not w.btn_del.isEnabled()
print('test_gui OK')
