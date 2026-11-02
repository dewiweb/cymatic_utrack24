// rea decompile_all
// name: FUN_00684210
// address: 0x684210
// body: available
// range: 0x684210-0x6842a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_00684210(undefined1 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *in_ECX;
  float in_XMM2_Da;
  float fVar4;
  
  bVar1 = in_ECX[1];
  bVar2 = in_ECX[2];
  bVar3 = *in_ECX;
  fVar4 = 1.0 / (in_XMM2_Da + 1.0);
  param_1[3] = in_ECX[3];
  *param_1 = (char)(int)(255.0 - (float)(int)(0xff - (uint)bVar3) * fVar4);
  param_1[1] = (char)(int)(255.0 - (float)(int)(0xff - (uint)bVar1) * fVar4);
  param_1[2] = (char)(int)(255.0 - (float)(int)(0xff - (uint)bVar2) * fVar4);
  return param_1;
}

