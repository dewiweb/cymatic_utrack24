// rea decompile_all
// name: FUN_006d57d0
// address: 0x6d57d0
// body: available
// range: 0x6d57d0-0x6d5a46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d57d0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_stack_00000018;
  void *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007274a3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006842b0();
  FUN_006842b0();
  FUN_006840c0();
  local_8 = 0;
  FUN_00683ff0();
  local_8 = 0xffffffff;
  FID_conflict__free(local_20);
  (**(code **)(*(int *)*param_1 + 0x2c))();
  (**(code **)(*(int *)*param_1 + 0x54))();
  FUN_00680c60();
  FUN_006842b0();
  FUN_00684c50();
  FUN_0040ddb0();
  (**(code **)(*(int *)*param_1 + 0x54))();
  FUN_00414ad0();
  (**(code **)(*(int *)*param_1 + 0x54))();
  FUN_00680c60(&stack0xffffff9c);
  FUN_00684c50();
  operator_new(0x28);
  puVar3 = (undefined4 *)FUN_00468a40();
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    puVar3[1] = puVar3[1] + 1;
    UNLOCK();
  }
  local_8 = 1;
  FUN_00680580();
  local_8 = CONCAT31(local_8._1_3_,2);
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x68))();
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = param_1 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  local_8 = 0xffffffff;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  FUN_00472d90(0,*(int *)(param_2 + 8) + -6,*(undefined4 *)(param_2 + 0xc));
  FUN_00682290(in_stack_00000018 + 4,0x21,1,0);
  ExceptionList = local_10;
  return;
}

