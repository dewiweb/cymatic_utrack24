// rea decompile_all
// name: FUN_006da820
// address: 0x6da820
// body: available
// range: 0x6da820-0x6da97e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006da820(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  float local_44;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  iVar1 = param_2;
  if (param_3 < param_2) {
    iVar1 = param_3;
  }
  local_44 = 0.0;
  do {
    FUN_00684c50(DAT_00c7ef7c);
    local_28 = (float)param_2 * local_44;
    local_24 = (float)param_3 + 1.0;
    local_20 = (float)param_2 + 1.0;
    local_1c = (float)param_3 * local_44;
    FUN_00676b40(&local_28);
    FUN_00684c50(DAT_00c7ef80);
    local_18 = (float)param_2 * local_44 + (float)iVar1 * 0.075;
    local_c = (float)param_3 * local_44 + (float)iVar1 * 0.075;
    local_14 = (float)param_3 + 1.0;
    local_10 = (float)param_2 + 1.0;
    FUN_00676b40(&local_18);
    local_44 = local_44 + 0.3;
  } while (local_44 < 1.0);
  return;
}

