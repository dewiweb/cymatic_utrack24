// rea decompile_all
// name: FUN_005aedb0
// address: 0x5aedb0
// body: available
// range: 0x5aedb0-0x5aee84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005aedb0(void)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  FUN_006e9790(0x28,10,*(int *)(in_ECX + 0x18) + -0x50,0x28);
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x88),0x46,*(undefined4 *)(in_ECX + 0x90),0x14);
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x88),0x5a,*(undefined4 *)(in_ECX + 0x90),0x1e);
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x10c),0x8c,*(undefined4 *)(in_ECX + 0x114),0x14);
  iVar2 = 0;
  iVar1 = 0xaa;
  if (0 < *(int *)(in_ECX + 0x374)) {
    do {
      FUN_006e9790(*(int *)(in_ECX + 0x18) / 2,iVar1,200,0x14);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x19;
    } while (iVar2 < *(int *)(in_ECX + 0x374));
  }
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x88),iVar1 + 0xf,*(undefined4 *)(in_ECX + 0x90),0x14);
  return;
}

