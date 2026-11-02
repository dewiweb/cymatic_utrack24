// rea decompile_all
// name: FUN_004fcab0
// address: 0x4fcab0
// body: available
// range: 0x4fcab0-0x4fcf3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fcab0(void)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int in_ECX;
  int *piVar8;
  uint uVar9;
  char *local_20;
  int *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00706cfb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0xdf4) = 0;
  uVar5 = FUN_00541a70();
  local_8 = 0;
  FUN_006e4900(uVar5);
  local_8 = 0xffffffff;
  piVar8 = (int *)(local_14 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  piVar6 = (int *)FUN_00410ad0();
  iVar1 = *(int *)(in_ECX + 0xdf0);
  piVar8 = (int *)(in_ECX + 0xdf0);
  *piVar8 = *piVar6;
  *piVar6 = iVar1;
  piVar6 = (int *)(local_14 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = (int *)(*piVar8 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(in_ECX + 0xdf8);
  *(int *)(in_ECX + 0xdf8) = *piVar8;
  UNLOCK();
  piVar6 = (int *)(iVar1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  FUN_006e4900(piVar8);
  *(undefined1 *)(in_ECX + 0x2590) = 0;
  FUN_004ea530(2);
  FUN_004ea730();
  FUN_004ea0c0();
  FUN_00533930(*(undefined4 *)(in_ECX + 0x9c));
  uVar5 = *(undefined4 *)(*(int *)(in_ECX + 0x98) + 0x24);
  *(undefined4 *)(in_ECX + 0xdfc) = uVar5;
  FUN_006e83a0(uVar5);
  uVar5 = *(undefined4 *)(*(int *)(in_ECX + 0x98) + 0x28);
  *(undefined4 *)(in_ECX + 0xe00) = uVar5;
  FUN_006e83a0(uVar5);
  uVar5 = *(undefined4 *)(*(int *)(in_ECX + 0x98) + 0x2c);
  *(undefined4 *)(in_ECX + 0xe04) = uVar5;
  FUN_006e83a0(uVar5);
  uVar9 = 0;
  if (0 < *(int *)(*(int *)(in_ECX + 0x98) + 0x5c)) {
    do {
      uVar2 = *(uint *)(*(int *)(in_ECX + 0x98) + 0x5c);
      if ((((int)uVar9 < (int)uVar2) && (uVar9 < uVar2)) &&
         (*(int *)(*(int *)(*(int *)(in_ECX + 0x98) + 0x54) + uVar9 * 4) != 0)) {
        FUN_005406d0();
        local_8 = 1;
        puVar7 = (undefined4 *)FUN_00636040();
        local_20 = (char *)*puVar7;
        local_1c = (int *)(local_20 + -8);
        if (local_1c != &DAT_00bfe124) {
          LOCK();
          *local_1c = *local_1c + 1;
          UNLOCK();
        }
        piVar8 = (int *)(local_14 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,3);
        piVar8 = (int *)(local_18 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        if (*local_20 != '\0') {
          FUN_00627bf0();
          FUN_004f54f0();
          piVar8 = (int *)(local_20 + -8);
          local_8 = 0xffffffff;
          local_1c = (int *)&stack0xffffffcc;
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            local_1c = (int *)&stack0xffffffcc;
            if (iVar1 == 0) {
              FID_conflict__free(piVar8);
              local_1c = (int *)&stack0xffffffcc;
            }
          }
          break;
        }
        local_8 = 0xffffffff;
        if (local_1c != &DAT_00bfe124) {
          LOCK();
          iVar1 = *local_1c;
          *local_1c = *local_1c + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(local_1c);
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < *(int *)(*(int *)(in_ECX + 0x98) + 0x5c));
  }
  FUN_004f4f60();
  FUN_00410af0();
  local_8 = 4;
  FUN_00627bf0();
  local_8 = CONCAT31(local_8._1_3_,5);
  piVar8 = (int *)(local_20 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(in_ECX + 0x1ef8);
  *(int *)(in_ECX + 0x1ef8) = (int)local_20;
  UNLOCK();
  piVar6 = (int *)(iVar1 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  FUN_006e4900(in_ECX + 0x1ef8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  local_8 = 0xffffffff;
  piVar8 = local_1c + -2;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  if ((bool)(*(byte *)(in_ECX + 0x981) >> 4 & 1) == (*(int *)(in_ECX + 0x9c) == 3)) {
    uVar4 = CONCAT11(*(byte *)(in_ECX + 0x981),*(int *)(in_ECX + 0x9c) == 3) & 0xefff;
    uVar9 = CONCAT11((char)(uVar4 >> 8),(char)uVar4 + -1) & 0xffffff10;
    *(byte *)(in_ECX + 0x981) = (byte)uVar9 | (byte)(uVar9 >> 8);
    iVar1 = *(int *)(in_ECX + 0x924);
    if ((iVar1 == 0) ||
       (((*(byte *)(iVar1 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar1 + 0xc) == 0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))))) {
      FUN_006cc240();
    }
  }
  if ((bool)(*(byte *)(in_ECX + 0xa51) >> 4 & 1) == (*(int *)(in_ECX + 0x9c) == 3)) {
    *(byte *)(in_ECX + 0xa51) =
         (*(int *)(in_ECX + 0x9c) == 3) - 1U & 0x10 | *(byte *)(in_ECX + 0xa51) & 0xef;
    iVar1 = *(int *)(in_ECX + 0x9f4);
    if ((iVar1 == 0) ||
       (((*(byte *)(iVar1 + 0x69) & 0x10) == 0 &&
        ((*(int *)(iVar1 + 0xc) == 0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))))) {
      FUN_006cc240();
    }
  }
  FUN_004fb0e0();
  FUN_004fbec0();
  ExceptionList = local_10;
  return;
}

