// rea decompile_all
// name: FUN_0047f83e
// address: 0x47f83e
// body: available
// range: 0x47f83e-0x47f8a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047f83e(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *unaff_ESI;
  
  uVar1 = unaff_ESI[3];
  uVar2 = *unaff_ESI;
  unaff_ESI[1] = 0;
  _memset(unaff_ESI,0,0x168);
  *unaff_ESI = uVar2;
  unaff_ESI[3] = uVar1;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  FUN_0048cb55();
  unaff_ESI[2] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0;
  puVar3 = unaff_ESI + 0x1a;
  iVar4 = 4;
  do {
    puVar3[-4] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined8 *)(unaff_ESI + 0xc) = 0x3ff0000000000000;
  unaff_ESI[0x58] = 0;
  unaff_ESI[5] = 100;
  return;
}

