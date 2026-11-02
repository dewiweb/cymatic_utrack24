// rea decompile_all
// name: FUN_004c26bd
// address: 0x4c26bd
// body: available
// range: 0x4c26bd-0x4c283c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c26bd(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int *in_ECX;
  undefined1 *extraout_ECX;
  undefined1 auStack_a0 [4];
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 auStack_94 [4];
  undefined4 uStack_90;
  undefined1 *puStack_8c;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  code *pcStack_70;
  undefined1 *puStack_6c;
  undefined1 local_58 [60];
  byte local_1c;
  undefined1 *local_18;
  undefined1 local_14 [12];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x4c26c9;
  if ((*(byte *)((int)in_ECX + 0x6a) & 1) != 0) {
    puStack_6c = (undefined1 *)0x4c26d8;
    cVar1 = FUN_004c14d9();
    if (cVar1 != '\0') {
      return;
    }
  }
  puStack_6c = (undefined1 *)0x4c26e8;
  FUN_004c3456();
  local_8 = 0;
  if ((*(byte *)((int)in_ECX + 0x69) & 8) != 0) {
    pcStack_70 = (code *)0x4c26f8;
    FUN_004c1613();
  }
  puStack_6c = (undefined1 *)0x4c2700;
  uVar2 = FUN_004c4990();
  puStack_6c = (undefined1 *)(uVar2 & 0xff);
  pcStack_70 = (code *)0x4c270c;
  pcStack_70 = (code *)FUN_004c4965();
  local_18 = (undefined1 *)&puStack_78;
  puStack_7c = (undefined1 *)&puStack_78;
  uStack_80 = 0x4c271d;
  puStack_78 = extraout_ECX;
  puStack_74 = extraout_ECX;
  FUN_004c496c();
  local_18 = auStack_88;
  puStack_8c = auStack_88;
  local_8._0_1_ = 1;
  uStack_90 = 0x4c2738;
  FUN_004c497e();
  puStack_8c = (undefined1 *)0x0;
  uStack_90 = 0x4c2743;
  FUN_004c0902();
  local_18 = auStack_88;
  puStack_8c = (undefined1 *)0x4c2752;
  FUN_00467e6f();
  local_18 = auStack_94;
  local_98 = 0x4c2762;
  FUN_004d076d();
  local_9c = param_2;
  local_18 = auStack_a0;
  local_98 = param_3;
  FUN_004d076d();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004c6ba4();
  pcStack_70 = (code *)0x4c2798;
  puStack_6c = local_58;
  (**(code **)(*in_ECX + 0x18))();
  puStack_6c = (undefined1 *)0x4c27a0;
  cVar1 = FUN_004c3462();
  if (cVar1 == '\0') {
    puStack_6c = (undefined1 *)0x4c27ad;
    FUN_004c4e62();
    pcStack_70 = (code *)&LAB_004734ba;
    puStack_74 = local_14;
    puStack_78 = (undefined1 *)0x4c27c3;
    puStack_6c = local_58;
    FUN_004c519d();
    puStack_78 = (undefined1 *)0x4c27c8;
    FUN_004f8791();
    puStack_6c = local_58;
    puStack_74 = local_14;
    pcStack_70 = (code *)&LAB_004734ba;
    puStack_78 = (undefined1 *)0x4c27d8;
    FUN_004bf7fe();
    puStack_6c = (undefined1 *)0x4c27e3;
    cVar1 = FUN_004c3462();
    if ((cVar1 == '\0') && (1 < local_1c)) {
      puStack_6c = local_58;
      pcStack_70 = (code *)0x4c27f8;
      (**(code **)(*in_ECX + 0x1c))();
      puStack_6c = (undefined1 *)0x4c2800;
      cVar1 = FUN_004c3462();
      if (cVar1 == '\0') {
        puStack_6c = local_58;
        pcStack_70 = FUN_004f9d8b;
        puStack_74 = local_14;
        puStack_78 = (undefined1 *)0x4c281a;
        FUN_004f8791();
        puStack_6c = local_58;
        puStack_74 = local_14;
        pcStack_70 = FUN_004f9d8b;
        puStack_78 = (undefined1 *)0x4c282a;
        FUN_004bf7fe();
      }
    }
  }
  puStack_6c = (undefined1 *)0x4c2835;
  FUN_00474d0f();
  return;
}

