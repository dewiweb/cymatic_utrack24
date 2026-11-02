// rea decompile_all
// name: FUN_005cea90
// address: 0x5cea90
// body: available
// range: 0x5cea90-0x5cec68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cea90(int *param_1,int param_2,undefined4 param_3,double param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  void **ppvVar4;
  uint uVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *local_28;
  int *local_24;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b3b0;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ppvVar4 = &local_10;
  if (*(int **)(in_ECX + 0x20) == param_1) {
    if (*(int **)(in_ECX + 0x20) == (int *)0x0) {
      return;
    }
    ExceptionList = &local_10;
    FUN_005cea90(0,0,0,0,0,2);
    ppvVar4 = ExceptionList;
  }
  ExceptionList = ppvVar4;
  puVar1 = *(undefined4 **)(in_ECX + 0x24);
  *(int *)(in_ECX + 0x6c) = param_2;
  *(double *)(in_ECX + 0x60) = param_4;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  puVar2 = *(undefined4 **)(in_ECX + 0x28);
  local_8 = 1;
  piVar3 = *(int **)(in_ECX + 0x30);
  if (param_1 != (int *)0x0) {
    local_18 = param_1;
    if (0 < param_2) {
      operator_new(0x108);
      local_18 = (int *)FUN_005c6ef0(param_1,param_3,extraout_ECX,param_2,param_5);
      local_28 = local_18;
    }
    (**(code **)(*local_18 + 0x10))(0,0,uVar5);
    local_14 = local_18;
    if (0.0 < param_4) {
      operator_new(0x110);
      local_24 = (int *)FUN_005c7010(local_18,extraout_ECX_00,param_5);
      local_14 = local_24;
    }
    if (*(char *)(in_ECX + 0x70) != '\0') {
      if (((local_24 != (int *)0x0) && (0.0 < *(double *)(in_ECX + 0x60))) &&
         (0.0 < *(double *)(in_ECX + 0x58))) {
        FUN_005c6fd0();
      }
      (**(code **)(*local_14 + 4))
                (*(undefined4 *)(in_ECX + 0x68),(int)*(undefined8 *)(in_ECX + 0x58),
                 (int)((ulonglong)*(undefined8 *)(in_ECX + 0x58) >> 0x20));
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x34));
  *(int **)(in_ECX + 0x20) = param_1;
  *(int **)(in_ECX + 0x24) = local_24;
  *(int **)(in_ECX + 0x28) = local_28;
  *(int **)(in_ECX + 0x30) = local_14;
  *(int **)(in_ECX + 0x2c) = local_18;
  *(undefined1 *)(in_ECX + 0x71) = 0;
  *(undefined1 *)(in_ECX + 0x54) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x34));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  ExceptionList = local_10;
  return;
}

