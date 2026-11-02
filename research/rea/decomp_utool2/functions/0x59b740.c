// rea decompile_all
// name: FUN_0059b740
// address: 0x59b740
// body: available
// range: 0x59b740-0x59b8e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0059b740(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  undefined4 extraout_ECX;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar4;
  undefined4 *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715968;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990("ImportWriteThreadPoolJob::runJob",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_005899e0();
  local_8 = 0xffffffff;
  piVar2 = local_18 + -2;
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  iVar3 = *(int *)(in_ECX + 0x14);
  if (*(int *)(iVar3 + 0x10) == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)**(undefined4 **)(iVar3 + 8);
  }
  if (*(int *)(iVar3 + 0x10) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(iVar3 + 8);
  }
  local_11 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x10) + 8) + 4))
                       (*(undefined4 *)(iVar3 + 0xc),*puVar1);
  if (*(int *)(*(int *)(in_ECX + 0x14) + 0x10) == 0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = (undefined4 *)**(undefined4 **)(*(int *)(in_ECX + 0x14) + 8);
  }
  piVar2 = *(int **)(*(int *)(in_ECX + 0x20) + 0x18);
  iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x10) + 8) + 0x14);
  uVar4 = __allmul(iVar3,iVar3 >> 0x1f,*local_18,local_18[1]);
  (**(code **)(*piVar2 + 0x10))(uVar4 >> 3);
  if (local_11 == '\0') {
    FUN_0059c9c0(5,0x820,&PTR_DAT_00c7ed54);
  }
  FUN_0045c990("ImportWriteThreadPoolJob::runJob");
  local_8 = 1;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
  EnterCriticalSection(lpCriticalSection);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
    FUN_005891b0(&local_18,extraout_ECX);
    FUN_0062f940();
  }
  LeaveCriticalSection(lpCriticalSection);
  piVar2 = local_18 + -2;
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  ExceptionList = local_10;
  return 0;
}

