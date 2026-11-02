// rea decompile_all
// name: FUN_005ad430
// address: 0x5ad430
// body: available
// range: 0x5ad430-0x5ad587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ad430(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uStack_38;
  uint uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00718263;
  local_10 = ExceptionList;
  uStack_34 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006842b0(&uStack_38);
  FUN_00684c50();
  uStack_38 = 0;
  iVar2 = *(int *)*param_1;
  uVar3 = FUN_00472d90(0,*(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x1c));
  (**(code **)(iVar2 + 0x54))(uVar3);
  FUN_0057f4a0();
  local_8 = 0;
  uVar3 = FUN_00683640(&param_2);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x68))(uVar3);
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = param_2 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*param_2)(1);
    }
  }
  local_8 = 0xffffffff;
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
  FUN_00684c50(DAT_00c7ebb0);
  FUN_00472d90(0,*(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x1c));
  FUN_00682290(in_ECX + 4,0x24,10,0x3f800000);
  ExceptionList = local_10;
  return;
}

