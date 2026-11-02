// rea decompile_all
// name: FUN_005df8a0
// address: 0x5df8a0
// body: available
// range: 0x5df8a0-0x5dfb47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5dfb43 to 0x5dfb50 FUN_005dfb50 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005df8a0(void)

{
  float *in_ECX;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = in_ECX[0xf];
  fVar3 = in_ECX[0xe];
  in_ECX[0xf] = in_ECX[0x1f] - fVar1;
  in_ECX[0x1f] = fVar1 + in_ECX[0x1f];
  fVar2 = in_ECX[0x1d] - in_ECX[0xd];
  in_ECX[0xe] = in_ECX[0x1e] - fVar3;
  fVar4 = in_ECX[0x1c] - in_ECX[0xc];
  in_ECX[0x1d] = in_ECX[0xd] + in_ECX[0x1d];
  in_ECX[0x1c] = in_ECX[0xc] + in_ECX[0x1c];
  fVar5 = in_ECX[0x1a] - in_ECX[10];
  in_ECX[0x1e] = fVar3 + in_ECX[0x1e];
  fVar1 = in_ECX[6];
  in_ECX[0xd] = fVar2 * 0.9238795 + fVar4 * 0.38268343;
  fVar3 = in_ECX[0x1b] - in_ECX[0xb];
  in_ECX[0xc] = fVar4 * 0.9238795 - fVar2 * 0.38268343;
  in_ECX[0x1a] = in_ECX[10] + in_ECX[0x1a];
  in_ECX[0x1b] = in_ECX[0xb] + in_ECX[0x1b];
  fVar6 = in_ECX[0x18] - in_ECX[8];
  in_ECX[10] = (fVar5 - fVar3) * 0.70710677;
  in_ECX[0xb] = (fVar3 + fVar5) * 0.70710677;
  fVar4 = in_ECX[0x19] - in_ECX[9];
  in_ECX[0x18] = in_ECX[8] + in_ECX[0x18];
  in_ECX[0x19] = in_ECX[9] + in_ECX[0x19];
  fVar3 = in_ECX[0x16];
  in_ECX[8] = fVar6 * 0.38268343 - fVar4 * 0.9238795;
  fVar2 = in_ECX[0x17];
  in_ECX[9] = fVar4 * 0.38268343 + fVar6 * 0.9238795;
  in_ECX[0x16] = fVar1 + in_ECX[0x16];
  in_ECX[0x17] = fVar2 + in_ECX[7];
  in_ECX[6] = in_ECX[7] - fVar2;
  fVar2 = in_ECX[5] - in_ECX[0x15];
  in_ECX[7] = fVar3 - fVar1;
  fVar3 = in_ECX[4] - in_ECX[0x14];
  in_ECX[0x15] = in_ECX[0x15] + in_ECX[5];
  in_ECX[0x14] = in_ECX[0x14] + in_ECX[4];
  fVar4 = in_ECX[2] - in_ECX[0x12];
  fVar1 = in_ECX[3] - in_ECX[0x13];
  in_ECX[5] = fVar2 * 0.38268343 - fVar3 * 0.9238795;
  in_ECX[4] = fVar2 * 0.9238795 + fVar3 * 0.38268343;
  in_ECX[0x12] = in_ECX[0x12] + in_ECX[2];
  in_ECX[0x13] = in_ECX[0x13] + in_ECX[3];
  in_ECX[2] = (fVar1 + fVar4) * 0.70710677;
  fVar3 = in_ECX[1] - in_ECX[0x11];
  in_ECX[3] = (fVar1 - fVar4) * 0.70710677;
  fVar1 = *in_ECX - in_ECX[0x10];
  in_ECX[0x11] = in_ECX[0x11] + in_ECX[1];
  in_ECX[0x10] = in_ECX[0x10] + *in_ECX;
  *in_ECX = fVar3 * 0.38268343 + fVar1 * 0.9238795;
  in_ECX[1] = fVar3 * 0.9238795 - fVar1 * 0.38268343;
  FUN_005dfb50();
  FUN_005dfb50();
  return;
}

