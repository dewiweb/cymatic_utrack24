// rea decompile_all
// name: FUN_0049be32
// address: 0x49be32
// body: available
// range: 0x49be32-0x49bed3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49be64 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049be32(char *param_1)

{
  int iVar1;
  size_t sVar2;
  undefined1 local_58 [80];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0049b37e(local_58);
  if (iVar1 != 0) {
    if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
      sVar2 = 0;
    }
    else {
      sVar2 = _strlen(param_1);
    }
    if (sVar2 <= 0x7ffffffeU - iVar1) {
      FUN_0049ad1f();
      FUN_0049ad91(local_58,iVar1 + 1);
      if (sVar2 != 0) {
        FUN_0049ad91(param_1,sVar2);
      }
      FUN_0049adc5();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00491122();
}

