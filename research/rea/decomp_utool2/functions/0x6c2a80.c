// rea decompile_all
// name: FUN_006c2a80
// address: 0x6c2a80
// body: available
// range: 0x6c2a80-0x6c2d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c2a80(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 **ppuVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int in_ECX;
  int *piVar8;
  float10 fVar9;
  undefined1 auStack_ac [4];
  undefined4 uStack_a8;
  undefined4 *local_64;
  void *local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 **local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  int *local_44;
  int *local_34;
  undefined **local_24;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00725732;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = param_2;
  local_64 = (undefined4 *)*param_1;
  if (local_64 != (undefined4 *)0x0) {
    LOCK();
    local_64[1] = local_64[1] + 1;
    UNLOCK();
  }
  local_60 = (void *)0x0;
  local_5c = 0;
  local_58 = 0;
  local_8 = 0;
  piVar4 = (int *)FUN_006c5860();
  piVar8 = (int *)(*piVar4 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(in_ECX + 8);
  *(int *)(in_ECX + 8) = *piVar4;
  UNLOCK();
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)((int)local_48 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_24 = &PTR_vftable_00c7ed2c;
  local_1c = 0x3ff0000000000000;
  local_8._0_1_ = 1;
  puVar5 = (undefined4 *)FUN_0063b2d0();
  fVar9 = (float10)(**(code **)(*(int *)*puVar5 + 0xc))();
  (**(code **)(*local_44 + 0x54))();
  local_8._0_1_ = 0;
  (**(code **)(*local_24 + 0x54))();
  FUN_006c31e0();
  puVar5 = (undefined4 *)0x0;
  local_48 = (undefined4 *)0x0;
  local_8._0_1_ = 2;
  FUN_006c33c0();
  local_8._0_1_ = 3;
  if ((int *)local_4c[9] != (int *)0x0) {
    uStack_a8 = 0x6c2bdc;
    puVar6 = (undefined4 *)(**(code **)(*(int *)local_4c[9] + 4))();
    puVar5 = (undefined4 *)*puVar6;
    *puVar6 = 0;
    local_48 = puVar5;
    if (local_4c != (undefined4 *)0x0) {
      LOCK();
      piVar4 = local_4c + 1;
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*local_4c)();
      }
    }
  }
  FUN_006c2ed0();
  local_8 = CONCAT31(local_8._1_3_,4);
  cVar3 = FUN_0069e2c0();
  ppuVar2 = local_50;
  if ((((cVar3 == '\0') || ((float)fVar9 != *(float *)(in_ECX + 0x7c))) ||
      (*(undefined4 ***)(in_ECX + 0x80) != local_50)) || (*(undefined4 **)(in_ECX + 0x78) != puVar5)
     ) {
    FUN_006e6400(auStack_ac);
    FUN_006ce9f0(1);
    *(float *)(in_ECX + 0x7c) = (float)fVar9;
    *(undefined4 ***)(in_ECX + 0x80) = ppuVar2;
    if (*(undefined4 **)(in_ECX + 0x78) != puVar5) {
      FUN_006c3960();
    }
    FUN_006c38b0();
  }
  FUN_0069e440();
  (**(code **)(*local_34 + 0x54))();
  if (puVar5 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar5 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      uStack_a8 = 0x6c2cb1;
      (**(code **)*puVar5)();
    }
  }
  puVar5 = local_64;
  if ((0 < local_58) && (local_64 != (undefined4 *)0x0)) {
    local_50 = &local_64;
    uStack_a8 = 0x6c2cd0;
    uVar7 = FUN_00447770();
    if (uVar7 < (uint)puVar5[0xb]) {
      uStack_a8 = 0x6c2cde;
      FUN_00410320();
    }
  }
  uStack_a8 = 0x6c2ce6;
  FID_conflict__free(local_60);
  if (local_64 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_64 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      uStack_a8 = 0x6c2cfe;
      (**(code **)*local_64)();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

