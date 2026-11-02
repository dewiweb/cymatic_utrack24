// rea decompile_all
// name: FUN_004ec991
// address: 0x4ec991
// body: available
// range: 0x4ec991-0x4eca46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004ec991(undefined1 **param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 **local_64 [5];
  undefined1 local_50 [56];
  undefined4 *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x4ec99d;
  local_64[0] = (undefined1 **)0x4ec9a7;
  FUN_0049dba1();
  local_8 = 0;
  local_18[0] = local_64;
  local_64[0] = (undefined1 **)0x9;
  FUN_0049dc9b();
  local_64[0] = (undefined1 **)local_18;
  uVar1 = FUN_004ebf83();
  local_64[0] = (undefined1 **)(in_ECX + 0xf0);
  local_8._0_1_ = 1;
  FUN_0049dbde(local_50,uVar1);
  local_64[0] = (undefined1 **)0x4ec9e2;
  FUN_004652d6();
  local_64[0] = (undefined1 **)0x4ec9ea;
  FUN_004a13c1();
  local_8 = CONCAT31(local_8._1_3_,2);
  local_64[0] = (undefined1 **)((float)(int)param_1 - 8.0);
  local_18[0] = local_64[0];
  FUN_004a15cc();
  local_64[0] = (undefined1 **)0x4eca13;
  FUN_0049fa3d();
  local_64[0] = (undefined1 **)0x4eca1b;
  FUN_005b3fb0();
  local_64[0] = param_1;
  local_64[0] = (undefined1 **)FUN_00440367();
  FUN_004c0be5();
  local_64[0] = (undefined1 **)0x4eca37;
  FUN_004a13db();
  local_64[0] = (undefined1 **)0x4eca3f;
  FUN_0049dbc5();
  return;
}

