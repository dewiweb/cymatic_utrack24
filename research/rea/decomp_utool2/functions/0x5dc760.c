// rea decompile_all
// name: FUN_005dc760
// address: 0x5dc760
// body: available
// range: 0x5dc760-0x5dcaff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_005dc760(float *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  uint *in_ECX;
  int iVar13;
  int iVar14;
  float *in_EDX;
  int iVar15;
  uint uVar16;
  uint auStack_4c [4];
  float fStack_3c;
  float local_2c [10];
  
  uVar8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar16 = *in_ECX;
  fStack_3c = 8.612288e-39;
  pfVar10 = local_2c + (-3 - uVar16);
  (&fStack_3c)[-uVar16] = -NAN;
  auStack_4c[3 - uVar16] = (uint)in_ECX;
  auStack_4c[3 - uVar16] = 0x430c0000;
  auStack_4c[2 - uVar16] = (uint)param_1;
  auStack_4c[1 - uVar16] = (uint)in_EDX;
  auStack_4c[-uVar16] = 0x5dc7ae;
  FUN_005dcb00();
  iVar13 = 0;
  if (0 < (int)uVar16) {
    if (((7 < uVar16) &&
        ((param_1 + (uVar16 - 1) < local_2c + (-3 - uVar16) || (&fStack_3c < param_1)))) &&
       ((in_EDX + (uVar16 - 1) < local_2c + (-3 - uVar16) || (&fStack_3c < in_EDX)))) {
      uVar9 = uVar16 & 0x80000007;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
      }
      pfVar12 = param_1 + 4;
      do {
        iVar13 = iVar13 + 8;
        fVar2 = pfVar12[-3];
        fVar3 = pfVar12[-2];
        fVar4 = pfVar12[-1];
        pfVar11 = (float *)(((int)in_EDX - (int)(local_2c + (-3 - uVar16))) + (int)pfVar10);
        fVar5 = pfVar11[1];
        fVar6 = pfVar11[2];
        fVar7 = pfVar11[3];
        *pfVar10 = *pfVar11 - pfVar12[-4];
        pfVar10[1] = fVar5 - fVar2;
        pfVar10[2] = fVar6 - fVar3;
        pfVar10[3] = fVar7 - fVar4;
        pfVar10 = pfVar10 + 8;
        pfVar11 = (float *)(((int)in_EDX - (int)param_1) + (int)pfVar12);
        fVar2 = pfVar11[1];
        fVar3 = pfVar11[2];
        fVar4 = pfVar11[3];
        fVar5 = pfVar12[1];
        fVar6 = pfVar12[2];
        fVar7 = pfVar12[3];
        pfVar1 = (float *)((int)local_2c + (uVar16 * -4 - (int)param_1) + -0xc + (int)pfVar12);
        *pfVar1 = *pfVar11 - *pfVar12;
        pfVar1[1] = fVar2 - fVar5;
        pfVar1[2] = fVar3 - fVar6;
        pfVar1[3] = fVar4 - fVar7;
        pfVar12 = pfVar12 + 8;
      } while (iVar13 < (int)(uVar16 - uVar9));
    }
    pfVar10 = local_2c + (-3 - uVar16);
    if (iVar13 < (int)uVar16) {
      if (3 < (int)(uVar16 - iVar13)) {
        pfVar12 = pfVar10 + iVar13 + 2;
        pfVar11 = param_1 + iVar13 + 1;
        do {
          pfVar12[-2] = in_EDX[iVar13] - pfVar11[-1];
          *(float *)(((int)pfVar10 - (int)param_1) + (int)pfVar11) =
               *(float *)(((int)in_EDX - (int)param_1) + (int)pfVar11) - *pfVar11;
          *pfVar12 = *(float *)(((int)in_EDX - (int)pfVar10) + (int)pfVar12) - pfVar11[1];
          iVar15 = iVar13 + 3;
          iVar13 = iVar13 + 4;
          pfVar1 = pfVar11 + 2;
          pfVar11 = pfVar11 + 4;
          pfVar12[1] = in_EDX[iVar15] - *pfVar1;
          pfVar12 = pfVar12 + 4;
        } while (iVar13 < (int)(uVar16 - 3));
      }
      if (iVar13 < (int)uVar16) {
        pfVar10 = param_1 + iVar13;
        iVar13 = uVar16 - iVar13;
        do {
          *(float *)((int)local_2c + (uVar16 * -4 - (int)param_1) + -0xc + (int)pfVar10) =
               *(float *)(((int)in_EDX - (int)param_1) + (int)pfVar10) - *pfVar10;
          pfVar10 = pfVar10 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
  }
  pfVar10 = local_2c + (-3 - uVar16);
  (&fStack_3c)[-uVar16] = (float)*(undefined4 *)(in_ECX[1] + 0x80);
  auStack_4c[3 - uVar16] = (uint)in_ECX;
  auStack_4c[3 - uVar16] = 0;
  auStack_4c[2 - uVar16] = (uint)param_1;
  auStack_4c[1 - uVar16] = (uint)pfVar10;
  auStack_4c[-uVar16] = 0x5dc96b;
  FUN_005dcb00();
  iVar13 = 0;
  if (0 < (int)uVar16) {
    if ((7 < uVar16) && ((in_EDX + (uVar16 - 1) < pfVar10 || (pfVar10 + (uVar16 - 1) < in_EDX)))) {
      uVar9 = uVar16 & 0x80000007;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
      }
      pfVar12 = local_2c + (1 - uVar16);
      do {
        pfVar11 = in_EDX + iVar13;
        fVar2 = pfVar11[1];
        fVar3 = pfVar11[2];
        fVar4 = pfVar11[3];
        iVar13 = iVar13 + 8;
        pfVar12[-4] = *pfVar11 - pfVar12[-4];
        pfVar12[-3] = fVar2 - pfVar12[-3];
        pfVar12[-2] = fVar3 - pfVar12[-2];
        pfVar12[-1] = fVar4 - pfVar12[-1];
        pfVar11 = (float *)(((int)in_EDX - (int)pfVar10) + (int)pfVar12);
        fVar2 = pfVar11[1];
        fVar3 = pfVar11[2];
        fVar4 = pfVar11[3];
        *pfVar12 = *pfVar11 - *pfVar12;
        pfVar12[1] = fVar2 - pfVar12[1];
        pfVar12[2] = fVar3 - pfVar12[2];
        pfVar12[3] = fVar4 - pfVar12[3];
        pfVar12 = pfVar12 + 8;
      } while (iVar13 < (int)(uVar16 - uVar9));
    }
    if (iVar13 < (int)uVar16) {
      if (3 < (int)(uVar16 - iVar13)) {
        pfVar12 = in_EDX + iVar13 + 3;
        pfVar11 = pfVar10 + iVar13 + 1;
        iVar15 = ((uVar16 - iVar13) - 4 >> 2) + 1;
        iVar13 = iVar13 + iVar15 * 4;
        do {
          pfVar11[-1] = pfVar12[-3] - pfVar11[-1];
          *pfVar11 = *(float *)(((int)in_EDX - (int)pfVar10) + (int)pfVar11) - *pfVar11;
          pfVar11[1] = pfVar12[-1] - pfVar11[1];
          fVar2 = *pfVar12;
          pfVar12 = pfVar12 + 4;
          pfVar11[2] = fVar2 - pfVar11[2];
          pfVar11 = pfVar11 + 4;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      if (iVar13 < (int)uVar16) {
        pfVar12 = pfVar10 + iVar13;
        iVar13 = uVar16 - iVar13;
        do {
          *pfVar12 = *(float *)(((int)in_EDX - (int)pfVar10) + (int)pfVar12) - *pfVar12;
          pfVar12 = pfVar12 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
    if (0 < (int)uVar16) {
      iVar13 = (int)pfVar10 - (int)param_1;
      do {
        iVar15 = (int)(*param_1 + 0.5);
        if (0x27 < iVar15) {
          iVar15 = 0x27;
        }
        iVar14 = 0;
        if (-1 < iVar15) {
          iVar14 = iVar15;
        }
        *param_1 = *(float *)(in_ECX[1] + 0x150 + iVar14 * 4) + *(float *)(iVar13 + (int)param_1);
        param_1 = param_1 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  __security_check_cookie(uVar8 ^ (uint)&stack0xfffffffc);
  return;
}

