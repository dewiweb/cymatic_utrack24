// rea decompile_all
// name: FUN_006c5050
// address: 0x6c5050
// body: available
// range: 0x6c5050-0x6c50e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c5050(int *param_1)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(uint *)(in_ECX + 0xb0) < 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(in_ECX + 0xa8) + 4);
  }
  if (*(int *)(in_ECX + 0xb0) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(in_ECX + 0xa8);
  }
  if (*(uint *)(in_ECX + 0x98) < 2) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x90) + 4);
  }
  if (*(int *)(in_ECX + 0x98) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int **)(in_ECX + 0x90);
  }
  iVar1 = *(int *)(iVar1 + 4);
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  iVar2 = *(int *)(iVar2 + 4);
  param_1[1] = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  iVar3 = *(int *)(iVar3 + 4);
  param_1[2] = iVar3;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
  }
  iVar4 = *(int *)(iVar4 + 4);
  param_1[3] = iVar4;
  if (iVar4 != 0) {
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
  }
  return;
}

