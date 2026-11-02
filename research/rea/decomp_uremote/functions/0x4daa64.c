// rea decompile_all
// name: FUN_004daa64
// address: 0x4daa64
// body: available
// range: 0x4daa64-0x4daa9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004daa64(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iStack_c;
  undefined1 *local_8;
  
  local_8 = (undefined1 *)&iStack_c;
  FUN_004c1e29(&iStack_c,0x1008300,0);
  FUN_0047cda7();
  iStack_c = param_3 + -1;
  FUN_0047d187(0,param_2);
  return;
}

