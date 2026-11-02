// rea decompile_all
// name: FUN_004ff550
// address: 0x4ff550
// body: available
// range: 0x4ff550-0x4ff6d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ff550(void)

{
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_004b0b90(*(int *)(in_ECX + 0x78),0,*(int *)(*(int *)(in_ECX + 0x78) + 0x1c) + 2);
  if (*(int *)(DAT_00c8a5d4 + 0x1c) < local_c + 0x8c) {
    FUN_004b0b90(*(undefined4 *)(in_ECX + 0x78),0,0xffffff72);
  }
  *(int *)(in_ECX + 0x80) = local_c;
  *(undefined4 *)(in_ECX + 0x7c) = local_10;
  *(undefined4 *)(in_ECX + 0x84) = 0xfa;
  *(undefined4 *)(in_ECX + 0x88) = 0x8c;
  FUN_006e9790(*(int *)(in_ECX + 0x7c) + 10,*(int *)(in_ECX + 0x80) + 10,
               *(undefined4 *)(in_ECX + 0xa4),*(undefined4 *)(in_ECX + 0xa8));
  FUN_006e9790(*(int *)(in_ECX + 0x7c) + 10,*(int *)(in_ECX + 0x80) + 0x28,
               *(undefined4 *)(in_ECX + 0x198),*(undefined4 *)(in_ECX + 0x19c));
  FUN_006e9790(*(int *)(in_ECX + 0x7c) + 10,*(int *)(in_ECX + 0x80) + 0x46,
               *(undefined4 *)(in_ECX + 0x28c),*(undefined4 *)(in_ECX + 0x290));
  FUN_006e9790(*(int *)(in_ECX + 0x284) + *(int *)(in_ECX + 0x28c) + 10,
               *(undefined4 *)(in_ECX + 0x288),0x1e,0x14);
  FUN_006e9790(*(int *)(in_ECX + 0x378) + *(int *)(in_ECX + 0x380) + 5,
               *(undefined4 *)(in_ECX + 0x37c),200,0x14);
  FUN_006e9790((*(int *)(in_ECX + 0x84) - *(int *)(in_ECX + 0x5b4)) / 2 + *(int *)(in_ECX + 0x7c),
               *(int *)(in_ECX + 0x80) + 0x6e,*(undefined4 *)(in_ECX + 0x5b4),
               *(undefined4 *)(in_ECX + 0x5b8));
  return;
}

