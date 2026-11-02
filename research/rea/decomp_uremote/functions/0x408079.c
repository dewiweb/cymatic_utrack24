// rea decompile_all
// name: FUN_00408079
// address: 0x408079
// body: available
// range: 0x408079-0x40814f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00408079(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = param_1;
  param_1 = 0;
  iVar1 = *(int *)(iVar1 + 0x2b4);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xb90) == 0) {
      puVar2 = (undefined4 *)FUN_00411912(0x20,&param_1);
      if (param_1 != 0) {
        return param_1;
      }
      uVar3 = FUN_004090bf();
      *puVar2 = uVar3;
      uVar3 = FUN_004090bf();
      puVar2[1] = uVar3;
      uVar3 = FUN_004090bf();
      puVar2[2] = uVar3;
      uVar3 = FUN_004090bf();
      puVar2[3] = uVar3;
      uVar3 = FUN_004090bf();
      puVar2[4] = uVar3;
      puVar2[5] = *(undefined4 *)(iVar1 + 0x548);
      *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(iVar1 + 0x544);
      *(undefined2 *)((int)puVar2 + 0x1a) = *(undefined2 *)(iVar1 + 0x54c);
      *(undefined2 *)(puVar2 + 7) = *(undefined2 *)(iVar1 + 0x550);
      *(undefined4 **)(iVar1 + 0xb90) = puVar2;
    }
    puVar2 = *(undefined4 **)(iVar1 + 0xb90);
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
  }
  return param_1;
}

