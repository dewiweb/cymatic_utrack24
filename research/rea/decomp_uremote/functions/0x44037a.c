// rea decompile_all
// name: FUN_0044037a
// address: 0x44037a
// body: available
// range: 0x44037a-0x440739 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0044037a(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int in_ECX;
  undefined1 *local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined4 *local_4c [5];
  undefined1 local_38 [32];
  undefined1 *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x440386;
  local_4c[0] = param_1;
  local_50 = (undefined1 *)0x440391;
  FUN_0043f5eb();
  local_8 = 0;
  *param_1 = PushButtonTransport::vftable;
  param_1[0x1c] = PushButtonTransport::vftable;
  param_1[0x5e] = in_ECX;
  local_4c[0] = (undefined4 *)0x4403b3;
  FUN_004652cd();
  local_8._0_1_ = 1;
  local_4c[0] = (undefined4 *)0x4403c2;
  FUN_0049f4b3();
  local_4c[0] = (undefined4 *)0x4403cd;
  FUN_0040954d();
  local_4c[0] = (undefined4 *)0x4403d8;
  FUN_004652cd();
  local_4c[0] = (undefined4 *)0x4403e0;
  FUN_0047888f();
  local_8._0_1_ = 5;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 5;
  uVar1 = 0;
  if (in_ECX == 1) {
    local_4c[0] = (undefined4 *)0x42080000;
    local_50 = (undefined1 *)0x40c00000;
    local_54 = (undefined1 *)0x0;
    local_58 = 0;
    local_5c = (undefined1 *)0x440674;
    local_8._0_1_ = uVar2;
    FUN_00478eaa();
    local_4c[0] = (undefined4 *)0x42080000;
    local_50 = (undefined1 *)0x42100000;
    local_54 = (undefined1 *)0x0;
    local_58 = 0x42100000;
    local_5c = (undefined1 *)0x41880000;
    local_60 = (undefined1 *)0x40c00000;
    FUN_00479368(local_38);
    local_4c[0] = (undefined4 *)0x42080000;
    local_50 = (undefined1 *)0x42840000;
    local_54 = (undefined1 *)0x0;
    local_58 = 0x42840000;
    local_5c = (undefined1 *)0x41880000;
    local_60 = (undefined1 *)0x42100000;
    FUN_00479368(local_38);
LAB_004406ec:
    local_4c[0] = (undefined4 *)0x3f051eb8;
    local_54 = (undefined1 *)0x3e75c28f;
  }
  else {
    if (in_ECX == 2) {
      local_4c[0] = (undefined4 *)0x42080000;
      local_50 = (undefined1 *)0x0;
      local_54 = (undefined1 *)0x41880000;
      local_58 = 0x41f00000;
      local_5c = (undefined1 *)0x0;
      local_60 = (undefined1 *)0x0;
      local_8._0_1_ = uVar2;
      FUN_00479368(local_38);
      local_4c[0] = (undefined4 *)0x42080000;
      local_50 = (undefined1 *)0x41f00000;
      local_54 = (undefined1 *)0x41880000;
      local_58 = 0x42700000;
      local_5c = (undefined1 *)0x0;
      local_60 = (undefined1 *)0x41f00000;
      FUN_00479368(local_38);
      local_50 = (undefined1 *)0x40c00000;
      uVar1 = 0x42700000;
LAB_004405a4:
      local_4c[0] = (undefined4 *)0x42080000;
      local_54 = (undefined1 *)0x0;
      local_5c = (undefined1 *)0x4405af;
      local_58 = uVar1;
      FUN_00478eaa();
      goto LAB_004406ec;
    }
    if (in_ECX == 3) {
      local_50 = (undefined1 *)0x42080000;
      local_8._0_1_ = uVar2;
      goto LAB_004405a4;
    }
    if (in_ECX == 4) {
      local_18 = (undefined1 *)local_4c;
      local_54 = (undefined1 *)local_4c;
      local_50 = (undefined1 *)0x3ecccccd;
      local_58 = 0x4404da;
      FUN_0044bfc5();
      local_58 = 0x4404e7;
      FUN_004764ae();
      local_18 = (undefined1 *)&local_50;
      local_54 = (undefined1 *)0x4404f9;
      FUN_004d076d();
      local_8._0_1_ = 7;
      local_54 = (undefined1 *)0x440502;
      iVar3 = FUN_0044bfc5();
      local_54 = (undefined1 *)(iVar3 + 0xa8);
      local_18 = (undefined1 *)&local_54;
      local_58 = 0x440515;
      FUN_004d076d();
      local_18 = (undefined1 *)&local_58;
      local_60 = (undefined1 *)&local_58;
      local_5c = (undefined1 *)0x3dcccccd;
      FUN_0047620f();
      local_18 = (undefined1 *)&local_5c;
      local_60 = (undefined1 *)0x44053f;
      FUN_004d076d();
      local_18 = (undefined1 *)&local_60;
      FUN_004d076d();
      local_8._0_1_ = 5;
      FUN_0043f8fb();
      local_4c[0] = (undefined4 *)0x42200000;
      local_50 = (undefined1 *)0x0;
      local_54 = (undefined1 *)0x41a00000;
      local_58 = 0x42200000;
      local_5c = (undefined1 *)0x0;
      local_60 = (undefined1 *)0x0;
      FUN_00479368(local_38);
    }
    else {
      if (in_ECX != 5) goto LAB_00440717;
      local_18 = (undefined1 *)local_4c;
      local_54 = (undefined1 *)local_4c;
      local_50 = (undefined1 *)0x3ecccccd;
      local_58 = 0x440426;
      FUN_004764ae();
      local_18 = (undefined1 *)&local_50;
      local_54 = (undefined1 *)0x440438;
      FUN_004d076d();
      local_18 = (undefined1 *)&local_54;
      local_58 = 0x440445;
      FUN_004d076d();
      local_18 = (undefined1 *)&local_58;
      local_60 = (undefined1 *)&local_58;
      local_5c = (undefined1 *)0x3dcccccd;
      FUN_0047620f();
      local_18 = (undefined1 *)&local_5c;
      local_60 = (undefined1 *)0x44046f;
      FUN_004d076d();
      local_18 = (undefined1 *)&local_60;
      FUN_004d076d();
      FUN_0043f8fb();
      local_4c[0] = (undefined4 *)0x42200000;
      local_5c = local_38;
      local_50 = (undefined1 *)0x42200000;
      local_54 = (undefined1 *)0x0;
      local_58 = 0;
      local_60 = (undefined1 *)0x4404a6;
      FUN_00479464();
    }
    local_4c[0] = (undefined4 *)0x3f19999a;
    local_54 = (undefined1 *)0x3e4ccccd;
  }
  local_50 = (undefined1 *)0x3f800000;
  local_5c = local_38;
  local_58 = 0;
  local_60 = (undefined1 *)0x440717;
  FUN_00478a11();
  uVar2 = (undefined1)local_8;
LAB_00440717:
  local_8._0_1_ = uVar2;
  local_50 = local_38;
  local_4c[0] = (undefined4 *)0x0;
  local_54 = (undefined1 *)0x440728;
  FUN_0043f879();
  local_4c[0] = (undefined4 *)0x440730;
  FUN_004f7994();
  return param_1;
}

