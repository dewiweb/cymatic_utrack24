// rea decompile_all
// name: FUN_006386f0
// address: 0x6386f0
// body: available
// range: 0x6386f0-0x638b09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_006386f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  int in_ECX;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  undefined1 *puVar11;
  char *pcVar12;
  int local_34 [2];
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 *local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f038;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar11 = local_2c;
  pcVar12 = "PROPERTIES";
  local_34[0] = 0;
  local_34[1] = 0;
  FUN_0061f730(puVar11,"PROPERTIES",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  FUN_0061fa00(puVar11,pcVar12);
  uVar10 = 0;
  local_8 = 0;
  if (0 < *(int *)(in_ECX + 0xc)) {
    local_1c = *(int *)ThreadLocalStoragePointer;
    do {
      local_18 = operator_new(0x10);
      piVar9 = local_18 + 1;
      local_8._0_1_ = 1;
      *local_18 = 0;
      *piVar9 = 0;
      local_18[2] = 0;
      pcVar12 = "VALUE";
      if ((*(int *)(local_1c + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24,"VALUE"), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061f8b0(local_18 + 3,pcVar12);
      local_8 = (uint)local_8._1_3_ << 8;
      piVar8 = local_34;
      iVar5 = local_34[0];
      while (iVar5 != 0) {
        piVar8 = (int *)*piVar8;
        iVar5 = *piVar8;
      }
      *piVar8 = (int)local_18;
      if ((*(int *)(local_1c + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_20,&DAT_00c02010);
      local_8._0_1_ = 2;
      if (uVar10 < *(uint *)(in_ECX + 0xc)) {
        ppuVar6 = (undefined **)(*(int *)(in_ECX + 4) + uVar10 * 4);
      }
      else {
        ppuVar6 = &PTR_DAT_00c7ed68;
      }
      FUN_00634ca0(&local_20,ppuVar6);
      local_8 = (uint)local_8._1_3_ << 8;
      piVar8 = (int *)(local_20 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      iVar5 = FUN_0062af90();
      if (iVar5 == 0) {
        if ((*(int *)(local_1c + 4) < DAT_00cfff24) &&
           (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
          DAT_00cfff50 = 0;
          _DAT_00cfff54 = 0;
          _DAT_00cfff58 = 0;
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
          _DAT_00cfff74 = 0;
          _atexit((_func_4879 *)&LAB_0072a350);
          FUN_004c0352(&DAT_00cfff24);
        }
        FUN_0061fa00(&local_24,&DAT_00c0200c);
        local_8._0_1_ = 3;
        if (uVar10 < *(uint *)(in_ECX + 0x18)) {
          ppuVar6 = (undefined **)(*(int *)(in_ECX + 0x10) + uVar10 * 4);
        }
        else {
          ppuVar6 = &PTR_DAT_00c7ed68;
        }
        FUN_00634ca0(&local_24,ppuVar6);
        local_8 = (uint)local_8._1_3_ << 8;
        piVar9 = (int *)(local_24 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar9);
          }
        }
      }
      else {
        iVar1 = *piVar9;
        while (iVar1 != 0) {
          piVar9 = (int *)*piVar9;
          iVar1 = *piVar9;
        }
        *piVar9 = iVar5;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < *(int *)(in_ECX + 0xc));
  }
  if (*(int *)(in_ECX + 0x90) == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = operator_new(8);
    local_8 = CONCAT31(local_8._1_3_,4);
    *puVar7 = *(undefined4 *)(in_ECX + 0x90);
    local_28 = puVar7;
    uVar3 = FUN_00611760(0xffffffff);
    *(undefined1 *)(puVar7 + 1) = uVar3;
  }
  local_8 = CONCAT31(local_8._1_3_,5);
  local_28 = puVar7;
  if ((puVar7 == (undefined4 *)0x0) || (*(char *)(puVar7 + 1) != '\0')) {
    local_24 = &DAT_00bfe12c;
    local_8 = CONCAT31(local_8._1_3_,6);
    cVar4 = FUN_00634df0(in_ECX + 0x70,&DAT_00bfe12c,"UTF-8",0x3c);
    if (cVar4 != '\0') {
      *(undefined1 *)(in_ECX + 0x95) = 0;
      local_11 = 1;
      goto LAB_00638a8a;
    }
  }
  local_11 = 0;
LAB_00638a8a:
  if (puVar7 != (undefined4 *)0x0) {
    piVar9 = (int *)*puVar7;
    EnterCriticalSection((LPCRITICAL_SECTION)(piVar9 + 1));
    if (*piVar9 != 0) {
      piVar8 = (int *)(*piVar9 + 4);
      *piVar8 = *piVar8 + -1;
      if ((*piVar8 == 0) && (puVar2 = (undefined4 *)*piVar9, puVar2 != (undefined4 *)0x0)) {
        *piVar9 = 0;
        if ((HANDLE)*puVar2 != (HANDLE)0x0) {
          ReleaseMutex((HANDLE)*puVar2);
          CloseHandle((HANDLE)*puVar2);
          *puVar2 = 0;
        }
        FUN_004bfe14(puVar2,8);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar9 + 1));
    FUN_004bfe14(puVar7,8);
  }
  FUN_00634ec0();
  ExceptionList = local_10;
  return local_11;
}

