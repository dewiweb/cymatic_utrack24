// rea decompile_all
// name: CMFCVisualManager::OnDrawComboDropButton
// address: 0x10032223
// body: available
// range: 0x10032223-0x10032336 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawComboDropButton(class CDC *,class
   CRect,int,int,int,class CMFCToolBarComboBoxButton *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCVisualManager::OnDrawComboDropButton(undefined4 param_1_00,CDC *param_1)

{
  COLORREF CVar1;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  ulong uVar2;
  ulong uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  CDrawingManager local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x1003222f;
  CVar1 = GetTextColor(*(HDC *)(param_1 + 8));
  if (DAT_1016891c == 0) {
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000008,DAT_10166b6c);
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x00000008,DAT_10166af4,DAT_10166af4);
    if (in_stack_0000001c == 0) {
      uVar2 = DAT_10166af4;
      uVar3 = DAT_10166af0;
      if (in_stack_00000020 == 0) goto LAB_10032309;
    }
    else {
      OffsetRect((LPRECT)&stack0x00000008,1,1);
      uVar2 = DAT_10166af0;
      uVar3 = DAT_10166af4;
    }
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x00000008,uVar2,uVar3);
    goto LAB_10032309;
  }
  CDrawingManager::CDrawingManager(local_18,param_1);
  local_8 = 0;
  CDrawingManager::DrawRect(local_18,(CRect *)&stack0x00000008,DAT_10166aec,DAT_10166af4);
  if (in_stack_0000001c == 0) {
    if (in_stack_00000020 != 0) goto LAB_10032285;
  }
  else {
    OffsetRect((LPRECT)&stack0x00000008,1,1);
LAB_10032285:
    CDrawingManager::DrawRect(local_18,(CRect *)&stack0x00000008,0xffffffff,DAT_10166af0);
  }
  local_8 = 0xffffffff;
  FUN_1009c588((undefined4 *)local_18);
LAB_10032309:
  local_20 = 0;
  local_1c = 0;
  CMenuImages::Draw(param_1,0,(CRect *)&stack0x00000008,(uint)(in_stack_00000018 != 0),
                    (CSize *)&local_20);
  (**(code **)(*(int *)param_1 + 0x30))(CVar1);
  return;
}

