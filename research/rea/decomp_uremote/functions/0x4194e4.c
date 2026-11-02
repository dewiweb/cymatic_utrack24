// rea decompile_all
// name: FUN_004194e4
// address: 0x4194e4
// body: available
// range: 0x4194e4-0x419567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004194e4(undefined4 *param_1,int param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  undefined4 *extraout_EDX;
  undefined **ppuVar2;
  undefined4 *puVar3;
  
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[1] = param_2;
  param_1[2] = param_4;
  *param_1 = *(undefined4 *)(param_2 + 100);
  if (param_4 != 0) {
    iVar1 = **(int **)(param_4 + 0x9c);
    param_1[4] = iVar1 + 0x14;
    param_1[3] = iVar1;
    param_1[5] = iVar1 + 0x38;
    FUN_0040d5dd();
    extraout_EDX[0x13] = *(undefined4 *)(param_3 + 0x28);
    extraout_EDX[0x12] = 0;
    param_1 = extraout_EDX;
    if (param_5 != '\0') {
      extraout_EDX[0x12] = *(undefined4 *)(*(int *)(param_4 + 0x9c) + 0x24);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  ppuVar2 = &PTR_FUN_008fb8d8;
  puVar3 = param_1 + 0x14;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

