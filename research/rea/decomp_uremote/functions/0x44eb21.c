// rea decompile_all
// name: FUN_0044eb21
// address: 0x44eb21
// body: available
// range: 0x44eb21-0x44eb87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044eb21(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  unaff_ESI[1] = unaff_EDI[1];
  unaff_ESI[2] = unaff_EDI[2];
  unaff_ESI[3] = unaff_EDI[3];
  FUN_004652e4(unaff_EDI + 4);
  *(undefined1 *)(unaff_ESI + 5) = *(undefined1 *)(unaff_EDI + 5);
  unaff_ESI[6] = unaff_EDI[6];
  unaff_ESI[7] = unaff_EDI[7];
  unaff_ESI[8] = unaff_EDI[8];
  unaff_ESI[9] = unaff_EDI[9];
  unaff_ESI[10] = unaff_EDI[10];
  unaff_ESI[0xb] = unaff_EDI[0xb];
  unaff_ESI[0xc] = unaff_EDI[0xc];
  FUN_004652e4(unaff_EDI + 0xd);
  unaff_ESI[0xe] = unaff_EDI[0xe];
  return;
}

