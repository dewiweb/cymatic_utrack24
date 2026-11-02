// rea decompile_all
// name: FUN_00404a09
// address: 0x404a09
// body: available
// range: 0x404a09-0x404a58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00404a09(int param_1,int param_2)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x24) = (uint)*(ushort *)(param_2 + 0x44);
  iVar1 = FUN_0040f80d();
  if (iVar1 == 0) {
    FUN_004034a2();
    FUN_004022b0(param_1,param_2);
  }
  else {
    *(undefined4 *)(param_2 + 0x5c) = 0;
  }
  FUN_0040f872();
  return 0;
}

