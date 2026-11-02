// rea decompile_all
// name: FUN_00675c80
// address: 0x675c80
// body: available
// range: 0x675c80-0x675dac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00675c80(void)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int in_ECX;
  int *piVar8;
  int local_28;
  int local_24;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007206bc;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar5 = (undefined4 *)FUN_006353d0(2);
  local_8 = 0;
  puVar6 = (undefined4 *)FUN_006353d0(2);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar8 = *(int **)(in_ECX + 4);
  uVar2 = *puVar6;
  uVar7 = FUN_0045d1e0(uVar2,uVar4);
  (**(code **)(*piVar8 + 0x10))(uVar2,uVar7);
  pcVar3 = *(code **)(*piVar8 + 0x14);
  if (pcVar3 == FUN_0062c8e0) {
    local_14[0] = 0x20;
    (**(code **)(*piVar8 + 0x10))(local_14,1);
  }
  else {
    (*pcVar3)(0x20);
  }
  uVar2 = *puVar5;
  uVar7 = FUN_0045d1e0(uVar2);
  (**(code **)(*piVar8 + 0x10))(uVar2,uVar7);
  pcVar3 = *(code **)(*piVar8 + 0x14);
  if (pcVar3 == FUN_0062c8e0) {
    local_18[0] = 0x20;
    (**(code **)(*piVar8 + 0x10))(local_18,1);
  }
  else {
    (*pcVar3)(0x20);
  }
  piVar8 = (int *)(local_24 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  piVar8 = (int *)(local_28 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  ExceptionList = local_10;
  return;
}

