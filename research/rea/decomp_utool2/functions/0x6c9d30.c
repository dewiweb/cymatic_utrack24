// rea decompile_all
// name: FUN_006c9d30
// address: 0x6c9d30
// body: available
// range: 0x6c9d30-0x6c9dd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c9d30(float param_1,float param_2,float param_3,float param_4,undefined1 param_5,
                 char param_6,undefined8 param_7,float param_8,float param_9,float param_10,
                 float param_11,float param_12,float param_13)

{
  float *in_ECX;
  float in_XMM3_Da;
  
  *in_ECX = (float)param_7;
  in_ECX[1] = param_7._4_4_;
  param_7._0_4_ = SUB84((double)(float)param_7 + 6755399441055744.0,0);
  in_ECX[2] = (float)param_7;
  param_7._0_4_ = SUB84((double)param_7._4_4_ + 6755399441055744.0,0);
  in_ECX[3] = (float)param_7;
  in_ECX[4] = param_2;
  in_ECX[6] = param_3;
  in_ECX[7] = param_4;
  in_ECX[5] = in_XMM3_Da;
  in_ECX[8] = param_8;
  in_ECX[9] = param_9;
  in_ECX[10] = param_12;
  in_ECX[0xb] = param_13;
  in_ECX[0xc] = param_1;
  in_ECX[0xd] = param_10;
  in_ECX[0xe] = param_11;
  *(undefined1 *)(in_ECX + 0xf) = param_5;
  *(bool *)((int)in_ECX + 0x3d) = param_6 != '\0';
  return;
}

