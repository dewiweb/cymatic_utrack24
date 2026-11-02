// rea decompile_all
// name: FUN_0047b417
// address: 0x47b417
// body: available
// range: 0x47b417-0x47b475 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047b417(float param_1)

{
  undefined1 uVar1;
  void *pvVar2;
  undefined4 in_EDX;
  undefined4 *extraout_EDX;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x14) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined1 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = in_EDX;
  FUN_00476f96();
  *(undefined4 *)(unaff_ESI + 0x34) = *extraout_EDX;
  *(float *)(unaff_ESI + 0x38) = param_1 * param_1;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  *(undefined4 *)(unaff_ESI + 0x40) = 0;
  uVar1 = FUN_00477051();
  *(undefined1 *)(unaff_ESI + 0x44) = uVar1;
  pvVar2 = _malloc(0x80);
  *(void **)(unaff_ESI + 0x48) = pvVar2;
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  *(undefined4 *)(unaff_ESI + 0x4c) = *(undefined4 *)(unaff_ESI + 0x48);
  *(undefined4 *)(unaff_ESI + 0x54) = 0x20;
  return;
}

