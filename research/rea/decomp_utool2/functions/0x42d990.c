// rea decompile_all
// name: FUN_0042d990
// address: 0x42d990
// body: available
// range: 0x42d990-0x42dc69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042d990(char *param_1,int *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *in_EDX;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_60;
  uint local_54;
  int local_50;
  char acStack_1b [7];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006fdde8;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  puVar2 = (undefined4 *)FUN_006378b0();
  pcVar1 = (char *)*puVar2;
  *puVar2 = param_1;
  piVar4 = (int *)(local_50 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  param_1 = pcVar1;
  if (*pcVar1 != '\0') {
    piVar4 = (int *)(pcVar1 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    local_8 = 1;
    local_54 = 2;
    while (iVar3 = FUN_0062c730(param_1), -1 < iVar3) {
      acStack_1b[2] = 0;
      pcVar8 = acStack_1b + 2;
      uVar5 = local_54;
      if ((int)local_54 < 0) {
        uVar5 = -local_54;
        do {
          pcVar9 = pcVar8;
          pcVar8 = pcVar9 + -1;
          uVar7 = uVar5 / 10;
          *pcVar8 = (char)uVar5 + (char)uVar7 * -10 + '0';
          uVar5 = uVar7;
        } while (uVar7 != 0);
        pcVar9[-2] = '-';
      }
      else {
        do {
          pcVar8 = pcVar8 + -1;
          uVar7 = uVar5 / 10;
          *pcVar8 = (char)uVar5 + (char)uVar7 * -10 + '0';
          uVar5 = uVar7;
        } while (uVar7 != 0);
      }
      FUN_004557e0();
      local_54 = local_54 + 1;
      _local_8 = CONCAT31(uStack_7,2);
      piVar6 = (int *)(pcVar1 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      FUN_006377c0(pcVar1);
      FUN_00637730();
      puVar2 = (undefined4 *)FUN_006377c0();
      pcVar8 = (char *)*puVar2;
      *puVar2 = param_1;
      piVar6 = (int *)(local_60 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_8 = 1;
      piVar6 = (int *)(local_50 + -8);
      param_1 = pcVar8;
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar6);
        }
      }
    }
    if (in_EDX[1] < in_EDX[2] + 1) {
      FUN_00409cf0();
    }
    iVar3 = in_EDX[2];
    in_EDX[2] = iVar3 + 1;
    puVar2 = (undefined4 *)(*in_EDX + iVar3 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = param_1;
      piVar6 = (int *)(param_1 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
    }
    if (in_ECX == (undefined4 *)0x0) {
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
    }
    else {
      uVar10 = *in_ECX;
      uVar11 = in_ECX[1];
      uVar12 = in_ECX[2];
      uVar13 = in_ECX[3];
    }
    if (param_2[1] < param_2[2] + 1) {
      FUN_0040ede0();
    }
    iVar3 = param_2[2];
    param_2[2] = iVar3 + 1;
    puVar2 = (undefined4 *)(iVar3 * 0x10 + *param_2);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      puVar2[2] = uVar12;
      puVar2[3] = uVar13;
    }
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

