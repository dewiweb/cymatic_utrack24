// rea decompile_all
// name: FUN_0048a9d2
// address: 0x48a9d2
// body: available
// range: 0x48a9d2-0x48ac52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048a9d2(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  
  iVar9 = 7;
  pfVar8 = (float *)(param_1 + 8);
  do {
    fVar4 = pfVar8[-2] - pfVar8[5];
    fVar1 = pfVar8[4];
    fVar2 = *pfVar8;
    fVar3 = pfVar8[2];
    fVar5 = pfVar8[1] + pfVar8[2] + pfVar8[-2] + pfVar8[5];
    fVar6 = (pfVar8[-2] + pfVar8[5]) - (pfVar8[1] + pfVar8[2]);
    fVar7 = pfVar8[3] + *pfVar8 + pfVar8[4] + pfVar8[-1];
    pfVar8[-2] = fVar7 + fVar5;
    pfVar8[2] = fVar5 - fVar7;
    fVar5 = (((pfVar8[4] + pfVar8[-1]) - (pfVar8[3] + *pfVar8)) + fVar6) * 0.70710677;
    *pfVar8 = fVar5 + fVar6;
    pfVar8[4] = fVar6 - fVar5;
    fVar3 = (pfVar8[1] - fVar3) + (fVar2 - pfVar8[3]);
    fVar5 = (pfVar8[-1] - fVar1) + fVar4;
    fVar6 = (fVar3 - fVar5) * 0.38268343;
    fVar3 = fVar3 * 0.5411961 + fVar6;
    fVar6 = fVar5 * 1.306563 + fVar6;
    fVar1 = ((fVar2 - pfVar8[3]) + (pfVar8[-1] - fVar1)) * 0.70710677;
    fVar2 = fVar1 + fVar4;
    fVar4 = fVar4 - fVar1;
    iVar9 = iVar9 + -1;
    pfVar8[3] = fVar4 + fVar3;
    pfVar8[1] = fVar4 - fVar3;
    pfVar8[-1] = fVar2 + fVar6;
    pfVar8[5] = fVar2 - fVar6;
    pfVar8 = pfVar8 + 8;
  } while (-1 < iVar9);
  iVar9 = 7;
  pfVar8 = (float *)(param_1 + 0x40);
  do {
    fVar5 = pfVar8[-0x10] - pfVar8[0x28];
    fVar1 = pfVar8[0x20];
    fVar2 = *pfVar8;
    fVar3 = pfVar8[0x10];
    fVar4 = pfVar8[0x10] + pfVar8[8] + pfVar8[-0x10] + pfVar8[0x28];
    fVar6 = (pfVar8[-0x10] + pfVar8[0x28]) - (pfVar8[0x10] + pfVar8[8]);
    fVar7 = pfVar8[0x18] + *pfVar8 + pfVar8[0x20] + pfVar8[-8];
    pfVar8[-0x10] = fVar7 + fVar4;
    pfVar8[0x10] = fVar4 - fVar7;
    fVar4 = (((pfVar8[0x20] + pfVar8[-8]) - (pfVar8[0x18] + *pfVar8)) + fVar6) * 0.70710677;
    *pfVar8 = fVar4 + fVar6;
    pfVar8[0x20] = fVar6 - fVar4;
    fVar4 = (pfVar8[8] - fVar3) + (fVar2 - pfVar8[0x18]);
    fVar6 = (pfVar8[-8] - fVar1) + fVar5;
    fVar3 = (fVar4 - fVar6) * 0.38268343;
    fVar4 = fVar4 * 0.5411961 + fVar3;
    fVar3 = fVar6 * 1.306563 + fVar3;
    fVar1 = ((fVar2 - pfVar8[0x18]) + (pfVar8[-8] - fVar1)) * 0.70710677;
    fVar2 = fVar1 + fVar5;
    fVar5 = fVar5 - fVar1;
    iVar9 = iVar9 + -1;
    pfVar8[0x18] = fVar5 + fVar4;
    pfVar8[8] = fVar5 - fVar4;
    pfVar8[-8] = fVar2 + fVar3;
    pfVar8[0x28] = fVar2 - fVar3;
    pfVar8 = pfVar8 + 1;
  } while (-1 < iVar9);
  return;
}

