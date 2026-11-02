// rea decompile_all
// name: FUN_00497721
// address: 0x497721
// body: available
// range: 0x497721-0x49781b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x497779 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00497721(undefined4 param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int in_EAX;
  char *_Str;
  int iVar4;
  
  iVar4 = *(int *)(in_EAX + 0x240);
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      FUN_00495a5d();
      return;
    }
    *(int *)(in_EAX + 0x240) = iVar4 + -1;
    if (iVar4 + -1 == 1) {
      FUN_00495a5d();
      FUN_004914ad();
      return;
    }
  }
  uVar3 = *(uint *)(in_EAX + 0x28);
  if ((uVar3 & 1) != 0) {
    if ((uVar3 & 4) != 0) {
      *(uint *)(in_EAX + 0x28) = uVar3 | 8;
    }
    _Str = (char *)FUN_00495b75(1);
    if (_Str == (char *)0x0) {
      FUN_004914ad();
    }
    else {
      FUN_00495a35(_Str,param_2);
      iVar4 = FUN_00495a5d();
      if (iVar4 == 0) {
        pcVar1 = _Str + param_2;
        *pcVar1 = '\0';
        cVar2 = *_Str;
        while (cVar2 != '\0') {
          _Str = _Str + 1;
          cVar2 = *_Str;
        }
        if (_Str != pcVar1) {
          _Str = _Str + 1;
        }
        _strlen(_Str);
        iVar4 = FUN_00499216();
        if (iVar4 != 0) {
          FUN_00491216();
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00491122();
}

