// rea decompile_all
// name: FUN_00536320
// address: 0x536320
// body: available
// range: 0x536320-0x5365a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0053656d) */
/* WARNING: Removing unreachable block (ram,0x00536575) */

void FUN_00536320(uint param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  undefined4 extraout_ECX;
  int *piVar7;
  int *extraout_ECX_00;
  int *piVar8;
  undefined4 extraout_EDX;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0070d600;
  local_10 = ExceptionList;
  if ((int)param_1 < 0) {
    return;
  }
  uVar1 = *(uint *)(*(int *)(in_ECX + 4) + 0x20);
  if ((int)uVar1 <= (int)param_1) {
    return;
  }
  if (uVar1 <= param_1) {
    return;
  }
  if (*(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + param_1 * 4) == 0) {
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 5 & 1) == 0) {
    return;
  }
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_0045c990("Reveal in Project Explorer",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8._0_1_ = 1;
  FUN_005b2a40();
  FUN_00410a10(&param_2);
  uVar9 = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  uVar5 = extraout_ECX;
  uVar2 = FUN_00635500(extraout_EDX);
  FUN_006dfcb0(1,&param_1,uVar2,uVar9,uVar5);
  piVar7 = (int *)(param_2 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  piVar7 = (int *)(local_14 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  local_8 = local_8 & 0xffffff00;
  piVar7 = (int *)(param_1 - 8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  FUN_0045c990("Reveal file on disk");
  puVar3 = (undefined4 *)FUN_00410a10(&param_2);
  local_8 = CONCAT31(local_8._1_3_,5);
  piVar7 = (int *)*puVar3;
  if ((char)*piVar7 == '\0') {
LAB_0053649a:
    uVar5 = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_00458890();
    DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
    piVar7 = extraout_ECX_00;
    if ((DVar4 & 0x10) != 0) goto LAB_0053649a;
    uVar5 = 1;
  }
  uVar10 = 0;
  puVar3 = &param_1;
  uVar9 = 2;
  FUN_006dfcb0(2,puVar3,uVar5,0,piVar7);
  piVar8 = (int *)(param_2 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      uVar10 = 0x5364ce;
      FID_conflict__free(piVar8);
      piVar7 = piVar8;
    }
  }
  local_8 = local_8 & 0xffffff00;
  piVar8 = (int *)(param_1 - 8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      uVar10 = 0x5364f5;
      FID_conflict__free(piVar8);
      piVar7 = piVar8;
    }
  }
  iVar6 = FUN_006dfc40(uVar9,puVar3,uVar5,uVar10,piVar7);
  if (iVar6 == 1) {
    uVar5 = FUN_00410a10(&param_1);
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_00519470(uVar5,0,0);
  }
  else {
    if (iVar6 != 2) goto LAB_00536566;
    FUN_00410a10(&param_1);
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_00633ec0();
  }
  piVar7 = (int *)(param_1 - 8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar7);
    }
  }
LAB_00536566:
  FUN_004b00e0();
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

