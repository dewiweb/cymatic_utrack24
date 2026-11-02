// rea decompile_all
// name: FUN_004eddd8
// address: 0x4eddd8
// body: available
// range: 0x4eddd8-0x4ede15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004eddd8(undefined4 param_1,undefined4 param_2)

{
  int unaff_ESI;
  undefined1 auStack_2c [8];
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 local_18 [16];
  undefined1 *local_8;
  
  puStack_20 = local_18;
  uStack_24 = 0x4eddea;
  FUN_004c2047();
  local_8 = auStack_2c;
  FUN_004c092e(*(undefined4 *)(unaff_ESI + 4),param_2);
  FUN_004f8d79();
  return param_1;
}

