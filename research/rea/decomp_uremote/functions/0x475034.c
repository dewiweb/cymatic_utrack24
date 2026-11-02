// rea decompile_all
// name: FUN_00475034
// address: 0x475034
// body: available
// range: 0x475034-0x4750d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00475034(void)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  float *unaff_ESI;
  undefined1 local_18 [24];
  
  if ((*(char *)(unaff_ESI + 8) != '\0') && (cVar1 = FUN_0047764b(), cVar1 != '\0')) {
    uVar3 = FUN_005b3fb0();
    uVar4 = FUN_005b3fb0();
    if (((uVar4 | uVar3) & 0xf8) == 0) {
      unaff_ESI[6] = (float)((int)unaff_ESI[6] + ((int)uVar3 >> 8));
      unaff_ESI[7] = (float)((int)unaff_ESI[7] + ((int)uVar4 >> 8));
      return;
    }
  }
  FUN_00474f97(local_18);
  FUN_00476f96();
  *(undefined1 *)(unaff_ESI + 8) = 0;
  if ((((unaff_ESI[1] != 0.0) || (unaff_ESI[3] != 0.0)) || (*unaff_ESI < 0.0)) ||
     (unaff_ESI[4] < 0.0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)((int)unaff_ESI + 0x21) = uVar2;
  return;
}

