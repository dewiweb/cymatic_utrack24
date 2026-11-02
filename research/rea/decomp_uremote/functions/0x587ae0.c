// rea decompile_all
// name: FUN_00587ae0
// address: 0x587ae0
// body: available
// range: 0x587ae0-0x587bf1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00587ae0(int *param_1)

{
  ushort uVar1;
  int in_ECX;
  
  FUN_0057b2a0(param_1);
  *(undefined1 *)*param_1 = *(undefined1 *)(in_ECX + 0x28);
  *param_1 = *param_1 + 1;
  *(undefined1 *)*param_1 = *(undefined1 *)(in_ECX + 0x29);
  *param_1 = *param_1 + 1;
  *(undefined1 *)*param_1 = *(undefined1 *)(in_ECX + 0x2a);
  *param_1 = *param_1 + 1;
  *(undefined1 *)*param_1 = *(undefined1 *)(in_ECX + 0x36);
  *param_1 = *param_1 + 1;
  *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0x34);
  *param_1 = *param_1 + 2;
  *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x2c);
  *param_1 = *param_1 + 4;
  *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x30);
  *param_1 = *param_1 + 4;
  if (*(int *)(in_ECX + 0x38) != 0) {
    uVar1 = *(ushort *)(in_ECX + 0x34);
    _memcpy((void *)*param_1,*(void **)(in_ECX + 0x38),(uint)uVar1);
    *param_1 = *param_1 + (uint)uVar1;
  }
  return;
}

