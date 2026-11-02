// rea decompile_all
// name: FUN_0062ef90
// address: 0x62ef90
// body: available
// range: 0x62ef90-0x62f289 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0062ef90(undefined4 param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  void *pvVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  uint uVar7;
  DWORD DVar8;
  int *piVar9;
  DWORD DVar10;
  int *in_ECX;
  int iVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  uint local_3c;
  int local_30;
  uint local_20;
  uint local_1c;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071e345;
  local_10 = ExceptionList;
  uVar7 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_3c = 0;
  iVar13 = 0;
  local_30 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 6);
  EnterCriticalSection(lpCriticalSection);
  uVar3 = in_ECX[2];
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    iVar4 = *(int *)(*in_ECX + uVar3 * 4);
    if (*(char *)(iVar4 + 0xd) == '\0') {
      if (uVar3 < (uint)in_ECX[2]) {
        FUN_00410320(uVar3);
      }
      *(undefined1 *)(iVar4 + 0xc) = 1;
      *(undefined4 *)(iVar4 + 8) = 0;
      if (*(char *)(iVar4 + 0xe) != '\0') {
        iVar11 = iVar13 + 1;
        iVar14 = iVar13;
        if (0 < iVar11) {
          if (iVar11 < 0) {
            iVar11 = iVar13 + 2;
          }
          FUN_00409cf0((iVar11 >> 1) + iVar13 + 9 & 0xfffffff8);
          iVar14 = local_30;
        }
        iVar13 = iVar14 + 1;
        *(int *)(iVar14 * 4) = iVar4;
        local_30 = iVar13;
      }
    }
    else {
      iVar11 = local_1c + 1;
      if (0 < iVar11) {
        if (iVar11 < 0) {
          iVar11 = local_1c + 2;
        }
        FUN_00409cf0((iVar11 >> 1) + local_1c + 9 & 0xfffffff8);
        local_1c = local_3c;
      }
      local_3c = local_1c + 1;
      if ((int *)(local_1c * 4) != (int *)0x0) {
        *(int *)(local_1c * 4) = iVar4;
      }
      *(undefined1 *)(iVar4 + 0xc) = 1;
      local_1c = local_3c;
    }
  }
  local_14 = (void *)0x0;
  local_20 = 0;
  LeaveCriticalSection(lpCriticalSection);
  while (0 < iVar13) {
    puVar5 = *(undefined4 **)(iVar13 * 4 + -4);
    iVar13 = iVar13 + -1;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1,uVar7);
    }
  }
  FID_conflict__free((void *)0x0);
  DVar8 = timeGetTime();
  uVar3 = local_1c;
  if ((DAT_00c8a644 <= DVar8) || (DVar8 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar8;
  }
  do {
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      iVar13 = *(int *)((int)local_14 + uVar3 * 4);
      pvVar1 = (void *)((int)local_14 + uVar3 * 4);
      EnterCriticalSection(lpCriticalSection);
      piVar9 = (int *)*in_ECX;
      piVar2 = piVar9 + in_ECX[2];
      for (; piVar9 != piVar2; piVar9 = piVar9 + 1) {
        if (iVar13 == *piVar9) {
          if (*(char *)(iVar13 + 0xd) != '\0') {
            bVar6 = true;
            goto LAB_0062f158;
          }
          break;
        }
      }
      bVar6 = false;
LAB_0062f158:
      LeaveCriticalSection(lpCriticalSection);
      if ((!bVar6) && (uVar3 < local_1c)) {
        local_1c = local_1c - 1;
        if (0 < (int)(local_1c - uVar3)) {
          FUN_004c1df0(pvVar1,(int)pvVar1 + 4,(local_1c - uVar3) * 4);
        }
        iVar13 = 0;
        if (0 < (int)(local_1c * 2)) {
          iVar13 = local_1c * 2;
        }
        if (iVar13 < (int)local_20) {
          uVar7 = local_1c;
          if ((int)local_1c < 0x10) {
            uVar7 = 0x10;
          }
          if (((int)uVar7 < (int)local_20) && (local_20 != uVar7)) {
            local_20 = uVar7;
            if ((int)uVar7 < 1) {
              FID_conflict__free(local_14);
              local_14 = (void *)0x0;
            }
            else if (local_14 == (void *)0x0) {
              local_14 = (void *)FUN_004c554b();
            }
            else {
              local_14 = (void *)FUN_004c553b(local_14,uVar7 * 4);
            }
          }
        }
      }
    }
    if (local_1c == 0) {
      uVar12 = 1;
      goto LAB_0062f269;
    }
    DVar10 = timeGetTime();
    if ((DAT_00c8a644 <= DVar10) || (DVar10 < DAT_00c8a644 - 1000)) {
      DAT_00c8a644 = DVar10;
    }
    if (DVar8 + param_2 <= DVar10) {
      uVar12 = 0;
LAB_0062f269:
      FID_conflict__free(local_14);
      ExceptionList = local_10;
      return uVar12;
    }
    WaitForSingleObject((HANDLE)in_ECX[0xc],0x14);
    uVar3 = local_1c;
  } while( true );
}

