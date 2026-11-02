// rea decompile_all
// name: FUN_00498420
// address: 0x498420
// body: available
// range: 0x498420-0x4984d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00498420(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  iVar2 = 7;
  if (0 < *(int *)(in_ECX + 0x94)) {
    iVar2 = *(int *)(in_ECX + 0x94);
  }
  while( true ) {
    *(int *)(in_ECX + 0xcc) = *(int *)(in_ECX + 0xcc) + 1;
    iVar1 = FUN_004984e0(param_1);
    if (param_1 < iVar1) break;
    if (((param_1 / 2 < iVar1) || (*(int *)(in_ECX + 0xd0) < param_2)) ||
       (iVar2 <= *(int *)(in_ECX + 0xcc))) goto LAB_004984a3;
  }
  iVar1 = *(int *)(in_ECX + 0xcc) + -1;
  iVar2 = 1;
  if (1 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(in_ECX + 0xcc) = iVar2;
  FUN_004984e0(param_1);
LAB_004984a3:
  iVar2 = *(int *)(in_ECX + 0xd0);
  iVar1 = iVar2;
  if (param_2 < iVar2) {
    iVar1 = param_2;
  }
  *(bool *)(in_ECX + 0xc5) = iVar1 < iVar2;
  uVar3 = FUN_004989e0();
  *param_3 = uVar3;
  *param_4 = iVar1 + 4;
  return;
}

