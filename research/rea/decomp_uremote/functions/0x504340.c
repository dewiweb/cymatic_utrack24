// rea decompile_all
// name: FUN_00504340
// address: 0x504340
// body: available
// range: 0x504340-0x5043f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00504340(undefined2 param_1,ushort param_2,undefined4 *param_3,char param_4)

{
  undefined2 *in_ECX;
  undefined4 *puVar1;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  if (param_4 != '\0') {
    in_ECX[1] = in_ECX[1] | 0x800;
  }
  puVar1 = (undefined4 *)(in_ECX + 2);
  if (param_3 != (undefined4 *)0x0) {
    param_2 = param_2 & 0xf000;
    if (param_2 == 0) {
      *(undefined2 *)puVar1 = *(undefined2 *)param_3;
    }
    else if (param_2 == 0x1000) {
      *puVar1 = *param_3;
    }
    else if (param_2 == 0x2000) {
      *puVar1 = *param_3;
      *(undefined4 *)(in_ECX + 4) = param_3[1];
    }
  }
  return;
}

