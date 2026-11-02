// rea decompile_all
// name: CMFCVisualManager::OnDrawCheckBoxEx
// address: 0x10035d66
// body: available
// range: 0x10035d66-0x10035edc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawCheckBoxEx(class CDC *,class
   CRect,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCVisualManager::OnDrawCheckBoxEx(undefined4 param_1_00,CDC *param_1)

{
  ulong uVar1;
  HBRUSH pHVar2;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000024;
  undefined4 local_20;
  undefined4 local_1c;
  undefined **local_18;
  HBRUSH local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x10035d72;
  if (DAT_1016891c == 0) {
    if (in_stack_0000001c != 0) {
      DrawFocusRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000008);
    }
    InflateRect((LPRECT)&stack0x00000008,-1,-1);
    uVar1 = DAT_10166b04;
    if (in_stack_00000024 == 0) {
      uVar1 = DAT_10166aec;
    }
    CDC::FillSolidRect(param_1,(tagRECT *)&stack0x00000008,uVar1);
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x00000008,DAT_10166af8,DAT_10166af4);
    InflateRect((LPRECT)&stack0x00000008,-1,-1);
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x00000008,DAT_10166af0,DAT_10166afc);
    if (in_stack_00000018 == 1) {
      local_20 = 0;
      local_1c = 0;
      CMenuImages::Draw(param_1,2,(CRect *)&stack0x00000008,0,(CSize *)&local_20);
    }
    else if (in_stack_00000018 == 2) {
      InflateRect((LPRECT)&stack0x00000008,-1,-1);
      local_14 = (HBRUSH)0x0;
      local_18 = CBrush::vftable;
      local_8 = 1;
      pHVar2 = CreateHatchBrush(5,DAT_10166ac0);
      CMenu::Attach((CMenu *)&local_18,(HMENU__ *)pHVar2);
      FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000008,local_14);
      local_8 = 0xffffffff;
      local_18 = CBrush::vftable;
      CImageList::~CImageList((CImageList *)&local_18);
    }
  }
  else {
    CDrawingManager::CDrawingManager((CDrawingManager *)&local_20,param_1);
    local_8 = 0;
    InflateRect((LPRECT)&stack0x00000008,-1,-1);
    uVar1 = DAT_10166b04;
    if (in_stack_00000024 == 0) {
      uVar1 = DAT_10166aec;
    }
    CDrawingManager::DrawRect
              ((CDrawingManager *)&local_20,(CRect *)&stack0x00000008,uVar1,DAT_10166af0);
    if (in_stack_00000018 == 1) {
      local_18 = (undefined **)0x0;
      local_14 = (HBRUSH)0x0;
      CMenuImages::Draw(param_1,2,(CRect *)&stack0x00000008,0,(CSize *)&local_18);
    }
    local_8 = 0xffffffff;
    FUN_1009c588(&local_20);
  }
  return;
}

