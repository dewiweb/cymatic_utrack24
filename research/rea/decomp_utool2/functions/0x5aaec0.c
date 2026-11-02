// rea decompile_all
// name: FUN_005aaec0
// address: 0x5aaec0
// body: available
// range: 0x5aaec0-0x5ab216 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aaec0(char param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  int local_30;
  int local_2c;
  uint local_28;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717dcd;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar8 = 0;
  local_14 = uVar3;
  if (param_1 == '\0') {
    local_28 = 0;
    if (0 < *(int *)(in_ECX + 0x214)) {
      iVar1 = *(int *)ThreadLocalStoragePointer;
      do {
        uVar8 = local_28;
        if ((*(int *)(iVar1 + 4) < DAT_00cfff24) &&
           (FUN_004c0391(&DAT_00cfff24,uVar3), DAT_00cfff24 == -1)) {
          DAT_00cfff50 = 0;
          _DAT_00cfff54 = 0;
          _DAT_00cfff58 = 0;
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
          _DAT_00cfff74 = 0;
          _atexit((_func_4879 *)&LAB_0072a350);
          FUN_004c0352(&DAT_00cfff24);
        }
        FUN_0061fa00(&local_30,&DAT_0074828c);
        iVar7 = local_30;
        if (uVar8 < *(uint *)(in_ECX + 0x214)) {
          iVar10 = *(int *)(*(int *)(in_ECX + 0x20c) + uVar8 * 4);
        }
        else {
          iVar10 = 0;
        }
        piVar4 = *(int **)(iVar10 + 0x58);
        piVar9 = piVar4 + *(int *)(iVar10 + 0x60) * 6;
        for (; piVar4 != piVar9; piVar4 = piVar4 + 6) {
          if (*piVar4 == local_30) {
            ppuVar5 = (undefined **)(piVar4 + 2);
            if (ppuVar5 != (undefined **)0x0) goto LAB_005ab14e;
            break;
          }
        }
        ppuVar5 = &PTR_PTR_00c7ed58;
LAB_005ab14e:
        local_2c = (**(code **)(*(int *)*ppuVar5 + 4))(ppuVar5 + 2);
        piVar9 = (int *)(iVar7 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        local_8 = 0;
        puVar6 = (undefined4 *)FUN_0063bf80(local_24);
        (**(code **)(*(int *)*puVar6 + 0x14))(puVar6 + 2);
        (**(code **)(*local_24[0] + 0x54))(local_1c);
        local_8 = 0xffffffff;
        FUN_005b0200();
        local_28 = local_28 + 1;
      } while ((int)local_28 < *(int *)(in_ECX + 0x214));
    }
    if (*(int *)(in_ECX + 0x13fc) != 0) {
      FUN_0040aff0();
    }
  }
  else {
    if (0 < *(int *)(in_ECX + 0x214)) {
      local_30 = *(int *)ThreadLocalStoragePointer;
      do {
        if ((*(int *)(local_30 + 4) < DAT_00cfff24) &&
           (FUN_004c0391(&DAT_00cfff24,uVar3), DAT_00cfff24 == -1)) {
          DAT_00cfff50 = 0;
          _DAT_00cfff54 = 0;
          _DAT_00cfff58 = 0;
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
          _DAT_00cfff74 = 0;
          _atexit((_func_4879 *)&LAB_0072a350);
          FUN_004c0352(&DAT_00cfff24);
        }
        FUN_0061fa00(&local_2c,&DAT_00748290);
        iVar1 = local_2c;
        if (uVar8 < *(uint *)(in_ECX + 0x214)) {
          iVar7 = *(int *)(*(int *)(in_ECX + 0x20c) + uVar8 * 4);
        }
        else {
          iVar7 = 0;
        }
        piVar4 = *(int **)(iVar7 + 0x58);
        piVar9 = piVar4 + *(int *)(iVar7 + 0x60) * 6;
        for (; piVar4 != piVar9; piVar4 = piVar4 + 6) {
          if (*piVar4 == local_2c) {
            ppuVar5 = (undefined **)(piVar4 + 2);
            if (ppuVar5 != (undefined **)0x0) goto LAB_005aafd7;
            break;
          }
        }
        ppuVar5 = &PTR_PTR_00c7ed58;
LAB_005aafd7:
        local_28 = (**(code **)(*(int *)*ppuVar5 + 4))(ppuVar5 + 2);
        piVar9 = (int *)(iVar1 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        uVar11 = 0;
        uVar2 = FUN_005b2750(local_28,0);
        FUN_006e5380(uVar2,uVar11);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < *(int *)(in_ECX + 0x214));
    }
    if (*(int *)(in_ECX + 0x13fc) != 0) {
      *(undefined1 *)(*(int *)(in_ECX + 0x13fc) + 0x7c) = 1;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

