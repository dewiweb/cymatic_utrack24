// rea decompile_all
// name: FUN_0043c30c
// address: 0x43c30c
// body: available
// range: 0x43c30c-0x43c7eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_0043c30c(undefined4 *param_1,int **param_2)

{
  undefined8 uVar1;
  int *piStack_5c;
  int local_58 [4];
  undefined4 *local_48 [6];
  undefined1 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x43c318;
  local_48[0] = (undefined4 *)0x43c322;
  FUN_004bfd7b();
  local_14 = param_1 + 0x1c;
  local_8 = 0;
  *local_14 = PushButton::Listener::vftable;
  local_48[0] = (undefined4 *)0x43c33b;
  uVar1 = FUN_00474777();
  local_28 = param_1 + 0x22;
  *local_28 = juce::ListBoxModel::vftable;
  local_8._0_1_ = 3;
  *(undefined4 *)uVar1 = ConfirmDialog::vftable;
  param_1[0x23] = param_2;
  local_48[0] = param_1 + 0x24;
  *param_1 = ConfirmDialog::vftable;
  *(undefined4 *)((ulonglong)uVar1 >> 0x20) = ConfirmDialog::vftable;
  *local_28 = ConfirmDialog::vftable;
  local_58[3] = 0x43c37e;
  local_18 = local_48[0];
  FUN_0043f5eb();
  local_48[0] = param_1 + 0x82;
  local_8._0_1_ = 4;
  local_58[3] = 0x43c391;
  local_1c = local_48[0];
  FUN_0043f5eb();
  local_48[0] = param_1 + 0xe0;
  local_8._0_1_ = 5;
  local_58[3] = 0x43c3a4;
  local_20 = local_48[0];
  FUN_0043f5eb();
  local_48[0] = param_1 + 0x13e;
  local_8._0_1_ = 6;
  local_58[3] = 0x43c3b7;
  local_24 = local_48[0];
  FUN_0043f5eb();
  local_48[0] = param_1 + 0x19c;
  local_8._0_1_ = 7;
  local_58[3] = 0x43c3ca;
  local_2c = local_48[0];
  FUN_004e6f92();
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  local_8._0_1_ = 9;
  param_1[0x1d1] = 0;
  local_48[0] = (undefined4 *)0x43c404;
  FUN_0049f4b3();
  local_8._0_1_ = 10;
  local_48[0] = (undefined4 *)0x43c413;
  FUN_0049f4b3();
  local_48[0] = (undefined4 *)0x1;
  local_8._0_1_ = 0xb;
  local_58[3] = 0x43c420;
  FUN_004c06f2();
  param_2 = local_48;
  local_58[3] = 0x43c430;
  FUN_004d076d();
  local_8._0_1_ = 0xc;
  local_58[3] = 0x43c439;
  local_58[3] = FUN_0044bfc5();
  local_58[3] = local_58[3] + 0xa4;
  param_2 = (int **)(local_58 + 3);
  local_58[2] = 0x43c44d;
  FUN_004d076d();
  param_2 = (int **)(local_58 + 2);
  local_58[1] = 0x43c45d;
  FUN_004d076d();
  param_2 = (int **)(local_58 + 1);
  piStack_5c = local_58 + 1;
  local_8._0_1_ = 0xe;
  local_58[0] = 0x3ecccccd;
  FUN_0044bfc5();
  FUN_004764ae();
  local_8._0_1_ = 0xf;
  local_58[0] = 0x43c489;
  local_58[0] = FUN_0044bfc5();
  local_58[0] = local_58[0] + 0xa4;
  param_2 = (int **)local_58;
  piStack_5c = (int *)0x43c498;
  FUN_004d076d();
  param_2 = &piStack_5c;
  FUN_004d076d();
  local_8._0_1_ = 0xb;
  FUN_0043f8fb();
  local_48[0] = &param_2;
  local_58[3] = 0x43c4c4;
  FUN_0046537e();
  local_30 = (undefined1 *)local_48;
  local_8._0_1_ = 0x10;
  local_48[0] = (undefined4 *)0x24;
  local_58[3] = 0x43c4dc;
  FUN_0043f850();
  local_8 = CONCAT31(local_8._1_3_,0xb);
  local_48[0] = (undefined4 *)0x43c4e8;
  FUN_004652d6();
  if (local_14 != (undefined4 *)0x0) {
    local_48[0] = (undefined4 *)0x43c4fc;
    FUN_00472fde();
  }
  local_48[0] = (undefined4 *)0xffffffff;
  local_58[3] = 0x43c50b;
  FUN_004c103f();
  param_2 = local_48;
  local_58[3] = 0x43c51b;
  FUN_004d076d();
  local_8._0_1_ = 0x11;
  local_58[3] = 0x43c524;
  local_58[3] = FUN_0044bfc5();
  local_58[3] = local_58[3] + 0xa4;
  param_2 = (int **)(local_58 + 3);
  local_58[2] = 0x43c538;
  FUN_004d076d();
  param_2 = (int **)(local_58 + 2);
  local_58[1] = 0x43c548;
  FUN_004d076d();
  param_2 = (int **)(local_58 + 1);
  piStack_5c = local_58 + 1;
  local_8._0_1_ = 0x13;
  local_58[0] = 0x3ecccccd;
  FUN_0044bfc5();
  FUN_004764ae();
  local_8._0_1_ = 0x14;
  local_58[0] = 0x43c574;
  local_58[0] = FUN_0044bfc5();
  local_58[0] = local_58[0] + 0xa4;
  param_2 = (int **)local_58;
  piStack_5c = (int *)0x43c583;
  FUN_004d076d();
  param_2 = &piStack_5c;
  FUN_004d076d();
  local_8._0_1_ = 0xb;
  FUN_0043f8fb();
  local_48[0] = &param_2;
  local_58[3] = 0x43c5af;
  FUN_0046537e();
  local_30 = (undefined1 *)local_48;
  local_8._0_1_ = 0x15;
  local_48[0] = (undefined4 *)0x24;
  local_58[3] = 0x43c5c7;
  FUN_0043f850();
  local_8 = CONCAT31(local_8._1_3_,0xb);
  local_48[0] = (undefined4 *)0x43c5d3;
  FUN_004652d6();
  if (local_14 != (undefined4 *)0x0) {
    local_48[0] = (undefined4 *)0x43c5e7;
    FUN_00472fde();
  }
  local_48[0] = (undefined4 *)0xffffffff;
  local_58[3] = 0x43c5f6;
  FUN_004c103f();
  param_2 = local_48;
  local_58[3] = 0x43c606;
  FUN_004d076d();
  local_8._0_1_ = 0x16;
  local_58[3] = 0x43c60f;
  local_58[3] = FUN_0044bfc5();
  local_58[3] = local_58[3] + 0xa4;
  param_2 = (int **)(local_58 + 3);
  local_58[2] = 0x43c623;
  FUN_004d076d();
  param_2 = (int **)(local_58 + 2);
  local_58[1] = 0x43c633;
  FUN_004d076d();
  param_2 = (int **)(local_58 + 1);
  piStack_5c = local_58 + 1;
  local_8._0_1_ = 0x18;
  local_58[0] = 0x3ecccccd;
  FUN_0044bfc5();
  FUN_004764ae();
  local_8._0_1_ = 0x19;
  local_58[0] = 0x43c65f;
  local_58[0] = FUN_0044bfc5();
  local_58[0] = local_58[0] + 0xa4;
  param_2 = (int **)local_58;
  piStack_5c = (int *)0x43c66e;
  FUN_004d076d();
  param_2 = &piStack_5c;
  FUN_004d076d();
  local_8._0_1_ = 0xb;
  FUN_0043f8fb();
  local_48[0] = &param_2;
  local_58[3] = 0x43c69a;
  FUN_0046537e();
  local_30 = (undefined1 *)local_48;
  local_8._0_1_ = 0x1a;
  local_48[0] = (undefined4 *)0x24;
  local_58[3] = 0x43c6b2;
  FUN_0043f850();
  local_8 = CONCAT31(local_8._1_3_,0xb);
  local_48[0] = (undefined4 *)0x43c6be;
  FUN_004652d6();
  if (local_14 != (undefined4 *)0x0) {
    local_48[0] = (undefined4 *)0x43c6d2;
    FUN_00472fde();
  }
  local_48[0] = local_20;
  local_58[3] = 0x43c6e2;
  FUN_004c0fb8();
  param_2 = local_48;
  local_58[3] = 0x43c6f2;
  FUN_004d076d();
  local_8._0_1_ = 0x1b;
  local_58[3] = 0x43c6fb;
  local_58[3] = FUN_0044bfc5();
  local_58[3] = local_58[3] + 0xa4;
  param_2 = (int **)(local_58 + 3);
  local_58[2] = 0x43c70f;
  FUN_004d076d();
  param_2 = (int **)(local_58 + 2);
  local_58[1] = 0x43c71f;
  FUN_004d076d();
  param_2 = (int **)(local_58 + 1);
  piStack_5c = local_58 + 1;
  local_8._0_1_ = 0x1d;
  local_58[0] = 0x3ecccccd;
  FUN_0044bfc5();
  FUN_004764ae();
  local_8._0_1_ = 0x1e;
  local_58[0] = 0x43c74b;
  local_58[0] = FUN_0044bfc5();
  local_58[0] = local_58[0] + 0xa4;
  param_2 = (int **)local_58;
  piStack_5c = (int *)0x43c75a;
  FUN_004d076d();
  param_2 = &piStack_5c;
  FUN_004d076d();
  local_8._0_1_ = 0xb;
  FUN_0043f8fb();
  local_48[0] = &param_2;
  local_58[3] = 0x43c786;
  FUN_0046537e();
  local_30 = (undefined1 *)local_48;
  local_8._0_1_ = 0x1f;
  local_48[0] = (undefined4 *)0x24;
  local_58[3] = 0x43c79e;
  FUN_0043f850();
  local_8 = CONCAT31(local_8._1_3_,0xb);
  local_48[0] = (undefined4 *)0x43c7aa;
  FUN_004652d6();
  if (local_14 != (undefined4 *)0x0) {
    local_48[0] = (undefined4 *)0x43c7be;
    FUN_00472fde();
  }
  local_48[0] = local_24;
  local_58[3] = 0x43c7ce;
  FUN_004c0fb8();
  local_48[0] = (undefined4 *)0x43c7db;
  FUN_004e715c();
  local_48[0] = (undefined4 *)0xffffffff;
  local_58[3] = 0x43c7e2;
  FUN_004c103f();
  return param_1;
}

