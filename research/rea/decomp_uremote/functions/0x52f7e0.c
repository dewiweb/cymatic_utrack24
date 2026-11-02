// rea decompile_all
// name: FUN_0052f7e0
// address: 0x52f7e0
// body: available
// range: 0x52f7e0-0x52f8fc inclusive
// range: 0x52f8ff-0x52f910 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0052f7e0(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  uint local_c;
  int *local_8;
  
  uVar1 = *(ushort *)(in_ECX + 0x13);
  local_c = 4;
  if ((uVar1 & 0x100) != 0) {
    local_c = 8;
  }
  uVar2 = local_c;
  if (((uVar1 & 0x200) != 0) && (uVar2 = local_c + 0xc, (*(ushort *)(in_ECX + 0x13) & 0x10) == 0)) {
    uVar2 = local_c + 0x10 +
            ((uint)*(ushort *)((int)in_ECX + 0x12) + (uint)*(ushort *)((int)in_ECX + 0x1a)) * 0xc;
  }
  local_c = uVar2;
  if (((uVar1 & 0x400) != 0) && ((*(ushort *)(in_ECX + 0x13) & 0x20) != 0)) {
    uVar2 = local_c + 4;
    if ((*(byte *)(in_ECX + 0x14) & 1) != 0) {
      uVar2 = local_c + 8;
    }
    local_c = uVar2;
    if ((*(byte *)(in_ECX + 0x14) & 2) != 0) {
      local_c = local_c + 8;
    }
  }
  local_c = local_c + 4;
  local_8 = (int *)*in_ECX;
  while (local_8 != (int *)0x0) {
    iVar3 = (**(code **)(*local_8 + 4))();
    local_c = iVar3 + local_c + 3 & 0xfffffffc;
    if (local_8 == (int *)0x0) {
      local_8 = (int *)*in_ECX;
    }
    else {
      local_8 = (int *)local_8[3];
    }
  }
  return local_c;
}

