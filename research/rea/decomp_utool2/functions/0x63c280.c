// rea decompile_all
// name: FUN_0063c280
// address: 0x63c280
// body: available
// range: 0x63c280-0x63c397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0063c280(void)

{
  int *piVar1;
  char cVar2;
  BOOL BVar3;
  LONG LVar4;
  int iVar5;
  HWND pHVar6;
  char in_CL;
  tagMSG local_24;
  
  if ((in_CL != '\0') && (BVar3 = PeekMessageW(&local_24,(HWND)0x0,0,0,0), BVar3 == 0)) {
    return 0;
  }
  BVar3 = GetMessageW(&local_24,(HWND)0x0,0,0);
  if (-1 < BVar3) {
    if (local_24.message == 0x47b) {
      if (local_24.hwnd == DAT_00c8a650) {
        if ((int *)local_24.lParam == (int *)0x0) {
          return 1;
        }
        (**(code **)(*(int *)local_24.lParam + 4))();
        LOCK();
        piVar1 = (int *)(local_24.lParam + 4);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 != 1) {
          return 1;
        }
        (*(code *)**(undefined4 **)local_24.lParam)(1);
        return 1;
      }
    }
    else if (local_24.message == 0x12) {
      if (DAT_00c8a660 == (int *)0x0) {
        return 1;
      }
      (**(code **)(*DAT_00c8a660 + 0x1c))();
      return 1;
    }
    if ((DAT_00c8a65c == (code *)0x0) || (cVar2 = (*DAT_00c8a65c)(&local_24), cVar2 == '\0')) {
      if ((local_24.message == 0x201) || (local_24.message == 0x204)) {
        LVar4 = GetWindowLongW(local_24.hwnd,-0x15);
        iVar5 = FUN_00462d70();
        if ((LVar4 != iVar5) &&
           ((pHVar6 = GetFocus(), pHVar6 == (HWND)0x0 || (cVar2 = FUN_00462d50(), cVar2 != '\0'))))
        {
          SetFocus(local_24.hwnd);
        }
      }
      TranslateMessage(&local_24);
      DispatchMessageW(&local_24);
    }
  }
  return 1;
}

