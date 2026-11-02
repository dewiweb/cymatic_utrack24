// rea decompile_all
// name: FUN_0049b9cb
// address: 0x49b9cb
// body: available
// range: 0x49b9cb-0x49bae8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49ba13 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049b9cb(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int in_EDX;
  undefined1 *puVar4;
  undefined1 local_64 [80];
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  cVar1 = *(char *)(in_EDX + 4);
  iVar2 = FUN_0049b37e(local_64);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
  FUN_0049ad1f();
  FUN_0049ad91(local_64,iVar2 + 1);
  FUN_0049ad91((char *)(in_EDX + 4),1);
  puVar4 = *(undefined1 **)(in_EDX + 8);
  puVar3 = puVar4 + *(int *)(in_EDX + 0xc) * 10;
  for (; puVar4 < puVar3; puVar4 = puVar4 + 10) {
    if (*(char *)(in_EDX + 4) == '\b') {
      local_14 = *puVar4;
      local_13 = puVar4[2];
      local_12 = puVar4[4];
      local_11 = puVar4[6];
    }
    else {
      FUN_0049aca3();
      FUN_0049aca3();
      FUN_0049aca3();
      FUN_0049aca3();
    }
    FUN_0049aca3();
    FUN_0049ad91(&local_14,(cVar1 != '\b') * '\x04' + '\x06');
    puVar3 = (undefined1 *)(*(int *)(in_EDX + 0xc) * 10 + *(int *)(in_EDX + 8));
  }
  FUN_0049adc5();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

