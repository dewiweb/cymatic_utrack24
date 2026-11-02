// rea decompile_all
// name: FUN_00586060
// address: 0x586060
// body: available
// range: 0x586060-0x5860f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00586060(undefined2 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
            undefined2 param_17,undefined2 param_18,undefined4 param_19,undefined4 param_20,
            undefined2 param_21,undefined2 param_22,undefined1 param_23)

{
  undefined4 *in_ECX;
  
  FUN_00585c90(0x11,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
               ,param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
               param_20,param_21,param_22,param_23);
  *in_ECX = CPG::CCPMessage_SM_DeviceEnumerationFindLastRequest::vftable;
  in_ECX[1] = CPG::CCPMessage_SM_DeviceEnumerationFindLastRequest::vftable;
  return in_ECX;
}

