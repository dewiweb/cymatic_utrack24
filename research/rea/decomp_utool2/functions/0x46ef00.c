// rea decompile_all
// name: FUN_0046ef00
// address: 0x46ef00
// body: available
// range: 0x46ef00-0x46efca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046ef00(int *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  local_c = in_ECX[2];
  if (1 < local_c) {
    piVar5 = (int *)*in_ECX;
    local_c = local_c + -1;
    local_8 = piVar5[1];
    iVar3 = *piVar5;
    iVar4 = piVar5[3] + local_8;
    iVar6 = piVar5[2] + iVar3;
    if (0 < local_c) {
      piVar5 = piVar5 + local_c * 4;
      do {
        iVar1 = *piVar5;
        if (iVar1 < iVar3) {
          iVar3 = iVar1;
        }
        iVar2 = piVar5[1];
        if (iVar2 < local_8) {
          local_8 = iVar2;
        }
        if (iVar6 < piVar5[2] + iVar1) {
          iVar6 = piVar5[2] + iVar1;
        }
        if (iVar4 < piVar5[3] + iVar2) {
          iVar4 = piVar5[3] + iVar2;
        }
        local_c = local_c + -1;
        piVar5 = piVar5 + -4;
      } while (0 < local_c);
    }
    *param_1 = iVar3;
    param_1[1] = local_8;
    param_1[2] = iVar6 - iVar3;
    param_1[3] = iVar4 - local_8;
    return;
  }
  if (local_c == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  piVar5 = (int *)*in_ECX;
  *param_1 = *piVar5;
  param_1[1] = piVar5[1];
  param_1[2] = piVar5[2];
  param_1[3] = piVar5[3];
  return;
}

