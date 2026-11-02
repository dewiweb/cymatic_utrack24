// rea decompile_all
// name: FUN_00482578
// address: 0x482578
// body: available
// range: 0x482578-0x48264b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00482578(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *unaff_ESI;
  int iVar5;
  
  iVar5 = 0;
  if (unaff_ESI[0x2b] == 0) {
    if (4 < unaff_ESI[0xf]) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x1a;
      *(int *)(*unaff_ESI + 0x18) = unaff_ESI[0xf];
      *(undefined4 *)(*unaff_ESI + 0x1c) = 4;
      (**(code **)*unaff_ESI)();
    }
    iVar5 = 0;
    unaff_ESI[0x39] = unaff_ESI[0xf];
    if (0 < unaff_ESI[0xf]) {
      iVar4 = 0;
      piVar1 = unaff_ESI + 0x3a;
      do {
        *piVar1 = unaff_ESI[0x11] + iVar4;
        iVar5 = iVar5 + 1;
        piVar1 = piVar1 + 1;
        iVar4 = iVar4 + 0x54;
      } while (iVar5 < unaff_ESI[0xf]);
    }
    iVar5 = 0;
    unaff_ESI[0x4b] = 0;
    unaff_ESI[0x4c] = 0x3f;
    unaff_ESI[0x4d] = 0;
  }
  else {
    piVar1 = (int *)(*(int *)(unaff_ESI[0x4f] + 0x1c) * 0x24 + unaff_ESI[0x2b]);
    unaff_ESI[0x39] = *piVar1;
    if (0 < *piVar1) {
      piVar3 = unaff_ESI + 0x3a;
      piVar2 = piVar1;
      do {
        piVar2 = piVar2 + 1;
        iVar5 = iVar5 + 1;
        *piVar3 = *piVar2 * 0x54 + unaff_ESI[0x11];
        piVar3 = piVar3 + 1;
      } while (iVar5 < *piVar1);
    }
    unaff_ESI[0x4b] = piVar1[5];
    unaff_ESI[0x4c] = piVar1[6];
    unaff_ESI[0x4d] = piVar1[7];
    iVar5 = piVar1[8];
  }
  unaff_ESI[0x4e] = iVar5;
  return;
}

