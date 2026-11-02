// rea decompile_all
// name: FUN_0041194c
// address: 0x41194c
// body: available
// range: 0x41194c-0x411975 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041194c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int in_ECX;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  iVar1 = 0;
  if (param_1 < 1) {
    if (param_1 < 0) {
      uStack_8 = 6;
    }
  }
  else {
    iVar1 = (**(code **)(in_ECX + 4))();
    if (iVar1 == 0) {
      uStack_8 = 0x40;
    }
  }
  *param_2 = uStack_8;
  return iVar1;
}

