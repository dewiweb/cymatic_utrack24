// rea decompile_all
// name: FUN_006cf870
// address: 0x6cf870
// body: available
// range: 0x6cf870-0x6cf8a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cf870(void)

{
  byte bVar1;
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar1 = *(byte *)(in_ECX + 0x6a);
  local_c = CONCAT31(local_c._1_3_,bVar1) & 0xffffff01;
  local_8 = CONCAT31(local_8._1_3_,bVar1 >> 1) & 0xffffff01;
  if (((bVar1 & 1) != 0) || ((bVar1 >> 1 & 1) != 0)) {
    *(byte *)(in_ECX + 0x6a) = bVar1 & 0xfc;
    FUN_006cf760(local_c,local_8);
  }
  return;
}

