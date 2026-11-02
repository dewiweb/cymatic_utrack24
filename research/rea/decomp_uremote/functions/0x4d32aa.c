// rea decompile_all
// name: FUN_004d32aa
// address: 0x4d32aa
// body: available
// range: 0x4d32aa-0x4d332d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004d32aa(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_3c;
  undefined1 local_2c [32];
  undefined1 *local_c;
  
  local_3c = 0x4d32ba;
  FUN_0049dba1();
  local_c = (undefined1 *)&local_3c;
  local_3c = 0x24;
  FUN_0049dc9b();
  local_c = (undefined1 *)&local_3c;
  FUN_004d076d();
  uVar1 = FUN_0049f51e(0x41500000);
  FUN_0049dc28(local_2c,param_2,uVar1);
  local_3c = 0x4d3302;
  FUN_004c4d7a();
  local_3c = 0x4d330a;
  FUN_004a13c1();
  local_3c = 0x43c80000;
  FUN_004a15cc();
  local_3c = 0x4d3327;
  FUN_0049dbc5();
  return param_1;
}

