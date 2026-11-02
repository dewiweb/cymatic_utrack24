// rea decompile_all
// name: FUN_005aa950
// address: 0x5aa950
// body: available
// range: 0x5aa950-0x5aaaf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aa950(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uVar10;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717d69;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar8 = 0;
  if (0 < *(int *)(in_ECX + 0x11c0)) {
    bVar9 = *(int *)(in_ECX + 0x11c0) != 0;
    iVar1 = *(int *)ThreadLocalStoragePointer;
    do {
      if (bVar9) {
        iVar6 = *(int *)(*(int *)(in_ECX + 0x11b8) + uVar8 * 4);
      }
      else {
        iVar6 = 0;
      }
      if ((*(int *)(iVar1 + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,uVar4), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_18,"DRIVE");
      iVar2 = local_18;
      local_8 = 0;
      piVar5 = *(int **)(iVar6 + 0x58);
      piVar7 = piVar5 + *(int *)(iVar6 + 0x60) * 6;
      for (; (piVar5 != piVar7 && (*piVar5 != local_18)); piVar5 = piVar5 + 6) {
      }
      FUN_006318f0(&local_14);
      piVar7 = (int *)(iVar2 + -8);
      local_8 = CONCAT31(local_8._1_3_,2);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      uVar10 = 0;
      uVar3 = FUN_005b0530(0);
      FUN_006e5380(uVar3,uVar10);
      local_8 = 0xffffffff;
      piVar7 = (int *)(local_14 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      uVar8 = uVar8 + 1;
      bVar9 = uVar8 < *(uint *)(in_ECX + 0x11c0);
    } while ((int)uVar8 < (int)*(uint *)(in_ECX + 0x11c0));
  }
  ExceptionList = local_10;
  return;
}

