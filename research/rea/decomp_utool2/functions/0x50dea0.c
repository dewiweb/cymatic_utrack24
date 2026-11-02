// rea decompile_all
// name: FUN_0050dea0
// address: 0x50dea0
// body: available
// range: 0x50dea0-0x50dfd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050dea0(void)

{
  int in_ECX;
  int iVar1;
  
  FUN_006e9790(*(int *)(in_ECX + 0x18) / 2 + -0x34,*(int *)(in_ECX + 0x1c) + -0x1e,0x30,0x18);
  FUN_006e9790(*(int *)(in_ECX + 0x18) / 2 + 2,*(undefined4 *)(in_ECX + 0x344),0x30,0x18);
  FUN_006e9790(*(int *)(in_ECX + 0x228) + *(int *)(in_ECX + 0x230) + 5,*(int *)(in_ECX + 0x344) + 2,
               0x6e,0x14);
  FUN_006e9790(*(int *)(in_ECX + 0x340) + -300,*(undefined4 *)(in_ECX + 0x61c),0x122,0x14);
  *(undefined4 *)(in_ECX + 0x758) = 0x20;
  FUN_006e9790(0,*(int *)(in_ECX + 0x344) + -0x2d,*(undefined4 *)(in_ECX + 0x18),0x28);
  FUN_006e9790(8,0,*(int *)(in_ECX + 0x18) + -0x10,*(int *)(in_ECX + 0x6ec) + -5);
  iVar1 = *(int *)(in_ECX + 0x460);
  if (*(int *)(in_ECX + 0x460) < *(int *)(in_ECX + 0x540)) {
    iVar1 = *(int *)(in_ECX + 0x540);
  }
  FUN_006e9790((*(int *)(in_ECX + 0xd8) - iVar1) + *(int *)(in_ECX + 0xd0),
               *(undefined4 *)(in_ECX + 0x344),iVar1,0x14);
  FUN_006e9790((*(int *)(in_ECX + 0x458) - iVar1) + -10,*(undefined4 *)(in_ECX + 0x344),iVar1,0x14);
  return;
}

