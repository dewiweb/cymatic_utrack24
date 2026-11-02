// rea decompile_all
// name: FUN_0057e410
// address: 0x57e410
// body: available
// range: 0x57e410-0x57e500 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057e410(uint *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  int *in_ECX;
  
  uVar2 = (**(code **)(*in_ECX + 4))();
  *(int *)*param_1 = in_ECX[4];
  *param_1 = *param_1 + 4;
  *(undefined2 *)*param_1 = uVar2;
  *param_1 = *param_1 + 2;
  *param_1 = *param_1 + 3 & 0xfffffffc;
  piVar1 = (int *)*param_1;
  *piVar1 = in_ECX[6];
  piVar1[1] = in_ECX[7];
  *param_1 = *param_1 + 8;
  piVar1 = (int *)*param_1;
  *piVar1 = in_ECX[8];
  piVar1[1] = in_ECX[9];
  *param_1 = *param_1 + 8;
  *(int *)*param_1 = in_ECX[10];
  *param_1 = *param_1 + 4;
  *(char *)*param_1 = (char)in_ECX[0xb];
  *param_1 = *param_1 + 1;
  *(undefined1 *)*param_1 = *(undefined1 *)((int)in_ECX + 0x2d);
  *param_1 = *param_1 + 1;
  return;
}

