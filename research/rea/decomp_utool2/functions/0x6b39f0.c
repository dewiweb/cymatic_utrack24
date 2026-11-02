// rea decompile_all
// name: FUN_006b39f0
// address: 0x6b39f0
// body: available
// range: 0x6b39f0-0x6b3b12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b39f0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int in_ECX;
  undefined4 in_EDX;
  undefined1 local_28 [16];
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723c37;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x20) == 0) {
    iVar3 = FUN_006b3770(in_ECX + 4);
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_006b3b20(0);
    }
    puVar1 = *(undefined4 **)(in_ECX + 0x20);
    if ((puVar1 != puVar4) &&
       (*(undefined4 **)(in_ECX + 0x20) = puVar4, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_18 = *(int *)(in_ECX + 0x20);
  if (local_18 != 0) {
    piVar5 = (int *)FUN_006b3770(in_EDX);
    FUN_006b3cf0(uVar2);
    local_8 = 0;
    if ((piVar5 == (int *)0x0) || (*local_14 == '\0')) {
      piVar5 = (int *)FUN_0063b1b0(local_28);
      iVar3 = *piVar5;
      FUN_0063b3e0();
      if (iVar3 != 0) {
        FUN_0063b1b0(local_28);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_006b39f0();
        FUN_0063b3e0();
      }
    }
    else {
      iVar3 = FUN_006b3ba0();
      if (iVar3 != 0) {
        (**(code **)(*piVar5 + 8))(iVar3);
      }
    }
    piVar5 = (int *)(local_14 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

