// rea decompile_all
// name: FUN_00474a6e
// address: 0x474a6e
// body: available
// range: 0x474a6e-0x474b4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00474a6e(char param_1)

{
  char cVar1;
  BOOL BVar2;
  HWND pHVar3;
  tagMSG local_20;
  
  if ((param_1 != '\0') && (BVar2 = PeekMessageW(&local_20,(HWND)0x0,0,0,0), BVar2 == 0)) {
    return 0;
  }
  BVar2 = GetMessageW(&local_20,(HWND)0x0,0,0);
  if (-1 < BVar2) {
    if (local_20.message == 0xc400) {
      if (local_20.hwnd == DAT_0095d66c) {
        FUN_0047496b();
        return 1;
      }
    }
    else if (local_20.message == 0x12) {
      if (DAT_0095d678 == (int *)0x0) {
        return 1;
      }
      (**(code **)(*DAT_0095d678 + 0x1c))();
      return 1;
    }
    if ((DAT_0095d688 == (code *)0x0) || (cVar1 = (*DAT_0095d688)(&local_20), cVar1 == '\0')) {
      if ((((local_20.message == 0x201) || (local_20.message == 0x204)) &&
          (cVar1 = FUN_00474923(local_20.hwnd), cVar1 == '\0')) &&
         ((pHVar3 = GetFocus(), pHVar3 == (HWND)0x0 || (cVar1 = FUN_00474923(pHVar3), cVar1 != '\0')
          ))) {
        SetFocus(local_20.hwnd);
      }
      TranslateMessage(&local_20);
      DispatchMessageW(&local_20);
    }
  }
  return 1;
}

