// rea decompile_all
// name: FUN_005dfb50
// address: 0x5dfb50
// body: available
// range: 0x5dfb50-0x5dfda7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005dfb50(void)

{
  float *in_ECX;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = *in_ECX - in_ECX[8];
  fVar6 = in_ECX[1] - in_ECX[9];
  in_ECX[8] = in_ECX[8] + *in_ECX;
  fVar5 = in_ECX[0xf];
  in_ECX[9] = in_ECX[9] + in_ECX[1];
  fVar1 = in_ECX[3];
  *in_ECX = (fVar2 + fVar6) * 0.70710677;
  fVar3 = in_ECX[2];
  in_ECX[2] = in_ECX[3] - in_ECX[0xb];
  in_ECX[1] = (fVar6 - fVar2) * 0.70710677;
  in_ECX[3] = in_ECX[10] - fVar3;
  fVar2 = in_ECX[0xc] - in_ECX[4];
  in_ECX[10] = fVar3 + in_ECX[10];
  fVar3 = in_ECX[0xd] - in_ECX[5];
  in_ECX[0xb] = in_ECX[0xb] + fVar1;
  in_ECX[0xc] = in_ECX[4] + in_ECX[0xc];
  in_ECX[0xd] = in_ECX[5] + in_ECX[0xd];
  in_ECX[4] = (fVar2 - fVar3) * 0.70710677;
  fVar6 = in_ECX[0xe] - in_ECX[6];
  in_ECX[5] = (fVar3 + fVar2) * 0.70710677;
  fVar1 = in_ECX[4] + *in_ECX;
  in_ECX[0xe] = in_ECX[0xe] + in_ECX[6];
  fVar2 = in_ECX[2] + fVar6;
  fVar6 = fVar6 - in_ECX[2];
  fVar7 = in_ECX[4] - *in_ECX;
  in_ECX[0xf] = in_ECX[7] + in_ECX[0xf];
  fVar4 = (fVar5 - in_ECX[7]) - in_ECX[3];
  fVar3 = in_ECX[5] - in_ECX[1];
  in_ECX[6] = fVar1 + fVar2;
  in_ECX[4] = fVar2 - fVar1;
  *in_ECX = fVar6 + fVar3;
  fVar1 = in_ECX[5] + in_ECX[1];
  in_ECX[2] = fVar6 - fVar3;
  fVar5 = in_ECX[3] + (fVar5 - in_ECX[7]);
  in_ECX[3] = fVar7 + fVar4;
  in_ECX[1] = fVar4 - fVar7;
  in_ECX[7] = fVar5 + fVar1;
  in_ECX[5] = fVar5 - fVar1;
  fVar5 = in_ECX[8] + in_ECX[0xc];
  fVar2 = in_ECX[0xc] - in_ECX[8];
  fVar3 = in_ECX[10] + in_ECX[0xe];
  fVar8 = in_ECX[0xe] - in_ECX[10];
  fVar1 = in_ECX[0xd] - in_ECX[9];
  fVar7 = in_ECX[9] + in_ECX[0xd];
  fVar6 = in_ECX[0xf] - in_ECX[0xb];
  fVar4 = in_ECX[0xb] + in_ECX[0xf];
  in_ECX[0xe] = fVar5 + fVar3;
  in_ECX[0xc] = fVar3 - fVar5;
  in_ECX[8] = fVar8 + fVar1;
  in_ECX[10] = fVar8 - fVar1;
  in_ECX[0xb] = fVar2 + fVar6;
  in_ECX[9] = fVar6 - fVar2;
  in_ECX[0xf] = fVar4 + fVar7;
  in_ECX[0xd] = fVar4 - fVar7;
  return;
}

