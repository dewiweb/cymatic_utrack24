// rea decompile_all
// name: FUN_00412bec
// address: 0x412bec
// body: available
// range: 0x412bec-0x412c4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00412bec(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_EDX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar2 = 0;
  if (*(int *)(param_2 + 0x48) != 0x62697473) {
    return 0x12;
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x68);
  if ((*(byte *)(*(int *)(param_2 + 0x9c) + 4) & 1) == 0) {
    FUN_00411bb1();
    uVar2 = FUN_00411bc2(extraout_EDX + 0x4c);
  }
  else {
    puVar4 = (undefined4 *)(param_2 + 0x4c);
    puVar5 = (undefined4 *)(param_1 + 0x1c);
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar1 = (uint *)(*(int *)(param_2 + 0x9c) + 4);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  return uVar2;
}

