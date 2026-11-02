// rea decompile_all
// name: FUN_005aeac0
// address: 0x5aeac0
// body: available
// range: 0x5aeac0-0x5aec90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aeac0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  int in_ECX;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int local_28;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00718500;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar9 = 0;
  local_14 = uVar3;
  if (0 < *(int *)(in_ECX + 0x374)) {
    iVar2 = *(int *)ThreadLocalStoragePointer;
    do {
      if ((*(int *)(iVar2 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,uVar3), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_28,&DAT_0074862c);
      iVar1 = local_28;
      if (uVar9 < *(uint *)(in_ECX + 0x374)) {
        iVar7 = *(int *)(*(int *)(in_ECX + 0x36c) + uVar9 * 4);
      }
      else {
        iVar7 = 0;
      }
      piVar4 = *(int **)(iVar7 + 0x58);
      piVar8 = piVar4 + *(int *)(iVar7 + 0x60) * 6;
      for (; piVar4 != piVar8; piVar4 = piVar4 + 6) {
        if (*piVar4 == local_28) {
          ppuVar5 = (undefined **)(piVar4 + 2);
          if (ppuVar5 != (undefined **)0x0) goto LAB_005aebdc;
          break;
        }
      }
      ppuVar5 = &PTR_PTR_00c7ed58;
LAB_005aebdc:
      (**(code **)(*(int *)*ppuVar5 + 4))(ppuVar5 + 2);
      piVar8 = (int *)(iVar1 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      local_8 = 0;
      puVar6 = (undefined4 *)FUN_0063bf80(local_24);
      (**(code **)(*(int *)*puVar6 + 0x14))(puVar6 + 2);
      (**(code **)(*local_24[0] + 0x54))(local_1c);
      local_8 = 0xffffffff;
      FUN_005b0200();
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < *(int *)(in_ECX + 0x374));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

