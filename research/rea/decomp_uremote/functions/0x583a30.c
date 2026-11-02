// rea decompile_all
// name: FUN_00583a30
// address: 0x583a30
// body: available
// range: 0x583a30-0x584042 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00583a30(uint *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int local_c;
  int local_8;
  
  FUN_0057b2a0(param_1);
  *param_1 = *param_1 + 3 & 0xfffffffc;
  *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x28);
  *param_1 = *param_1 + 4;
  if ((*(uint *)(in_ECX + 0x28) & 0x100) != 0) {
    FUN_0054b9f0(param_1,in_ECX + 0x38);
  }
  *param_1 = *param_1 + 3 & 0xfffffffc;
  if ((*(uint *)(in_ECX + 0x28) & 0x800000) != 0) {
    puVar1 = (undefined4 *)*param_1;
    *puVar1 = *(undefined4 *)(in_ECX + 0x30);
    puVar1[1] = *(undefined4 *)(in_ECX + 0x34);
    *param_1 = *param_1 + 8;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x8000000) != 0) {
    FUN_0056e9c0(param_1,in_ECX + 0x98);
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x1000) != 0) {
    FUN_00507bf0(param_1,in_ECX + 0x58);
  }
  *param_1 = *param_1 + 3 & 0xfffffffc;
  if ((*(uint *)(in_ECX + 0x28) & 0x2000) != 0) {
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0xa4);
    *param_1 = *param_1 + 4;
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0xa8);
    *param_1 = *param_1 + 4;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x4000) != 0) {
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0xac);
    *param_1 = *param_1 + 4;
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0xb0);
    *param_1 = *param_1 + 4;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x8000) != 0) {
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0xb4);
    *param_1 = *param_1 + 4;
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0xb8);
    *param_1 = *param_1 + 4;
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0xbc);
    *param_1 = *param_1 + 4;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x10000000) != 0) {
    FUN_0056fa60(param_1,in_ECX + 0x88);
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x20000) != 0) {
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0xc0);
    *param_1 = *param_1 + 2;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x40000) != 0) {
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0xc2);
    *param_1 = *param_1 + 2;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x80000) != 0) {
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0xc4);
    *param_1 = *param_1 + 2;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x100000) != 0) {
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0xc6);
    *param_1 = *param_1 + 2;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x200000) != 0) {
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 200);
    *param_1 = *param_1 + 2;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x400000) != 0) {
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0xca);
    *param_1 = *param_1 + 2;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x20000000) != 0) {
    FUN_0056f940(param_1,in_ECX + 0xf4);
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x200) != 0) {
    FUN_0054b9f0(param_1,in_ECX + 0x40);
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x400) != 0) {
    *param_1 = *param_1 + 1 & 0xfffffffe;
    FUN_0054b9f0(param_1,in_ECX + 0x48);
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x800) != 0) {
    *param_1 = *param_1 + 1 & 0xfffffffe;
    FUN_0054b9f0(param_1,in_ECX + 0x50);
  }
  *param_1 = *param_1 + 3 & 0xfffffffc;
  if ((*(uint *)(in_ECX + 0x28) & 0x10000) != 0) {
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0xa0);
    *param_1 = *param_1 + 4;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x1000000) != 0) {
    FUN_00549850(param_1,in_ECX + 100);
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x2000000) != 0) {
    FUN_00549850(param_1,in_ECX + 0x70);
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x4000000) != 0) {
    FUN_00549850(param_1,in_ECX + 0x7c);
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x40000000) != 0) {
    *param_1 = *param_1 + 1 & 0xfffffffe;
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0xcc);
    *param_1 = *param_1 + 2;
    for (local_8 = 0; local_8 < (int)(uint)*(ushort *)(in_ECX + 0xcc); local_8 = local_8 + 1) {
      *(undefined2 *)*param_1 = *(undefined2 *)(*(int *)(in_ECX + 0xd8) + local_8 * 2);
      *param_1 = *param_1 + 2;
    }
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x80000000) != 0) {
    *param_1 = *param_1 + 1 & 0xfffffffe;
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0xce);
    *param_1 = *param_1 + 2;
    for (local_c = 0; local_c < (int)(uint)*(ushort *)(in_ECX + 0xce); local_c = local_c + 1) {
      *param_1 = *param_1 + 1 & 0xfffffffe;
      FUN_0054b9f0(param_1,*(undefined4 *)(*(int *)(in_ECX + 0xdc) + local_c * 4));
    }
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x80) != 0) {
    *param_1 = *param_1 + 1 & 0xfffffffe;
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0xd0);
    *param_1 = *param_1 + 2;
    _memcpy((void *)*param_1,*(void **)(in_ECX + 0xe0),(uint)*(ushort *)(in_ECX + 0xd0));
    *param_1 = (uint)*(ushort *)(in_ECX + 0xd0) + *param_1;
  }
  if ((*(uint *)(in_ECX + 0x28) & 0x10000) != 0) {
    *param_1 = *param_1 + 1 & 0xfffffffe;
    FUN_00507c90(param_1);
  }
  return;
}

