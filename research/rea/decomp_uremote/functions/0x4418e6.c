// rea decompile_all
// name: FUN_004418e6
// address: 0x4418e6
// body: available
// range: 0x4418e6-0x441955 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004418e6(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  FUN_004c0902(param_1,0,0);
  uVar1 = FUN_005b3fb0();
  *(undefined4 *)(unaff_ESI + 0xa0) = uVar1;
  FUN_004c3170(0);
  FUN_004c3170(0);
  FUN_004c0bf7(*(undefined4 *)(unaff_ESI + 0x8c),*(undefined4 *)(unaff_ESI + 0xa0));
  return;
}

