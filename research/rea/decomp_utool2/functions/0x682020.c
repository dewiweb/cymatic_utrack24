// rea decompile_all
// name: FUN_00682020
// address: 0x682020
// body: available
// range: 0x682020-0x6821dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00682020(float param_1)

{
  bool bVar1;
  int *in_ECX;
  int iVar2;
  float fVar3;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float in_XMM3_Da;
  float local_10;
  float local_c;
  float local_8;
  
  local_8 = in_XMM1_Da + in_XMM3_Da;
  fVar3 = in_XMM2_Da + param_1;
  local_c = in_XMM1_Da;
  if (in_XMM3_Da < 0.0) {
    local_c = local_8;
    local_8 = in_XMM1_Da;
  }
  bVar1 = param_1 < 0.0;
  param_1 = fVar3;
  local_10 = in_XMM2_Da;
  if (bVar1) {
    param_1 = in_XMM2_Da;
    local_10 = fVar3;
  }
  iVar2 = in_ECX[2] + 0xd;
  if (in_ECX[1] < iVar2) {
    FUN_00409cf0(iVar2 / 2 + in_ECX[2] + 0x15 & 0xfffffff8);
  }
  iVar2 = in_ECX[2];
  if (iVar2 == 0) {
    in_ECX[3] = (int)local_c;
    in_ECX[4] = (int)local_8;
    in_ECX[5] = (int)local_10;
    in_ECX[6] = (int)param_1;
  }
  else {
    fVar3 = local_c;
    if ((float)in_ECX[3] <= local_c) {
      fVar3 = (float)in_ECX[3];
    }
    in_ECX[3] = (int)fVar3;
    fVar3 = local_8;
    if (local_8 <= (float)in_ECX[4]) {
      fVar3 = (float)in_ECX[4];
    }
    in_ECX[4] = (int)fVar3;
    fVar3 = local_10;
    if ((float)in_ECX[5] <= local_10) {
      fVar3 = (float)in_ECX[5];
    }
    in_ECX[5] = (int)fVar3;
    fVar3 = param_1;
    if (param_1 <= (float)in_ECX[6]) {
      fVar3 = (float)in_ECX[6];
    }
    in_ECX[6] = (int)fVar3;
  }
  in_ECX[2] = iVar2 + 1;
  *(undefined4 *)(*in_ECX + iVar2 * 4) = 0x47c35100;
  iVar2 = in_ECX[2];
  in_ECX[2] = iVar2 + 1;
  *(float *)(*in_ECX + iVar2 * 4) = local_c;
  iVar2 = in_ECX[2];
  in_ECX[2] = iVar2 + 1;
  *(float *)(*in_ECX + iVar2 * 4) = param_1;
  iVar2 = in_ECX[2];
  in_ECX[2] = iVar2 + 1;
  *(undefined4 *)(*in_ECX + iVar2 * 4) = 0x47c35080;
  iVar2 = in_ECX[2];
  in_ECX[2] = iVar2 + 1;
  *(float *)(*in_ECX + iVar2 * 4) = local_c;
  iVar2 = in_ECX[2];
  in_ECX[2] = iVar2 + 1;
  *(float *)(*in_ECX + iVar2 * 4) = local_10;
  iVar2 = in_ECX[2];
  in_ECX[2] = iVar2 + 1;
  *(undefined4 *)(*in_ECX + iVar2 * 4) = 0x47c35080;
  iVar2 = in_ECX[2];
  in_ECX[2] = iVar2 + 1;
  *(float *)(*in_ECX + iVar2 * 4) = local_8;
  iVar2 = in_ECX[2];
  in_ECX[2] = iVar2 + 1;
  *(float *)(*in_ECX + iVar2 * 4) = local_10;
  iVar2 = in_ECX[2];
  in_ECX[2] = iVar2 + 1;
  *(undefined4 *)(*in_ECX + iVar2 * 4) = 0x47c35080;
  iVar2 = in_ECX[2];
  in_ECX[2] = iVar2 + 1;
  *(float *)(*in_ECX + iVar2 * 4) = local_8;
  iVar2 = in_ECX[2];
  in_ECX[2] = iVar2 + 1;
  *(float *)(*in_ECX + iVar2 * 4) = param_1;
  iVar2 = in_ECX[2];
  in_ECX[2] = iVar2 + 1;
  *(undefined4 *)(*in_ECX + iVar2 * 4) = 0x47c35280;
  return;
}

