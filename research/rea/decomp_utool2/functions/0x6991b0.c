// rea decompile_all
// name: FUN_006991b0
// address: 0x6991b0
// body: available
// range: 0x6991b0-0x699222 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006991b0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  iVar2 = 0;
  uVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x80)) {
    piVar4 = *(int **)(in_ECX + 0x78);
    do {
      if (*(int *)(*piVar4 + 4) == param_1) goto LAB_006991ec;
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x80));
  }
  uVar3 = 0xffffffff;
LAB_006991ec:
  uVar1 = FUN_00697d20(param_2);
  if (((uVar3 < *(uint *)(in_ECX + 0x80)) && (*(int *)(*(int *)(in_ECX + 0x78) + uVar3 * 4) != 0))
     && (uVar3 != uVar1)) {
    FUN_004ae650(uVar3,uVar1);
    FUN_00697c90();
  }
  return;
}

