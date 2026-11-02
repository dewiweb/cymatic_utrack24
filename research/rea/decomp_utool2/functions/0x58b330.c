// rea decompile_all
// name: FUN_0058b330
// address: 0x58b330
// body: available
// range: 0x58b330-0x58b58b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0058b381) */

undefined4 FUN_0058b330(void)

{
  uint *puVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  int in_ECX;
  int *piVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 local_44 [8];
  int local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00713c7e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar13 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x14))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_18 = (undefined4)((ulonglong)uVar13 >> 0x20);
  local_20 = (undefined4 *)uVar13;
  uVar14 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x18))();
  if (uVar14 <= CONCAT44(local_18,(undefined4 *)uVar13)) {
    ExceptionList = local_10;
    return 0;
  }
  local_24 = *(undefined4 *)(in_ECX + 0x20);
  local_2c = *(undefined4 *)(in_ECX + 0x18);
  local_28 = 0;
  (**(code **)(**(int **)(in_ECX + 0x14) + 0xc))(&local_2c);
  local_14 = 0;
  pfVar10 = (float *)0x0;
  iVar7 = FUN_00412c20(local_44,*(undefined4 *)(in_ECX + 0x30));
  piVar8 = (int *)(local_3c + -8);
  iVar7 = *(int *)(iVar7 + 4);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  local_1c = (undefined4 *)FUN_0053b6e0(*(int *)(in_ECX + 0x28) + iVar7);
  if (local_1c == (undefined4 *)0x0) goto LAB_0058b4cd;
  lVar15 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x14))();
  lVar5 = CONCAT44(local_18,local_20);
  piVar8 = (int *)FUN_0053f050(&local_20);
  local_8 = 0;
  uVar14 = __allmul(*(int *)(*piVar8 + 0x20),*(int *)(*piVar8 + 0x20) >> 0x1f,lVar15 - lVar5);
  iVar7 = *(int *)(in_ECX + 0x38);
  uVar14 = uVar14 >> 3;
  puVar1 = (uint *)(iVar7 + 0x30);
  uVar9 = *puVar1;
  *puVar1 = *puVar1 + (uint)uVar14;
  *(int *)(iVar7 + 0x34) =
       *(int *)(iVar7 + 0x34) + (int)(uVar14 >> 0x20) + (uint)CARRY4(uVar9,(uint)uVar14);
  (**(code **)(**(int **)(*(int *)(iVar7 + 0x10) + 0x28) + 0x18))(uVar14);
  if (local_20 != (undefined4 *)0x0) {
    LOCK();
    piVar8 = local_20 + 1;
    iVar7 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)*local_20)(1);
    }
  }
  iVar7 = local_1c[9];
  piVar8 = *(int **)(in_ECX + 0x18);
  if (iVar7 < 0) {
    pfVar10 = *(float **)piVar8[3];
    piVar8 = (int *)FUN_00591a50(&local_20);
    uVar4 = *(uint *)(in_ECX + 0x30);
    uVar9 = *(uint *)(*piVar8 + 0x10);
    if ((int)uVar4 < (int)uVar9) {
      local_14 = iRam00000008;
      if (uVar4 < uVar9) {
        local_14 = *(int *)(*(int *)(*(int *)(*piVar8 + 8) + uVar4 * 4) + 8);
      }
    }
    else {
      local_14 = 0;
    }
    if (local_20 == (undefined4 *)0x0) goto LAB_0058b4cd;
    LOCK();
    piVar8 = local_20 + 1;
    iVar7 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    puVar6 = local_20;
  }
  else {
    if (*piVar8 <= iVar7) {
      pfVar10 = (float *)0x0;
      local_14 = 0;
      goto LAB_0058b4cd;
    }
    pfVar10 = *(float **)(piVar8[3] + iVar7 * 4);
    FUN_00591a50(&local_1c);
    local_14 = FUN_004e5c20(*(undefined4 *)(in_ECX + 0x30));
    if (local_1c == (undefined4 *)0x0) goto LAB_0058b4cd;
    LOCK();
    piVar8 = local_1c + 1;
    iVar7 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    puVar6 = local_1c;
  }
  if (iVar7 == 1) {
    (**(code **)*puVar6)(1);
  }
LAB_0058b4cd:
  uVar9 = 0;
  if ((-1 < *(int *)(in_ECX + 0x24)) &&
     ((0 < *(int *)(in_ECX + 0x24) || (*(int *)(in_ECX + 0x20) != 0)))) {
    pfVar11 = pfVar10;
    do {
      pfVar2 = pfVar11 + 1;
      fVar12 = 1.0;
      if (*pfVar11 <= 1.0) {
        fVar12 = *pfVar11;
      }
      uVar9 = uVar9 + 1;
      if (fVar12 <= -1.0) {
        fVar12 = -1.0;
      }
      *(int *)((local_14 - (int)pfVar10) + -4 + (int)pfVar2) = (int)(fVar12 * 2.1474834e+09);
      pfVar11 = pfVar2;
    } while (((int)uVar9 >> 0x1f < *(int *)(in_ECX + 0x24)) ||
            (((int)uVar9 >> 0x1f <= *(int *)(in_ECX + 0x24) && (uVar9 < *(uint *)(in_ECX + 0x20)))))
    ;
  }
  ExceptionList = local_10;
  return 0;
}

