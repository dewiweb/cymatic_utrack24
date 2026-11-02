// rea decompile_all
// name: FUN_006d5a50
// address: 0x6d5a50
// body: available
// range: 0x6d5a50-0x6d61b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006d609c) */
/* WARNING: Removing unreachable block (ram,0x006d60b5) */
/* WARNING: Removing unreachable block (ram,0x006d60c0) */
/* WARNING: Removing unreachable block (ram,0x006d60e4) */

void FUN_006d5a50(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  int in_stack_00000028;
  void *pvStack_58;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007274d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006e8e70();
  if (((*(byte *)(in_stack_00000028 + 0x69) & 0x10) == 0) &&
     (*(int *)(in_stack_00000028 + 0xc) != 0)) {
    FUN_006e6320();
  }
  FUN_00680d30();
  FUN_00680d30();
  local_8 = 0;
  iVar1 = *(int *)(*(int *)(in_stack_00000028 + 0x78) + 0x18);
  if ((((iVar1 == 0) || (iVar1 == 2)) || (iVar1 == 9)) || (iVar1 == 0xb)) {
    FUN_006840c0(local_20);
    local_8._0_1_ = 1;
    FUN_00683ff0();
    local_8 = (uint)local_8._1_3_ << 8;
    FID_conflict__free(pvStack_58);
    FUN_00682e50();
    FUN_0067c020();
    FUN_00682d90();
    FUN_0067c020();
    FUN_00682d90();
    FUN_0067c020();
    FUN_00682d90();
  }
  else {
    FUN_006840c0(local_20);
    local_8._0_1_ = 2;
    FUN_00683ff0();
    local_8 = (uint)local_8._1_3_ << 8;
    FID_conflict__free(pvStack_58);
    FUN_00682e50();
    FUN_0067c020();
    FUN_00682d90();
    FUN_0067c020();
    FUN_00682d90();
    FUN_0067c020();
    FUN_00682d90();
  }
  FUN_0067c020();
  cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar2 == '\0') && (cVar2 = FUN_00682580(), cVar2 == '\0')) {
    (**(code **)(*(int *)*param_1 + 0x5c))();
  }
  FUN_00680c60();
  FUN_00684c50();
  FUN_00682be0();
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

