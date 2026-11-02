// rea decompile_all
// name: FUN_005ad8f0
// address: 0x5ad8f0
// body: available
// range: 0x5ad8f0-0x5ada09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ad8f0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x18) / 3;
  iVar2 = (*(int *)(in_ECX + 0x1c) + -0x3c) / 5;
  FUN_006e9790(0x14,10,iVar1,iVar2);
  FUN_006e9790(0x14,*(int *)(in_ECX + 0x47c) + *(int *)(in_ECX + 0x484) + 10,iVar1,iVar2);
  FUN_006e9790(0x14,*(int *)(in_ECX + 0x39c) + *(int *)(in_ECX + 0x3a4) + 10,iVar1,iVar2);
  FUN_006e9790(0x14,*(int *)(in_ECX + 0x55c) + *(int *)(in_ECX + 0x564) + 10,iVar1,iVar2);
  FUN_006e9790(0x14,*(int *)(in_ECX + 0x63c) + *(int *)(in_ECX + 0x644) + 10,iVar1,iVar2);
  iVar2 = *(int *)(in_ECX + 0x1c) / 2;
  FUN_006e9790(iVar1 + 0x28,iVar2 + 10,iVar1 * 2 + -0x3c,
               ((*(int *)(in_ECX + 0x724) + *(int *)(in_ECX + 0x71c)) - iVar2) + -10);
  FUN_006e9790(iVar1 + 0x28,*(int *)(in_ECX + 0x47c),*(undefined4 *)(in_ECX + 0x90),
               (*(int *)(in_ECX + 0x8c) - *(int *)(in_ECX + 0x47c)) + -10);
  return;
}

