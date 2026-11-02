// rea decompile_all
// name: FUN_00550600
// address: 0x550600
// body: available
// range: 0x550600-0x5507b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00550600(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int local_34;
  undefined1 local_20 [16];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d31f3;
  local_10 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0xb0) == 0) goto LAB_00550798;
  FUN_005017d0(uVar2);
  local_8 = 0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x28) == 0x20101)) {
    uVar3 = FUN_0054fed0(local_20);
    local_8._0_1_ = 1;
    FUN_00501e80(uVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00501900();
  }
  FUN_00515830();
  if (param_1 == 0) {
LAB_00550717:
    if (in_ECX == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = in_ECX + 0xa0 + *(int *)(*(int *)(in_ECX + 0xa0) + 4);
    }
    uVar3 = FUN_00501d60(uVar2,iVar4);
    (**(code **)**(undefined4 **)(in_ECX + 0xb0))(iVar4,0x80,*(undefined4 *)(in_ECX + 0xac),uVar3);
  }
  else {
    cVar1 = FUN_00501bd0();
    if (cVar1 != '\0') goto LAB_00550717;
    if (in_ECX == 0) {
      local_34 = 0;
    }
    else {
      local_34 = in_ECX + 0xa0 + *(int *)(*(int *)(in_ECX + 0xa0) + 4);
    }
    uVar3 = FUN_00501d60();
    (**(code **)**(undefined4 **)(in_ECX + 0xb0))
              (local_34,0x81,*(undefined4 *)(in_ECX + 0xac),uVar3);
  }
  FUN_00515860();
  local_8 = 0xffffffff;
  FUN_00501900();
LAB_00550798:
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  ExceptionList = local_10;
  return 1;
}

