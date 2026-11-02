// rea decompile_all
// name: FUN_006e4c30
// address: 0x6e4c30
// body: available
// range: 0x6e4c30-0x6e4cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e4c30(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  double in_XMM1_Qa;
  double in_XMM2_Qa;
  undefined4 local_14;
  undefined4 local_c;
  
  if ((*(int *)(in_ECX + 0x78) != 0) && (*(int *)(*(int *)(in_ECX + 0x78) + 8) != 0)) {
    if (*(int *)(in_ECX + 0x78) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 8);
    }
    if (*(int *)(in_ECX + 0x78) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x78) + 8);
    }
    local_c = SUB84((double)(*(int *)(iVar1 + 0x1c) - *(int *)(in_ECX + 0x1c)) * in_XMM2_Qa +
                    6755399441055744.0,0);
    iVar1 = 0;
    if (0 < local_c) {
      iVar1 = local_c;
    }
    local_14 = SUB84((double)(*(int *)(iVar2 + 0x18) - *(int *)(in_ECX + 0x18)) * in_XMM1_Qa +
                     6755399441055744.0,0);
    iVar2 = 0;
    if (0 < local_14) {
      iVar2 = local_14;
    }
    FUN_006ac3d0(iVar2,iVar1);
  }
  return;
}

