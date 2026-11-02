// rea decompile_all
// name: FUN_00606ea0
// address: 0x606ea0
// body: available
// range: 0x606ea0-0x6070c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00606ea0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  BOOL BVar9;
  int in_ECX;
  int *piVar10;
  int iVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c212;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x50));
  local_8 = 0;
  iVar11 = *(int *)(in_ECX + 0x24) + -1;
  if (-1 < iVar11) {
    piVar10 = (int *)(*(int *)(in_ECX + 0x1c) + iVar11 * 4);
    iVar8 = *(int *)(param_1 + 0x18);
    do {
      iVar2 = *piVar10;
      if (*(int *)(iVar2 + 0x18) != iVar8) {
        do {
          iVar4 = FUN_00443260(uVar3);
          iVar5 = FUN_00443260();
          if ((iVar4 - iVar5 != 0) && ((iVar4 - iVar5 >> 0x1f & 0xfffffffeU) != 0xffffffff))
          goto LAB_00606f76;
        } while (iVar4 != 0);
      }
      if (*(int *)(iVar2 + 0x30) == *(int *)(param_1 + 0x30)) {
        FUN_006072e0(param_1);
        LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x50));
        ExceptionList = local_10;
        return 0;
      }
LAB_00606f76:
      piVar10 = piVar10 + -1;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
  }
  operator_new(0x48);
  uVar6 = FUN_006074b0(param_1);
  iVar11 = *(int *)(in_ECX + 0x24);
  iVar8 = 0;
  if (iVar11 < 0) {
    iVar8 = iVar11;
  }
  if ((*(int *)(in_ECX + 0x20) < iVar11 + 1) &&
     (uVar3 = iVar11 + 9 + (iVar11 + 1) / 2 & 0xfffffff8, *(uint *)(in_ECX + 0x20) != uVar3)) {
    if ((int)uVar3 < 1) {
      FID_conflict__free(*(void **)(in_ECX + 0x1c));
      *(undefined4 *)(in_ECX + 0x1c) = 0;
    }
    else if (*(int *)(in_ECX + 0x1c) == 0) {
      uVar7 = FUN_004c554b();
      *(undefined4 *)(in_ECX + 0x1c) = uVar7;
    }
    else {
      uVar7 = FUN_004c553b(*(int *)(in_ECX + 0x1c),uVar3 * 4);
      *(undefined4 *)(in_ECX + 0x1c) = uVar7;
    }
    *(uint *)(in_ECX + 0x20) = uVar3;
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x1c) + iVar8 * 4);
  iVar8 = *(int *)(in_ECX + 0x24) - iVar8;
  if (0 < iVar8) {
    FUN_004c1df0(puVar1 + 1,puVar1,iVar8 * 4);
  }
  *puVar1 = uVar6;
  *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x50));
  if (0 < *(int *)(in_ECX + 0x18)) {
    piVar10 = (int *)(*(int *)(in_ECX + 8) + 0xc);
    LOCK();
    iVar11 = *piVar10;
    if (iVar11 == 0) {
      *piVar10 = 1;
      iVar11 = 0;
    }
    UNLOCK();
    if (iVar11 == 0) {
      puVar1 = *(undefined4 **)(in_ECX + 8);
      if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) {
        LOCK();
        puVar1[1] = puVar1[1] + 1;
        UNLOCK();
        BVar9 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)puVar1);
        if (BVar9 != 0) {
          ExceptionList = local_10;
          return 1;
        }
      }
      if (puVar1 != (undefined4 *)0x0) {
        piVar10 = puVar1 + 1;
        LOCK();
        *piVar10 = *piVar10 + 1;
        UNLOCK();
        LOCK();
        iVar11 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)*puVar1)(1);
        }
      }
      LOCK();
      *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc) = 0;
      UNLOCK();
    }
  }
  ExceptionList = local_10;
  return 1;
}

