// rea decompile_all
// name: FUN_00641740
// address: 0x641740
// body: available
// range: 0x641740-0x6417b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00641740(int param_1)

{
  byte bVar1;
  byte *in_ECX;
  uint uVar2;
  int in_EDX;
  int iVar3;
  byte *pbVar4;
  uint local_8;
  
  bVar1 = *in_ECX;
  pbVar4 = in_ECX + param_1;
  iVar3 = in_EDX + -2;
  *in_ECX = (byte)((bVar1 + 1 + (uint)*pbVar4) / 3);
  local_8 = (uint)bVar1;
  do {
    iVar3 = iVar3 + -1;
    uVar2 = (uint)*pbVar4;
    *pbVar4 = (byte)((local_8 + 1 + pbVar4[param_1] + uVar2) / 3);
    pbVar4 = pbVar4 + param_1;
    local_8 = uVar2;
  } while (0 < iVar3);
  uVar2 = (uint)*pbVar4 + uVar2 + 1;
  *pbVar4 = (byte)(uVar2 / 3);
  return uVar2 * -0x55555555;
}

