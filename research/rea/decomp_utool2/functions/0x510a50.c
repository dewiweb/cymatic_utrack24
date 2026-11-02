// rea decompile_all
// name: FUN_00510a50
// address: 0x510a50
// body: available
// range: 0x510a50-0x510aed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00510a50(undefined4 param_1,int param_2,int param_3)

{
  int *in_ECX;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  float local_1c;
  float local_c;
  
  local_1c = (float)param_2;
  uStack_24 = param_1;
  local_20 = 0;
  uStack_28 = 0x510a82;
  FUN_004b0c70();
  if (((float)in_ECX[0x1c] != (float)(int)local_c) || ((float)in_ECX[0x1d] != (float)param_3)) {
    in_ECX[0x1c] = (int)(float)(int)local_c;
    in_ECX[0x1d] = (int)(float)param_3;
    local_1c = 7.442558e-39;
    (**(code **)(*in_ECX + 0x84))();
    FUN_006e6400(&uStack_28);
    FUN_006ce9f0(1);
  }
  return;
}

