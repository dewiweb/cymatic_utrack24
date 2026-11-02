// rea decompile_all
// name: FUN_0062da40
// address: 0x62da40
// body: available
// range: 0x62da40-0x62ddbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_0062da40(void)

{
  WCHAR WVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_ECX;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  WCHAR *pWVar12;
  undefined1 *local_1044;
  undefined4 *local_1040;
  void *local_103c;
  void *local_1038;
  int local_1034;
  undefined4 *local_1030;
  WCHAR *local_102c;
  undefined1 *local_1028;
  undefined1 local_1021;
  void *local_1020;
  undefined4 *local_101c;
  int local_1018;
  WCHAR local_1014 [2048];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071e159;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  _memset(local_1014,0,0x1000);
  GetLogicalDriveStringsW(0x800,local_1014);
  puVar8 = (void *)0x0;
  pWVar12 = local_1014;
  local_101c = (undefined4 *)0x0;
  local_103c = (void *)0x0;
  local_1020 = (void *)0x0;
  local_1038 = (void *)0x0;
  local_1018 = 0;
  local_1034 = 0;
  local_8 = 0;
  iVar4 = local_1018;
  while (local_1018 = iVar4, local_1014[0] != L'\0') {
    if (*pWVar12 == L'\0') {
      puVar11 = (undefined4 *)&DAT_00bfe12c;
    }
    else {
      local_102c = pWVar12;
      iVar4 = FUN_0045ddd0(pWVar12,uVar3);
      uVar10 = iVar4 + 4U & 0xfffffffc;
      puVar5 = (undefined4 *)FUN_004bfe22(uVar10 + 0xb);
      puVar5[1] = uVar10;
      puVar11 = puVar5 + 2;
      *puVar5 = 0;
      local_1040 = puVar11;
      FUN_0045e480(pWVar12);
    }
    local_102c = (WCHAR *)(local_1018 + 1);
    local_101c = puVar11;
    if ((int)local_1020 < (int)local_102c) {
      iVar4 = (int)local_102c;
      if ((int)local_102c < 0) {
        iVar4 = local_1018 + 2;
      }
      local_1030 = (undefined4 *)((iVar4 >> 1) + 8 + (int)local_102c & 0xfffffff8);
      if (local_1020 != local_1030) {
        if ((int)local_1030 < 1) {
          FID_conflict__free(puVar8);
          puVar8 = (void *)0x0;
        }
        else if (puVar8 == (void *)0x0) {
          puVar8 = (undefined4 *)FUN_004c554b();
        }
        else {
          puVar8 = (undefined4 *)FUN_004c553b(puVar8,(int)local_1030 << 2);
        }
        local_1020 = local_1030;
        local_1038 = local_1030;
        local_103c = puVar8;
      }
    }
    puVar5 = (undefined4 *)((int)puVar8 + local_1018 * 4);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = puVar11;
      puVar11 = (undefined4 *)&DAT_00bfe12c;
      local_101c = (undefined4 *)&DAT_00bfe12c;
    }
    piVar7 = puVar11 + -2;
    local_1034 = (int)local_102c;
    local_1030 = puVar11;
    local_1018 = (int)local_102c;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    do {
      WVar1 = *pWVar12;
      pWVar12 = pWVar12 + 1;
    } while (WVar1 != L'\0');
    iVar4 = local_1018;
    local_1014[0] = *pWVar12;
  }
  local_1044 = &local_1021;
  local_101c = puVar8;
  FUN_0045e700(iVar4 * 4 >> 2,&local_1044);
  if (0 < iVar4) {
    iVar9 = 0;
    local_1020 = puVar8;
    do {
      FUN_00627bf0();
      iVar2 = in_ECX[2];
      iVar6 = iVar2 + 1;
      if (in_ECX[1] < iVar6) {
        if (iVar6 < 0) {
          iVar6 = iVar2 + 2;
        }
        uVar3 = iVar2 + 9 + (iVar6 >> 1) & 0xfffffff8;
        iVar4 = local_1018;
        if (in_ECX[1] != uVar3) {
          if ((int)uVar3 < 1) {
            FID_conflict__free((void *)*in_ECX);
            *in_ECX = 0;
          }
          else if (*in_ECX == 0) {
            iVar4 = FUN_004c554b();
            *in_ECX = iVar4;
          }
          else {
            iVar4 = FUN_004c553b(*in_ECX,uVar3 * 4);
            *in_ECX = iVar4;
          }
          in_ECX[1] = uVar3;
          iVar4 = local_1018;
        }
      }
      iVar2 = in_ECX[2];
      in_ECX[2] = iVar2 + 1;
      puVar8 = (undefined4 *)(*in_ECX + iVar2 * 4);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = local_1028;
        local_1028 = &DAT_00bfe12c;
      }
      piVar7 = (int *)(local_1028 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      iVar9 = iVar9 + 1;
      local_1020 = (void *)((int)local_1020 + 4);
      puVar8 = local_101c;
    } while (iVar9 < iVar4);
  }
  iVar4 = local_1018;
  iVar9 = 0;
  if (0 < local_1018) {
    do {
      piVar7 = (int *)(*(int *)((int)puVar8 + iVar9 * 4) + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar4);
  }
  FID_conflict__free(puVar8);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

