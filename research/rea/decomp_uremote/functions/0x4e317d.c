// rea decompile_all
// name: FUN_004e317d
// address: 0x4e317d
// body: available
// range: 0x4e317d-0x4e328f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004e317d(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int extraout_ECX;
  float10 fVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dbf52;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar1 = FUN_004e2e22(DAT_00955fd4 ^ (uint)&stack0xffffffc8);
  switch(uVar1) {
  case 0:
  case 4:
    fVar3 = (float10)*(int *)(*(int *)(in_ECX + 4) + 0x10);
    break;
  case 1:
    fVar3 = (float10)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + *(int *)(*(int *)(in_ECX + 4) + 0x10))
    ;
    break;
  case 2:
  case 5:
    fVar3 = (float10)*(int *)(*(int *)(in_ECX + 4) + 0x14);
    break;
  case 3:
    fVar3 = (float10)(*(int *)(*(int *)(in_ECX + 4) + 0x1c) + *(int *)(*(int *)(in_ECX + 4) + 0x14))
    ;
    break;
  case 6:
    fVar3 = (float10)*(int *)(*(int *)(in_ECX + 4) + 0x18);
    break;
  case 7:
    fVar3 = (float10)*(int *)(*(int *)(in_ECX + 4) + 0x1c);
    break;
  default:
    if ((*(int *)(*(int *)(in_ECX + 4) + 0xc) == 0) || (iVar2 = FUN_004e3109(), iVar2 == 0)) {
      FUN_004640c8(param_1,param_2);
      ExceptionList = local_14;
      return param_1;
    }
    uVar1 = FUN_004640ba();
    local_c = 0;
    fVar3 = (float10)FUN_00463fc0(extraout_ECX + 4,uVar1);
  }
  FUN_00463e65((double)fVar3);
  ExceptionList = local_14;
  return param_1;
}

