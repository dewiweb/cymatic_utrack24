// rea decompile_all
// name: FUN_00581f30
// address: 0x581f30
// body: available
// range: 0x581f30-0x581fe8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00581f30(int *param_1)

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
  _memcpy((void *)*param_1,(void *)in_ECX[7],(uint)*(ushort *)((int)in_ECX + 0x1a));
  *param_1 = (uint)*(ushort *)((int)in_ECX + 0x1a) + *param_1;
  return;
}

