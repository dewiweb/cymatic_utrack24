// rea decompile_all
// name: FUN_0054f190
// address: 0x54f190
// body: available
// range: 0x54f190-0x54f223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054f190(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  int in_ECX;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if (*(int *)(in_ECX + 4) != -1) {
    local_c = 0;
    local_20 = 2;
    local_1c = *(undefined4 *)(in_ECX + 8);
    local_1e = Ordinal_9(param_3);
    local_8 = Ordinal_20(*(undefined4 *)(in_ECX + 4),param_1,param_2,0,&local_20,0x10);
    if (local_8 == -1) {
      Ordinal_111();
      local_c = 2;
    }
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

