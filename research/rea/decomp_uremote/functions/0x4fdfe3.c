// rea decompile_all
// name: FUN_004fdfe3
// address: 0x4fdfe3
// body: available
// range: 0x4fdfe3-0x4fe038 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fdfe3(int param_1)

{
  int iVar1;
  
  FUN_00474839();
  iVar1 = FUN_004fdda3();
  if (iVar1 != 0) {
    FUN_0046795a(10000);
    *(undefined1 *)(iVar1 + 0xa9) = 0;
  }
  FUN_004c04cb();
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc0) = 0;
  return;
}

