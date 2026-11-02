// rea decompile_all
// name: FUN_005dfdb0
// address: 0x5dfdb0
// body: available
// range: 0x5dfdb0-0x5dfe5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005dfdb0(void)

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
  
  fVar1 = *in_ECX + in_ECX[4];
  fVar4 = in_ECX[4] - *in_ECX;
  fVar3 = in_ECX[2] + in_ECX[6];
  fVar8 = in_ECX[6] - in_ECX[2];
  fVar2 = in_ECX[5] - in_ECX[1];
  fVar7 = in_ECX[1] + in_ECX[5];
  fVar5 = in_ECX[7] - in_ECX[3];
  fVar6 = in_ECX[3] + in_ECX[7];
  in_ECX[6] = fVar1 + fVar3;
  in_ECX[4] = fVar3 - fVar1;
  *in_ECX = fVar8 + fVar2;
  in_ECX[2] = fVar8 - fVar2;
  in_ECX[3] = fVar4 + fVar5;
  in_ECX[1] = fVar5 - fVar4;
  in_ECX[7] = fVar6 + fVar7;
  in_ECX[5] = fVar6 - fVar7;
  return;
}

