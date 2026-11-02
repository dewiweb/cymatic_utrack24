// rea decompile_all
// name: FUN_0050b710
// address: 0x50b710
// body: available
// range: 0x50b710-0x50b769 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050b710(int param_1)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x7b8) == '\0') {
    *(char *)(in_ECX + 0x7ba) = (char)param_1;
    if ((*(char *)(in_ECX + 0x7bb) == '\0') &&
       (((char)param_1 != '\0' || (*(char *)(in_ECX + 0x7b9) != '\0')))) {
      param_1 = CONCAT31(param_1._1_3_,1);
      FUN_006e5380(param_1,0);
      return;
    }
    param_1 = (uint)param_1._1_3_ << 8;
    FUN_006e5380(param_1,0);
  }
  return;
}

