// rea decompile_all
// name: FUN_005aad40
// address: 0x5aad40
// body: available
// range: 0x5aad40-0x5aaebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aad40(void)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int local_10;
  int local_c;
  
  uVar8 = 0;
  if (0 < *(int *)(in_ECX + 0x198)) {
    local_c = *(int *)ThreadLocalStoragePointer;
    do {
      if ((*(int *)(local_c + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_10,&DAT_00748288);
      iVar1 = local_10;
      if (uVar8 < *(uint *)(in_ECX + 0x198)) {
        iVar6 = *(int *)(*(int *)(in_ECX + 400) + uVar8 * 4);
      }
      else {
        iVar6 = 0;
      }
      piVar3 = *(int **)(iVar6 + 0x58);
      piVar7 = piVar3 + *(int *)(iVar6 + 0x60) * 6;
      for (; piVar3 != piVar7; piVar3 = piVar3 + 6) {
        if (*piVar3 == local_10) {
          ppuVar4 = (undefined **)(piVar3 + 2);
          if (ppuVar4 != (undefined **)0x0) goto LAB_005aadd7;
          break;
        }
      }
      ppuVar4 = &PTR_PTR_00c7ed58;
LAB_005aadd7:
      uVar5 = (**(code **)(*(int *)*ppuVar4 + 4))(ppuVar4 + 2);
      piVar7 = (int *)(iVar1 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      uVar9 = 0;
      uVar2 = FUN_005b2750(uVar5,0);
      FUN_006e5380(uVar2,uVar9);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < *(int *)(in_ECX + 0x198));
  }
  return;
}

