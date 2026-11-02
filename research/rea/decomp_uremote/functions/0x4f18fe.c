// rea decompile_all
// name: FUN_004f18fe
// address: 0x4f18fe
// body: available
// range: 0x4f18fe-0x4f194f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f18fe(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int *in_ECX;
  char unaff_retaddr;
  
  (**(code **)(*in_ECX + 0x30))(0);
  uVar1 = DAT_00957684;
  DAT_00957684 = ~(byte)((uint)in_ECX[2] >> 1) & 1;
  puVar2 = &LAB_004f24d7;
  if (unaff_retaddr == '\0') {
    puVar2 = &LAB_004f24e4;
  }
  FUN_004f3cc2(puVar2);
  DAT_00957684 = uVar1;
  if (unaff_retaddr == '\0') {
    FUN_004eda2a(in_ECX);
  }
  return;
}

