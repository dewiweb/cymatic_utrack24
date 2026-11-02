// rea decompile_all
// name: FUN_00560b70
// address: 0x560b70
// body: available
// range: 0x560b70-0x560c60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00560b70(undefined4 *param_1,float param_2,float param_3,undefined4 param_4,char param_5,
                 undefined4 param_6)

{
  char cVar1;
  float in_XMM2_Da;
  float in_XMM3_Da;
  float local_40 [3];
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28 [3];
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  
  local_c = in_XMM3_Da;
  local_8 = in_XMM2_Da;
  FUN_00684c50(param_4);
  if (param_2 <= param_3) {
    param_3 = param_2;
  }
  local_40[2] = local_8 + 0.0;
  if (param_5 == '\0') {
    local_2c = local_c + 0.0;
    local_40[1] = 0.0;
    local_34 = 0;
    local_1c = 0x3f800000;
    local_18 = 0.0;
    local_14 = 0.0;
    local_40[0] = param_3;
    local_30 = param_3;
    FUN_00682be0(param_6,&local_1c,local_40);
  }
  else {
    local_14 = local_c + 0.0;
    local_28[1] = 0.0;
    local_1c = 0;
    local_28[0] = param_3;
    local_28[2] = local_40[2];
    local_18 = param_3;
    cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
    if (cVar1 == '\0') {
      cVar1 = FUN_00682580();
      if (cVar1 == '\0') {
        (**(code **)(*(int *)*param_1 + 0x5c))(param_6,local_28);
        return;
      }
    }
  }
  return;
}

