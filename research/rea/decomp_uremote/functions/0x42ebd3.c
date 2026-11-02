// rea decompile_all
// name: FUN_0042ebd3
// address: 0x42ebd3
// body: available
// range: 0x42ebd3-0x42ec3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042ebd3(uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x214);
  uVar2 = 6;
  if (puVar1 != (undefined4 *)0x0) {
    param_1 = 0;
    *param_2 = puVar1[1];
    param_2[1] = *puVar1;
    if (puVar1[1] != 0) {
      puVar4 = puVar1 + 2;
      param_2 = param_2 + 4;
      piVar3 = puVar1 + 0x17;
      do {
        param_1 = param_1 + 1;
        param_2[-2] = *puVar4;
        param_2[-1] = *(undefined4 *)*piVar3;
        *param_2 = *(undefined4 *)(*piVar3 + -4 + (uint)*(byte *)(piVar3 + -1) * 4);
        puVar4 = puVar4 + 1;
        param_2 = param_2 + 3;
        piVar3 = piVar3 + 3;
      } while (param_1 < (uint)puVar1[1]);
    }
    uVar2 = 0;
  }
  return uVar2;
}

