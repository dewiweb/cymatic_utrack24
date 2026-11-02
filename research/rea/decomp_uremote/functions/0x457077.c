// rea decompile_all
// name: FUN_00457077
// address: 0x457077
// body: available
// range: 0x457077-0x4574df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00457077(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c [5];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x457083;
  local_4c[0] = (undefined4 *)0x45708d;
  FUN_004bfd7b();
  local_8 = 0;
  local_4c[0] = (undefined4 *)0x45709a;
  puVar1 = (undefined4 *)FUN_00474777();
  local_28 = param_1 + 0x21;
  *local_28 = PushButton::Listener::vftable;
  local_8._0_1_ = 2;
  *puVar1 = TimeBubble::vftable;
  *param_1 = TimeBubble::vftable;
  *local_28 = TimeBubble::vftable;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  local_4c[0] = param_1 + 0x34;
  local_50 = (undefined4 *)0x457112;
  local_18 = local_4c[0];
  FUN_0043f5eb();
  local_8._0_1_ = 3;
  local_4c[0] = (undefined4 *)0x457121;
  FUN_0049f4b3();
  local_4c[0] = (undefined4 *)0x45712c;
  FUN_004652cd();
  local_4c[0] = (undefined4 *)0x457137;
  FUN_004652cd();
  local_4c[0] = (undefined4 *)0x457142;
  FUN_004652cd();
  local_4c[0] = (undefined4 *)0x45714d;
  FUN_0047888f();
  local_4c[0] = (undefined4 *)0x45715a;
  FUN_0047888f();
  local_1c = param_1 + 0xa7;
  local_4c[0] = (undefined4 *)0x457168;
  FUN_0047888f();
  local_20 = param_1 + 0xaf;
  local_4c[0] = (undefined4 *)0x457176;
  FUN_0047888f();
  local_24 = param_1 + 0xb7;
  local_4c[0] = (undefined4 *)0x457184;
  FUN_0047888f();
  local_8._0_1_ = 0xc;
  local_4c[0] = (undefined4 *)0x3d4ccccd;
  param_1[0x96] = 0;
  local_50 = (undefined4 *)0x3f800000;
  local_54 = (undefined1 *)0x3f800000;
  local_58 = 0;
  local_5c = 0;
  puStack_60 = param_1 + 0x9f;
  FUN_0047932d();
  local_38 = 0x3e4ccccd;
  local_34 = 0x3f000000;
  local_30 = 0x3f4ccccd;
  local_2c = 0x3f000000;
  local_4c[0] = (undefined4 *)0x3a83126f;
  local_50 = (undefined4 *)0x4571e6;
  FUN_004799da();
  local_38 = 0x3ee66666;
  local_34 = 0x3f000000;
  local_30 = 0x3f0ccccd;
  local_2c = 0x3f000000;
  local_4c[0] = (undefined4 *)0x3dcccccd;
  local_50 = (undefined4 *)0x457216;
  FUN_004799da();
  local_4c[0] = (undefined4 *)0x3d4ccccd;
  local_50 = (undefined4 *)0x3f800000;
  local_54 = (undefined1 *)0x3f800000;
  local_58 = 0;
  local_5c = 0;
  puStack_60 = local_1c;
  FUN_0047932d();
  local_38 = 0x3e4ccccd;
  local_34 = 0x3e4ccccd;
  local_30 = 0x3e4ccccd;
  local_2c = 0x3f4ccccd;
  local_4c[0] = (undefined4 *)0x3dcccccd;
  local_50 = (undefined4 *)0x457269;
  FUN_004799da();
  local_38 = 0x3f000000;
  local_34 = 0x3f000000;
  local_30 = 0x3f000000;
  local_2c = 0x3f4ccccd;
  local_4c[0] = (undefined4 *)0x3a83126f;
  local_50 = (undefined4 *)0x457293;
  FUN_004799da();
  local_38 = 0x3f4ccccd;
  local_34 = _DAT_0095768c;
  local_30 = 0x3f4ccccd;
  local_2c = 0x3f4ccccd;
  local_4c[0] = (undefined4 *)0x3a83126f;
  local_50 = (undefined4 *)0x4572bd;
  FUN_004799da();
  local_4c[0] = (undefined4 *)0x3d4ccccd;
  local_50 = (undefined4 *)0x3f800000;
  local_54 = (undefined1 *)0x3f800000;
  local_58 = 0;
  local_5c = 0;
  puStack_60 = local_20;
  FUN_0047932d();
  local_38 = 0x3e4ccccd;
  local_34 = 0x3e4ccccd;
  local_30 = 0x3e4ccccd;
  local_2c = 0x3f4ccccd;
  local_4c[0] = (undefined4 *)0x3a83126f;
  local_50 = (undefined4 *)0x457310;
  FUN_004799da();
  local_38 = 0x3f000000;
  local_34 = 0x3f000000;
  local_30 = 0x3f000000;
  local_2c = 0x3f4ccccd;
  local_4c[0] = (undefined4 *)0x3dcccccd;
  local_50 = (undefined4 *)0x45733a;
  FUN_004799da();
  local_38 = 0x3f4ccccd;
  local_34 = _DAT_0095768c;
  local_30 = 0x3f4ccccd;
  local_2c = 0x3f4ccccd;
  local_4c[0] = (undefined4 *)0x3a83126f;
  local_50 = (undefined4 *)0x457364;
  FUN_004799da();
  local_4c[0] = (undefined4 *)0x3d4ccccd;
  local_50 = (undefined4 *)0x3f800000;
  local_54 = (undefined1 *)0x3f800000;
  local_58 = 0;
  local_5c = 0;
  puStack_60 = local_24;
  FUN_0047932d();
  local_38 = 0x3e4ccccd;
  local_34 = 0x3e4ccccd;
  local_30 = 0x3e4ccccd;
  local_2c = 0x3f4ccccd;
  local_4c[0] = (undefined4 *)0x3a83126f;
  local_50 = (undefined4 *)0x4573b7;
  FUN_004799da();
  local_38 = 0x3f000000;
  local_34 = 0x3f000000;
  local_30 = 0x3f000000;
  local_2c = 0x3f4ccccd;
  local_4c[0] = (undefined4 *)0x3a83126f;
  local_50 = (undefined4 *)0x4573e1;
  FUN_004799da();
  local_38 = 0x3f4ccccd;
  local_34 = _DAT_0095768c;
  local_30 = 0x3f4ccccd;
  local_2c = 0x3f4ccccd;
  local_4c[0] = (undefined4 *)0x3dcccccd;
  local_50 = (undefined4 *)0x45740b;
  FUN_004799da();
  local_4c[0] = (undefined4 *)0x3fc00000;
  local_54 = (undefined1 *)0x45741e;
  local_50 = param_1 + 0x9f;
  FUN_0043f879();
  local_24 = local_4c;
  local_54 = (undefined1 *)local_4c;
  local_50 = (undefined4 *)0x3ecccccd;
  local_58 = 0x457434;
  FUN_0044bfc5();
  local_58 = 0x457442;
  FUN_004764ae();
  local_24 = &local_50;
  local_54 = (undefined1 *)0x457454;
  FUN_004d076d();
  local_8._0_1_ = 0xe;
  local_54 = (undefined1 *)0x45745d;
  iVar2 = FUN_0044bfc5();
  local_54 = (undefined1 *)(iVar2 + 0xa4);
  local_24 = &local_54;
  local_58 = 0x45746c;
  FUN_004d076d();
  local_24 = &local_58;
  puStack_60 = &local_58;
  local_5c = 0x3f666666;
  FUN_00476599();
  local_24 = &local_5c;
  puStack_60 = (undefined4 *)0x457491;
  FUN_004d076d();
  local_8._0_1_ = 0x11;
  puStack_60 = (undefined4 *)0x45749a;
  iVar2 = FUN_0044bfc5();
  puStack_60 = (undefined4 *)(iVar2 + 0xa4);
  local_24 = &puStack_60;
  FUN_004d076d();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  FUN_0043f8fb();
  if (local_28 != (undefined4 *)0x0) {
    local_4c[0] = (undefined4 *)0x4574c9;
    FUN_00472fde();
  }
  local_4c[0] = (undefined4 *)0xffffffff;
  local_50 = (undefined4 *)0x4574d6;
  FUN_004c1064();
  return param_1;
}

