// rea decompile_all
// name: CMFCToolBarImages::UpdateImage
// address: 0x10083069
// body: available
// range: 0x10083069-0x100831b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::UpdateImage(int,struct HBITMAP__ *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBarImages::UpdateImage(CMFCToolBarImages *this,int param_1,HBITMAP__ *param_2)

{
  int iVar1;
  HDC pHVar2;
  CWindowDC local_50 [4];
  HDC local_4c;
  CDC local_3c [4];
  HDC local_38;
  CDC local_2c [4];
  HDC local_28;
  undefined **local_1c;
  undefined4 local_18;
  HGDIOBJ local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x10083075;
  if ((*(int *)(this + 0x24) == 0) && (*(int *)(this + 0x14) != 0)) {
    CWindowDC::CWindowDC(local_50,(CWnd *)0x0);
    local_18 = 0;
    local_1c = CBitmap::vftable;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    FUN_1001714b((undefined4 *)local_3c);
    local_8._0_1_ = 2;
    FUN_1001714b((undefined4 *)local_2c);
    local_8 = CONCAT31(local_8._1_3_,3);
    pHVar2 = CreateCompatibleDC(local_4c);
    CDC::Attach(local_3c,pHVar2);
    pHVar2 = CreateCompatibleDC(local_4c);
    CDC::Attach(local_2c,pHVar2);
    if (*(HGDIOBJ *)(this + 0x88) == (HGDIOBJ)0x0) {
      local_14 = (HGDIOBJ)0x0;
    }
    else {
      local_14 = SelectObject(local_28,*(HGDIOBJ *)(this + 0x88));
    }
    if (param_2 == (HBITMAP__ *)0x0) {
      param_2 = (HBITMAP__ *)0x0;
    }
    else {
      param_2 = SelectObject(local_38,param_2);
    }
    BitBlt(local_28,*(int *)(this + 0x50) * param_1,0,*(int *)(this + 0x50),*(int *)(this + 0x54),
           local_38,0,0,0xcc0020);
    if (local_14 != (HGDIOBJ)0x0) {
      SelectObject(local_28,local_14);
    }
    if (param_2 != (HBITMAP__ *)0x0) {
      SelectObject(local_38,param_2);
    }
    *(undefined4 *)(this + 0x18) = 1;
    AfxDeleteObject((void **)(this + 0x8c));
    *(void **)(this + 0x8c) = (void *)0x0;
    AfxDeleteObject((void **)(this + 0x90));
    *(undefined4 *)(this + 0x90) = 0;
    local_8._0_1_ = 2;
    CDC::~CDC(local_2c);
    local_8._0_1_ = 1;
    CDC::~CDC(local_3c);
    local_8 = (uint)local_8._1_3_ << 8;
    local_1c = CBitmap::vftable;
    CImageList::~CImageList((CImageList *)&local_1c);
    local_8 = 0xffffffff;
    CWindowDC::~CWindowDC(local_50);
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

