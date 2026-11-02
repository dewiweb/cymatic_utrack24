// rea decompile_all
// name: CMFCMenuBar::CalcSysButtonSize
// address: 0x10070bf9
// body: available
// range: 0x10070bf9-0x10070cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCMenuBar::CalcSysButtonSize(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCMenuBar::CalcSysButtonSize(CMFCMenuBar *this)

{
  HDC pHVar1;
  int cy;
  HBITMAP pHVar2;
  void *pvVar3;
  CWindowDC local_58 [4];
  HDC local_54;
  CDC local_44 [4];
  HDC__ *local_40;
  CGdiObject *local_34;
  int local_30;
  undefined **local_2c;
  void *local_28;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x10070c05;
  CWindowDC::CWindowDC(local_58,(CWnd *)0x0);
  local_8 = 0;
  FUN_1001714b((undefined4 *)local_44);
  local_8._0_1_ = 1;
  pHVar1 = CreateCompatibleDC((HDC)0x0);
  CDC::Attach(local_44,pHVar1);
  local_30 = GetSystemMetrics(0x36);
  cy = GetSystemMetrics(0x36);
  local_28 = (void *)0x0;
  local_2c = CBitmap::vftable;
  local_8._0_1_ = 2;
  pHVar2 = CreateCompatibleBitmap(local_54,local_30,cy);
  CMenu::Attach((CMenu *)&local_2c,(HMENU__ *)pHVar2);
  local_34 = CDC::SelectGdiObject(local_40,local_28);
  local_24.right = local_30;
  local_24.left = 0;
  local_24.top = 0;
  local_24.bottom = cy;
  DrawFrameControl(local_40,&local_24,1,0x2000);
  *(LONG *)(this + 0xd08) = local_24.bottom - local_24.top;
  *(LONG *)(this + 0xd04) = local_24.right - local_24.left;
  if (local_34 == (CGdiObject *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = *(void **)(local_34 + 4);
  }
  CDC::SelectGdiObject(local_40,pvVar3);
  local_8._0_1_ = 1;
  local_2c = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  CDC::~CDC(local_44);
  local_8 = 0xffffffff;
  CWindowDC::~CWindowDC(local_58);
  FUN_100f90cf();
  return;
}

