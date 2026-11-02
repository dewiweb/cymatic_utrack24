// rea decompile_all
// name: FUN_00641120
// address: 0x641120
// body: available
// range: 0x641120-0x641197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00641120(float param_1,float param_2,float param_3,float param_4,undefined1 param_5,
                 float param_6,float param_7,float param_8,float param_9)

{
  undefined4 *in_ECX;
  float *in_EDX;
  float local_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  *in_EDX = param_3 * param_6 + param_1;
  in_EDX[1] = param_4 * param_7 + param_2;
  in_EDX[2] = param_3 * param_8 + param_1;
  in_EDX[3] = param_4 * param_9 + param_2;
  *(undefined1 *)(in_EDX + 4) = param_5;
  FUN_00683ff0(in_EDX);
  local_14 = param_1;
  fStack_10 = param_2;
  fStack_c = param_3;
  fStack_8 = param_4;
  (**(code **)(*(int *)*in_ECX + 0x50))(&local_14);
  return;
}

