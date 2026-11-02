// rea decompile_all
// name: FUN_005e3210
// address: 0x5e3210
// body: available
// range: 0x5e3210-0x5e33ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e3210(int param_1,int param_2,int *param_3,void *param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int local_c;
  
  iVar3 = *(int *)(param_2 + 0x510);
  iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1c) +
                  *(int *)(param_1 + 0x1c) * 4) / 2;
  if (param_3 == (int *)0x0) {
    _memset(param_4,0,iVar9 * 4);
    return 0;
  }
  param_1 = *(int *)(iVar3 + 0x340) * *param_3;
  iVar12 = 0;
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0xff < param_1) {
    param_1 = 0xff;
  }
  local_c = 1;
  if (1 < *(int *)(param_2 + 0x504)) {
    piVar7 = (int *)(param_2 + 0x108);
    do {
      uVar10 = param_3[*piVar7] & 0x7fff;
      if (uVar10 == param_3[*piVar7]) {
        iVar12 = *(int *)(iVar3 + 0x344 + *piVar7 * 4);
        iVar11 = *(int *)(iVar3 + 0x340) * uVar10;
        if (iVar11 < 0) {
          iVar11 = 0;
        }
        else if (0xff < iVar11) {
          iVar11 = 0xff;
        }
        FUN_005e4e40(iVar12,param_1,iVar11,param_4);
        param_1 = iVar11;
      }
      local_c = local_c + 1;
      piVar7 = piVar7 + 1;
    } while (local_c < *(int *)(param_2 + 0x504));
  }
  if (iVar12 < iVar9) {
    if (7 < (uint)(iVar9 - iVar12)) {
      fVar2 = *(float *)(&DAT_00ac7ba0 + param_1 * 4);
      uVar10 = iVar9 - iVar12 & 0x80000007;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xfffffff8) + 1;
      }
      do {
        pfVar8 = (float *)((int)param_4 + iVar12 * 4);
        fVar4 = pfVar8[1];
        fVar5 = pfVar8[2];
        fVar6 = pfVar8[3];
        pfVar1 = (float *)((int)param_4 + iVar12 * 4);
        *pfVar1 = *pfVar8 * fVar2;
        pfVar1[1] = fVar4 * fVar2;
        pfVar1[2] = fVar5 * fVar2;
        pfVar1[3] = fVar6 * fVar2;
        pfVar8 = (float *)((int)param_4 + iVar12 * 4 + 0x10);
        fVar4 = pfVar8[1];
        fVar5 = pfVar8[2];
        fVar6 = pfVar8[3];
        pfVar1 = (float *)((int)param_4 + iVar12 * 4 + 0x10);
        *pfVar1 = *pfVar8 * fVar2;
        pfVar1[1] = fVar4 * fVar2;
        pfVar1[2] = fVar5 * fVar2;
        pfVar1[3] = fVar6 * fVar2;
        iVar12 = iVar12 + 8;
      } while (iVar12 < (int)(iVar9 - uVar10));
    }
    if (iVar12 < iVar9) {
      if (3 < iVar9 - iVar12) {
        fVar2 = *(float *)(&DAT_00ac7ba0 + param_1 * 4);
        iVar3 = iVar12 * 4;
        iVar11 = ((iVar9 - iVar12) - 4U >> 2) + 1;
        iVar12 = iVar12 + iVar11 * 4;
        pfVar8 = (float *)((int)param_4 + iVar3 + 8);
        do {
          pfVar8[-2] = pfVar8[-2] * fVar2;
          pfVar8[-1] = pfVar8[-1] * fVar2;
          *pfVar8 = *pfVar8 * fVar2;
          pfVar8[1] = pfVar8[1] * fVar2;
          iVar11 = iVar11 + -1;
          pfVar8 = pfVar8 + 4;
        } while (iVar11 != 0);
      }
      if (iVar12 < iVar9) {
        fVar2 = *(float *)(&DAT_00ac7ba0 + param_1 * 4);
        do {
          *(float *)((int)param_4 + iVar12 * 4) = *(float *)((int)param_4 + iVar12 * 4) * fVar2;
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar9);
      }
    }
  }
  return 1;
}

