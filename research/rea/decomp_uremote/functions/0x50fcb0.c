// rea decompile_all
// name: FUN_0050fcb0
// address: 0x50fcb0
// body: available
// range: 0x50fcb0-0x50fdd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0050fcb0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  int local_1c;
  undefined1 local_14 [12];
  int local_8;
  
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x28))();
  uVar2 = (**(code **)(*param_1 + 0x98))(local_14);
  local_8 = FUN_0051f960(uVar2);
  if (local_8 == 0) {
    local_8 = FUN_0051ad00(in_ECX + -0xb5c);
    if (local_8 != 0) {
      uVar2 = FUN_00520890(param_1);
      cVar1 = FUN_0051b300(uVar2);
      if (cVar1 == '\0') {
        (**(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 8)) + 4))();
        local_8 = 0;
      }
    }
  }
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x2c))();
  if (local_8 == 0) {
    local_1c = 0;
  }
  else {
    local_1c = local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 0xc);
  }
  return local_1c;
}

