// rea decompile_all
// name: FUN_004cc15f
// address: 0x4cc15f
// body: available
// range: 0x4cc15f-0x4cc1b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cc15f(void)

{
  undefined4 extraout_ECX;
  int *unaff_EDI;
  undefined1 local_18 [20];
  
  FUN_00478990();
  FUN_0047cac7(extraout_ECX,&DAT_0095d798,0x40800000);
  (**(code **)(*unaff_EDI + 0xb8))(local_18);
  FUN_004c8d4f(unaff_EDI);
  FUN_004c1613(unaff_EDI);
  return;
}

