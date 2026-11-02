// rea decompile_all
// name: FUN_004da84b
// address: 0x4da84b
// body: available
// range: 0x4da84b-0x4da915 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004da84b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,undefined1 **param_7)

{
  char cVar1;
  float10 fVar2;
  undefined1 *local_20;
  undefined4 local_1c;
  float local_18;
  
  local_18 = 7.131726e-39;
  cVar1 = FUN_004c3153();
  if (cVar1 == '\0') {
    local_1c = 0x3e800000;
  }
  else {
    local_1c = 0x3f800000;
  }
  local_20 = (undefined1 *)&local_18;
  FUN_004c1e29(&param_7,0x1003240,1);
  FUN_0047620f();
  local_1c = 0x4da89b;
  FUN_0047cda7();
  param_7 = (undefined1 **)((float)param_5 * 0.85);
  local_1c = 0x41600000;
  local_20 = (undefined1 *)0x4da8be;
  local_18 = (float)param_7;
  fVar2 = (float10)FUN_0043d2e1();
  param_7 = (undefined1 **)(float)fVar2;
  local_1c = 0x4da8d1;
  local_18 = (float)param_7;
  FUN_0047ceb8();
  local_18 = 0.0;
  local_1c = 0x4da8df;
  FUN_005b3fb0();
  local_1c = 1;
  local_20 = (undefined1 *)0x4da8ee;
  local_1c = FUN_00439b5a();
  param_7 = &local_20;
  local_20 = (undefined1 *)0x24;
  FUN_0047d12a(param_2,param_3,param_4,param_5);
  return;
}

