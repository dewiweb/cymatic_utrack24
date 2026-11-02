// rea decompile_all
// name: FUN_0061e2a0
// address: 0x61e2a0
// body: available
// range: 0x61e2a0-0x61e53a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0061e2a0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *in_ECX;
  int local_58;
  int local_54;
  void *local_4c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d04d;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0062cb00(0x100);
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_0061e540(uVar2);
  local_8._0_1_ = 1;
  puVar4 = (undefined4 *)FUN_0061e540();
  local_8._0_1_ = 2;
  puVar5 = (undefined4 *)FUN_0061e540();
  local_8._0_1_ = 3;
  puVar6 = (undefined4 *)FUN_0061e540();
  local_8 = CONCAT31(local_8._1_3_,4);
  (**(code **)(local_58 + 0x10))("Performance count for \"",0x17);
  uVar9 = *in_ECX;
  uVar7 = FUN_0045d1e0(uVar9);
  (**(code **)(local_58 + 0x10))(uVar9,uVar7);
  (**(code **)(local_58 + 0x10))("\" over ",7);
  piVar8 = (int *)FUN_00620110(in_ECX[10],in_ECX[0xb]);
  (**(code **)(*piVar8 + 0x10))(" run(s)",7);
  iVar1 = piVar8[1];
  uVar9 = FUN_0045d1e0(iVar1);
  (**(code **)(*piVar8 + 0x10))(iVar1,uVar9);
  (**(code **)(*piVar8 + 0x10))("Average = ",10);
  uVar9 = *puVar6;
  uVar7 = FUN_0045d1e0(uVar9);
  (**(code **)(*piVar8 + 0x10))(uVar9,uVar7);
  (**(code **)(*piVar8 + 0x10))(", minimum = ",0xc);
  uVar9 = *puVar5;
  uVar7 = FUN_0045d1e0(uVar9);
  (**(code **)(*piVar8 + 0x10))(uVar9,uVar7);
  (**(code **)(*piVar8 + 0x10))(", maximum = ",0xc);
  uVar9 = *puVar4;
  uVar7 = FUN_0045d1e0(uVar9);
  (**(code **)(*piVar8 + 0x10))(uVar9,uVar7);
  (**(code **)(*piVar8 + 0x10))(", total = ",10);
  uVar9 = *puVar3;
  uVar7 = FUN_0045d1e0(uVar9);
  (**(code **)(*piVar8 + 0x10))(uVar9,uVar7);
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
  piVar8 = (int *)(local_2c + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  local_8 = local_8 & 0xffffff00;
  piVar8 = (int *)(local_30 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  FUN_00622840(param_1);
  FUN_00622b80();
  FID_conflict__free(local_4c);
  piVar8 = (int *)(local_54 + -8);
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
  return param_1;
}

