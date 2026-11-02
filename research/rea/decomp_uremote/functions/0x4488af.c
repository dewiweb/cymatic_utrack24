// rea decompile_all
// name: FUN_004488af
// address: 0x4488af
// body: available
// range: 0x4488af-0x448b19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004488af(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
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
  local_8 = 0x4488bb;
  local_24 = local_78;
  FUN_0046537e(local_78);
  FUN_0044565e(3);
  local_18 = param_1 + 0x26;
  local_8 = 0;
  *local_18 = PushButton::Listener::vftable;
  local_20 = param_1 + 0x27;
  *local_20 = uTrack::StatusListener::vftable;
  local_24 = param_1 + 0x28;
  *local_24 = uTrack::BrowserListener::vftable;
  *local_24 = FilePanel::vftable;
  local_14 = param_1 + 0x29;
  *param_1 = FilePanel::vftable;
  *local_18 = FilePanel::vftable;
  *local_20 = FilePanel::vftable;
  local_78[0] = (undefined4 *)0x448930;
  FUN_004493b4();
  local_78[0] = param_1 + 0x46;
  local_8._0_1_ = 4;
  local_1c = local_78[0];
  FUN_00440cef();
  local_78[0] = param_1 + 0x120;
  local_8._0_1_ = 5;
  FUN_0043f5eb();
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  local_78[0] = (undefined4 *)0x44896a;
  FUN_004652cd();
  local_8._0_1_ = 9;
  local_78[0] = (undefined4 *)0x448979;
  FUN_0049f4b3();
  local_8._0_1_ = 10;
  local_78[0] = (undefined4 *)0x448988;
  FUN_0049f4b3();
  local_8._0_1_ = 0xb;
  param_1[0x184] = param_2;
  local_78[0] = &param_2;
  FUN_0046537e();
  local_78[0] = &param_2;
  local_8._0_1_ = 0xc;
  local_78[0] = (undefined4 *)FUN_004cefd8(local_64);
  local_8._0_1_ = 0xd;
  FUN_00478907();
  local_78[0] = (undefined4 *)0x4489cb;
  FUN_004f7994();
  local_8._0_1_ = 0xb;
  local_78[0] = (undefined4 *)0x4489d7;
  FUN_004652d6();
  local_78[0] = (undefined4 *)0x3f4ccccd;
  FUN_00478a11(param_1 + 0x1e,0x3dcccccd,0x3dcccccd,0x3f4ccccd);
  local_78[0] = &param_2;
  FUN_0046537e();
  local_78[0] = &param_2;
  local_8._0_1_ = 0xe;
  FUN_004cefd8(local_44);
  local_8 = CONCAT31(local_8._1_3_,0x10);
  local_78[0] = (undefined4 *)0x448a28;
  FUN_004652d6();
  local_78[0] = (undefined4 *)0x3f19999a;
  FUN_00478a11(local_44,0x3e4ccccd,0x3e4ccccd,0x3f19999a);
  local_78[0] = (undefined4 *)0x0;
  FUN_0043f879(local_44);
  if (local_18 != (undefined4 *)0x0) {
    local_78[0] = (undefined4 *)0x448a72;
    FUN_00472fde();
  }
  local_78[0] = (undefined4 *)0xffffffff;
  FUN_004c1064();
  local_78[0] = local_14;
  FUN_00440ea9();
  local_78[0] = (undefined4 *)0xffffffff;
  FUN_004c1064();
  local_78[0] = (undefined4 *)0x70;
  iVar2 = FUN_005af82d();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_78[0] = (undefined4 *)0x448aaa;
    uVar3 = FUN_004494ac();
  }
  param_1[0x180] = uVar3;
  local_78[0] = (undefined4 *)0x448abc;
  FUN_00449410();
  local_78[0] = (undefined4 *)0x448acd;
  FUN_0043e015();
  if (local_24 != (undefined4 *)0x0) {
    piVar4 = *(int **)(*(int *)(param_1[0x184] + 0x7c) + 0x9c);
    param_2 = local_24;
    piVar1 = piVar4 + *(int *)(*(int *)(param_1[0x184] + 0x7c) + 0xa4);
    for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
      if (local_24 == (undefined4 *)*piVar4) goto LAB_00448b08;
    }
    local_78[0] = &param_2;
    FUN_00450daf();
  }
LAB_00448b08:
  local_78[0] = (undefined4 *)0x448b10;
  FUN_004f7994();
  return param_1;
}

