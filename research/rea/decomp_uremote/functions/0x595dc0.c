// rea decompile_all
// name: FUN_00595dc0
// address: 0x595dc0
// body: available
// range: 0x595dc0-0x595e70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00595dc0(void)

{
  int iVar1;
  int in_ECX;
  undefined4 local_14;
  undefined4 local_c;
  
  iVar1 = (**(code **)(*(int *)(in_ECX + -0x68 + *(int *)(*(int *)(in_ECX + -0x68) + 4)) + 0xc))();
  if (iVar1 == 0x8203) {
    if (in_ECX == 0x90) {
      local_c = 0;
    }
    else {
      local_c = in_ECX + -0x68 + *(int *)(*(int *)(in_ECX + -0x68) + 0xc);
    }
    iVar1 = (**(code **)(*(int *)(local_c + 4 + *(int *)(*(int *)(local_c + 4) + 4)) + 0x24))();
    if (iVar1 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = iVar1 + 0x28 + *(int *)(*(int *)(iVar1 + 0x28) + 0x10);
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}

