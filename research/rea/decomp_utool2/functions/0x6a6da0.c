// rea decompile_all
// name: FUN_006a6da0
// address: 0x6a6da0
// body: available
// range: 0x6a6da0-0x6a6f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006a6da0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *local_84;
  char local_80;
  void *local_50;
  int local_4c;
  undefined **local_48 [3];
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_34;
  void *local_30;
  int local_28;
  undefined4 *local_24;
  void *local_20;
  int local_18;
  undefined4 **local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0072317c;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48[0] = juce::MemoryInputStream::vftable;
  local_3c = 0;
  local_38 = (void *)0x0;
  local_8 = 0;
  FUN_00613f50(local_48);
  local_8._0_1_ = 1;
  FUN_0063a380(uVar4);
  FUN_0063a9b0(&local_34,0);
  local_8 = CONCAT31(local_8._1_3_,3);
  uVar5 = FUN_006c58e0();
  puVar3 = local_34;
  if ((0 < local_28) && (local_34 != (undefined4 *)0x0)) {
    local_14 = &local_34;
    uVar4 = FUN_00447770(&local_14);
    if (uVar4 < (uint)puVar3[0xb]) {
      FUN_00410320(uVar4);
    }
  }
  FID_conflict__free(local_30);
  if (local_34 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_34 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_34)(1);
    }
  }
  puVar3 = local_24;
  if ((0 < local_18) && (local_24 != (undefined4 *)0x0)) {
    local_14 = &local_24;
    uVar4 = FUN_00447770(&local_14);
    if (uVar4 < (uint)puVar3[0xb]) {
      FUN_00410320(uVar4);
    }
  }
  FID_conflict__free(local_20);
  if (local_24 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_24 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_24)(1);
    }
  }
  if (local_4c != 0) {
    FUN_0045ac10(local_4c);
  }
  FID_conflict__free(local_50);
  if ((local_80 != '\0') && (local_84 != (undefined4 *)0x0)) {
    (**(code **)*local_84)(1);
  }
  local_48[0] = juce::MemoryInputStream::vftable;
  FID_conflict__free(local_38);
  ExceptionList = local_10;
  return uVar5;
}

