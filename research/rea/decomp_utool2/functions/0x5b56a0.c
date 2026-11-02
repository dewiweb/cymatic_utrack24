// rea decompile_all
// name: FUN_005b56a0
// address: 0x5b56a0
// body: available
// range: 0x5b56a0-0x5b5add inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b56a0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uintptr_t uVar6;
  HANDLE hThread;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  int iVar12;
  bool bVar13;
  int *local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar11 = EnterCriticalSection_exref;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00719419;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x13c));
  local_8 = 0;
  do {
    iVar8 = -1;
    local_14 = -1;
    uVar9 = 0;
    bVar13 = *(int *)(in_ECX + 0x54) == 0;
    if (bVar13) {
      iVar8 = 0;
      local_14 = 0;
    }
    else {
      uVar9 = *(uint *)(*(int *)(in_ECX + 0x54) + 4) & 0xf000;
    }
    local_18 = (uint)!bVar13;
    uVar10 = (uint)!bVar13;
    if (*(int *)(in_ECX + 0xa0) == 0) {
      iVar8 = 1;
      local_14 = 1;
    }
    else {
      uVar10 = uVar10 + 1;
      local_18 = uVar10;
      if (uVar9 == 0) {
        uVar9 = *(uint *)(*(int *)(in_ECX + 0xa0) + 4) & 0xf000;
      }
    }
    if (*(int *)(in_ECX + 0xec) == 0) {
      iVar8 = 2;
      local_14 = 2;
    }
    else {
      uVar10 = uVar10 + 1;
      local_18 = uVar10;
      if (uVar9 == 0) {
        uVar9 = *(uint *)(*(int *)(in_ECX + 0xec) + 4) & 0xf000;
      }
    }
    if (*(int *)(in_ECX + 0x138) == 0) {
      local_14 = 3;
    }
    else {
      local_18 = uVar10 + 1;
      if (uVar9 == 0) {
        uVar9 = *(uint *)(*(int *)(in_ECX + 0x138) + 4) & 0xf000;
      }
      if (iVar8 < 0) break;
    }
    iVar8 = *(int *)(in_ECX + 0x15c);
    if (iVar8 == 0) break;
    if (uVar9 == 0) {
      if (*(int *)(in_ECX + 0x15c) == 0) {
        uVar7 = 0;
      }
      else {
        puVar1 = *(undefined4 **)(in_ECX + 0x154);
        iVar8 = *(int *)(in_ECX + 0x15c) + -1;
        uVar7 = *puVar1;
        *(int *)(in_ECX + 0x15c) = iVar8;
        if (0 < iVar8) {
          FUN_004c1df0(puVar1,puVar1 + 1,iVar8 * 4,uVar4);
        }
        iVar8 = *(int *)(in_ECX + 0x15c);
        iVar5 = 0;
        if (0 < iVar8 * 2) {
          iVar5 = iVar8 * 2;
        }
        if (iVar5 < *(int *)(in_ECX + 0x158)) {
          if (iVar8 < 0x10) {
            iVar8 = 0x10;
          }
          if (iVar8 < *(int *)(in_ECX + 0x158)) {
            FUN_00409cf0(iVar8);
          }
        }
      }
      pcVar11 = EnterCriticalSection_exref;
      *(undefined4 *)(local_14 * 0x4c + 0x54 + in_ECX) = uVar7;
    }
    else {
      uVar10 = 0;
      if (0 < iVar8) {
        do {
          if (uVar10 < *(uint *)(in_ECX + 0x15c)) {
            iVar5 = *(int *)(*(int *)(in_ECX + 0x154) + uVar10 * 4);
          }
          else {
            iVar5 = 0;
          }
          if (uVar9 == (*(uint *)(iVar5 + 4) & 0xf000)) {
            if (uVar10 < *(uint *)(in_ECX + 0x15c)) {
              puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x154) + uVar10 * 4);
              local_1c = *puVar1;
              iVar8 = *(uint *)(in_ECX + 0x15c) - 1;
              *(int *)(in_ECX + 0x15c) = iVar8;
              iVar8 = iVar8 - uVar10;
              if (0 < iVar8) {
                FUN_004c1df0(puVar1,puVar1 + 1,iVar8 * 4,uVar4);
              }
              iVar8 = *(int *)(in_ECX + 0x15c);
              iVar5 = 0;
              if (0 < iVar8 * 2) {
                iVar5 = iVar8 * 2;
              }
              if (iVar5 < *(int *)(in_ECX + 0x158)) {
                if (iVar8 < 0x10) {
                  iVar8 = 0x10;
                }
                if (iVar8 < *(int *)(in_ECX + 0x158)) {
                  FUN_00409cf0(iVar8);
                }
              }
            }
            else {
              local_1c = 0;
            }
            pcVar11 = EnterCriticalSection_exref;
            *(undefined4 *)(local_14 * 0x4c + 0x54 + in_ECX) = local_1c;
            break;
          }
          uVar10 = uVar10 + 1;
          pcVar11 = EnterCriticalSection_exref;
        } while ((int)uVar10 < iVar8);
      }
    }
    iVar8 = local_14 * 0x4c + in_ECX;
    if (*(int **)(iVar8 + 0x54) == (int *)0x0) break;
    *(int *)(iVar8 + 0x50) = local_14;
    (**(code **)(**(int **)(iVar8 + 0x54) + 4))();
    (*pcVar11)(iVar8 + 0x1c);
    *(undefined1 *)(iVar8 + 0x48) = 0;
    if (*(int *)(iVar8 + 0x14) == 0) {
      uVar6 = __beginthreadex((void *)0x0,*(uint *)(iVar8 + 0x40),FUN_00611a60,(void *)(iVar8 + 0xc)
                              ,0,(uint *)&local_20);
      *(uintptr_t *)(iVar8 + 0x14) = uVar6;
      iVar12 = 0xf;
      hThread = *(HANDLE *)(iVar8 + 0x14);
      *(int **)(iVar8 + 0x18) = local_20;
      iVar5 = *(int *)(iVar8 + 0x3c);
      if (iVar5 < 1) {
        iVar12 = -0xf;
      }
      else if (iVar5 < 2) {
        iVar12 = -2;
      }
      else if (iVar5 < 5) {
        iVar12 = -1;
      }
      else if (iVar5 < 7) {
        iVar12 = 0;
      }
      else if (iVar5 < 9) {
        iVar12 = 1;
      }
      else if (iVar5 < 10) {
        iVar12 = 2;
      }
      if (hThread == (HANDLE)0x0) {
        hThread = GetCurrentThread();
      }
      SetThreadPriority(hThread,iVar12);
      SetEvent(*(HANDLE *)(iVar8 + 0x34));
      pcVar11 = EnterCriticalSection_exref;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar8 + 0x1c));
    local_18 = local_18 + 1;
  } while ((int)local_18 < 4);
  iVar8 = *(int *)(in_ECX + 0x168);
  while (iVar8 != 0) {
    if (*(int *)(in_ECX + 0x168) != 0) {
      puVar1 = *(undefined4 **)(in_ECX + 0x160);
      local_20 = (int *)*puVar1;
      iVar8 = *(int *)(in_ECX + 0x168) + -1;
      *(int *)(in_ECX + 0x168) = iVar8;
      if (0 < iVar8) {
        FUN_004c1df0(puVar1,puVar1 + 1,iVar8 * 4,uVar4);
      }
      iVar8 = *(int *)(in_ECX + 0x168);
      iVar5 = *(int *)(in_ECX + 0x164);
      iVar12 = 0;
      if (0 < iVar8 * 2) {
        iVar12 = iVar8 * 2;
      }
      if (iVar12 < iVar5) {
        if (iVar8 < 0x10) {
          iVar8 = 0x10;
        }
        if ((iVar8 < iVar5) && (iVar5 != iVar8)) {
          if (iVar8 < 1) {
            FID_conflict__free(*(void **)(in_ECX + 0x160));
            *(undefined4 *)(in_ECX + 0x160) = 0;
          }
          else if (*(int *)(in_ECX + 0x160) == 0) {
            uVar7 = FUN_004c554b();
            *(undefined4 *)(in_ECX + 0x160) = uVar7;
          }
          else {
            uVar7 = FUN_004c553b(*(int *)(in_ECX + 0x160),iVar8 * 4);
            *(undefined4 *)(in_ECX + 0x160) = uVar7;
          }
          *(int *)(in_ECX + 0x164) = iVar8;
        }
      }
      piVar2 = local_20;
      if (local_20 != (int *)0x0) {
        *(undefined1 *)(in_ECX + 0x16d) = 1;
        iVar8 = local_20[2];
        (**(code **)(*local_20 + 0xc))();
        if ((char)iVar8 != '\0') {
          (**(code **)*piVar2)(1);
        }
        *(undefined1 *)(in_ECX + 0x16d) = 0;
      }
    }
    iVar8 = *(int *)(in_ECX + 0x168);
  }
  if ((local_18 == 0) && (*(int *)(in_ECX + 0x15c) == 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)(in_ECX + 0x16c) = uVar3;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x13c));
  ExceptionList = local_10;
  return;
}

