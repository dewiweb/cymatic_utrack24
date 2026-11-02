// rea decompile_all
// name: FUN_0065e450
// address: 0x65e450
// body: available
// range: 0x65e450-0x65e8c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065e450(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_108 [16];
  float local_c8 [8];
  float local_a8 [8];
  float local_88 [8];
  float local_68 [8];
  float local_48 [8];
  float local_28 [8];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  pfVar3 = local_108;
  iVar5 = 8;
  iVar1 = *(int *)(param_1 + 0x120) + 0x80;
  pfVar4 = *(float **)(param_2 + 0x50);
  do {
    if ((((param_3[8] == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      fVar6 = (float)(int)*param_3 * *pfVar4;
      *pfVar3 = fVar6;
      pfVar3[8] = fVar6;
      pfVar3[0x10] = fVar6;
      pfVar3[0x18] = fVar6;
      pfVar3[0x28] = fVar6;
      pfVar3[0x30] = fVar6;
      pfVar3[0x38] = fVar6;
    }
    else {
      fVar9 = (float)(int)param_3[0x20] * pfVar4[0x20] + (float)(int)*param_3 * *pfVar4;
      fVar12 = (float)(int)*param_3 * *pfVar4 - (float)(int)param_3[0x20] * pfVar4[0x20];
      fVar6 = (float)(int)param_3[0x30] * pfVar4[0x30] + (float)(int)param_3[0x10] * pfVar4[0x10];
      fVar14 = fVar6 + fVar9;
      fVar9 = fVar9 - fVar6;
      fVar6 = ((float)(int)param_3[0x10] * pfVar4[0x10] - (float)(int)param_3[0x30] * pfVar4[0x30])
              * 1.4142135 - fVar6;
      fVar15 = fVar6 + fVar12;
      fVar12 = fVar12 - fVar6;
      fVar10 = (float)(int)param_3[8] * pfVar4[8];
      fVar13 = (float)(int)param_3[0x38] * pfVar4[0x38] + fVar10;
      fVar10 = fVar10 - (float)(int)param_3[0x38] * pfVar4[0x38];
      fVar7 = (float)(int)param_3[0x28] * pfVar4[0x28] - (float)(int)param_3[0x18] * pfVar4[0x18];
      fVar8 = (float)(int)param_3[0x28] * pfVar4[0x28] + (float)(int)param_3[0x18] * pfVar4[0x18];
      fVar11 = fVar13 + fVar8;
      fVar6 = (fVar10 + fVar7) * 1.847759;
      fVar7 = (fVar6 - fVar7 * 2.613126) - fVar11;
      *pfVar3 = fVar11 + fVar14;
      pfVar3[0x38] = fVar14 - fVar11;
      fVar11 = (fVar13 - fVar8) * 1.4142135 - fVar7;
      fVar8 = (fVar10 * 1.0823922 - fVar6) + fVar11;
      pfVar3[8] = fVar7 + fVar15;
      pfVar3[0x30] = fVar15 - fVar7;
      pfVar3[0x10] = fVar11 + fVar12;
      pfVar3[0x28] = fVar12 - fVar11;
      fVar6 = fVar8 + fVar9;
      pfVar3[0x18] = fVar9 - fVar8;
    }
    pfVar3[0x20] = fVar6;
    iVar5 = iVar5 + -1;
    param_3 = param_3 + 1;
    pfVar4 = pfVar4 + 1;
    pfVar3 = pfVar3 + 1;
  } while (0 < iVar5);
  pfVar3 = local_108 + 2;
  iVar5 = 0;
  do {
    fVar6 = pfVar3[4] + *pfVar3;
    fVar11 = pfVar3[-2] + pfVar3[2];
    fVar9 = pfVar3[-2] - pfVar3[2];
    puVar2 = (undefined1 *)(*(int *)(param_4 + iVar5 * 4) + param_5);
    fVar13 = fVar6 + fVar11;
    fVar11 = fVar11 - fVar6;
    fVar6 = (*pfVar3 - pfVar3[4]) * 1.4142135 - fVar6;
    fVar14 = pfVar3[5] + pfVar3[-1];
    fVar12 = pfVar3[-1] - pfVar3[5];
    fVar15 = fVar6 + fVar9;
    fVar9 = fVar9 - fVar6;
    fVar7 = pfVar3[1] + pfVar3[3];
    fVar8 = pfVar3[3] - pfVar3[1];
    fVar10 = fVar14 + fVar7;
    fVar6 = (fVar12 + fVar8) * 1.847759;
    fVar8 = (fVar6 - fVar8 * 2.613126) - fVar10;
    fVar7 = (fVar14 - fVar7) * 1.4142135 - fVar8;
    fVar6 = (fVar12 * 1.0823922 - fVar6) + fVar7;
    *puVar2 = *(undefined1 *)(((int)(fVar10 + fVar13) >> 3 & 0x3ffU) + iVar1);
    puVar2[7] = *(undefined1 *)(((int)(fVar13 - fVar10) >> 3 & 0x3ffU) + iVar1);
    puVar2[1] = *(undefined1 *)(((int)(fVar8 + fVar15) >> 3 & 0x3ffU) + iVar1);
    puVar2[6] = *(undefined1 *)(((int)(fVar15 - fVar8) >> 3 & 0x3ffU) + iVar1);
    puVar2[2] = *(undefined1 *)(((int)(fVar7 + fVar9) >> 3 & 0x3ffU) + iVar1);
    iVar5 = iVar5 + 1;
    pfVar3 = pfVar3 + 8;
    puVar2[5] = *(undefined1 *)(((int)(fVar9 - fVar7) >> 3 & 0x3ffU) + iVar1);
    puVar2[4] = *(undefined1 *)(((int)(fVar6 + fVar11) >> 3 & 0x3ffU) + iVar1);
    puVar2[3] = *(undefined1 *)(((int)(fVar11 - fVar6) >> 3 & 0x3ffU) + iVar1);
  } while (iVar5 < 8);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

