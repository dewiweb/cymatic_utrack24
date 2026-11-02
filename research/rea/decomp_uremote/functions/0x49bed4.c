// rea decompile_all
// name: FUN_0049bed4
// address: 0x49bed4
// body: available
// range: 0x49bed4-0x49bf92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49bf08 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049bed4(char *param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  undefined1 local_5c;
  undefined1 auStack_5b [83];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if (param_2 == -1) {
    FUN_0049be32(param_1);
LAB_0049bf85:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_2 == 0) {
    iVar1 = FUN_0049b37e(&local_5c);
    sVar2 = 0;
    if (iVar1 != 0) {
      auStack_5b[iVar1] = 0;
      if (param_1 != (char *)0x0) {
        sVar2 = _strlen(param_1);
      }
      FUN_0049b1fc(sVar2);
      iVar3 = FUN_0049b20a(0x7a545874,iVar1 + 2);
      if (iVar3 == 0) {
        FUN_0049ad1f();
        FUN_0049ad91(&local_5c,iVar1 + 2);
        FUN_0049b330();
        FUN_0049adc5();
        goto LAB_0049bf85;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00491122();
}

