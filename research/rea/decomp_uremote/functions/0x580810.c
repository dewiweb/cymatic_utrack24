// rea decompile_all
// name: FUN_00580810
// address: 0x580810
// body: available
// range: 0x580810-0x58089f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00580810(uint *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *in_ECX;
  
  uVar1 = *param_1;
  uVar3 = (**(code **)(*in_ECX + 4))();
  if ((int)uVar3 <= (int)(param_2 - uVar1)) {
    in_ECX[4] = *(int *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined2 *)(in_ECX + 5) = *(undefined2 *)*param_1;
    *param_1 = *param_1 + 2;
    *param_1 = *param_1 + 3 & 0xfffffffc;
    piVar2 = (int *)*param_1;
    in_ECX[6] = *piVar2;
    in_ECX[7] = piVar2[1];
    uVar3 = *param_1 + 8;
    *param_1 = uVar3;
  }
  return uVar3 & 0xffffff00;
}

