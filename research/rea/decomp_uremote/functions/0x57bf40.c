// rea decompile_all
// name: FUN_0057bf40
// address: 0x57bf40
// body: available
// range: 0x57bf40-0x57c08d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057bf40(uint *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  int *in_ECX;
  int local_8;
  
  uVar2 = (**(code **)(*in_ECX + 4))();
  *(int *)*param_1 = in_ECX[4];
  *param_1 = *param_1 + 4;
  *(undefined2 *)*param_1 = uVar2;
  *param_1 = *param_1 + 2;
  *(char *)*param_1 = (char)in_ECX[8];
  *param_1 = *param_1 + 1;
  *param_1 = *param_1 + 3 & 0xfffffffc;
  *(int *)*param_1 = in_ECX[9];
  *param_1 = *param_1 + 4;
  *(short *)*param_1 = (short)in_ECX[10];
  *param_1 = *param_1 + 2;
  *(undefined2 *)*param_1 = 0;
  *param_1 = *param_1 + 2;
  for (local_8 = 0; local_8 < (int)(uint)*(ushort *)(in_ECX + 10); local_8 = local_8 + 1) {
    *(short *)*param_1 = (short)in_ECX[local_8 * 4 + 0xe];
    *param_1 = *param_1 + 2;
    *(undefined2 *)*param_1 = 0;
    *param_1 = *param_1 + 2;
    piVar1 = (int *)*param_1;
    *piVar1 = in_ECX[local_8 * 4 + 0xc];
    piVar1[1] = in_ECX[local_8 * 4 + 0xd];
    *param_1 = *param_1 + 8;
  }
  return;
}

