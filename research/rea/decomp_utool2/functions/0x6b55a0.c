// rea decompile_all
// name: FUN_006b55a0
// address: 0x6b55a0
// body: available
// range: 0x6b55a0-0x6b56af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b55a0(void)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 0x1c) + -0x1a;
  FUN_006e9790(2,2,*(int *)(in_ECX + 0x18) + -4,*(int *)(in_ECX + 0x1c) + -0x1f);
  FUN_006e9790(2,iVar2,0x16,0x16);
  FUN_006e9790(*(int *)(in_ECX + 0x158) + *(int *)(in_ECX + 0x150),iVar2,0x16,0x16);
  uVar1 = FUN_006c65e0(0x16);
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x310),*(undefined4 *)(in_ECX + 0x314),uVar1,0x16);
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x4fc),*(undefined4 *)(in_ECX + 0x500),0x2c,0x16);
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x3f0),*(undefined4 *)(in_ECX + 0x3f4),0x2c,0x16);
  FUN_006e9790((*(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x504)) + -2,iVar2,
               *(int *)(in_ECX + 0x504),*(undefined4 *)(in_ECX + 0x508));
  FUN_006e9790((*(int *)(in_ECX + 0x4fc) - *(int *)(in_ECX + 0x3f8)) + -4,iVar2,
               *(int *)(in_ECX + 0x3f8),*(undefined4 *)(in_ECX + 0x3fc));
  FUN_006e9790((*(int *)(in_ECX + 0x3f0) - *(int *)(in_ECX + 0x318)) + -8,iVar2,
               *(int *)(in_ECX + 0x318),*(undefined4 *)(in_ECX + 0x31c));
  return;
}

