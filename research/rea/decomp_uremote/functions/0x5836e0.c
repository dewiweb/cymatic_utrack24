// rea decompile_all
// name: FUN_005836e0
// address: 0x5836e0
// body: available
// range: 0x5836e0-0x583a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005836e0(void)

{
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0x18;
  if ((*(uint *)(in_ECX + 0x28) & 0x100) != 0) {
    local_8 = (ushort)(*(short *)(in_ECX + 0x3e) + 2) + 0x18;
  }
  local_8 = local_8 + 3 & 0xfffffffc;
  if ((*(uint *)(in_ECX + 0x28) & 0x800000) != 0) {
    local_8 = local_8 + 8;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x8000000) != 0) {
    local_8 = local_8 + 8;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x1000) != 0) {
    local_8 = local_8 + 10;
  }
  local_8 = local_8 + 3 & 0xfffffffc;
  if ((*(uint *)(in_ECX + 0x28) & 0x2000) != 0) {
    local_8 = local_8 + 8;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x4000) != 0) {
    local_8 = local_8 + 8;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x8000) != 0) {
    local_8 = local_8 + 0xc;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x10000000) != 0) {
    local_8 = local_8 + 10;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x20000) != 0) {
    local_8 = local_8 + 2;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x40000) != 0) {
    local_8 = local_8 + 2;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x80000) != 0) {
    local_8 = local_8 + 2;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x100000) != 0) {
    local_8 = local_8 + 2;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x200000) != 0) {
    local_8 = local_8 + 2;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x400000) != 0) {
    local_8 = local_8 + 2;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x20000000) != 0) {
    local_8 = local_8 + 0x1c;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x200) != 0) {
    local_8 = (ushort)(*(short *)(in_ECX + 0x46) + 2) + local_8;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x400) != 0) {
    local_8 = (uint)(ushort)(*(short *)(in_ECX + 0x4e) + 2) + (local_8 + 1 & 0xfffffffe);
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x800) != 0) {
    local_8 = (uint)(ushort)(*(short *)(in_ECX + 0x56) + 2) + (local_8 + 1 & 0xfffffffe);
  }
  local_8 = local_8 + 3 & 0xfffffffc;
  if ((*(uint *)(in_ECX + 0x28) & 0x10000) != 0) {
    local_8 = local_8 + 4;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x1000000) != 0) {
    local_8 = local_8 + 0xc;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x2000000) != 0) {
    local_8 = local_8 + 0xc;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x4000000) != 0) {
    local_8 = local_8 + 0xc;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x40000000) != 0) {
    local_8 = local_8 + 2 + (uint)*(ushort *)(in_ECX + 0xcc) * 2;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x80000000) != 0) {
    local_8 = local_8 + 2;
    for (local_c = 0; local_c < (int)(uint)*(ushort *)(in_ECX + 0xce); local_c = local_c + 1) {
      local_8 = (uint)(ushort)(*(short *)(*(int *)(*(int *)(in_ECX + 0xdc) + local_c * 4) + 6) + 2)
                + (local_8 + 1 & 0xfffffffe);
    }
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x80) != 0) {
    local_8 = local_8 + 2 + (uint)*(ushort *)(in_ECX + 0xd0);
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x10000) != 0) {
    local_8 = (local_8 + 1 & 0xfffffffe) + 8;
  }
  return local_8;
}

