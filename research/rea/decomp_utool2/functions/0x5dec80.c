// rea decompile_all
// name: FUN_005dec80
// address: 0x5dec80
// body: available
// range: 0x5dec80-0x5deee6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_005dec80(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  int *in_ECX;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int in_EDX;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  int aiStack_40 [2];
  
  uVar7 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar13 = *in_ECX;
  iVar10 = iVar13 >> 2;
  iVar11 = iVar13 >> 3;
  iVar17 = iVar13 >> 1;
  aiStack_40[1] = 0x5decbe;
  pfVar16 = (float *)(&stack0xffffffc8 + iVar13 * -4);
  iVar1 = iVar17 * 4;
  iVar6 = iVar1 + iVar13 * -4 + -0x38;
  pfVar15 = (float *)(in_EDX + (iVar17 + iVar10) * 4);
  iVar12 = 0;
  pfVar18 = pfVar15 + 1;
  pfVar8 = (float *)(in_ECX[2] + iVar1);
  pfVar9 = pfVar8;
  pfVar14 = pfVar15;
  if (0 < iVar11) {
    do {
      fVar2 = pfVar18[2];
      pfVar15 = pfVar14 + -4;
      pfVar8 = pfVar9 + -2;
      fVar3 = pfVar14[-2];
      fVar4 = *pfVar18;
      fVar5 = *pfVar15;
      pfVar18 = pfVar18 + 4;
      *(float *)(&stack0xffffffc8 + iVar12 * 4 + iVar6 + 0x38) =
           pfVar9[-1] * (fVar2 + fVar5) + *pfVar8 * (fVar3 + fVar4);
      *(float *)(&stack0xffffffcc + iVar12 * 4 + iVar6 + 0x38) =
           *pfVar8 * (fVar2 + fVar5) - pfVar9[-1] * (fVar3 + fVar4);
      iVar12 = iVar12 + 2;
      pfVar9 = pfVar8;
      pfVar14 = pfVar15;
    } while (iVar12 < iVar11);
  }
  pfVar18 = (float *)(in_EDX + 4);
  for (; iVar12 < iVar17 - iVar11; iVar12 = iVar12 + 2) {
    fVar2 = pfVar15[-2];
    pfVar15 = pfVar15 + -4;
    fVar3 = *pfVar18;
    pfVar9 = pfVar8 + -2;
    fVar4 = *pfVar15;
    fVar5 = pfVar18[2];
    pfVar18 = pfVar18 + 4;
    *(float *)(&stack0xffffffc8 + iVar12 * 4 + iVar6 + 0x38) =
         pfVar8[-1] * (fVar4 - fVar5) + *pfVar9 * (fVar2 - fVar3);
    *(float *)(&stack0xffffffcc + iVar12 * 4 + iVar6 + 0x38) =
         *pfVar9 * (fVar4 - fVar5) - pfVar8[-1] * (fVar2 - fVar3);
    pfVar8 = pfVar9;
  }
  pfVar15 = (float *)(in_EDX + iVar13 * 4);
  for (; iVar12 < iVar17; iVar12 = iVar12 + 2) {
    fVar2 = pfVar15[-2];
    pfVar15 = pfVar15 + -4;
    pfVar9 = pfVar8 + -2;
    fVar3 = *pfVar18;
    fVar4 = *pfVar15;
    fVar5 = pfVar18[2];
    pfVar18 = pfVar18 + 4;
    *(float *)(&stack0xffffffc8 + iVar12 * 4 + iVar6 + 0x38) =
         pfVar8[-1] * (-fVar4 - fVar5) + *pfVar9 * (-fVar2 - fVar3);
    *(float *)(&stack0xffffffcc + iVar12 * 4 + iVar6 + 0x38) =
         *pfVar9 * (-fVar4 - fVar5) - pfVar8[-1] * (-fVar2 - fVar3);
    pfVar8 = pfVar9;
  }
  aiStack_40[1 - iVar13] = iVar17;
  aiStack_40[-iVar13] = 0x5dee5d;
  FUN_005df440();
  aiStack_40[1 - iVar13] = 0x5dee69;
  FUN_005df250();
  iVar13 = 0;
  pfVar18 = (float *)(in_ECX[2] + iVar1);
  pfVar15 = (float *)(iVar1 + param_1);
  if (0 < iVar10) {
    do {
      pfVar15 = pfVar15 + -1;
      *(float *)(param_1 + iVar13 * 4) =
           (*pfVar18 * *pfVar16 + pfVar18[1] * pfVar16[1]) * (float)in_ECX[4];
      iVar13 = iVar13 + 1;
      pfVar8 = pfVar18 + 1;
      fVar2 = *pfVar18;
      pfVar18 = pfVar18 + 2;
      fVar3 = *pfVar16;
      pfVar9 = pfVar16 + 1;
      pfVar16 = pfVar16 + 2;
      *pfVar15 = (*pfVar8 * fVar3 - fVar2 * *pfVar9) * (float)in_ECX[4];
    } while (iVar13 < iVar10);
  }
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}

