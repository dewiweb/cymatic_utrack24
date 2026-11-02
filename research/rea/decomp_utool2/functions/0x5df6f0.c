// rea decompile_all
// name: FUN_005df6f0
// address: 0x5df6f0
// body: available
// range: 0x5df6f0-0x5df894 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005df6f0(int param_1)

{
  float *pfVar1;
  int in_ECX;
  float *pfVar2;
  float *in_EDX;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pfVar2 = (float *)(in_ECX + 0x10);
  pfVar3 = in_EDX + (param_1 >> 1) + -8;
  pfVar1 = pfVar3 + (param_1 - (param_1 >> 1)) + 7;
  do {
    fVar5 = pfVar1[-1] - pfVar3[6];
    fVar4 = *pfVar1 - pfVar3[7];
    pfVar1[-1] = pfVar1[-1] + pfVar3[6];
    *pfVar1 = *pfVar1 + pfVar3[7];
    pfVar3[6] = pfVar2[-3] * fVar4 + fVar5 * pfVar2[-4];
    pfVar3[7] = fVar4 * pfVar2[-4] - pfVar2[-3] * fVar5;
    fVar5 = pfVar1[-3] - pfVar3[4];
    fVar4 = pfVar1[-2] - pfVar3[5];
    pfVar1[-3] = pfVar1[-3] + pfVar3[4];
    pfVar1[-2] = pfVar1[-2] + pfVar3[5];
    pfVar3[4] = *pfVar2 * fVar5 + fVar4 * pfVar2[1];
    pfVar3[5] = *pfVar2 * fVar4 - fVar5 * pfVar2[1];
    fVar5 = pfVar1[-5] - pfVar3[2];
    fVar4 = pfVar1[-4] - pfVar3[3];
    pfVar1[-5] = pfVar3[2] + pfVar1[-5];
    pfVar1[-4] = pfVar1[-4] + pfVar3[3];
    pfVar3[2] = fVar4 * pfVar2[5] + fVar5 * pfVar2[4];
    pfVar3[3] = fVar4 * pfVar2[4] - fVar5 * pfVar2[5];
    fVar4 = pfVar1[-6];
    fVar6 = pfVar1[-7] - *pfVar3;
    fVar5 = pfVar3[1];
    pfVar1[-7] = *pfVar3 + pfVar1[-7];
    pfVar1[-6] = pfVar3[1] + pfVar1[-6];
    *pfVar3 = (fVar4 - fVar5) * pfVar2[9] + fVar6 * pfVar2[8];
    pfVar3[1] = (fVar4 - fVar5) * pfVar2[8] - fVar6 * pfVar2[9];
    pfVar1 = pfVar1 + -8;
    pfVar3 = pfVar3 + -8;
    pfVar2 = pfVar2 + 0x10;
  } while (in_EDX <= pfVar3);
  return;
}

