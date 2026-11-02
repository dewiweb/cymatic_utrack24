// rea decompile_all
// name: thunk_FUN_00473bb8
// address: 0x473fe1
// body: available
// range: 0x473fe1-0x473fe5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int thunk_FUN_00473bb8(void)

{
  int iVar1;
  
  if (DAT_0095d67c == 0) {
    iVar1 = FUN_005af82d(0x28);
    if (iVar1 == 0) {
      DAT_0095d67c = 0;
    }
    else {
      DAT_0095d67c = FUN_00473b3d();
    }
    FUN_00474c94();
  }
  return DAT_0095d67c;
}

