// rea decompile_all
// name: FUN_004c90ad
// address: 0x4c90ad
// body: available
// range: 0x4c90ad-0x4c922e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004c90ad(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_58;
  undefined1 *local_30;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x4c90b9;
  local_58 = CONCAT44(0x4c90c3,(undefined4)local_58);
  FUN_004c8b3a();
  local_8 = 0;
  local_30 = (undefined1 *)&local_58;
  *param_1 = juce::DrawableComposite::vftable;
  local_58 = 0x42c8000000000000;
  FUN_004e3933(local_1c);
  local_8._0_1_ = 1;
  local_30 = (undefined1 *)&local_58;
  local_58 = 0x42c80000;
  FUN_004e3933(local_24);
  local_8._0_1_ = 2;
  local_30 = (undefined1 *)&local_58;
  local_58 = 0;
  FUN_004e3933(local_2c);
  local_58 = CONCAT44(local_1c,local_24);
  FUN_004e3758();
  local_58 = CONCAT44(0x4c9141,(undefined4)local_58);
  FUN_004e2f64();
  local_58 = CONCAT44(0x4c9149,(undefined4)local_58);
  FUN_004e2f64();
  local_58 = CONCAT44(0x4c9151,(undefined4)local_58);
  FUN_004e2f64();
  local_58 = CONCAT44(0x4c9159,(undefined4)local_58);
  FUN_004e2f64();
  local_58 = CONCAT44(0x4c9161,(undefined4)local_58);
  FUN_004e2f64();
  local_58 = CONCAT44(0x4c9169,(undefined4)local_58);
  FUN_004e2f64();
  local_58 = CONCAT44(0x4c9174,(undefined4)local_58);
  FUN_004e28e3();
  local_58 = CONCAT44(0x4c917f,(undefined4)local_58);
  FUN_004e28e3();
  local_8._0_1_ = 7;
  local_58 = 0x4059000000000000;
  *(undefined1 *)(param_1 + 0x30) = 0;
  uVar1 = FUN_004e2ef9();
  local_8._0_1_ = 8;
  local_58 = 0;
  uVar2 = FUN_004e2ef9();
  local_8._0_1_ = 9;
  local_58 = 0x4059000000000000;
  local_14 = FUN_004e2ef9();
  local_8._0_1_ = 10;
  local_58 = 0;
  FUN_004e2ef9();
  local_58 = CONCAT44(uVar1,uVar2);
  FUN_004e4665(local_14);
  local_8 = CONCAT31(local_8._1_3_,0xc);
  local_58 = CONCAT44(0x4c91fd,(undefined4)local_58);
  FUN_004c9559();
  local_58 = CONCAT44(0x4c9205,(undefined4)local_58);
  FUN_004c0c32();
  local_58 = CONCAT44(0x4c920d,(undefined4)local_58);
  FUN_004e2f64();
  local_58 = CONCAT44(0x4c9215,(undefined4)local_58);
  FUN_004e2f64();
  local_58 = CONCAT44(0x4c921d,(undefined4)local_58);
  FUN_004e2f64();
  local_58 = CONCAT44(0x4c9225,(undefined4)local_58);
  FUN_004e2f64();
  return param_1;
}

