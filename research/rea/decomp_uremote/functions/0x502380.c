// rea decompile_all
// name: FUN_00502380
// address: 0x502380
// body: available
// range: 0x502380-0x50244f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00502380(int param_1)

{
  int local_68;
  undefined4 local_60;
  char local_5c [80];
  uint local_c;
  int local_8;
  
  local_c = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if (param_1 < 0) {
    local_68 = -param_1;
  }
  else {
    local_68 = param_1;
  }
  local_8 = local_68;
  local_60 = local_5c + 0x4f;
  local_5c[0x4f] = 0;
  if (param_1 == 0) {
    local_60 = local_5c + 0x4e;
    local_5c[0x4e] = 0x30;
  }
  else {
    for (; (local_5c < local_60 && (0 < local_8)); local_8 = local_8 / 10) {
      local_60 = local_60 + -1;
      *local_60 = (char)(local_8 % 10) + '0';
    }
    if (param_1 < 0) {
      local_60 = local_60 + -1;
      *local_60 = '-';
    }
  }
  FUN_00501fb0(local_60,local_5c + (0x4f - (int)local_60));
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

