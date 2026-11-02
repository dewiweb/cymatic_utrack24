// rea decompile_all
// name: FUN_006973f0
// address: 0x6973f0
// body: available
// range: 0x6973f0-0x69746f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x69746b to 0x6e7e60 FUN_006e7e60 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006973f0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  FUN_006e75a0();
  iVar3 = *(int *)(in_ECX + 0xb4);
  uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x7c) + 0xb8);
  if ((((*(char *)(iVar3 + 0x98) != '\0') && (0 < *(int *)(iVar3 + 0x18))) &&
      (*(int *)(iVar3 + 0x9c) == 0)) && (*(int *)(iVar3 + 0xa0) == 0)) {
    *(undefined4 *)(iVar3 + 0xb4) = uVar1;
    FUN_00698d60(0,uVar1);
  }
  iVar4 = 0;
  iVar3 = *(int *)(*(int *)(in_ECX + 0xb4) + 0x80) + -1;
  if (-1 < iVar3) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0xb4) + 0x78) + iVar3 * 4);
      if ((*(byte *)(iVar2 + 8) & 1) != 0) {
        iVar4 = iVar4 + *(int *)(iVar2 + 0xc);
      }
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(int *)(in_ECX + 0x90) = iVar4;
  FUN_006e7e60();
  return;
}

