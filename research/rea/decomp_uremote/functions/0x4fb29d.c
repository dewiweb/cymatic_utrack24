// rea decompile_all
// name: FUN_004fb29d
// address: 0x4fb29d
// body: available
// range: 0x4fb29d-0x4fb37c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fb29d(undefined4 param_1,int param_2,int param_3,float param_4,float param_5,
                 float param_6,float param_7,char param_8)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 local_50 [24];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  
  local_8 = (float)param_3;
  puVar1 = &local_20;
  fVar3 = param_5 / local_8;
  fVar2 = param_4 / (float)param_2;
  FUN_0047713c(local_50,-param_6,-param_7);
  FUN_00477489();
  FUN_0047734d(puVar1,fVar2,fVar3);
  local_38 = local_20;
  local_34 = local_1c;
  local_30 = local_18;
  local_2c = local_14;
  local_28 = local_10;
  local_24 = local_c;
  FUN_004fce0d(&local_38,6);
  if (param_8 != '\0') {
    param_4 = param_4 - 0.5 / (float)param_2;
    param_5 = param_5 - 0.5 / local_8;
  }
  FUN_004fcdbe(param_4,param_5);
  return;
}

