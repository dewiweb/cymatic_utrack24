// rea decompile_all
// name: FUN_006385b0
// address: 0x6385b0
// body: available
// range: 0x6385b0-0x6386e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006385b0(void)

{
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  undefined1 local_94 [64];
  undefined **local_54;
  undefined4 *local_50;
  char local_4c;
  undefined **local_34;
  int local_30;
  undefined4 local_2c;
  undefined8 local_24;
  char *local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071efd4;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_30 = *(int *)(in_ECX + 0x70);
  piVar3 = (int *)(local_30 + -8);
  local_34 = juce::FileInputStream::vftable;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  local_2c = 0;
  local_24 = 0;
  FUN_0044eef0(uVar2);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_006127d0();
  local_8 = 3;
  if (*local_1c == '\0') {
    iVar4 = (*(code *)local_34[3])(&local_14,4);
    iVar5 = 0;
    if (iVar4 == 4) {
      iVar5 = local_14;
    }
    if (iVar5 == 0x50525043) {
      FUN_006227c0(&local_34);
      local_8._0_1_ = 4;
      FUN_00613f50(&local_54);
      local_8 = CONCAT31(local_8._1_3_,5);
      uVar1 = FUN_00638460(local_94);
      FUN_00613f00();
      local_54 = juce::SubregionStream::vftable;
      if ((local_4c != '\0') && (local_50 != (undefined4 *)0x0)) {
        (**(code **)*local_50)(1);
      }
      goto LAB_006386c9;
    }
    if (iVar5 == 0x504f5250) {
      uVar1 = FUN_00638460(&local_34);
      goto LAB_006386c9;
    }
  }
  uVar1 = 0;
LAB_006386c9:
  FUN_00612760();
  ExceptionList = local_10;
  return uVar1;
}

