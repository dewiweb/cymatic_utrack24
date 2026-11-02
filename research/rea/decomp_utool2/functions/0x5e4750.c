// rea decompile_all
// name: FUN_005e4750
// address: 0x5e4750
// body: available
// range: 0x5e4750-0x5e4963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_005e4750(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int in_EDX;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_c;
  
  iVar8 = in_EDX - in_ECX;
  uVar10 = param_2 - param_1;
  iVar11 = 0;
  iVar2 = (int)uVar10 / iVar8;
  fVar1 = *(float *)(param_3 + in_ECX * 4);
  iVar3 = (int)(fVar1 * 7.3142858 + 1023.5);
  if (iVar3 < 0x400) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0x3ff;
  }
  local_c = 1;
  uVar5 = iVar2 * iVar8 >> 0x1f;
  iVar6 = (param_1 - iVar3) * (param_1 - iVar3);
  if (fVar1 <= *(float *)(param_4 + in_ECX * 4) + *(float *)(param_5 + 0x458)) {
    if ((*(float *)(param_5 + 0x448) + (float)param_1 < (float)iVar3) ||
       ((float)iVar3 < (float)param_1 - *(float *)(param_5 + 0x44c))) {
      return true;
    }
  }
  iVar3 = in_ECX + 1;
  if (iVar3 < in_EDX) {
    pfVar7 = (float *)(param_3 + iVar3 * 4);
    iVar9 = param_1;
    param_1 = iVar6;
    do {
      iVar11 = iVar11 + (((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) -
                        ((iVar2 * iVar8 ^ uVar5) - uVar5));
      if (iVar11 < iVar8) {
        iVar9 = iVar9 + iVar2;
      }
      else {
        iVar11 = iVar11 - iVar8;
        iVar6 = iVar2 + 1 + iVar9;
        iVar9 = iVar9 + -1 + iVar2;
        if (-1 < (int)uVar10) {
          iVar9 = iVar6;
        }
      }
      iVar4 = (int)(*pfVar7 * 7.3142858 + 1023.5);
      if (iVar4 < 0x400) {
        if (iVar4 < 0) {
          iVar4 = 0;
        }
      }
      else {
        iVar4 = 0x3ff;
      }
      local_c = local_c + 1;
      iVar6 = param_1 + (iVar9 - iVar4) * (iVar9 - iVar4);
      if ((*pfVar7 <= *(float *)((param_4 - param_3) + (int)pfVar7) + *(float *)(param_5 + 0x458))
         && (iVar4 != 0)) {
        if ((float)iVar9 + *(float *)(param_5 + 0x448) < (float)iVar4) {
          return true;
        }
        if ((float)iVar4 < (float)iVar9 - *(float *)(param_5 + 0x44c)) {
          return true;
        }
      }
      iVar3 = iVar3 + 1;
      pfVar7 = pfVar7 + 1;
      param_1 = iVar6;
    } while (iVar3 < in_EDX);
  }
  fVar1 = *(float *)(param_5 + 0x450);
  if (((*(float *)(param_5 + 0x448) * *(float *)(param_5 + 0x448)) / (float)local_c <= fVar1) &&
     ((*(float *)(param_5 + 0x44c) * *(float *)(param_5 + 0x44c)) / (float)local_c <= fVar1)) {
    return fVar1 < (float)(iVar6 / local_c);
  }
  return false;
}

