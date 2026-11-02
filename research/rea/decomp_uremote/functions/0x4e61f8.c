// rea decompile_all
// name: FUN_004e61f8
// address: 0x4e61f8
// body: available
// range: 0x4e61f8-0x4e6244 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e61f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 auStack_14 [2];
  undefined1 *local_c;
  
  auStack_14[0] = param_2;
  cVar1 = FUN_004c1ebf(param_1);
  if (cVar1 == '\0') {
    auStack_14[0] = 0x4e6217;
    auStack_14[0] = thunk_FUN_004c1d58();
    cVar1 = FUN_004d30c9();
    if (cVar1 == '\0') {
      return;
    }
  }
  local_c = (undefined1 *)auStack_14;
  FUN_004c1e29(auStack_14,param_2,0);
  FUN_004c1eee(param_3);
  return;
}

