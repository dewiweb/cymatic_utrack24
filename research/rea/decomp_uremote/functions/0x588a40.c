// rea decompile_all
// name: FUN_00588a40
// address: 0x588a40
// body: available
// range: 0x588a40-0x588b66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00588a40(int *param_1)

{
  undefined2 uVar1;
  int *in_ECX;
  
  uVar1 = (**(code **)(*in_ECX + 4))();
  *(int *)*param_1 = in_ECX[4];
  *param_1 = *param_1 + 4;
  *(undefined2 *)*param_1 = uVar1;
  *param_1 = *param_1 + 2;
  *(short *)*param_1 = (short)in_ECX[6];
  *param_1 = *param_1 + 2;
  *(undefined2 *)*param_1 = *(undefined2 *)((int)in_ECX + 0x1a);
  *param_1 = *param_1 + 2;
  *(short *)*param_1 = (short)in_ECX[7];
  *param_1 = *param_1 + 2;
  *(undefined2 *)*param_1 = *(undefined2 *)((int)in_ECX + 0x1e);
  *param_1 = *param_1 + 2;
  *(short *)*param_1 = (short)in_ECX[8];
  *param_1 = *param_1 + 2;
  FUN_00507bf0(param_1,in_ECX + 0xb);
  *(short *)*param_1 = (short)in_ECX[0xe];
  *param_1 = *param_1 + 2;
  FUN_0054b9f0(param_1,in_ECX + 9);
  return;
}

