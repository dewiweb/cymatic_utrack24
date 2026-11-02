// rea decompile_all
// name: FUN_00596bd0
// address: 0x596bd0
// body: available
// range: 0x596bd0-0x596cd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00596bd0(int param_1,int param_2,undefined4 param_3,uint param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    *(int *)(in_ECX + 0xc48) = param_1;
    *(int *)(in_ECX + 0x100) = param_2;
    *(undefined4 *)(in_ECX + 0x108) = param_3;
    *(undefined1 *)(in_ECX + 0xc5d) = 0;
    *(undefined1 *)(in_ECX + 0xc5f) = param_5;
    *(undefined1 *)(in_ECX + 0xc6c) = 0;
    if (param_4 < 500) {
      *(undefined4 *)(in_ECX + 0xc68) = 500;
    }
    else {
      *(uint *)(in_ECX + 0xc68) = param_4;
    }
    *(int *)(in_ECX + 0xc3c) = in_ECX + 0x10c;
    *(uint *)(in_ECX + 0xc3c) = *(int *)(in_ECX + 0xc3c) + 3U & 0xfffffffc;
    *(int *)(in_ECX + 0xc40) = in_ECX + 0x6a4;
    *(uint *)(in_ECX + 0xc40) = *(int *)(in_ECX + 0xc40) + 3U & 0xfffffffc;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 0xc3c);
    *(undefined1 *)(in_ECX + 0xc5c) = 1;
    uVar1 = 1;
  }
  return uVar1;
}

