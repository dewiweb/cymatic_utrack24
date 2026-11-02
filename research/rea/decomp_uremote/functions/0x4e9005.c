// rea decompile_all
// name: FUN_004e9005
// address: 0x4e9005
// body: available
// range: 0x4e9005-0x4e9032 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004e9005(void)

{
  int in_ECX;
  int extraout_EDX;
  int aiStack_10 [3];
  undefined1 *local_4;
  
  aiStack_10[2] = *(undefined4 *)(in_ECX + 0x14);
  aiStack_10[0] = in_ECX + 0x1c;
  aiStack_10[1] = 0;
  local_4 = (undefined1 *)aiStack_10;
  FUN_004d076d();
  FUN_004eb97d(extraout_EDX + 8,*(undefined4 *)(extraout_EDX + 0xc),extraout_EDX + 0x18);
  return 1;
}

