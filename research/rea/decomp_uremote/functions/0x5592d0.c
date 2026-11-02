// rea decompile_all
// name: FUN_005592d0
// address: 0x5592d0
// body: available
// range: 0x5592d0-0x5593b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005592d0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint in_ECX;
  undefined4 local_8;
  
  if (param_1 < *(ushort *)(in_ECX + 0x10)) {
    FUN_0055b310(*(undefined2 *)(*(int *)(in_ECX + 8) + param_1 * 8));
    for (local_8 = param_1; local_8 < *(ushort *)(in_ECX + 0x10) - 1; local_8 = local_8 + 1) {
      uVar1 = *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc + local_8 * 8);
      iVar2 = *(int *)(in_ECX + 8);
      *(undefined4 *)(iVar2 + local_8 * 8) = *(undefined4 *)(*(int *)(in_ECX + 8) + 8 + local_8 * 8)
      ;
      *(undefined4 *)(iVar2 + 4 + local_8 * 8) = uVar1;
    }
    *(short *)(in_ECX + 0x10) = *(short *)(in_ECX + 0x10) + -1;
    *(undefined2 *)(*(int *)(in_ECX + 8) + 2 + (uint)*(ushort *)(in_ECX + 0x10) * 8) = 0xffff;
    *(undefined2 *)(*(int *)(in_ECX + 8) + (uint)*(ushort *)(in_ECX + 0x10) * 8) = 0xffff;
    *(undefined1 *)(*(int *)(in_ECX + 8) + 6 + (uint)*(ushort *)(in_ECX + 0x10) * 8) = 0xff;
    iVar2 = *(int *)(in_ECX + 8);
    *(undefined2 *)(iVar2 + 4 + (uint)*(ushort *)(in_ECX + 0x10) * 8) = 0xff;
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  else {
    uVar3 = in_ECX & 0xffffff00;
  }
  return uVar3;
}

