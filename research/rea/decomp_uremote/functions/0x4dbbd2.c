// rea decompile_all
// name: FUN_004dbbd2
// address: 0x4dbbd2
// body: available
// range: 0x4dbbd2-0x4dbdc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dbbd2(undefined4 param_1,undefined4 param_2,float param_3,float param_4,
                 undefined4 param_5,float param_6)

{
  undefined1 local_48 [68];
  
  if ((param_6 * 1.1 < param_3) && (param_6 * 1.1 < param_4)) {
    FUN_0044dd00();
    FUN_0047888f();
    FUN_0047909d(param_1,param_2,param_3);
    FUN_0047604f();
    FUN_0047627a();
    FUN_004d076d();
    FUN_00476850(local_48);
    FUN_0047604f();
    FUN_0047627a();
    FUN_00476966();
    FUN_0047604f();
    FUN_0047627a();
    FUN_00476966();
    FUN_0047ce07();
    FUN_0047d2ae();
    FUN_0047604f();
    FUN_0047cda7();
    FUN_0047badf();
    FUN_0047d2d0();
    FUN_004768de();
    FUN_004f7994();
  }
  return;
}

