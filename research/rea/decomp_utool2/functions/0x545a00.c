// rea decompile_all
// name: FUN_00545a00
// address: 0x545a00
// body: available
// range: 0x545a00-0x545df6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00545a00(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar3;
  undefined4 extraout_ECX;
  int *in_EDX;
  undefined4 uVar4;
  int local_2c;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070f0f5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00c8a5c4 + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  local_8._0_1_ = 1;
  cVar2 = FUN_005b4fa0();
  if (cVar2 == '\0') {
    FUN_0045c990();
    local_8._0_1_ = 2;
    FUN_0045c990();
    local_8._0_1_ = 3;
    FUN_0045c990();
    local_8._0_1_ = 4;
    FUN_004ecce0(&local_14);
    piVar3 = (int *)(local_1c + -8);
    local_24 = local_18;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
        local_24 = local_18;
      }
    }
  }
  else {
    piVar3 = (int *)FUN_00410ad0();
    if (*in_EDX == *piVar3) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      local_18 = (undefined4 *)FUN_00448730(*in_EDX);
    }
    piVar3 = (int *)(local_20 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    if (local_18 == (undefined4 *)0x0) goto LAB_00545dbc;
    FUN_00410ea0();
    local_8._0_1_ = 5;
    FUN_00636040();
    local_8._0_1_ = 6;
    FUN_0045c990();
    local_8._0_1_ = 7;
    piVar3 = (int *)(*in_EDX + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    FUN_00637730();
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_00635a10(&local_1c);
    piVar3 = (int *)(local_2c + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,0xb);
    piVar3 = local_18 + -2;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    FUN_005b48e0();
    piVar3 = (int *)FUN_00410ad0();
    if (*in_EDX == *piVar3) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      local_18 = (undefined4 *)FUN_0045c1e0(*in_EDX);
    }
    piVar3 = (int *)(local_20 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    piVar3 = (int *)(local_1c + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    cVar2 = FUN_005b5020();
    if ((cVar2 == '\0') || (local_18 == (undefined4 *)0x0)) {
      local_18 = (undefined4 *)0x0;
      local_8._0_1_ = 0xf;
      cVar2 = FUN_005483b0();
      if (cVar2 != '\0') {
        FUN_00541b50();
        FUN_00548150();
      }
      if (local_18 != (undefined4 *)0x0) {
        LOCK();
        piVar3 = local_18 + 1;
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)*local_18)();
        }
      }
    }
    else {
      FUN_0045c990();
      local_8._0_1_ = 0xc;
      FUN_0045c990();
      local_8._0_1_ = 0xd;
      uVar4 = extraout_ECX;
      FUN_00637690(in_EDX);
      FUN_006377c0(uVar4);
      local_8._0_1_ = 0xe;
      FUN_004ecce0();
      FUN_00637c10();
      FUN_00637c10();
      FUN_00637c10();
    }
    piVar3 = (int *)(local_1c + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  }
  piVar3 = local_24 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_00548700();
LAB_00545dbc:
  FUN_00410a10();
  LeaveCriticalSection(lpCriticalSection);
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = param_1 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_1)();
    }
  }
  ExceptionList = local_10;
  return;
}

