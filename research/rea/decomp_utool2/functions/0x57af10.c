// rea decompile_all
// name: FUN_0057af10
// address: 0x57af10
// body: available
// range: 0x57af10-0x57beba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0057b245) */
/* WARNING: Removing unreachable block (ram,0x0057b25e) */
/* WARNING: Removing unreachable block (ram,0x0057b26c) */
/* WARNING: Removing unreachable block (ram,0x0057b294) */
/* WARNING: Removing unreachable block (ram,0x0057b4c7) */
/* WARNING: Removing unreachable block (ram,0x0057b4dd) */
/* WARNING: Removing unreachable block (ram,0x0057b4e5) */
/* WARNING: Removing unreachable block (ram,0x0057b503) */
/* WARNING: Removing unreachable block (ram,0x0057b770) */
/* WARNING: Removing unreachable block (ram,0x0057b789) */
/* WARNING: Removing unreachable block (ram,0x0057b797) */
/* WARNING: Removing unreachable block (ram,0x0057b7bf) */
/* WARNING: Removing unreachable block (ram,0x0057b9f5) */
/* WARNING: Removing unreachable block (ram,0x0057ba0b) */
/* WARNING: Removing unreachable block (ram,0x0057ba13) */
/* WARNING: Removing unreachable block (ram,0x0057ba31) */

void FUN_0057af10(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char in_stack_0000001c;
  int in_stack_00000024;
  void *pvStack_c0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071222f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006e8e70();
  FUN_00684a80();
  local_8 = 1;
  if (in_stack_0000001c == '\0') {
    FUN_00682e50();
    FUN_0067c020();
    FUN_00682d90();
    FUN_0067c020();
    FUN_00682d90();
    FUN_0067c020();
    FUN_00682d90();
    FUN_0067c020();
    if (0 < in_stack_00000024) {
      FUN_00682e50();
      FUN_0067c020();
      FUN_00682d90();
      FUN_0067c020();
      FUN_00682d90();
      FUN_0067c020();
      FUN_00682d90();
      FUN_0067c020();
    }
  }
  else {
    FUN_00682e50();
    FUN_0067c020();
    FUN_00682d90();
    FUN_0067c020();
    FUN_00682d90();
    FUN_0067c020();
    FUN_00682d90();
    FUN_0067c020();
    if (0 < in_stack_00000024) {
      FUN_00682e50();
      FUN_0067c020();
      FUN_00682d90();
      FUN_0067c020();
      FUN_00682d90();
      FUN_0067c020();
      FUN_00682d90();
      FUN_0067c020();
    }
  }
  FUN_006e8e70();
  cVar1 = FUN_006d7a60();
  if ((cVar1 == '\0') && (iVar2 = FUN_004ae580(), iVar2 < 0)) {
    puVar3 = (undefined4 *)FUN_00680d30();
    uVar4 = *puVar3;
    FUN_00680d30();
  }
  else {
    puVar3 = (undefined4 *)FUN_006e8e70();
    uVar4 = *puVar3;
  }
  FUN_006840c0(uVar4);
  local_8._0_1_ = 2;
  FUN_00683ff0();
  local_8 = CONCAT31(local_8._1_3_,1);
  FID_conflict__free(pvStack_c0);
  cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar1 == '\0') && (cVar1 = FUN_00682580(), cVar1 == '\0')) {
    (**(code **)(*(int *)*param_1 + 0x5c))();
  }
  FUN_006840c0(DAT_00c8a948);
  local_8._0_1_ = 3;
  FUN_00683ff0();
  local_8 = CONCAT31(local_8._1_3_,1);
  FID_conflict__free(pvStack_c0);
  cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar1 == '\0') && (cVar1 = FUN_00682580(), cVar1 == '\0')) {
    (**(code **)(*(int *)*param_1 + 0x5c))();
  }
  FUN_00684c50();
  cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar1 == '\0') && (cVar1 = FUN_00682580(), cVar1 == '\0')) {
    (**(code **)(*(int *)*param_1 + 0x5c))();
  }
  FUN_006840c0(0x10000000);
  local_8._0_1_ = 4;
  FUN_00683ff0();
  local_8 = CONCAT31(local_8._1_3_,1);
  FID_conflict__free(pvStack_c0);
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  *(undefined1 *)(param_1 + 2) = 1;
  FUN_00472d90();
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x14))();
  cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar1 == '\0') && (cVar1 = FUN_00682580(), cVar1 == '\0')) {
    (**(code **)(*(int *)*param_1 + 0x5c))();
  }
  if (*(char *)(param_1 + 2) == '\0') {
    (**(code **)(*(int *)*param_1 + 0x38))();
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  FUN_00684c50();
  FUN_00682be0();
  FID_conflict__free((void *)0x0);
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

