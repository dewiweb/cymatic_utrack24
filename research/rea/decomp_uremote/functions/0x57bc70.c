// rea decompile_all
// name: FUN_0057bc70
// address: 0x57bc70
// body: available
// range: 0x57bc70-0x57bd37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0057bc70(void)

{
  undefined4 *in_ECX;
  int local_10;
  undefined4 *local_c;
  
  *in_ECX = CPNS::ISerializable::vftable;
  in_ECX[1] = CPG::CPListItem<CPG::CCPMessage_Generic>::vftable;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *in_ECX = CPG::CCPMessage_Generic::vftable;
  in_ECX[1] = CPG::CCPMessage_Generic::vftable;
  in_ECX[4] = 0x10045b01;
  *in_ECX = CPG::CCPMessage_Diag_Timing::vftable;
  in_ECX[1] = CPG::CCPMessage_Diag_Timing::vftable;
  local_10 = 0x40;
  local_c = in_ECX + 0xc;
  while (local_10 = local_10 + -1, -1 < local_10) {
    *(undefined2 *)(local_c + 2) = 0;
    *local_c = 0;
    local_c[1] = 0;
    local_c = local_c + 4;
  }
  *(undefined1 *)(in_ECX + 8) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  in_ECX[9] = 0;
  return in_ECX;
}

