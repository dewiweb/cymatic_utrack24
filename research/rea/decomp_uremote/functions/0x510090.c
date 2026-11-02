// rea decompile_all
// name: FUN_00510090
// address: 0x510090
// body: available
// range: 0x510090-0x5101b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00510090(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_18;
  undefined4 local_c;
  
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x28))();
  iVar1 = FUN_00547c60(in_ECX + -0xb5c);
  if (param_1 != 0) {
    if (param_1 == 0) {
      local_c = 0;
    }
    else {
      local_c = param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 0xc);
    }
    iVar2 = (**(code **)(*(int *)(local_c + 4 + *(int *)(*(int *)(local_c + 4) + 4)) + 0x24))();
    *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar2 + 0x78);
    *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar2 + 0x7c);
    *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(iVar2 + 0x80);
    *(undefined4 *)(iVar1 + 0x84) = *(undefined4 *)(iVar2 + 0x84);
    *(undefined2 *)(iVar1 + 0x88) = *(undefined2 *)(iVar2 + 0x88);
  }
  (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x2c))();
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = iVar1 + 0x28 + *(int *)(*(int *)(iVar1 + 0x28) + 0x10);
  }
  return local_18;
}

