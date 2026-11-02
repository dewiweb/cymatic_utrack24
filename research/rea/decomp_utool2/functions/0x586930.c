// rea decompile_all
// name: FUN_00586930
// address: 0x586930
// body: available
// range: 0x586930-0x586a76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00586930(int *param_1)

{
  int iVar1;
  HANDLE pvVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  LPCRITICAL_SECTION in_ECX;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071339d;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  InitializeCriticalSection(in_ECX);
  in_ECX[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  in_ECX[1].LockCount = 0;
  in_ECX[1].RecursionCount = 0;
  pvVar2 = (HANDLE)*param_1;
  in_ECX[1].OwningThread = pvVar2;
  piVar5 = (int *)((int)pvVar2 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  puVar6 = (undefined4 *)FUN_00636040(&local_14);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (*(char *)*puVar6 != '\0') {
    puVar6 = (undefined4 *)FUN_00458890(uVar4);
    DVar7 = GetFileAttributesW((LPCWSTR)*puVar6);
    if (DVar7 != 0xffffffff) {
      bVar3 = true;
      goto LAB_005869cf;
    }
  }
  bVar3 = false;
LAB_005869cf:
  local_8._0_1_ = 1;
  param_1 = (int *)CONCAT13(!bVar3,param_1._0_3_);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (param_1._3_1_ != '\0') {
    FUN_00636040(&local_14);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00634890(&param_1);
    piVar5 = (int *)((int)param_1 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_14 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

