// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonPanelCaption
// address: 0x10036e31
// body: available
// range: 0x10036e31-0x10036ef4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonPanelCaption(class CDC *,class
   CMFCRibbonPanel *,class CRect)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonPanelCaption
          (undefined4 param_1_00,int *param_1,int param_2,undefined4 param_4,undefined4 param_5,
          int param_6)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined **local_1c;
  HBRUSH local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x10036e3d;
  uVar1 = DAT_10166b0c;
  if (*(int *)(param_2 + 0xc) == 0) {
    uVar1 = DAT_10166b1c;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(uVar1);
  InflateRect((LPRECT)&param_4,-1,-1);
  param_6 = param_6 + -2;
  uVar2 = DAT_10166b14;
  if (*(int *)(param_2 + 0xc) == 0) {
    uVar2 = DAT_10166b18;
  }
  CBrush::CBrush((CBrush *)&local_1c,uVar2);
  local_8 = 0;
  FillRect((HDC)param_1[1],(RECT *)&param_4,local_18);
  FUN_10006ce0(local_14,*(short **)(param_2 + 0x9c));
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(*param_1 + 0x68))(local_14[0],*(undefined4 *)(local_14[0] + -0xc),&param_4,0x8825);
  (**(code **)(*param_1 + 0x30))(uVar1);
  FUN_10001030((undefined4 *)(local_14[0] + -0x10));
  local_8 = 0xffffffff;
  local_1c = CBrush::vftable;
  CImageList::~CImageList((CImageList *)&local_1c);
  return;
}

