// rea decompile_all
// name: FUN_004b5ac0
// address: 0x4b5ac0
// body: available
// range: 0x4b5ac0-0x4b5b2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b5ac0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined1 local_18 [20];
  
  iVar2 = *(int *)(in_ECX + 0x2c);
  for (iVar1 = *(int *)(*(int *)(in_ECX + 0x2c) + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    iVar2 = iVar1;
  }
  if ((*(byte *)(iVar2 + 0x68) & 1) == 0) {
    if (*(int *)(iVar2 + 0xc) == 0) {
      return;
    }
    iVar2 = FUN_006d1d80();
  }
  else {
    iVar2 = FUN_0068db10();
  }
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0068c830(local_18,*(undefined4 *)(in_ECX + 0x2c));
    if (*(HWND *)(in_ECX + 0x30) != (HWND)0x0) {
      MoveWindow(*(HWND *)(in_ECX + 0x30),*piVar3,piVar3[1],piVar3[2],piVar3[3],1);
    }
  }
  return;
}

