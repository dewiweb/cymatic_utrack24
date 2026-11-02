// rea decompile_all
// name: FUN_0044cf53
// address: 0x44cf53
// body: available
// range: 0x44cf53-0x44cfd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044cf53(void)

{
  int in_EAX;
  undefined4 *unaff_EDI;
  
  *(undefined4 *)(in_EAX + 0x40) = *unaff_EDI;
  *(undefined4 *)(in_EAX + 0x44) = unaff_EDI[1];
  *(undefined4 *)(in_EAX + 0x48) = unaff_EDI[2];
  *(undefined4 *)(in_EAX + 0x4c) = unaff_EDI[3];
  FUN_00465317(in_EAX + 0x50);
  *(undefined1 *)(in_EAX + 0x54) = *(undefined1 *)(unaff_EDI + 5);
  *(undefined4 *)(in_EAX + 0x58) = unaff_EDI[6];
  *(undefined4 *)(in_EAX + 0x5c) = unaff_EDI[7];
  *(undefined4 *)(in_EAX + 0x60) = unaff_EDI[8];
  *(undefined4 *)(in_EAX + 100) = unaff_EDI[9];
  *(undefined4 *)(in_EAX + 0x68) = unaff_EDI[10];
  *(undefined4 *)(in_EAX + 0x6c) = unaff_EDI[0xb];
  *(undefined4 *)(in_EAX + 0x70) = unaff_EDI[0xc];
  FUN_00465317(in_EAX + 0x74);
  *(undefined4 *)(in_EAX + 0x78) = unaff_EDI[0xe];
  *(undefined1 *)(in_EAX + 0x2fc) = 0;
  *(undefined1 *)(in_EAX + 0x2fd) = 0;
  FUN_0044cfd6(*(undefined4 *)(in_EAX + 0x40),*(undefined4 *)(in_EAX + 0x44));
  return;
}

