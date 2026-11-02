// rea decompile_all
// name: FUN_00466d47
// address: 0x466d47
// body: available
// range: 0x466d47-0x466d9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00466d47(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  int iVar2;
  byte local_10;
  undefined1 local_f [7];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  uVar1 = param_1;
  if ((int)param_1 < 0) {
    uVar1 = -param_1;
  }
  iVar2 = 0;
  for (; uVar1 != 0; uVar1 = uVar1 >> 8) {
    local_f[iVar2] = (char)uVar1;
    iVar2 = iVar2 + 1;
  }
  local_10 = (byte)iVar2;
  if ((int)param_1 < 0) {
    local_10 = local_10 | 0x80;
  }
  (**(code **)(*in_ECX + 0x10))(&local_10,iVar2 + 1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

