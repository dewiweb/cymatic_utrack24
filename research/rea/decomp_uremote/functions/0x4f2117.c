// rea decompile_all
// name: FUN_004f2117
// address: 0x4f2117
// body: available
// range: 0x4f2117-0x4f2167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f2117(HWND param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  HWND hWndParent;
  BOOL BVar4;
  undefined4 extraout_ECX;
  HWND hWnd;
  
  FUN_004c4e62();
  iVar2 = FUN_004c4ea2();
  do {
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return 1;
      }
      FUN_004c4e62();
      iVar3 = FUN_004c4ea6();
    } while ((iVar3 == 0) || (cVar1 = FUN_004c14d9(), cVar1 != '\0'));
    hWnd = param_1;
    hWndParent = (HWND)FUN_004c01a3(extraout_ECX);
    BVar4 = IsChild(hWndParent,hWnd);
  } while (BVar4 == 0);
  return 0;
}

