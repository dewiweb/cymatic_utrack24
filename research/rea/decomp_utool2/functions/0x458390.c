// rea decompile_all
// name: FUN_00458390
// address: 0x458390
// body: available
// range: 0x458390-0x45853d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00458390(int param_1,DWORD param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  HANDLE pvVar5;
  DWORD DVar6;
  int *in_ECX;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007005d8;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *in_ECX = 0;
  in_ECX[1] = 1;
  piVar3 = (int *)FUN_00629d10(&local_14,0x5c,0x2f);
  iVar1 = *piVar3;
  *piVar3 = param_1;
  piVar3 = (int *)(local_14 + -8);
  param_1 = iVar1;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_00637690(&param_1);
  local_8._0_1_ = 1;
  puVar4 = (undefined4 *)FUN_00458890(uVar2);
  pvVar5 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,1,(LPCWSTR)*puVar4);
  local_8._0_1_ = 0;
  piVar3 = (int *)(local_14 + -8);
  *in_ECX = (int)pvVar5;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (*in_ECX == 0) {
    FUN_00637690(&param_1);
    local_8._0_1_ = 2;
    puVar4 = (undefined4 *)FUN_00458890();
    pvVar5 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,1,(LPCWSTR)*puVar4);
    piVar3 = (int *)(local_14 + -8);
    *in_ECX = (int)pvVar5;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    if (*in_ECX == 0) goto LAB_00458509;
  }
  DVar6 = GetLastError();
  if (DVar6 == 0xb7) {
    if (param_2 == 0) {
      if ((HANDLE)*in_ECX != (HANDLE)0x0) {
        ReleaseMutex((HANDLE)*in_ECX);
        CloseHandle((HANDLE)*in_ECX);
        *in_ECX = 0;
      }
    }
    else {
      DVar6 = param_2;
      if ((int)param_2 < 0) {
        DVar6 = 0xffffffff;
      }
      DVar6 = WaitForSingleObject((HANDLE)*in_ECX,DVar6);
      if ((DVar6 != 0) && (DVar6 != 0x80)) {
        FUN_00458540();
      }
    }
  }
LAB_00458509:
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return;
}

