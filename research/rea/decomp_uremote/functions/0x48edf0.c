// rea decompile_all
// name: FUN_0048edf0
// address: 0x48edf0
// body: available
// range: 0x48edf0-0x48ee64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048edf0(uint param_1)

{
  size_t _Size;
  uint in_ECX;
  int unaff_ESI;
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  _Size = 8;
  local_10[0] = 0x89;
  local_10[1] = 0x50;
  local_10[2] = 0x4e;
  local_10[3] = 0x47;
  local_10[4] = 0xd;
  local_10[5] = 10;
  local_10[6] = 0x1a;
  local_10[7] = 10;
  if (((8 < param_1) || (_Size = param_1, param_1 != 0)) && (in_ECX < 8)) {
    if (8 < in_ECX + _Size) {
      _Size = 8 - in_ECX;
    }
    _memcmp((void *)(in_ECX + unaff_ESI),local_10 + in_ECX,_Size);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

