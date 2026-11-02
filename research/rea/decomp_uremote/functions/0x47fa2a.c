// rea decompile_all
// name: FUN_0047fa2a
// address: 0x47fa2a
// body: available
// range: 0x47fa2a-0x47fad1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047fa2a(void)

{
  int *unaff_ESI;
  
  if (unaff_ESI[5] != 0x65) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x14;
    *(int *)(*unaff_ESI + 0x18) = unaff_ESI[5];
    (**(code **)*unaff_ESI)();
  }
  if ((uint)unaff_ESI[8] <= (uint)unaff_ESI[0x34]) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x7b;
    (**(code **)(*unaff_ESI + 4))();
  }
  if (unaff_ESI[2] != 0) {
    *(int *)(unaff_ESI[2] + 4) = unaff_ESI[0x34];
    *(int *)(unaff_ESI[2] + 8) = unaff_ESI[8];
    (**(code **)unaff_ESI[2])();
  }
  if (*(char *)(unaff_ESI[0x4f] + 0xc) != '\0') {
    (**(code **)(unaff_ESI[0x4f] + 4))();
  }
  (**(code **)(unaff_ESI[0x50] + 4))();
  unaff_ESI[0x34] = unaff_ESI[0x34];
  return;
}

