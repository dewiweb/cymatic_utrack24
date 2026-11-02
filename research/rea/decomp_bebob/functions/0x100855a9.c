// rea decompile_all
// name: CMFCToolBarImages::AddIcon
// address: 0x100855a9
// body: available
// range: 0x100855a9-0x10085750 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::AddIcon(struct HICON__ *,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBarImages::AddIcon(CMFCToolBarImages *this,HICON__ *param_1,int param_2)

{
  CMFCToolBarImages *this_00;
  HDC pHVar1;
  int iVar2;
  HMENU__ *pHVar3;
  int iVar4;
  void *pvVar5;
  int cy;
  CWindowDC local_8c [4];
  HDC local_88;
  CDC local_78 [4];
  HDC local_74;
  CGdiObject *local_68;
  void *local_64;
  HICON__ *local_60;
  undefined **local_5c;
  HBITMAP__ *local_58;
  CMFCToolBarImages *local_54;
  BITMAPINFO local_50;
  RECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x7c;
  local_8 = 0x100855b5;
  local_60 = param_1;
  local_54 = this;
  CWindowDC::CWindowDC(local_8c,(CWnd *)0x0);
  local_8 = 0;
  if (param_1 == (HICON__ *)0x0) {
    param_2 = 0;
  }
  FUN_1001714b((undefined4 *)local_78);
  local_8._0_1_ = 1;
  pHVar1 = CreateCompatibleDC((HDC)0x0);
  CDC::Attach(local_78,pHVar1);
  local_58 = (HBITMAP__ *)0x0;
  local_5c = CBitmap::vftable;
  iVar4 = *(int *)(this + 0x50);
  cy = *(int *)(this + 0x54);
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar2 = IsScaled(local_54);
  if (iVar2 != 0) {
    iVar4 = *(int *)(local_54 + 0x58);
    cy = *(int *)(local_54 + 0x5c);
  }
  if (param_2 == 0) {
    pHVar3 = (HMENU__ *)CreateCompatibleBitmap(local_88,iVar4,cy);
  }
  else {
    local_50.bmiHeader.biPlanes = 1;
    local_50.bmiHeader.biBitCount = 0x20;
    local_50.bmiHeader.biSizeImage = cy * iVar4;
    local_50.bmiHeader.biSize = 0x28;
    local_50.bmiHeader.biCompression = 0;
    local_50.bmiHeader.biXPelsPerMeter = 0;
    local_50.bmiHeader.biYPelsPerMeter = 0;
    local_50.bmiHeader.biClrUsed = 0;
    local_50.bmiHeader.biClrImportant = 0;
    local_64 = (void *)0x0;
    local_50.bmiHeader.biWidth = iVar4;
    local_50.bmiHeader.biHeight = cy;
    pHVar3 = (HMENU__ *)CreateDIBSection(local_74,&local_50,0,&local_64,(HANDLE)0x0,0);
    if (pHVar3 == (HMENU__ *)0x0) goto LAB_10085676;
  }
  CMenu::Attach((CMenu *)&local_5c,pHVar3);
  local_68 = CDC::SelectGdiObject(local_74,local_58);
  if (param_2 == 0) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = iVar4;
    local_24.bottom = cy;
    FillRect(local_74,&local_24,DAT_10166b34);
  }
  if (local_60 != (HICON__ *)0x0) {
    CDC::DrawState(local_78,0,0,iVar4,cy,local_60,0,0);
  }
  if (local_68 == (CGdiObject *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    pvVar5 = *(void **)(local_68 + 4);
  }
  CDC::SelectGdiObject(local_74,pvVar5);
  this_00 = local_54;
  if (param_2 != 0) {
    *(undefined4 *)(local_54 + 8) = 0x20;
    PreMultiplyAlpha(local_58,*(int *)(local_54 + 0x38));
  }
  AddImage(this_00,local_58,0);
LAB_10085676:
  local_8._0_1_ = 1;
  local_5c = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_5c);
  local_8 = (uint)local_8._1_3_ << 8;
  CDC::~CDC(local_78);
  local_8 = 0xffffffff;
  CWindowDC::~CWindowDC(local_8c);
  iVar4 = FUN_100f90cf();
  return iVar4;
}

