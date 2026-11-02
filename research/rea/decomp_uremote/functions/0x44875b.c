// rea decompile_all
// name: FUN_0044875b
// address: 0x44875b
// body: available
// range: 0x44875b-0x4487df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044875b(int param_1,undefined4 param_2)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  
  iVar2 = in_EAX;
  while( true ) {
    iVar3 = iVar2 * 2 + 2;
    if (param_1 <= iVar3) break;
    cVar1 = FUN_004486d1(*(undefined4 *)(unaff_ESI + iVar3 * 4));
    if (cVar1 != '\0') {
      iVar3 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(unaff_ESI + iVar2 * 4) = *(undefined4 *)(unaff_ESI + iVar3 * 4);
    iVar2 = iVar3;
  }
  if (iVar3 == param_1) {
    *(undefined4 *)(unaff_ESI + iVar2 * 4) = *(undefined4 *)(unaff_ESI + -4 + param_1 * 4);
    iVar2 = param_1 + -1;
  }
  while ((iVar3 = (iVar2 + -1) / 2, in_EAX < iVar2 &&
         (cVar1 = FUN_004486d1(*(undefined4 *)(unaff_ESI + iVar3 * 4)), cVar1 != '\0'))) {
    *(undefined4 *)(unaff_ESI + iVar2 * 4) = *(undefined4 *)(unaff_ESI + iVar3 * 4);
    iVar2 = iVar3;
  }
  *(undefined4 *)(unaff_ESI + iVar2 * 4) = param_2;
  return;
}

