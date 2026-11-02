// rea decompile_all
// name: FUN_004c052f
// address: 0x4c052f
// body: available
// range: 0x4c052f-0x4c05e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c052f(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EDI;
  
  if ((*(byte *)(unaff_EDI + 0x68) & 1) == 0) {
    iVar4 = *(int *)(unaff_EDI + 0xc);
    if (iVar4 == 0) {
      return;
    }
    iVar1 = *(int *)(iVar4 + 0x30);
    if (iVar1 < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(iVar4 + 0x28) + -4 + iVar1 * 4);
    }
    if ((iVar4 != unaff_EDI) && (iVar4 = FUN_00472d86(unaff_EDI), -1 < iVar4)) {
      iVar4 = -1;
      if ((*(byte *)(unaff_EDI + 0x69) & 1) == 0) {
        do {
          iVar4 = iVar1 + -1;
          if (iVar4 < 1) break;
          cVar2 = FUN_004c079b();
          iVar4 = extraout_ECX;
          iVar1 = extraout_ECX;
        } while (cVar2 != '\0');
      }
      FUN_004c04f6(*(undefined4 *)(unaff_EDI + 0xc),iVar4);
    }
    if ((char)param_1 == '\0') {
      return;
    }
    FUN_004c2c26();
  }
  else {
    piVar3 = (int *)FUN_004c0453();
    if (piVar3 == (int *)0x0) {
      return;
    }
    (**(code **)(*piVar3 + 0x58))(param_1);
    if ((char)param_1 == '\0') {
      return;
    }
    cVar2 = FUN_004c30fb(unaff_EDI,1);
    if (cVar2 != '\0') {
      return;
    }
  }
  FUN_004c301e();
  return;
}

