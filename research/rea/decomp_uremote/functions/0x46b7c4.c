// rea decompile_all
// name: FUN_0046b7c4
// address: 0x46b7c4
// body: available
// range: 0x46b7c4-0x46b823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x46b81f to 0x46b824 FUN_0046b824 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046b7c4(void)

{
  int in_EAX;
  
  *(int *)(in_EAX + 0xb18) = in_EAX + 0x94;
  *(int *)(in_EAX + 0xb24) = in_EAX + 0x988;
  *(int *)(in_EAX + 0xb30) = in_EAX + 0xa7c;
  *(undefined4 *)(in_EAX + 0x16bc) = 0;
  *(undefined ***)(in_EAX + 0xb20) = &PTR_DAT_009576a8;
  *(undefined ***)(in_EAX + 0xb2c) = &PTR_DAT_009576bc;
  *(undefined **)(in_EAX + 0xb38) = &DAT_009576d0;
  *(undefined2 *)(in_EAX + 0x16b8) = 0;
  *(undefined4 *)(in_EAX + 0x16b4) = 8;
  FUN_0046b824();
  return;
}

