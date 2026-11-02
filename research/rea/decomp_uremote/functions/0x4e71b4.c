// rea decompile_all
// name: FUN_004e71b4
// address: 0x4e71b4
// body: available
// range: 0x4e71b4-0x4e7207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e71b4(undefined4 param_1)

{
  int in_ECX;
  undefined4 uStack_24;
  undefined1 local_18 [20];
  
  if (0 < *(int *)(in_ECX + 0x94)) {
    FUN_004c1e29(&uStack_24,0x1002810,0);
    FUN_0047cda7();
    uStack_24 = *(undefined4 *)(in_ECX + 0x94);
    FUN_004c2047(local_18);
    FUN_0047d37e(param_1);
  }
  return;
}

