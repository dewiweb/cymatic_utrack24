// rea decompile_all
// name: FUN_00596260
// address: 0x596260
// body: available
// range: 0x596260-0x5963f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00596260(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_006e9790(0,0,*(undefined4 *)(in_ECX + 0x18),0x5a);
  FUN_006e9790((*(int *)(in_ECX + 0x18) + -100) / 2,*(int *)(in_ECX + 0x1c) + -0x1e,100,0x1e);
  FUN_006e9790(*(int *)(in_ECX + 0x1d98) + *(int *)(in_ECX + 0x1da0) + 10,
               *(int *)(in_ECX + 0x1d9c) + 5,0x32,0x14);
  FUN_006e9790(*(int *)(in_ECX + 0x1f58) + *(int *)(in_ECX + 0x1f60) + 4,
               *(undefined4 *)(in_ECX + 0x1f5c),100,0x14);
  FUN_006e9790(*(int *)(in_ECX + 0x2028) + *(int *)(in_ECX + 0x2030) + 10,
               *(undefined4 *)(in_ECX + 0x1d9c),*(undefined4 *)(in_ECX + 0x1da4),
               *(undefined4 *)(in_ECX + 0x1da4));
  FUN_006e9790(*(int *)(in_ECX + 0x18) + -0x78,*(undefined4 *)(in_ECX + 0x1d9c),0x78,
               *(undefined4 *)(in_ECX + 0x1da4));
  FUN_006e9790(0,*(int *)(in_ECX + 0xac) + *(int *)(in_ECX + 0xb4) + 5,
               *(int *)(in_ECX + 0x18) / 2 + -5,
               ((*(int *)(in_ECX + 0x1c) - *(int *)(in_ECX + 0xb4)) - *(int *)(in_ECX + 0xac)) +
               -0x2d);
  iVar1 = *(int *)(in_ECX + 0x18) / 2;
  FUN_006e9790(iVar1 + 5,*(undefined4 *)(in_ECX + 0x186c),iVar1 + -5,
               *(undefined4 *)(in_ECX + 0x1874));
  FUN_006e9790(*(int *)(in_ECX + 0x1868) + 0x78,
               *(int *)(in_ECX + 0xac) + *(int *)(in_ECX + 0xb4) + 5,0x10,0x10);
  FUN_006e9790(*(int *)(in_ECX + 0x1924) + 0x78,
               *(int *)(in_ECX + 0xac) + *(int *)(in_ECX + 0xb4) + 5,0x10,0x10);
  return;
}

