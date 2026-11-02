// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonApplicationButton
// address: 0x10030fc0
// body: available
// range: 0x10030fc0-0x10031078 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonApplicationButton(class CDC
   *,class CMFCRibbonButton *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonApplicationButton
          (CMFCVisualManager *this,CDC *param_1,CMFCRibbonButton *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  CDrawingManager local_34 [8];
  int local_2c;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x10030fcc;
  iVar1 = (**(code **)(*(int *)param_2 + 0x2c))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)param_2 + 0x30))();
    if (iVar1 != 0) goto LAB_10030ff0;
    local_2c = 0;
  }
  else {
LAB_10030ff0:
    local_2c = 1;
  }
  iVar1 = (**(code **)(*(int *)param_2 + 0x34))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)param_2 + 0x40))();
    if (iVar1 == 0) {
      local_28 = 0;
      goto LAB_10031011;
    }
  }
  local_28 = 1;
LAB_10031011:
  local_24.left = *(LONG *)(param_2 + 0x18);
  local_24.top = *(LONG *)(param_2 + 0x1c);
  local_24.right = *(LONG *)(param_2 + 0x20);
  local_24.bottom = *(LONG *)(param_2 + 0x24);
  InflateRect(&local_24,-2,-2);
  CDrawingManager::CDrawingManager(local_34,param_1);
  local_8 = 0;
  uVar3 = DAT_10166af8;
  if (local_2c == 0) {
    uVar3 = DAT_10166af0;
  }
  uVar2 = DAT_10166afc;
  if (local_28 == 0) {
    uVar2 = DAT_10166aec;
  }
  FUN_1009eb96(&local_24.left,uVar2,uVar3);
  local_8 = 0xffffffff;
  FUN_1009c588((undefined4 *)local_34);
  FUN_100f90cf();
  return;
}

