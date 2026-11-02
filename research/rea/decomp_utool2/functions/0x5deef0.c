// rea decompile_all
// name: FUN_005deef0
// address: 0x5deef0
// body: available
// range: 0x5deef0-0x5df246 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005deef0(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int *in_ECX;
  float *pfVar6;
  float *pfVar7;
  float *in_EDX;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  
  iVar2 = *in_ECX >> 1;
  iVar8 = *in_ECX >> 2;
  pfVar4 = in_EDX + iVar2 + -7;
  iVar9 = iVar8 * 4;
  pfVar7 = (float *)(param_1 + (iVar2 + iVar8) * 4);
  pfVar3 = (float *)(in_ECX[2] + iVar9);
  pfVar5 = pfVar7;
  do {
    pfVar5[-4] = -(pfVar4[2] * pfVar3[3]) - *pfVar4 * pfVar3[2];
    pfVar5[-3] = *pfVar4 * pfVar3[3] - pfVar4[2] * pfVar3[2];
    pfVar5[-2] = -(pfVar3[1] * pfVar4[6]) - pfVar4[4] * *pfVar3;
    pfVar6 = pfVar3 + 1;
    fVar1 = *pfVar3;
    pfVar3 = pfVar3 + 4;
    pfVar11 = pfVar4 + 4;
    pfVar10 = pfVar4 + 6;
    pfVar4 = pfVar4 + -8;
    pfVar5[-1] = *pfVar6 * *pfVar11 - fVar1 * *pfVar10;
    pfVar5 = pfVar5 + -4;
  } while (in_EDX <= pfVar4);
  pfVar4 = in_EDX + iVar2 + -8;
  pfVar5 = (float *)(in_ECX[2] + iVar9);
  pfVar3 = pfVar7;
  do {
    pfVar11 = pfVar5 + -4;
    *pfVar3 = pfVar4[4] * pfVar5[-1] + pfVar5[-2] * pfVar4[6];
    pfVar3[1] = pfVar4[4] * pfVar5[-2] - pfVar5[-1] * pfVar4[6];
    pfVar3[2] = *pfVar4 * pfVar5[-3] + pfVar4[2] * *pfVar11;
    fVar1 = *pfVar4;
    pfVar6 = pfVar4 + 2;
    pfVar4 = pfVar4 + -8;
    pfVar3[3] = fVar1 * *pfVar11 - pfVar5[-3] * *pfVar6;
    pfVar3 = pfVar3 + 4;
    pfVar5 = pfVar11;
  } while (in_EDX <= pfVar4);
  FUN_005df440(iVar2);
  FUN_005df250();
  pfVar6 = (float *)(in_ECX[2] + iVar2 * 4);
  pfVar5 = pfVar7;
  pfVar3 = (float *)(param_1 + 0xc);
  pfVar4 = pfVar7;
  do {
    pfVar10 = pfVar4 + -4;
    pfVar4[-1] = pfVar6[1] * pfVar3[-3] - pfVar3[-2] * *pfVar6;
    *pfVar5 = -(pfVar3[-2] * pfVar6[1] + *pfVar6 * pfVar3[-3]);
    pfVar4[-2] = pfVar3[-1] * pfVar6[3] - pfVar6[2] * *pfVar3;
    pfVar5[1] = -(pfVar3[-1] * pfVar6[2] + pfVar6[3] * *pfVar3);
    pfVar4[-3] = pfVar3[1] * pfVar6[5] - pfVar3[2] * pfVar6[4];
    pfVar5[2] = -(pfVar3[2] * pfVar6[5] + pfVar3[1] * pfVar6[4]);
    *pfVar10 = pfVar6[7] * pfVar3[3] - pfVar3[4] * pfVar6[6];
    pfVar4 = pfVar6 + 7;
    pfVar11 = pfVar6 + 6;
    pfVar6 = pfVar6 + 8;
    pfVar5[3] = -(*pfVar4 * pfVar3[4] + pfVar3[3] * *pfVar11);
    pfVar5 = pfVar5 + 4;
    pfVar11 = pfVar3 + 5;
    pfVar3 = pfVar3 + 8;
    pfVar4 = pfVar10;
  } while (pfVar11 < pfVar10);
  pfVar5 = pfVar7;
  pfVar3 = (float *)(param_1 + 8 + iVar9);
  pfVar4 = pfVar7 + (2 - iVar2);
  do {
    fVar1 = pfVar5[-1];
    pfVar10 = pfVar5 + -4;
    pfVar4[-3] = fVar1;
    pfVar3[-2] = -fVar1;
    pfVar6 = pfVar3 + 2;
    fVar1 = pfVar5[-2];
    pfVar4[-4] = fVar1;
    pfVar3[-1] = -fVar1;
    fVar1 = pfVar5[-3];
    pfVar4[-5] = fVar1;
    *pfVar3 = -fVar1;
    fVar1 = *pfVar10;
    pfVar4[-6] = fVar1;
    pfVar3[1] = -fVar1;
    pfVar5 = pfVar10;
    pfVar3 = pfVar3 + 4;
    pfVar4 = pfVar4 + -4;
    pfVar11 = pfVar7;
  } while (pfVar6 < pfVar10);
  do {
    pfVar5 = pfVar7 + -4;
    *pfVar5 = pfVar11[3];
    pfVar7[-3] = pfVar11[2];
    pfVar7[-2] = pfVar11[1];
    pfVar7[-1] = *pfVar11;
    pfVar7 = pfVar5;
    pfVar11 = pfVar11 + 4;
  } while ((float *)(param_1 + iVar2 * 4) < pfVar5);
  return;
}

