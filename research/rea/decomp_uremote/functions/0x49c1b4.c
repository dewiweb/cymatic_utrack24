// rea decompile_all
// name: FUN_0049c1b4
// address: 0x49c1b4
// body: available
// range: 0x49c1b4-0x49c305 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49c1e3 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049c1b4(undefined4 param_1,undefined4 param_2,int param_3,int param_4,char *param_5,
                 undefined4 *param_6)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  size_t sVar4;
  undefined4 in_EDX;
  int *piVar5;
  bool bVar6;
  int local_6c;
  undefined1 local_64 [80];
  undefined1 local_14 [8];
  undefined1 local_c;
  undefined1 local_b;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if ((param_3 < 4) && (iVar1 = FUN_0049b37e(local_64), iVar1 != 0)) {
    sVar2 = _strlen(param_5);
    piVar3 = (int *)FUN_0049174b(in_EDX,param_4 << 2);
    local_6c = 0;
    if (0 < param_4) {
      piVar5 = piVar3;
      do {
        sVar4 = _strlen(*(char **)(((int)param_6 - (int)piVar3) + (int)piVar5));
        bVar6 = local_6c != param_4 + -1;
        local_6c = local_6c + 1;
        *piVar5 = sVar4 + bVar6;
        piVar5 = piVar5 + 1;
      } while (local_6c < param_4);
    }
    FUN_0049ad1f();
    FUN_0049ad91(local_64,iVar1 + 1);
    FUN_0048f4a2();
    FUN_0048f4a2();
    local_c = (undefined1)param_3;
    local_b = (undefined1)param_4;
    FUN_0049ad91(local_14,10);
    FUN_0049ad91(param_5,sVar2 + (param_4 != 0));
    if (0 < param_4) {
      iVar1 = (int)piVar3 - (int)param_6;
      do {
        FUN_0049ad91(*param_6,*(undefined4 *)(iVar1 + (int)param_6));
        param_6 = param_6 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    FUN_00491789(in_EDX,piVar3);
    FUN_0049adc5();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00491122();
}

