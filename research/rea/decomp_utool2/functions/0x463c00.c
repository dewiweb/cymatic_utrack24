// rea decompile_all
// name: FUN_00463c00
// address: 0x463c00
// body: available
// range: 0x463c00-0x463c5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00463c00(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x4c);
  if ((iVar1 == 0) || (*(int *)(param_1 + 4) < *(int *)(iVar1 + 4))) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_ECX + 0x4c);
    *(int *)(in_ECX + 0x4c) = param_1;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x10);
    while ((iVar2 != 0 &&
           (iVar3 = *(int *)(iVar1 + 0x10), *(int *)(iVar3 + 4) <= *(int *)(param_1 + 4)))) {
      iVar2 = *(int *)(iVar3 + 0x10);
      iVar1 = iVar3;
    }
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    *(int *)(param_1 + 0xc) = iVar1;
    *(int *)(iVar1 + 0x10) = param_1;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(*(int *)(param_1 + 0x10) + 0xc) = param_1;
  }
  SetEvent(*(HANDLE *)(in_ECX + 0x2c));
  return;
}

