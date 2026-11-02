// rea decompile_all
// name: FUN_004118ab
// address: 0x4118ab
// body: available
// range: 0x4118ab-0x411911 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004118ab(void)

{
  int iVar1;
  byte bVar2;
  int *in_ECX;
  int local_c;
  int local_8;
  
  local_c = *in_ECX;
  local_8 = in_ECX[1];
  if (local_c == 0) {
    if (local_8 < 0) {
      local_8 = -local_8;
    }
    return local_8;
  }
  if (local_8 == 0) {
    if (local_c < 0) {
      return -local_c;
    }
  }
  else {
    iVar1 = FUN_0041178f();
    FUN_00411802(&local_c);
    local_c = FUN_00411736();
    bVar2 = (byte)iVar1;
    if (iVar1 < 1) {
      local_c = local_c << (-bVar2 & 0x1f);
    }
    else {
      local_c = (1 << (bVar2 - 1 & 0x1f)) + local_c >> (bVar2 & 0x1f);
    }
  }
  return local_c;
}

