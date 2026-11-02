// rea decompile_all
// name: FUN_004a727f
// address: 0x4a727f
// body: available
// range: 0x4a727f-0x4a73d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004a727f(void)

{
  undefined4 uVar1;
  int *piVar2;
  int *in_ECX;
  int *in_EDX;
  undefined4 *puVar3;
  undefined4 *local_48;
  void *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d9559;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*in_EDX != 0) {
    if ((char)in_EDX[9] == '\0') {
      if (*(char *)((int)in_EDX + 0x25) != '\0') {
        uVar1 = FUN_004a8871(local_38);
        local_c = 2;
        FUN_004ff8c3(uVar1,&DAT_0095d798);
        FUN_004f7994();
        goto LAB_004a73b8;
      }
      FUN_004feb50(DAT_00955fd4 ^ (uint)&stack0xffffffa8);
      local_44 = (void *)0x0;
      local_40 = 0;
      local_3c = 0;
      local_c = 1;
      local_48 = (undefined4 *)*in_ECX;
      puVar3 = local_48 + in_ECX[2] * 4;
      for (; local_48 != puVar3; local_48 = local_48 + 4) {
        uVar1 = FUN_004a9659(in_EDX + 1,local_38);
        FUN_004a5695(uVar1);
      }
    }
    else {
      FUN_004feb50(DAT_00955fd4 ^ (uint)&stack0xffffffa8);
      FUN_004a70e8(&local_44);
      local_c = 0;
      FUN_004a884c(in_EDX[7],in_EDX[8]);
    }
    (**(code **)(*(int *)*in_EDX + 0x10))(&local_48,&local_44);
    FUN_004a7c57();
    if (local_48 != (undefined4 *)0x0) {
      piVar2 = local_48 + 1;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*local_48)(1);
      }
    }
    local_c = 0xffffffff;
    _free(local_44);
  }
LAB_004a73b8:
  ExceptionList = local_14;
  return *in_EDX != 0;
}

