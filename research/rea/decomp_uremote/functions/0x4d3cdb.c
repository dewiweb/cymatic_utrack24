// rea decompile_all
// name: FUN_004d3cdb
// address: 0x4d3cdb
// body: available
// range: 0x4d3cdb-0x4d3df4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d3cdb(undefined4 param_1,float param_2)

{
  char cVar1;
  char cVar2;
  undefined1 *local_2c;
  undefined4 local_28;
  float local_24;
  int local_14;
  undefined1 *local_c [2];
  
  local_24 = param_2;
  local_28 = 0x4d3cf0;
  cVar1 = FUN_004bf38c();
  local_28 = 0;
  local_2c = (undefined1 *)((cVar1 != '\0') + 0x1004011);
  FUN_004c1e29(&local_24);
  local_28 = 0x4d3d19;
  FUN_0047d23a();
  if (*(int *)((int)param_2 + 0xdc) == 2) {
    local_24 = 0.25;
    local_28 = 0x4d3d35;
    FUN_004c07be();
    local_24 = 2.24208e-44;
    local_28 = 0x4d3d3c;
    local_14 = FUN_00440367();
  }
  else {
    local_14 = 0;
  }
  if (0 < local_14) {
    local_24 = (float)local_14;
    local_28 = 0x4d3d62;
    FUN_0047ceb8();
    local_24 = 7.093363e-39;
    cVar2 = FUN_004c3153();
    if (cVar2 == '\0') {
      local_28 = 0x3ecccccd;
    }
    else {
      local_28 = 0x3f800000;
    }
    local_c[0] = (undefined1 *)&local_24;
    local_2c = (undefined1 *)&local_24;
    FUN_004c1e29(local_c,((cVar1 == '\0') - 1 & 3) + 0x1004010,0);
    FUN_00476237();
    local_28 = 0x4d3db6;
    FUN_0047cda7();
    local_24 = 0.0;
    local_28 = 1;
    local_c[0] = (undefined1 *)&local_2c;
    local_2c = (undefined1 *)0x24;
    FUN_0047d12a(2,(*(int *)((int)param_2 + 0x1c) - local_14) + -1,
                 *(int *)((int)param_2 + 0x18) + -4,local_14);
  }
  return;
}

