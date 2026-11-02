// rea decompile_all
// name: FUN_004dad34
// address: 0x4dad34
// body: available
// range: 0x4dad34-0x4dae28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004dad34(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38 [5];
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x4dad40;
  local_18 = 0;
  local_38[0] = 0x4dad4e;
  FUN_0049dba1();
  local_20 = (undefined1 *)local_38;
  local_18 = 1;
  local_38[0] = 0x24;
  local_3c = 0x4dad65;
  FUN_0049dc9b();
  local_38[0] = 0x4dad75;
  FUN_004d3044();
  local_20 = (undefined1 *)local_38;
  local_3c = 0x4dad82;
  FUN_004d076d();
  local_8 = 1;
  local_3c = 0x41880000;
  uStack_40 = 0x4dad97;
  local_3c = FUN_0049f51e();
  local_24 = (undefined1 *)&uStack_40;
  local_8._0_1_ = 2;
  FUN_004652e4(param_2);
  uStack_40 = FUN_00465c6b(local_1c);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_0049dc28(param_1);
  local_38[0] = 0x4dadd3;
  FUN_004652d6();
  local_38[0] = 0x4daddb;
  FUN_004c4d7a();
  local_3c = 0x4dade8;
  FUN_004d076d();
  local_8 = 6;
  local_3c = 0x41600000;
  uStack_40 = 0x4dae03;
  local_3c = FUN_0049f51e();
  uStack_40 = param_3;
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),8);
  FUN_0049dc28(param_1);
  local_38[0] = 0x4dae1e;
  FUN_004c4d7a();
  return param_1;
}

