// rea decompile_all
// name: FUN_0049b66a
// address: 0x49b66a
// body: available
// range: 0x49b66a-0x49b709 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49b692 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049b66a(int param_1)

{
  uint in_EAX;
  int in_ECX;
  undefined1 *puVar1;
  undefined4 local_8;
  
  if ((((*(byte *)(in_ECX + 0x21c) & 1) == 0) && (in_EAX == 0)) || (0x100 < in_EAX)) {
    if (*(char *)(in_ECX + 0x10b) == '\x03') {
                    /* WARNING: Subroutine does not return */
      FUN_00491122();
    }
  }
  else if ((*(byte *)(in_ECX + 0x10b) & 2) != 0) {
    *(short *)(in_ECX + 0xfc) = (short)in_EAX;
    local_8 = in_ECX;
    FUN_0049ad1f();
    if (in_EAX != 0) {
      puVar1 = (undefined1 *)(param_1 + 2);
      do {
        local_8._0_3_ = CONCAT12(*puVar1,*(undefined2 *)(puVar1 + -2));
        FUN_0049ad91(&local_8,3);
        puVar1 = puVar1 + 3;
        in_EAX = in_EAX - 1;
      } while (in_EAX != 0);
    }
    FUN_0049adc5();
    *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 2;
    return;
  }
  FUN_00491216();
  return;
}

