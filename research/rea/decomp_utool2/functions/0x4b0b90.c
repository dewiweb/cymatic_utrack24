// rea decompile_all
// name: FUN_004b0b90
// address: 0x4b0b90
// body: available
// range: 0x4b0b90-0x4b0c6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b0b90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  int in_EDX;
  
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xc)) {
    iVar1 = in_EDX;
    if (param_1 == in_EDX) goto LAB_004b0c48;
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == param_1) goto LAB_004b0c56;
    }
    puVar5 = (undefined4 *)FUN_004b1190(param_2,param_3);
    param_2 = *puVar5;
    param_3 = puVar5[1];
  }
  if (in_EDX != 0) {
    iVar4 = *(int *)(in_EDX + 0xc);
    iVar1 = in_EDX;
    while (iVar3 = iVar4, iVar3 != 0) {
      iVar1 = iVar3;
      iVar4 = *(int *)(iVar3 + 0xc);
    }
    puVar5 = (undefined4 *)FUN_004b0f30(param_2,param_3);
    uVar2 = *puVar5;
    if (iVar1 == in_EDX) {
      in_ECX[1] = puVar5[1];
      *in_ECX = uVar2;
      return;
    }
LAB_004b0c56:
    FUN_004b2920();
    return;
  }
LAB_004b0c48:
  in_ECX[1] = param_3;
  *in_ECX = param_2;
  return;
}

