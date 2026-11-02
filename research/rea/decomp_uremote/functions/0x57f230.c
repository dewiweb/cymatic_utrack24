// rea decompile_all
// name: FUN_0057f230
// address: 0x57f230
// body: available
// range: 0x57f230-0x57f35e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057f230(int *param_1)

{
  ushort uVar1;
  int in_ECX;
  undefined4 local_10;
  undefined4 local_8;
  
  *(undefined1 *)*param_1 = *(undefined1 *)(in_ECX + 4);
  *param_1 = *param_1 + 1;
  *(undefined1 *)*param_1 = *(undefined1 *)(in_ECX + 5);
  *param_1 = *param_1 + 1;
  _memcpy((void *)*param_1,(void *)(in_ECX + 6),6);
  *param_1 = *param_1 + 6;
  uVar1 = *(ushort *)(in_ECX + 0xc);
  *(ushort *)*param_1 = uVar1;
  *param_1 = *param_1 + 2;
  for (local_8 = 0; local_8 < uVar1; local_8 = local_8 + 1) {
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0xe + local_8 * 2);
    *param_1 = *param_1 + 2;
  }
  uVar1 = *(ushort *)(in_ECX + 0x10e);
  *(ushort *)*param_1 = uVar1;
  *param_1 = *param_1 + 2;
  for (local_10 = 0; local_10 < uVar1; local_10 = local_10 + 1) {
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0x110 + local_10 * 2);
    *param_1 = *param_1 + 2;
  }
  return;
}

