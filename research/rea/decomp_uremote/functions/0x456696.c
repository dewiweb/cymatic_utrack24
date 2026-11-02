// rea decompile_all
// name: FUN_00456696
// address: 0x456696
// body: available
// range: 0x456696-0x456714 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00456696(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_ESI;
  
  iVar1 = FUN_0044bfc5();
  iVar1 = *(int *)(iVar1 + 8);
  iVar2 = FUN_0044bfc5();
  uVar3 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = FUN_005b3fb0();
  if ((float)iVar1 * 4.0 <= (float)iVar2) {
    *(undefined4 *)(unaff_ESI + 0x74) = 0;
    *(undefined1 *)(unaff_ESI + 0x78) = 0;
    *(int *)(unaff_ESI + 0x70) = iVar2;
    uVar3 = FUN_005b3fb0();
  }
  else {
    *(undefined1 *)(unaff_ESI + 0x78) = 1;
    *(undefined4 *)(unaff_ESI + 0x70) = uVar3;
    uVar3 = FUN_005b3fb0();
    *(undefined4 *)(unaff_ESI + 0x74) = uVar3;
    uVar3 = FUN_005b3fb0();
  }
  FUN_004c0be5(uVar3);
  return;
}

