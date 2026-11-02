// rea decompile_all
// name: CMFCToolTipCtrl::OnFillBackground
// address: 0x100dc7fb
// body: available
// range: 0x100dc7fb-0x100dc8b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolTipCtrl::OnFillBackground(class CDC *,class
   CRect,unsigned long &,unsigned long &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolTipCtrl::OnFillBackground
          (CMFCToolTipCtrl *this,CDC *param_1,LONG param_3,LONG param_4,LONG param_5,LONG param_6)

{
  HBRUSH hbr;
  int iVar1;
  HDC hDC;
  CDrawingManager local_20 [8];
  undefined **local_18;
  HBRUSH local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x100dc807;
  if (*(ulong *)(this + 0xc4) == 0xffffffff) {
    hDC = (HDC)0x0;
    if (param_1 != (CDC *)0x0) {
      hDC = *(HDC *)(param_1 + 4);
    }
    hbr = GetSysColorBrush(0x18);
    FillRect(hDC,(RECT *)&param_3,hbr);
  }
  else if (*(int *)(this + 200) == -1) {
    CBrush::CBrush((CBrush *)&local_18,*(ulong *)(this + 0xc4));
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,local_14);
    local_18 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_18);
  }
  else {
    CDrawingManager::CDrawingManager(local_20,param_1);
    iVar1 = *(int *)(this + 0xc0);
    local_8 = 0;
    if (iVar1 == -1) {
      iVar1 = 0x5a;
    }
    CDrawingManager::FillGradient2
              (local_20,param_3,param_4,param_5,param_6,*(undefined4 *)(this + 200),
               *(undefined4 *)(this + 0xc4),iVar1);
    local_8 = 0xffffffff;
    FUN_1009c588((undefined4 *)local_20);
  }
  return;
}

