// rea decompile_all
// name: FUN_005dc540
// address: 0x5dc540
// body: available
// range: 0x5dc540-0x5dc753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_005dc540(float *param_1,float param_2)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *in_ECX;
  float *pfVar12;
  undefined4 in_EDX;
  int iVar13;
  float *pfVar14;
  float fVar15;
  undefined4 in_XMM3_Da;
  undefined4 auStack_54 [4];
  undefined1 auStack_44 [4];
  uint uStack_40;
  
  uVar8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar2 = in_ECX[10];
  uVar3 = *in_ECX;
  uStack_40 = 0x5dc574;
  iVar4 = uVar2 * -4;
  pfVar12 = (float *)(&stack0xffffffc4 + iVar4);
  iVar9 = 0;
  param_2 = *(float *)(in_ECX[1] + 4) + param_2;
  if (0 < (int)uVar2) {
    do {
      *(undefined4 *)(&stack0xffffffc4 + iVar9 * 4 + iVar4) = 0xc61c3c00;
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)in_ECX[10]);
  }
  iVar9 = 0;
  fVar15 = *(float *)(in_ECX[1] + 8);
  if (*(float *)(in_ECX[1] + 8) <= param_2) {
    fVar15 = param_2;
  }
  if (0 < (int)uVar3) {
    pfVar12 = (float *)(&stack0xffffffc4 + iVar4);
    if (((7 < uVar3) &&
        ((pfVar14 = (float *)in_ECX[4], pfVar14 + (uVar3 - 1) < param_1 ||
         (pfVar12 = pfVar14, param_1 + (uVar3 - 1) < pfVar14)))) &&
       ((in_ECX + 4 < param_1 || (pfVar12 = param_1 + (uVar3 - 1), pfVar12 < in_ECX + 4)))) {
      uVar10 = uVar3 & 0x80000007;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xfffffff8) + 1;
      }
      pfVar12 = param_1;
      do {
        pfVar1 = pfVar14 + iVar9;
        fVar5 = pfVar1[1];
        fVar6 = pfVar1[2];
        fVar7 = pfVar1[3];
        iVar9 = iVar9 + 8;
        *pfVar12 = *pfVar1 + fVar15;
        pfVar12[1] = fVar5 + fVar15;
        pfVar12[2] = fVar6 + fVar15;
        pfVar12[3] = fVar7 + fVar15;
        pfVar1 = (float *)((undefined1 *)((0x10 - (int)param_1) + (int)pfVar12) + (int)pfVar14);
        fVar5 = pfVar1[1];
        fVar6 = pfVar1[2];
        fVar7 = pfVar1[3];
        pfVar12[4] = *pfVar1 + fVar15;
        pfVar12[5] = fVar5 + fVar15;
        pfVar12[6] = fVar6 + fVar15;
        pfVar12[7] = fVar7 + fVar15;
        pfVar12 = pfVar12 + 8;
      } while (iVar9 < (int)(uVar3 - uVar10));
    }
    if (iVar9 < (int)uVar3) {
      if (3 < (int)(uVar3 - iVar9)) {
        iVar13 = iVar9 * 4 + 8;
        pfVar12 = (float *)(-8 - (int)param_1);
        pfVar14 = param_1 + iVar9 + 2;
        iVar11 = ((uVar3 - iVar9) - 4 >> 2) + 1;
        iVar9 = iVar9 + iVar11 * 4;
        do {
          pfVar14[-2] = *(float *)((undefined1 *)((int)pfVar12 + (int)pfVar14) + in_ECX[4]) + fVar15
          ;
          pfVar14[-1] = *(float *)((undefined1 *)((int)pfVar12 + (int)pfVar14) + in_ECX[4] + 4) +
                        fVar15;
          pfVar1 = (float *)(iVar13 + in_ECX[4]);
          iVar13 = iVar13 + 0x10;
          *pfVar14 = *pfVar1 + fVar15;
          pfVar14[1] = *(float *)((int)pfVar14 + in_ECX[4] + (4 - (int)param_1)) + fVar15;
          pfVar14 = pfVar14 + 4;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      for (; iVar9 < (int)uVar3; iVar9 = iVar9 + 1) {
        param_1[iVar9] = *(float *)(in_ECX[4] + iVar9 * 4) + fVar15;
      }
    }
  }
  (&uStack_40)[-uVar2] = (uint)pfVar12;
  (&uStack_40)[-uVar2] = in_XMM3_Da;
  *(undefined1 **)(auStack_44 + iVar4) = &stack0xffffffc4 + iVar4;
  auStack_54[3 - uVar2] = param_1;
  auStack_54[2 - uVar2] = in_EDX;
  auStack_54[1 - uVar2] = 0x5dc733;
  FUN_005dd490();
  auStack_54[1 - uVar2] = param_1;
  auStack_54[-uVar2] = 0x5dc73d;
  FUN_005dd1f0();
  __security_check_cookie(uVar8 ^ (uint)&stack0xfffffffc);
  return;
}

