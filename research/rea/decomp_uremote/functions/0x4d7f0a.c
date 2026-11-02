// rea decompile_all
// name: FUN_004d7f0a
// address: 0x4d7f0a
// body: available
// range: 0x4d7f0a-0x4d7feb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d7f0a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 *param_8)

{
  char cVar1;
  undefined1 *local_64;
  undefined1 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_20 [28];
  
  local_64 = (undefined1 *)0x4d7f1d;
  cVar1 = FUN_004c3153();
  if (cVar1 == '\0') {
    param_8 = (undefined1 *)((float)param_8 * 0.3);
  }
  local_50 = param_3;
  local_4c = param_4;
  local_48 = param_5;
  local_44 = param_6;
  local_54 = (undefined1 *)0x40;
  local_64 = (undefined1 *)0x4d7f5e;
  FUN_0043bc2d();
  local_64 = (undefined1 *)0x4d7f6c;
  FUN_0047e37c();
  local_64 = (undefined1 *)0x4d7f77;
  FUN_0043bc2d();
  local_64 = local_20;
  FUN_0047caee(&local_54);
  local_64 = (undefined1 *)0x4d7f90;
  cVar1 = FUN_00476205();
  if (cVar1 == '\0') {
    local_64 = param_8;
    FUN_0047cdee();
    local_64 = (undefined1 *)0x0;
    FUN_0047dab7(local_20);
  }
  local_64 = (undefined1 *)0x4d7fbc;
  cVar1 = FUN_004761fc();
  if (cVar1 == '\0') {
    local_54 = (undefined1 *)&local_64;
    FUN_004d076d();
    FUN_0047cda7();
    local_64 = (undefined1 *)0x1;
    FUN_0047dab7(local_20);
  }
  return;
}

