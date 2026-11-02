// rea decompile_all
// name: FUN_0058e410
// address: 0x58e410
// body: available
// range: 0x58e410-0x58e4d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0058e410(int *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  int in_ECX;
  
  bVar3 = 0x13 < param_2 - *param_1;
  if (bVar3) {
    *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined2 *)(in_ECX + 0x14) = *(undefined2 *)*param_1;
    *param_1 = *param_1 + 2;
    cVar1 = *(char *)*param_1;
    *param_1 = *param_1 + 1;
    *(bool *)(in_ECX + 0x24) = cVar1 != '\0';
    *param_1 = *param_1 + 1;
    puVar2 = (undefined4 *)*param_1;
    *(undefined4 *)(in_ECX + 0x18) = *puVar2;
    *(undefined4 *)(in_ECX + 0x1c) = puVar2[1];
    *param_1 = *param_1 + 8;
    *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
  }
  return bVar3;
}

