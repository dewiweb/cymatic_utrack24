// rea decompile_all
// name: FUN_004766f5
// address: 0x4766f5
// body: available
// range: 0x4766f5-0x4767fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004766f5(undefined4 param_1)

{
  float10 fVar1;
  float local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_2c = &stack0x00000008;
  local_30 = (undefined1 *)0x476705;
  fVar1 = (float10)FUN_004763e5();
  local_1c = (float)fVar1;
  local_2c = &stack0x0000000c;
  local_30 = (undefined1 *)0x476711;
  fVar1 = (float10)FUN_004763e5();
  local_20 = (float)fVar1;
  local_18 = 0.0;
  local_14 = 0.0;
  local_8 = 0.0;
  do {
    local_2c = (undefined1 *)(local_8 - local_1c);
    local_30 = (undefined1 *)0x476734;
    local_10 = (float)local_2c;
    fVar1 = (float10)FUN_00474d74();
    local_10 = (float)fVar1;
    local_2c = (undefined1 *)(local_8 - local_20);
    local_30 = (undefined1 *)0x47674b;
    local_c = (float)local_2c;
    fVar1 = (float10)FUN_00474d74();
    local_34 = (float)fVar1;
    local_2c = (undefined1 *)(1.0 - local_34);
    local_30 = (undefined1 *)(1.0 - local_10);
    local_24 = local_30;
    local_c = local_34;
    fVar1 = (float10)FUN_0044dccd(local_10);
    local_10 = (float)fVar1;
    if (local_14 < local_10) {
      local_18 = local_8;
      local_14 = local_10;
    }
    local_8 = local_8 + 0.02;
  } while (local_8 < 1.0);
  local_2c = (undefined1 *)local_18;
  local_30 = (undefined1 *)param_1;
  local_24 = (undefined1 *)&local_34;
  FUN_00476237(&local_34,0x3f000000);
  local_34 = (float)FUN_0047627a(&local_24);
  FUN_004763a2();
  return param_1;
}

