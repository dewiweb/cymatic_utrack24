// rea decompile_all
// name: FUN_004f8db5
// address: 0x4f8db5
// body: available
// range: 0x4f8db5-0x4f8e30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_004f8db5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined1 local_30 [40];
  undefined1 *local_8;
  
  local_50 = (undefined1 *)0x4f8dc3;
  cVar1 = FUN_004c0d86();
  if (cVar1 != '\0') {
    local_50 = local_30;
    local_54 = 0x4f8dd2;
    FUN_004c0d8f();
    local_50 = (undefined1 *)0x4f8ddc;
    local_50 = (undefined1 *)FUN_00477489();
    local_54 = 0x4f8de8;
    puVar2 = (undefined4 *)FUN_004a97ee();
    param_3 = *puVar2;
    param_4 = puVar2[1];
    param_5 = puVar2[2];
    param_6 = puVar2[3];
  }
  local_8 = (undefined1 *)&local_5c;
  local_5c = param_3;
  local_58 = param_4;
  local_54 = param_5;
  local_50 = (undefined1 *)param_6;
  FUN_004f971f();
  return param_1;
}

