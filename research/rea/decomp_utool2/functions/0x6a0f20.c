// rea decompile_all
// name: FUN_006a0f20
// address: 0x6a0f20
// body: available
// range: 0x6a0f20-0x6a0f8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a0f20(void)

{
  int iVar1;
  int in_ECX;
  undefined1 local_44 [8];
  int local_3c;
  int local_38;
  
  FUN_006cff90(local_44,in_ECX);
  if ((*(int *)(in_ECX + 0xa4) != local_3c) || (*(int *)(in_ECX + 0xa8) != local_38)) {
    if (*(int *)(in_ECX + 0xb0) < 0) {
      FUN_006a1580(local_3c,local_38);
    }
    else {
      iVar1 = FUN_006a1740(local_3c,local_38);
      if (-1 < iVar1) {
        FUN_006a13b0(iVar1);
      }
    }
    *(int *)(in_ECX + 0xa4) = local_3c;
    *(int *)(in_ECX + 0xa8) = local_38;
  }
  return;
}

