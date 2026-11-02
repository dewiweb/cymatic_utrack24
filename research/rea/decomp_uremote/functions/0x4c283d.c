// rea decompile_all
// name: FUN_004c283d
// address: 0x4c283d
// body: available
// range: 0x4c283d-0x4c2957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c283d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined1 *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 auStack_a8 [4];
  undefined4 local_a4;
  undefined1 *local_a0;
  undefined1 auStack_9c [4];
  undefined4 uStack_98;
  undefined1 *puStack_94;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined1 *puStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined1 local_60 [68];
  undefined1 *local_1c;
  undefined1 local_18 [16];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x4c2849;
  puStack_74 = (undefined1 *)0x4c2852;
  cVar1 = FUN_004c14d9();
  if (cVar1 == '\0') {
    puStack_74 = (undefined1 *)0x4c2862;
    FUN_004c3456();
    local_8 = 0;
    puStack_74 = (undefined1 *)0x4c286e;
    uVar2 = FUN_004c4990();
    puStack_74 = (undefined1 *)(uVar2 & 0xff);
    puStack_7c = (undefined1 *)0x4c287b;
    puStack_78 = extraout_ECX;
    uVar3 = FUN_004c4965();
    puStack_7c = puStack_78;
    local_1c = (undefined1 *)&puStack_80;
    puStack_84 = (undefined1 *)&puStack_80;
    puStack_80 = puStack_78;
    uStack_88 = 0x4c288d;
    puStack_78 = (undefined1 *)uVar3;
    FUN_004c496c();
    local_1c = auStack_90;
    puStack_94 = auStack_90;
    local_8._0_1_ = 1;
    uStack_98 = 0x4c28a8;
    puStack_84 = (undefined1 *)extraout_ECX_00;
    FUN_004c497e();
    puStack_94 = (undefined1 *)0x0;
    uStack_98 = 0x4c28b3;
    FUN_004c0902();
    local_1c = auStack_90;
    puStack_94 = (undefined1 *)0x4c28c2;
    FUN_00467e6f();
    local_1c = auStack_9c;
    local_a0 = auStack_9c;
    local_a4 = 0x4c28d3;
    FUN_004c4937();
    local_a4 = param_2;
    local_1c = auStack_a8;
    local_a0 = (undefined1 *)param_3;
    FUN_004d076d();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004c6ba4();
    puStack_78 = (undefined1 *)0x4c2909;
    puStack_74 = local_60;
    (**(code **)(*in_ECX + 0x14))();
    puStack_74 = (undefined1 *)0x4c2911;
    cVar1 = FUN_004c3462();
    if (cVar1 == '\0') {
      puStack_78 = &LAB_004f9b63;
      puStack_7c = local_18;
      puStack_84 = (undefined1 *)0x4c2928;
      puStack_74 = local_60;
      FUN_004c4e62();
      puStack_84 = (undefined1 *)0x4c292d;
      FUN_004c519d();
      puStack_80 = (undefined1 *)0x4c2935;
      FUN_004f8791();
      puStack_74 = local_60;
      puStack_7c = local_18;
      puStack_78 = &LAB_004f9b63;
      puStack_80 = (undefined1 *)0x4c2945;
      FUN_004bf7fe();
    }
    puStack_74 = (undefined1 *)0x4c2950;
    FUN_00474d0f();
  }
  return;
}

