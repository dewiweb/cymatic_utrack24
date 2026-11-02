// rea decompile_all
// name: FUN_004f56c5
// address: 0x4f56c5
// body: available
// range: 0x4f56c5-0x4f573b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f56c5(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    if (param_2 != 1) {
      return 1;
    }
  }
  else {
    *param_4 = 0;
  }
  if (((*(int *)(param_1 + 0xc) == 0) && (param_2 != 0)) && (param_3 != (undefined4 *)0x0)) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    puVar2 = puVar1;
    puVar5 = param_3;
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    if (puVar1[1] != 0) {
      puVar2 = CoTaskMemAlloc(0x10);
      param_3[1] = puVar2;
      puVar1 = (undefined4 *)puVar1[1];
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

