// rea decompile_all
// name: FUN_004ddf5d
// address: 0x4ddf5d
// body: available
// range: 0x4ddf5d-0x4de072 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004ddf5d(undefined4 param_1,int param_2,undefined4 param_3,float param_4,
                 undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_70 [5];
  undefined1 local_5c [72];
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x4ddf69;
  local_70[0] = 0x4ddf71;
  FUN_0047888f();
  local_8 = 0;
  if (param_4._0_1_ == '\0') {
    local_14 = 0;
    param_4 = 0.5;
  }
  else {
    local_14 = 0x3f000000;
    param_4 = 0.0;
  }
  local_70[0] = 0x3f800000;
  FUN_00479368(local_5c,0,0,0x3f800000,param_4,local_14);
  if ((char)param_5 == '\0') {
    param_4 = 0.3;
  }
  else {
    param_4 = 0.5;
  }
  param_5 = local_70;
  puVar1 = local_70;
  uVar2 = param_4;
  FUN_004765bf(&param_4,0x3f800000);
  FUN_0047620f(puVar1,uVar2);
  FUN_0047cda7();
  local_70[0] = 0x24;
  uVar2 = 1;
  param_4 = *(float *)(param_2 + 0xc) * 0.25;
  FUN_004a4dea(0x40000000,param_4);
  local_70[0] = FUN_0047a5db(local_5c,uVar2);
  FUN_0047d2ae(local_5c);
  local_70[0] = 0x4de06b;
  FUN_004f7994();
  return;
}

