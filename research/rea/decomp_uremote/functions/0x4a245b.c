// rea decompile_all
// name: FUN_004a245b
// address: 0x4a245b
// body: available
// range: 0x4a245b-0x4a24d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a245b(undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9)

{
  float *in_EAX;
  undefined1 in_CL;
  
  *in_EAX = param_8 * param_2 + param_6;
  in_EAX[1] = param_9 * param_3 + param_7;
  in_EAX[2] = param_8 * param_4 + param_6;
  in_EAX[3] = param_9 * param_5 + param_7;
  *(undefined1 *)(in_EAX + 4) = in_CL;
  FUN_0047ce07(param_1,in_EAX);
  FUN_0047d180(&param_6);
  return;
}

