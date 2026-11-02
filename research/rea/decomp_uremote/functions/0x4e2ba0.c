// rea decompile_all
// name: FUN_004e2ba0
// address: 0x4e2ba0
// body: available
// range: 0x4e2ba0-0x4e2cbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004e2ba0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_44 [16];
  undefined1 local_34 [20];
  int local_20 [6];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x4e2bac;
  FUN_00461693(param_2);
  FUN_004724c8(local_20,local_34);
  local_8 = 0;
  FUN_004615f7();
  if (local_20[0] == 0) {
    FUN_004721d6(&DAT_0095daa8);
    local_8._0_1_ = 3;
    FUN_00472252();
    FUN_004722b6();
    FUN_00461693(param_2);
    local_8._0_1_ = 4;
    FUN_004723a7(local_44,0);
    local_8._0_1_ = 0;
    FUN_004615f7();
    uVar1 = FUN_004e2fe2(&param_2);
    FUN_00461693(uVar1);
    local_8._0_1_ = 6;
    FUN_004723a7(local_44,0);
    FUN_004615f7();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004652d6();
    FUN_00472528(local_20);
  }
  else {
    uVar1 = FUN_004e2fe2(&param_2);
    FUN_00461693(uVar1);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004723a7(local_44,0);
    FUN_004615f7();
    FUN_004652d6();
  }
  FUN_004722b6();
  return;
}

