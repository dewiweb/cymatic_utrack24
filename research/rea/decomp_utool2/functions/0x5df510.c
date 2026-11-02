// rea decompile_all
// name: FUN_005df510
// address: 0x5df510
// body: available
// range: 0x5df510-0x5df6e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005df510(int param_1,int param_2)

{
  float *pfVar1;
  float *in_ECX;
  float *pfVar2;
  float *in_EDX;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar2 = in_EDX + (param_1 >> 1) + -8;
  pfVar1 = pfVar2 + (param_1 - (param_1 >> 1)) + 7;
  do {
    fVar6 = pfVar1[-1] - pfVar2[6];
    fVar5 = *pfVar1 - pfVar2[7];
    pfVar1[-1] = pfVar1[-1] + pfVar2[6];
    *pfVar1 = *pfVar1 + pfVar2[7];
    pfVar2[6] = *in_ECX * fVar6 + in_ECX[1] * fVar5;
    pfVar3 = in_ECX + param_2;
    pfVar2[7] = *in_ECX * fVar5 - in_ECX[1] * fVar6;
    fVar5 = pfVar1[-2];
    fVar7 = pfVar1[-3] - pfVar2[4];
    fVar6 = pfVar2[5];
    pfVar1[-3] = pfVar1[-3] + pfVar2[4];
    pfVar1[-2] = pfVar2[5] + pfVar1[-2];
    pfVar2[4] = *pfVar3 * fVar7 + pfVar3[1] * (fVar5 - fVar6);
    pfVar4 = pfVar3 + param_2;
    pfVar2[5] = *pfVar3 * (fVar5 - fVar6) - pfVar3[1] * fVar7;
    fVar6 = pfVar1[-5] - pfVar2[2];
    fVar5 = pfVar1[-4] - pfVar2[3];
    pfVar1[-5] = pfVar2[2] + pfVar1[-5];
    pfVar1[-4] = pfVar1[-4] + pfVar2[3];
    pfVar2[2] = *pfVar4 * fVar6 + pfVar4[1] * fVar5;
    pfVar3 = pfVar4 + param_2;
    pfVar2[3] = *pfVar4 * fVar5 - pfVar4[1] * fVar6;
    fVar5 = pfVar1[-6];
    fVar7 = pfVar1[-7] - *pfVar2;
    fVar6 = pfVar2[1];
    pfVar1[-7] = *pfVar2 + pfVar1[-7];
    pfVar1[-6] = pfVar2[1] + pfVar1[-6];
    pfVar1 = pfVar1 + -8;
    *pfVar2 = *pfVar3 * fVar7 + pfVar3[1] * (fVar5 - fVar6);
    in_ECX = pfVar3 + param_2;
    pfVar2[1] = *pfVar3 * (fVar5 - fVar6) - pfVar3[1] * fVar7;
    pfVar2 = pfVar2 + -8;
  } while (in_EDX <= pfVar2);
  return;
}

