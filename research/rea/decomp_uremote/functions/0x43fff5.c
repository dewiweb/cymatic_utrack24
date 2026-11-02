// rea decompile_all
// name: FUN_0043fff5
// address: 0x43fff5
// body: available
// range: 0x43fff5-0x44006a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043fff5(void)

{
  char cVar1;
  int in_ECX;
  undefined8 uVar2;
  
  cVar1 = FUN_004c3153();
  if (cVar1 != '\0') {
    FUN_004f8c45(FUN_004f9b3e,in_ECX);
    uVar2 = FUN_00467e7a();
    *(undefined8 *)(in_ECX + 0x110) = uVar2;
    *(undefined1 *)(in_ECX + 300) = 0;
    if (0 < *(int *)(in_ECX + 0x90)) {
      if (*(int *)(in_ECX + 0x174) != 0) {
        FUN_0043f565(0);
      }
      FUN_0047479c();
    }
    FUN_004c1613(in_ECX);
  }
  return;
}

