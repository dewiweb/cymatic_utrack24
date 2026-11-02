// rea decompile_all
// name: FUN_006a37d0
// address: 0x6a37d0
// body: available
// range: 0x6a37d0-0x6a38e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a37d0(undefined4 param_1,int param_2,int param_3,char param_4,char param_5)

{
  undefined4 uVar1;
  float local_30;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if ((param_4 != '\0') || (uVar1 = DAT_00c7ef80, param_5 != '\0')) {
    uVar1 = DAT_00c7ef7c;
  }
  FUN_00684c50(uVar1);
  local_30 = 0.0;
  do {
    local_18 = (float)param_2 * local_30;
    local_c = (float)param_3 * local_30;
    local_14 = (float)param_3 + 1.0;
    local_10 = (float)param_2 + 1.0;
    FUN_00676b40(&local_18);
    local_30 = local_30 + 0.3;
  } while (local_30 < 1.0);
  return;
}

