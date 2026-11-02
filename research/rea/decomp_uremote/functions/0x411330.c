// rea decompile_all
// name: FUN_00411330
// address: 0x411330
// body: available
// range: 0x411330-0x411376 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00411330(void)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  
  pcVar1 = (code *)unaff_ESI[5];
  *unaff_EDI = 0;
  if (pcVar1 == (code *)0x0) {
    uVar2 = unaff_ESI[2];
    if ((uint)unaff_ESI[1] <= uVar2) goto LAB_0041136d;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),*(undefined1 *)(uVar2 + *unaff_ESI));
  }
  else {
    uVar2 = (*pcVar1)();
    if (uVar2 != 1) {
LAB_0041136d:
      *unaff_EDI = 0x55;
      return uVar2 & 0xffffff00;
    }
    uVar2 = 0;
  }
  unaff_ESI[2] = unaff_ESI[2] + 1;
  return uVar2;
}

