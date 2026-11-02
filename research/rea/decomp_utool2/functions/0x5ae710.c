// rea decompile_all
// name: FUN_005ae710
// address: 0x5ae710
// body: available
// range: 0x5ae710-0x5ae7ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ae710(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  FUN_006e9790(0x28,0x14,*(int *)(in_ECX + 0x18) + -0x50,0x32);
  FUN_006e9790(0,*(int *)(in_ECX + 0x90) + *(int *)(in_ECX + 0x98) + 0x14,
               *(int *)(in_ECX + 0x18) / 2,0x14);
  uVar4 = 0;
  if (0 < *(int *)(in_ECX + 0x224)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(in_ECX + 0x160);
      if (uVar4 < *(uint *)(in_ECX + 0x224)) {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x21c) + uVar4 * 4);
        iVar1 = *(int *)(in_ECX + 0x160);
      }
      else {
        iVar2 = 0;
      }
      FUN_006e9790(*(int *)(in_ECX + 0x15c) + *(int *)(in_ECX + 0x164) + 4,iVar1 + iVar3,
                   *(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x1c));
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x14;
    } while ((int)uVar4 < *(int *)(in_ECX + 0x224));
  }
  return;
}

