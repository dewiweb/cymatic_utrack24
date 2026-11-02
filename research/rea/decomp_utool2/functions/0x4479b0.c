// rea decompile_all
// name: FUN_004479b0
// address: 0x4479b0
// body: available
// range: 0x4479b0-0x447a7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004479b0(undefined4 param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  local_8 = in_ECX[2];
  if (0 < local_8) {
    uVar4 = *param_2;
    iVar5 = 0;
    do {
      puVar1 = *(uint **)(*in_ECX + iVar5 * 4);
      if ((((*puVar1 <= uVar4) && (uVar4 <= *puVar1)) && (puVar1[2] <= param_2[2])) &&
         (param_2[2] == puVar1[2])) {
        if (((int)puVar1[1] <= (int)param_2[1]) && ((int)param_2[1] <= (int)puVar1[1])) {
          if (((int)puVar1[3] <= (int)param_2[3]) && ((int)param_2[3] <= (int)puVar1[3])) {
            return iVar5;
          }
        }
      }
      iVar3 = (local_8 + iVar5) / 2;
      if (iVar3 == iVar5) {
        return -1;
      }
      puVar1 = *(uint **)(*in_ECX + iVar3 * 4);
      iVar6 = iVar5;
      iVar2 = iVar3;
      if ((*puVar1 <= uVar4) && (iVar6 = iVar3, iVar2 = local_8, uVar4 <= *puVar1)) {
        if (param_2[2] < puVar1[2]) {
LAB_00447a52:
          uVar4 = *param_2;
          iVar6 = iVar5;
          iVar2 = iVar3;
        }
        else if (param_2[2] == puVar1[2]) {
          if ((int)param_2[1] < (int)puVar1[1]) goto LAB_00447a52;
          uVar4 = *param_2;
          if (((int)param_2[1] <= (int)puVar1[1]) &&
             (iVar6 = iVar5, iVar2 = iVar3, (int)puVar1[3] <= (int)param_2[3])) {
            iVar6 = iVar3;
            iVar2 = local_8;
          }
        }
        else {
          uVar4 = *param_2;
        }
      }
      local_8 = iVar2;
      iVar5 = iVar6;
    } while (iVar6 < local_8);
  }
  return -1;
}

