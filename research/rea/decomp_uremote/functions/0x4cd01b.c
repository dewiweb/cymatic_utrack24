// rea decompile_all
// name: FUN_004cd01b
// address: 0x4cd01b
// body: available
// range: 0x4cd01b-0x4cd196 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004cd01b(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x4cd027;
  FUN_004c8b3a();
  local_8 = 0;
  *param_1 = juce::DrawableText::vftable;
  FUN_004e3720(param_1 + 0x1e);
  local_8._0_1_ = 1;
  FUN_004e2ed8();
  local_8._0_1_ = 2;
  FUN_004e2ed8();
  local_8._0_1_ = 3;
  iVar4 = 2;
  puVar1 = param_1 + 0x26;
  do {
    *puVar1 = 0;
    iVar4 = iVar4 + -1;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  } while (-1 < iVar4);
  FUN_0049f4b3();
  local_8._0_1_ = 4;
  FUN_0049f4b3();
  FUN_004652cd();
  local_8._0_1_ = 6;
  FUN_004d076d();
  param_1[0x30] = 0x21;
  uVar2 = FUN_004e396f(local_28,0,0x41a00000);
  local_8._0_1_ = 7;
  uVar3 = FUN_004e396f(local_20,0x42480000,0);
  local_8._0_1_ = 8;
  FUN_004e396f(local_18,0,0);
  FUN_004e3758(uVar3,uVar2);
  local_8._0_1_ = 10;
  FUN_004cd3d1(param_1);
  FUN_004e37c2();
  FUN_004e2f64();
  FUN_004e2f64();
  FUN_004e2f64();
  FUN_004e2f64();
  local_8._0_1_ = 6;
  FUN_004e2f64();
  FUN_004e2f64();
  uVar2 = FUN_0049f51e(0x41700000);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  FUN_004cd325(uVar2,1);
  FUN_004c4d7a();
  return param_1;
}

