// rea decompile_all
// name: FUN_0044b2b0
// address: 0x44b2b0
// body: available
// range: 0x44b2b0-0x44b6a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0044b3f6) */
/* WARNING: Removing unreachable block (ram,0x0044b403) */

void FUN_0044b2b0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  int in_ECX;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  double dVar14;
  uint local_a4;
  void *local_78;
  uint local_70;
  int local_60;
  uint local_54;
  void *local_40;
  char local_1b [6];
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ff70f;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar2 = (int *)(in_ECX + 0xa0);
  if (*piVar2 == 0) {
    operator_new(0xcc);
    local_8 = 1;
    puVar5 = (undefined4 *)FUN_006e8840();
    local_8 = 2;
    puVar6 = (undefined4 *)*piVar2;
    if ((puVar6 != puVar5) && (*piVar2 = (int)puVar5, puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)();
    }
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 0x28))();
      FUN_006e5050();
    }
    local_8 = 0xffffffff;
    local_40 = operator_new(0xd0);
    local_8 = 3;
    FUN_00637250();
    local_8 = 5;
    puVar5 = (undefined4 *)FUN_006e8b40();
    puVar6 = *(undefined4 **)(in_ECX + 0xb0);
    if ((puVar6 != puVar5) &&
       (*(undefined4 **)(in_ECX + 0xb0) = puVar5, puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)();
    }
    local_8 = 0xffffffff;
    piVar1 = (int *)(local_60 + -8);
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar1);
      }
    }
    FUN_006e89c0();
  }
  else {
    FUN_006e86d0();
    FUN_00415ff0();
  }
  (**(code **)(*param_1 + 0xc))();
  local_8 = 8;
  local_54 = 0;
  if (0 < (int)local_70) {
    bVar13 = local_70 != 0;
    do {
      if (bVar13) {
        dVar14 = *(double *)((int)local_78 + local_54 * 8);
      }
      else {
        dVar14 = 0.0;
      }
      pcVar11 = local_1b + 2;
      local_1b[2] = 0;
      local_a4 = SUB84(dVar14 + 6755399441055744.0,0);
      if ((int)local_a4 < 0) {
        uVar9 = -local_a4;
        do {
          pcVar12 = pcVar11;
          pcVar11 = pcVar12 + -1;
          uVar10 = uVar9 / 10;
          *pcVar11 = (char)uVar9 + (char)uVar10 * -10 + '0';
          uVar9 = uVar10;
        } while (uVar10 != 0);
        pcVar11 = pcVar12 + -2;
        *pcVar11 = '-';
      }
      else {
        do {
          pcVar11 = pcVar11 + -1;
          uVar9 = local_a4 / 10;
          *pcVar11 = (char)local_a4 + (char)uVar9 * -10 + '0';
          local_a4 = uVar9;
        } while (uVar9 != 0);
      }
      pcVar12 = local_1b + -(int)pcVar11 + 2;
      puVar6 = (undefined4 *)FUN_004bfe22(((uint)(&uStack_15 + -(int)pcVar11) & 0xfffffffc) + 0xb);
      *puVar6 = 0;
      puVar6[1] = (uint)(&uStack_15 + -(int)pcVar11) & 0xfffffffc;
      while ((0 < (int)pcVar12 && (iVar7 = FUN_00443260(), iVar7 != 0))) {
        FUN_0044ecc0(iVar7);
        pcVar12 = pcVar12 + -1;
      }
      *(undefined1 *)(puVar6 + 2) = 0;
      FUN_006377c0();
      local_8._0_1_ = 9;
      FUN_006e8760();
      local_8 = CONCAT31(local_8._1_3_,8);
      piVar1 = (int *)((int)local_40 + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar1);
        }
      }
      local_54 = local_54 + 1;
      bVar13 = local_54 < local_70;
    } while ((int)local_54 < (int)local_70);
  }
  (**(code **)(*param_1 + 0x38))();
  FUN_006e83a0();
  uVar9 = -(uint)(in_ECX != 0) & in_ECX + 0x74U;
  if (uVar9 != 0) {
    iVar7 = *piVar2;
    puVar8 = *(uint **)(iVar7 + 0xb0);
    puVar3 = puVar8 + *(int *)(iVar7 + 0xb8);
    for (; puVar8 != puVar3; puVar8 = puVar8 + 1) {
      if (uVar9 == *puVar8) goto LAB_0044b67e;
    }
    if (*(int *)(iVar7 + 0xb4) < *(int *)(iVar7 + 0xb8) + 1) {
      FUN_00409cf0();
    }
    iVar4 = *(int *)(iVar7 + 0xb8);
    *(int *)(iVar7 + 0xb8) = iVar4 + 1;
    puVar3 = (uint *)(*(int *)(iVar7 + 0xb0) + iVar4 * 4);
    if (puVar3 != (uint *)0x0) {
      *puVar3 = uVar9;
    }
  }
LAB_0044b67e:
  FID_conflict__free(local_78);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

