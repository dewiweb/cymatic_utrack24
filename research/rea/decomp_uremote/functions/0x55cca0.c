// rea decompile_all
// name: FUN_0055cca0
// address: 0x55cca0
// body: available
// range: 0x55cca0-0x55cd4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055cca0(undefined4 param_1)

{
  int in_ECX;
  undefined1 local_2c [4];
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  FUN_0054f6b0();
  *(undefined4 *)(in_ECX + -0x80) = param_1;
  local_c = 0x400000;
  local_10 = local_2c;
  if (*(int *)(in_ECX + -0x80) == 0) {
    local_28 = *(uint *)(in_ECX + -0x120);
    local_20 = local_28 & 0xffbfffff;
    *(uint *)(in_ECX + -0x120) = local_20;
    local_1c = local_20;
  }
  else {
    local_24 = *(uint *)(in_ECX + -0x120);
    local_18 = local_24 | 0x400000;
    *(uint *)(in_ECX + -0x120) = local_18;
    local_14 = local_18;
  }
  FUN_0054f6f0();
  return;
}

