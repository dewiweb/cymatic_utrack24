// rea decompile_all
// name: FUN_00589250
// address: 0x589250
// body: available
// range: 0x589250-0x58934f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00589250(void)

{
  int in_ECX;
  int local_8;
  
  local_8 = 0x1c;
  if (((*(ushort *)(in_ECX + 0x28) & 7) != 0) && ((*(ushort *)(in_ECX + 0x28) & 7) < 3)) {
    local_8 = 0x24;
  }
  switch(*(ushort *)(in_ECX + 0x28) & 0xff8) {
  case 8:
    local_8 = (local_8 + (uint)(ushort)(*(short *)(in_ECX + 0x76) + 2) + 0x11 & 0xfffffffe) + 2;
    break;
  case 0x10:
    local_8 = local_8 + 0x1a + (uint)(ushort)(*(short *)(in_ECX + 0x76) + 2);
    break;
  case 0x18:
    local_8 = local_8 + 0x1c + (uint)(ushort)(*(short *)(in_ECX + 0x76) + 2);
    break;
  case 0x20:
    local_8 = local_8 + 0x1c + (uint)(ushort)(*(short *)(in_ECX + 0x76) + 2);
    break;
  default:
    local_8 = (uint)(ushort)(*(short *)(in_ECX + 0x76) + 2) + local_8;
  }
  return local_8;
}

