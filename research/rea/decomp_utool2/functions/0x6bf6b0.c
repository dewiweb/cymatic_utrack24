// rea decompile_all
// name: FUN_006bf6b0
// address: 0x6bf6b0
// body: available
// range: 0x6bf6b0-0x6bf96d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bf6b0(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int in_ECX;
  int local_20;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00725042;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0067e770(param_1);
  local_8 = 0;
  FUN_006254f0(uVar4);
  local_8._0_1_ = 1;
  FUN_006254f0();
  local_8._0_1_ = 2;
  FUN_006254f0();
  local_8._0_1_ = 3;
  FUN_006254f0();
  local_8._0_1_ = 4;
  FUN_006254f0();
  local_8._0_1_ = 5;
  FUN_006254f0();
  local_8._0_1_ = 6;
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_0069f0a0();
    local_8._0_1_ = 7;
    FUN_0069f0a0();
    local_8 = CONCAT31(local_8._1_3_,6);
    puVar2 = *(undefined4 **)(in_ECX + 0x24);
    *(int *)(in_ECX + 0x24) = local_20;
    puVar3 = *(undefined4 **)(in_ECX + 0x28);
    *(undefined4 *)(in_ECX + 0x28) = local_1c;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    FUN_0069f0a0();
    local_8._0_1_ = 8;
    FUN_0069f0a0();
    local_8 = CONCAT31(local_8._1_3_,6);
    puVar2 = *(undefined4 **)(in_ECX + 0x2c);
    *(int *)(in_ECX + 0x2c) = local_20;
    puVar3 = *(undefined4 **)(in_ECX + 0x30);
    *(undefined4 *)(in_ECX + 0x30) = local_1c;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    FUN_0069f0a0();
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_0069f0a0();
    puVar2 = *(undefined4 **)(in_ECX + 0x34);
    *(int *)(in_ECX + 0x34) = local_20;
    puVar3 = *(undefined4 **)(in_ECX + 0x38);
    *(undefined4 *)(in_ECX + 0x38) = local_1c;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 *)(in_ECX + 0xc) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 0;
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(undefined4 *)(in_ECX + 0x1c) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x20) = 0;
  }
  ExceptionList = local_10;
  return;
}

