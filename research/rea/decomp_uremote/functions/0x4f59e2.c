// rea decompile_all
// name: FUN_004f59e2
// address: 0x4f59e2
// body: available
// range: 0x4f59e2-0x4f5a30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f59e2(char param_1)

{
  undefined2 local_24 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = 0xffffffff;
  local_24[0] = 0xf;
  local_20 = 0;
  local_1c = 1;
  local_14 = 1;
  local_10 = 1;
  local_c = 0;
  local_8 = 0;
  local_c = FUN_004f58e0();
  FUN_004f5966(local_24,&local_10,(param_1 != '\0') * '\x02' + '\x01');
  return;
}

