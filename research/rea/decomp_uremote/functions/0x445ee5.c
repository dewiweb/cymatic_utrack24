// rea decompile_all
// name: FUN_00445ee5
// address: 0x445ee5
// body: available
// range: 0x445ee5-0x445f19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00445ee5(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_64 [24];
  
  iVar2 = 0;
  do {
    uVar1 = FUN_004643d2(0x7fff);
    local_64[iVar2] = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x18);
  FUN_0045e3bd(local_64);
  return;
}

