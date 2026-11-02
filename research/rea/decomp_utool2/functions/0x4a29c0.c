// rea decompile_all
// name: FUN_004a29c0
// address: 0x4a29c0
// body: available
// range: 0x4a29c0-0x4a2a6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a29c0(int param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5)

{
  int in_ECX;
  int iVar1;
  int local_c;
  
  if (0.0 < *(float *)(in_ECX + 0x10c)) {
    local_c = SUB84((double)((float)param_1 * *(float *)(in_ECX + 0x10c)) + 6755399441055744.0,0);
    *param_5 = local_c;
    iVar1 = local_c;
    if ((*(char *)(in_ECX + 0x110) == '\0') && (iVar1 = 4, local_c < 4)) {
      iVar1 = local_c;
    }
    *param_4 = iVar1;
    *param_3 = *param_5;
    if (*(int *)(in_ECX + 0xe4) == 2) {
      param_1 = param_1 / (int)((*(char *)(in_ECX + 0x110) != '\0') + 2);
      *param_5 = param_1;
      *param_3 = param_1;
    }
    return 1;
  }
  *param_3 = param_1 * 2;
  *param_4 = 4;
  *param_5 = 0x8000;
  return 1;
}

