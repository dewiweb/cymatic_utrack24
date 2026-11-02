// rea decompile_all
// name: FUN_005ad810
// address: 0x5ad810
// body: available
// range: 0x5ad810-0x5ad8e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ad810(undefined4 *param_1)

{
  char cVar1;
  int in_ECX;
  float *pfStack_2c;
  float local_20 [3];
  undefined4 local_14;
  float local_10;
  float local_c;
  
  FUN_006842b0(&pfStack_2c);
  FUN_00684c50();
  local_20[1] = 0.0;
  local_14 = 0;
  local_20[0] = (float)*(int *)(in_ECX + 0x1c) * 0.8;
  local_20[2] = ((float)(*(int *)(in_ECX + 0x480) + *(int *)(in_ECX + 0x478)) - 200.0) +
                (float)*(int *)(in_ECX + 0x18) * 0.25 + 0.0;
  local_c = ((float)*(int *)(in_ECX + 0x47c) - 20.0) + 0.0;
  pfStack_2c = (float *)0x5ad8c6;
  local_10 = local_20[0];
  cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
  if (cVar1 == '\0') {
    pfStack_2c = (float *)0x5ad8d1;
    cVar1 = FUN_00682580();
    if (cVar1 == '\0') {
      pfStack_2c = local_20;
      (**(code **)(*(int *)*param_1 + 0x5c))(in_ECX + 0x7e8);
    }
  }
  return;
}

