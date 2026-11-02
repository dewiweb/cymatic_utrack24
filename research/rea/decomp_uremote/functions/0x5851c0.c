// rea decompile_all
// name: FUN_005851c0
// address: 0x5851c0
// body: available
// range: 0x5851c0-0x58520b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005851c0(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x28) = 0x60121;
  FUN_00501f30(param_3);
  *(undefined2 *)(in_ECX + 0xc0) = param_1;
  *(undefined2 *)(in_ECX + 0xc2) = param_2;
  *(undefined1 *)(in_ECX + 0x114) = 1;
  return;
}

