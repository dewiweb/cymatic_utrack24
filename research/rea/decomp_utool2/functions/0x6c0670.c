// rea decompile_all
// name: FUN_006c0670
// address: 0x6c0670
// body: available
// range: 0x6c0670-0x6c08a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c0670(undefined4 **param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int in_ECX;
  int *piVar8;
  undefined4 **_Memory;
  undefined4 *local_38;
  void *local_34;
  undefined4 local_30;
  int local_2c;
  undefined1 local_28 [12];
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00725243;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_38 = *param_1;
  if (local_38 != (undefined4 *)0x0) {
    LOCK();
    local_38[1] = local_38[1] + 1;
    UNLOCK();
  }
  local_34 = (void *)0x0;
  local_30 = 0;
  local_2c = 0;
  local_8 = 0;
  piVar3 = (int *)FUN_006c5860(&param_1);
  piVar8 = (int *)(*piVar3 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  LOCK();
  iVar6 = *(int *)(in_ECX + 8);
  *(int *)(in_ECX + 8) = *piVar3;
  UNLOCK();
  piVar3 = (int *)(iVar6 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  _Memory = param_1 + -2;
  if (_Memory != (undefined4 **)&DAT_00bfe124) {
    LOCK();
    puVar1 = *_Memory;
    *_Memory = (undefined4 *)((int)*_Memory + -1);
    UNLOCK();
    if (puVar1 == (undefined4 *)0x0) {
      FID_conflict__free(_Memory);
    }
  }
  FUN_006bfe10(&local_38,*(undefined4 *)(param_2 + 0x24));
  pfVar4 = (float *)FUN_006bdfd0(local_1c);
  if (((*(float *)(in_ECX + 0x78) != *pfVar4) || (*(float *)(in_ECX + 0x7c) != pfVar4[1])) ||
     (*(float *)(in_ECX + 0x80) != pfVar4[2])) {
    *(float *)(in_ECX + 0x78) = *pfVar4;
    *(float *)(in_ECX + 0x7c) = pfVar4[1];
    *(float *)(in_ECX + 0x80) = pfVar4[2];
    FUN_006bfb60();
  }
  uVar5 = FUN_006c0be0(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  cVar2 = FUN_0069e2c0(uVar5);
  if (cVar2 == '\0') {
    FUN_004918d0(uVar5);
    FUN_006c13e0();
  }
  local_8 = local_8 & 0xffffff00;
  FUN_0069e440();
  iVar6 = FUN_006c08b0(&local_18);
  local_8 = CONCAT31(local_8._1_3_,2);
  cVar2 = FUN_0069ef00(iVar6);
  if (cVar2 != '\0') {
    cVar2 = FUN_0069ef00(iVar6 + 4);
    if (cVar2 != '\0') goto LAB_006c081b;
  }
  FUN_004919c0(iVar6);
  FUN_006c13e0();
LAB_006c081b:
  if (local_14 != (undefined4 *)0x0) {
    piVar3 = local_14 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*local_14)(1);
    }
  }
  if (local_18 != (undefined4 *)0x0) {
    piVar3 = local_18 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*local_18)(1);
    }
  }
  puVar1 = local_38;
  if ((0 < local_2c) && (local_38 != (undefined4 *)0x0)) {
    param_1 = &local_38;
    uVar7 = FUN_00447770(&param_1);
    if (uVar7 < (uint)puVar1[0xb]) {
      FUN_00410320(uVar7);
    }
  }
  FID_conflict__free(local_34);
  if (local_38 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_38 + 1;
    iVar6 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)*local_38)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

