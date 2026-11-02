// rea decompile_all
// name: FUN_0052e090
// address: 0x52e090
// body: available
// range: 0x52e090-0x52e185 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x52e180 to EXTERNAL:0x51 KERNEL32.DLL::ExitThread (external=true, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052e090(int *param_1)

{
  DWORD DVar1;
  bool bVar2;
  
  FUN_0052de50(0xffffffff,param_1[7]);
  *(undefined1 *)((int)param_1 + 0x11) = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  (**(code **)(*param_1 + 0x14))();
  while ((char)param_1[4] == '\0') {
    if (param_1[6] == 0) {
      Sleep(param_1[9]);
      bVar2 = false;
    }
    else {
      DVar1 = WaitForSingleObjectEx(*(HANDLE *)param_1[6],param_1[9],1);
      bVar2 = DVar1 == 0;
    }
    if ((char)param_1[4] != '\0') break;
    if (bVar2) {
      (**(code **)(*param_1 + 0x1c))();
    }
    else {
      (**(code **)(*param_1 + 0x18))();
    }
  }
  (**(code **)(*param_1 + 0x24))();
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  param_1[0xb] = -1;
                    /* WARNING: Subroutine does not return */
  ExitThread(0);
}

