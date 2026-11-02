// rea decompile_all
// name: FUN_00455499
// address: 0x455499
// body: available
// range: 0x455499-0x4556b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00455499(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *local_78 [5];
  undefined1 local_64 [32];
  undefined1 local_44 [32];
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x4554a5;
  local_24 = local_78;
  FUN_0046537e(local_78);
  FUN_0044565e(4);
  local_8 = 0;
  local_14 = param_1 + 0x26;
  *local_14 = uTrack::SettingsListener::vftable;
  puVar1 = param_1 + 0x27;
  *puVar1 = uTrack::StatusListener::vftable;
  puVar2 = param_1 + 0x28;
  *puVar2 = PushButton::Listener::vftable;
  local_78[0] = (undefined4 *)0x4554fe;
  local_24 = puVar1;
  local_18 = puVar2;
  uVar3 = FUN_00474777();
  *(undefined4 *)((ulonglong)uVar3 >> 0x20) = MenusPanel::vftable;
  local_1c = param_1 + 0x2e;
  *param_1 = MenusPanel::vftable;
  *puVar1 = MenusPanel::vftable;
  *puVar2 = MenusPanel::vftable;
  *(undefined4 *)uVar3 = MenusPanel::vftable;
  local_78[0] = (undefined4 *)0x45552a;
  FUN_004561a4();
  local_78[0] = param_1 + 0x4a;
  local_8._0_1_ = 5;
  local_20 = local_78[0];
  FUN_00440cef();
  local_78[0] = param_1 + 0x124;
  local_8._0_1_ = 6;
  FUN_0043f5eb();
  local_8._0_1_ = 7;
  local_78[0] = (undefined4 *)0x45555c;
  FUN_0049f4b3();
  local_8._0_1_ = 8;
  param_1[0x184] = param_2;
  local_78[0] = &param_2;
  *(undefined1 *)(param_1 + 0x183) = 0;
  *(undefined1 *)((int)param_1 + 0x60d) = 0;
  FUN_0046537e();
  local_78[0] = &param_2;
  local_8._0_1_ = 9;
  local_78[0] = (undefined4 *)FUN_004cefd8(local_64);
  local_8._0_1_ = 10;
  FUN_00478907();
  local_78[0] = (undefined4 *)0x4555ad;
  FUN_004f7994();
  local_8._0_1_ = 8;
  local_78[0] = (undefined4 *)0x4555b9;
  FUN_004652d6();
  local_78[0] = (undefined4 *)0x3f4ccccd;
  FUN_00478a11(param_1 + 0x1e,0x3dcccccd,0x3dcccccd,0x3f4ccccd);
  local_78[0] = &param_2;
  FUN_0046537e();
  local_78[0] = &param_2;
  local_8._0_1_ = 0xb;
  FUN_004cefd8(local_44);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  local_78[0] = (undefined4 *)0x45560a;
  FUN_004652d6();
  local_78[0] = (undefined4 *)0x3f19999a;
  FUN_00478a11(local_44,0x3e4ccccd,0x3e4ccccd,0x3f19999a);
  local_78[0] = (undefined4 *)0x0;
  FUN_0043f879(local_44);
  if (local_18 != (undefined4 *)0x0) {
    local_78[0] = (undefined4 *)0x455654;
    FUN_00472fde();
  }
  local_78[0] = (undefined4 *)0xffffffff;
  FUN_004c1064();
  local_78[0] = local_1c;
  FUN_00440ea9();
  local_78[0] = (undefined4 *)0xffffffff;
  FUN_004c1064();
  local_78[0] = (undefined4 *)0x455688;
  FUN_0044a54a();
  local_78[0] = (undefined4 *)0x455699;
  FUN_0043e015();
  local_78[0] = (undefined4 *)0x4556a1;
  FUN_00455869();
  local_78[0] = (undefined4 *)0x4556a9;
  FUN_004f7994();
  return param_1;
}

