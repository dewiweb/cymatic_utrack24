// rea decompile_all
// name: FUN_00502bc0
// address: 0x502bc0
// body: available
// range: 0x502bc0-0x502c32 inclusive
// range: 0x502c35-0x502c50 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00502bc0(undefined4 *param_1)

{
  int iVar1;
  uint3 uVar2;
  undefined4 *in_ECX;
  char *local_c;
  char *local_8;
  
  local_c = (char *)*in_ECX;
  local_8 = (char *)*param_1;
  if ((local_c == (char *)0x0) || (local_8 == (char *)0x0)) {
    uVar2 = (uint3)((uint)local_8 >> 8);
    if (local_8 == (char *)0x0) {
      iVar1 = 1;
    }
    else if (local_c == (char *)0x0) {
      iVar1 = CONCAT31(uVar2,1);
    }
    else {
      iVar1 = (uint)uVar2 << 8;
    }
  }
  else {
    for (; (*local_c != '\0' && (*local_8 != '\0')); local_8 = local_8 + 1) {
      if (*local_c != *local_8) {
        return (uint)(uint3)(*local_c >> 7) << 8;
      }
      local_c = local_c + 1;
    }
    if (*local_8 == '\0') {
      iVar1 = 1;
    }
    else {
      iVar1 = (uint)(uint3)(*local_8 >> 7) << 8;
    }
  }
  return iVar1;
}

