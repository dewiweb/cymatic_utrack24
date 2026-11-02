// rea decompile_all
// name: FUN_004e858b
// address: 0x4e858b
// body: available
// range: 0x4e858b-0x4e85f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e858b(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = *in_EAX;
  unaff_ESI[1] = in_EAX[1];
  unaff_ESI[2] = in_EAX[2];
  unaff_ESI[3] = in_EAX[3];
  unaff_ESI[4] = in_EAX[4];
  unaff_ESI[5] = in_EAX[5];
  unaff_ESI[6] = in_EAX[6];
  unaff_ESI[7] = in_EAX[7];
  unaff_ESI[8] = in_EAX[8];
  unaff_ESI[9] = in_EAX[9];
  unaff_ESI[10] = in_EAX[10];
  unaff_ESI[0xb] = in_EAX[0xb];
  unaff_ESI[0xc] = in_EAX[0xc];
  FUN_004652e4(in_EAX + 0xd);
  unaff_ESI[0xe] = in_EAX[0xe];
  unaff_ESI[0xf] = in_EAX[0xf];
  return;
}

