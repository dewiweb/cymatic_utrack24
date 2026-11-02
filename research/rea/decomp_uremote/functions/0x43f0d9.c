// rea decompile_all
// name: FUN_0043f0d9
// address: 0x43f0d9
// body: available
// range: 0x43f0d9-0x43f1e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0043f0d9(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 *apuStack_28 [5];
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x43f0e5;
  apuStack_28[0] = param_1;
  local_2c = 0x43f0ee;
  FUN_0043f5eb();
  local_8 = 0;
  local_2c = 0x43f0fe;
  apuStack_28[0] = param_1 + 0x5e;
  FUN_00474272();
  *param_1 = OverloadBar::vftable;
  param_1[0x1c] = OverloadBar::vftable;
  param_1[0x5e] = OverloadBar::vftable;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  local_14 = (undefined1 *)apuStack_28;
  local_30 = (undefined1 *)apuStack_28;
  local_8._0_1_ = 2;
  local_2c = 0x3ecccccd;
  local_34 = (undefined1 *)0x43f13c;
  FUN_0044bfc5();
  local_34 = (undefined1 *)0x43f148;
  FUN_0047620f();
  local_14 = (undefined1 *)&local_2c;
  local_34 = (undefined1 *)&local_2c;
  local_8._0_1_ = 3;
  local_30 = (undefined1 *)0x3ecccccd;
  puStack_38 = (undefined1 *)0x43f162;
  FUN_0044bfc5();
  puStack_38 = (undefined1 *)0x43f169;
  FUN_0047620f();
  local_14 = (undefined1 *)&local_30;
  puStack_38 = (undefined1 *)&local_30;
  local_8._0_1_ = 4;
  local_34 = (undefined1 *)0x3ecccccd;
  uStack_3c = 0x43f183;
  FUN_0044bfc5();
  uStack_3c = 0x43f18a;
  FUN_0047620f();
  local_14 = (undefined1 *)&local_34;
  puStack_38 = (undefined1 *)0x43f19c;
  FUN_004d076d();
  local_14 = (undefined1 *)&puStack_38;
  uStack_3c = 0x43f1a9;
  FUN_004d076d();
  local_14 = (undefined1 *)&uStack_3c;
  FUN_004d076d();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_0043f8fb();
  apuStack_28[0] = param_2;
  local_2c = 0x43f1d0;
  FUN_004401f3();
  param_1[0x60] = 0x41a00000;
  return;
}

