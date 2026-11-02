// rea decompile_all
// name: FUN_0048484c
// address: 0x48484c
// body: available
// range: 0x48484c-0x4848ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0048484c(void)

{
  int *unaff_ESI;
  
  if (unaff_ESI[5] != 0xcd) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x14;
    *(int *)(*unaff_ESI + 0x18) = unaff_ESI[5];
    (**(code **)*unaff_ESI)();
  }
  if ((uint)unaff_ESI[0x18] <= (uint)unaff_ESI[0x1e]) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x7b;
    (**(code **)(*unaff_ESI + 4))();
    return 0;
  }
  if (unaff_ESI[2] != 0) {
    *(int *)(unaff_ESI[2] + 4) = unaff_ESI[0x1e];
    *(int *)(unaff_ESI[2] + 8) = unaff_ESI[0x18];
    (**(code **)unaff_ESI[2])();
  }
  (**(code **)(unaff_ESI[0x61] + 4))();
  unaff_ESI[0x1e] = unaff_ESI[0x1e];
  return 0;
}

