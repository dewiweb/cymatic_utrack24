// rea decompile_all
// name: FUN_005b5ae0
// address: 0x5b5ae0
// body: available
// range: 0x5b5ae0-0x5b5d38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b5ae0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  BOOL BVar6;
  int in_ECX;
  int iVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071943c;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x13c));
  piVar8 = (int *)(in_ECX + 0x54);
  local_8 = 0;
  iVar9 = 4;
  do {
    piVar1 = (int *)*piVar8;
    if ((piVar1 != (int *)0x0) && (piVar1 == param_1)) {
      (**(code **)(*piVar1 + 0x10))(uVar3);
    }
    piVar8 = piVar8 + 0x13;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  uVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x15c)) {
    bVar10 = *(int *)(in_ECX + 0x15c) != 0;
    do {
      if (bVar10) {
        piVar8 = *(int **)(*(int *)(in_ECX + 0x154) + uVar3 * 4);
      }
      else {
        piVar8 = (int *)0x0;
      }
      if (piVar8 == param_1) {
        if (uVar3 < *(uint *)(in_ECX + 0x15c)) {
          piVar8 = *(int **)(*(int *)(in_ECX + 0x154) + uVar3 * 4);
        }
        else {
          piVar8 = (int *)0x0;
        }
        (**(code **)(*piVar8 + 0x10))();
        if (uVar3 < *(uint *)(in_ECX + 0x15c)) {
          piVar8 = *(int **)(*(int *)(in_ECX + 0x154) + uVar3 * 4);
        }
        else {
          piVar8 = (int *)0x0;
        }
        (**(code **)(*piVar8 + 0xc))();
        if (uVar3 < *(uint *)(in_ECX + 0x15c)) {
          iVar9 = *(int *)(*(int *)(in_ECX + 0x154) + uVar3 * 4);
        }
        else {
          iVar9 = 0;
        }
        if (((*(char *)(iVar9 + 8) != '\0') && (uVar3 < *(uint *)(in_ECX + 0x15c))) &&
           (puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x154) + uVar3 * 4),
           puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        if (uVar3 < *(uint *)(in_ECX + 0x15c)) {
          iVar7 = *(uint *)(in_ECX + 0x15c) - 1;
          *(int *)(in_ECX + 0x15c) = iVar7;
          iVar7 = iVar7 - uVar3;
          iVar9 = *(int *)(in_ECX + 0x154) + uVar3 * 4;
          if (0 < iVar7) {
            FUN_004c1df0(iVar9,iVar9 + 4,iVar7 * 4);
          }
          iVar9 = *(int *)(in_ECX + 0x15c);
          iVar7 = *(int *)(in_ECX + 0x158);
          iVar4 = 0;
          if (0 < iVar9 * 2) {
            iVar4 = iVar9 * 2;
          }
          if (iVar4 < iVar7) {
            if (iVar9 < 0x10) {
              iVar9 = 0x10;
            }
            if ((iVar9 < iVar7) && (iVar7 != iVar9)) {
              if (iVar9 < 1) {
                FID_conflict__free(*(void **)(in_ECX + 0x154));
                *(undefined4 *)(in_ECX + 0x154) = 0;
              }
              else if (*(int *)(in_ECX + 0x154) == 0) {
                uVar5 = FUN_004c554b();
                *(undefined4 *)(in_ECX + 0x154) = uVar5;
              }
              else {
                uVar5 = FUN_004c553b(*(int *)(in_ECX + 0x154),iVar9 * 4);
                *(undefined4 *)(in_ECX + 0x154) = uVar5;
              }
              *(int *)(in_ECX + 0x158) = iVar9;
            }
          }
        }
      }
      else {
        uVar3 = uVar3 + 1;
      }
      bVar10 = uVar3 < *(uint *)(in_ECX + 0x15c);
    } while ((int)uVar3 < (int)*(uint *)(in_ECX + 0x15c));
  }
  piVar8 = (int *)(*(int *)(in_ECX + 4) + 0xc);
  LOCK();
  iVar9 = *piVar8;
  if (iVar9 == 0) {
    *piVar8 = 1;
    iVar9 = 0;
  }
  UNLOCK();
  if (iVar9 == 0) {
    puVar2 = *(undefined4 **)(in_ECX + 4);
    if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) {
      LOCK();
      puVar2[1] = puVar2[1] + 1;
      UNLOCK();
      BVar6 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)puVar2);
      if (BVar6 != 0) goto LAB_005b5d12;
    }
    if (puVar2 != (undefined4 *)0x0) {
      piVar8 = puVar2 + 1;
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
      LOCK();
      iVar9 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)*puVar2)(1);
      }
    }
    LOCK();
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0xc) = 0;
    UNLOCK();
  }
LAB_005b5d12:
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x13c));
  ExceptionList = local_10;
  return;
}

