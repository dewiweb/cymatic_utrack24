// rea decompile_all
// name: FUN_006e6840
// address: 0x6e6840
// body: available
// range: 0x6e6840-0x6e68a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e6840(void)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48 [68];
  
  if (in_ECX != 0) {
    iVar2 = FUN_006cff90(local_48,in_ECX);
    fVar1 = *(float *)(iVar2 + 0x38);
    local_58 = SUB84((double)*(float *)(iVar2 + 0x34) + 6755399441055744.0,0);
    *(undefined4 *)(in_ECX + 0xd4) = local_58;
    local_50 = SUB84((double)fVar1 + 6755399441055744.0,0);
    *(undefined4 *)(in_ECX + 0xd8) = local_50;
  }
  return;
}

