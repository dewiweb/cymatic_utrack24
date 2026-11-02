// rea decompile_all
// name: FUN_004e42fc
// address: 0x4e42fc
// body: available
// range: 0x4e42fc-0x4e43b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004e42fc(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined4 local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0;
  local_14 = 0;
  FUN_004721d6(&DAT_0095dafc);
  local_8 = 0;
  local_14 = 1;
  uVar1 = FUN_004e3af1(local_18);
  local_8 = 1;
  FUN_00461693(uVar1);
  local_8._0_1_ = 2;
  FUN_004723a7(local_2c,0);
  FUN_004615f7();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004652d6();
  uVar1 = FUN_004e3af1(local_1c);
  local_8 = 3;
  FUN_00461693(uVar1);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_004723a7(local_2c,0);
  FUN_004615f7();
  FUN_004652d6();
  return param_1;
}

