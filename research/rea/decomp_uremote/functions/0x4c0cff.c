// rea decompile_all
// name: FUN_004c0cff
// address: 0x4c0cff
// body: available
// range: 0x4c0cff-0x4c0d85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c0cff(void)

{
  char cVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  
  cVar1 = FUN_00477051();
  if (cVar1 == '\0') {
    if (*(int *)(unaff_ESI + 0x24) != 0) {
      cVar1 = FUN_00477042();
      if (cVar1 == '\0') {
        return;
      }
      FUN_004c1613(unaff_ESI);
      FUN_00476f96();
      goto LAB_004c0d75;
    }
    FUN_004c1613(unaff_ESI);
    iVar2 = FUN_005af82d(0x18);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00476f96();
    }
    iVar3 = *(int *)(unaff_ESI + 0x24);
    if (iVar3 == iVar2) goto LAB_004c0d75;
    *(int *)(unaff_ESI + 0x24) = iVar2;
  }
  else {
    if (*(int *)(unaff_ESI + 0x24) == 0) {
      return;
    }
    FUN_004c1613(unaff_ESI);
    iVar3 = *(int *)(unaff_ESI + 0x24);
    if (iVar3 == 0) goto LAB_004c0d75;
    *(undefined4 *)(unaff_ESI + 0x24) = 0;
  }
  FUN_005af7b6(iVar3);
LAB_004c0d75:
  FUN_004c1613(unaff_ESI);
  FUN_004c0af3(0,0);
  return;
}

