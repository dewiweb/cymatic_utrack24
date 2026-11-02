// rea decompile_all
// name: FUN_005e4c30
// address: 0x5e4c30
// body: available
// range: 0x5e4c30-0x5e4d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005e4c30(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int in_ECX;
  int iVar1;
  int in_EDX;
  int iVar2;
  float *pfVar3;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar2 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  _memset(param_3,0,0x38);
  *param_3 = param_1;
  param_3[1] = param_2;
  if (param_4 <= param_2) {
    param_2 = param_4 + -1;
  }
  if (param_1 <= param_2) {
    pfVar3 = (float *)(in_ECX + param_1 * 4);
    iVar2 = 0;
    do {
      iVar1 = (int)(*pfVar3 * 7.3142858 + 1023.5);
      if (iVar1 < 0x400) {
        if ((-1 < iVar1) && (iVar1 != 0)) goto LAB_005e4cec;
      }
      else {
        iVar1 = 0x3ff;
LAB_005e4cec:
        if (*(float *)((in_EDX - in_ECX) + (int)pfVar3) + *(float *)(param_5 + 0x458) < *pfVar3) {
          local_28 = local_28 + param_1 * param_1;
          local_24 = local_24 + iVar1;
          local_20 = local_20 + param_1;
          local_2c = local_2c + iVar1 * iVar1;
          local_30 = local_30 + iVar1 * param_1;
          local_34 = local_34 + 1;
        }
        else {
          local_14 = local_14 + param_1 * param_1;
          local_10 = local_10 + iVar1;
          local_c = local_c + param_1;
          local_18 = local_18 + iVar1 * iVar1;
          local_1c = local_1c + iVar1 * param_1;
          iVar2 = iVar2 + 1;
        }
      }
      param_1 = param_1 + 1;
      pfVar3 = pfVar3 + 1;
    } while (param_1 <= param_2);
  }
  param_3[2] = local_c;
  param_3[3] = local_10;
  param_3[4] = local_14;
  param_3[5] = local_18;
  param_3[6] = local_1c;
  param_3[8] = local_20;
  param_3[9] = local_24;
  param_3[10] = local_28;
  param_3[0xb] = local_2c;
  param_3[0xc] = local_30;
  param_3[0xd] = local_34;
  param_3[7] = iVar2;
  return iVar2;
}

