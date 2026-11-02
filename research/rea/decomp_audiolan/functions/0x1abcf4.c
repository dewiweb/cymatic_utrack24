// rea decompile_all
// name: FUN_001abcf4
// address: 0x1abcf4
// body: available
// range: 0x1abcf4-0x1abfff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001abcf4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  char *pcVar8;
  int iVar9;
  undefined2 local_54;
  undefined2 local_52;
  ushort local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [16];
  int local_1c;
  int iStack_18;
  
  piVar1 = _DAT_001ac004;
  local_34 = (int *)(param_2 + 0x100);
  iVar9 = param_2 + 0xe0;
  local_38 = param_1 + 0xc0;
  iVar2 = param_2 + 0x220;
  iVar3 = param_2 + 0x130;
  local_1c = param_1;
  iStack_18 = param_2;
  if ((*local_34 != 0) &&
     (((*(char *)(param_2 + 0xff) == '\x03' && (2 < *(short *)(param_2 + 0x108))) ||
      (*(int *)(param_2 + 0x104) - *(int *)(param_1 + 0xdc) < 0)))) {
    uVar4 = FUN_00003a1c(*_DAT_001ac004 * 900,*_DAT_001ac004);
    uVar5 = FUN_000203e4(*(undefined2 *)(iVar2 + 0x10));
    FUN_00024642(0,s___Unable_to_refresh_LLQ____s___s_001ac006 + 2,iVar3,uVar5,uVar4);
    *(undefined1 *)(param_2 + 0xff) = 4;
    iVar2 = *piVar1;
    *(int *)(param_2 + 0x10) = iVar2 * 3;
    *(int *)(param_2 + 0xc) = *(int *)(local_38 + 0x1c) + iVar2 * -3 + 1;
    goto LAB_001abff8;
  }
  local_54 = 1;
  local_52 = 2;
  local_50 = 0;
  if (*(int *)(param_2 + 0xf8) != 0) {
    FUN_00195588(auStack_30,iVar9,param_3,param_4,param_1 + DAT_001ac000);
    iVar6 = FUN_0019b360(auStack_2c);
    if (iVar6 == 0) {
      local_50 = *DAT_001ac044 << 8 | *DAT_001ac044 >> 8;
    }
    else {
      local_50 = (ushort)((*(uint *)(param_1 + 0x2788) & 0xff) << 8) |
                 (ushort)(*(uint *)(param_1 + 0x2788) >> 8) & 0xff;
    }
  }
  local_4c = local_34[3];
  local_48 = local_34[4];
  local_44 = *local_34;
  local_3c = local_1c + DAT_001ac04c;
  FUN_0002369c(local_3c,*(undefined2 *)(param_2 + 0x12e),*DAT_001ac048);
  local_40 = FUN_001aa958(local_3c,local_1c + DAT_001ac050,param_2,&local_54);
  if (local_40 == 0) {
    uVar4 = FUN_000203e4(*(undefined2 *)(iVar2 + 0x10));
    FUN_00024642(0,s_sendLLQRefresh__putLLQ_failed____001ac060,iVar3,uVar4);
    return;
  }
  local_40 = FUN_001aa82c(local_1c,local_3c,local_40,*(undefined4 *)(param_2 + 0x34));
  if (local_40 == 0) {
    uVar4 = FUN_000203e4(*(undefined2 *)(iVar2 + 0x10));
    FUN_00024642(0,s_sendLLQRefresh__putHINFO_failed___001ac088,iVar3,uVar4);
    return;
  }
  if ((*(int *)(param_2 + 0x34) == 0) || (*(int *)(*(int *)(param_2 + 0x34) + 8) == 0)) {
LAB_001abeac:
    if (*DAT_001ac058 != 0) {
      uVar4 = FUN_000203e4(*(undefined2 *)(iVar2 + 0x10));
      if ((*(int *)(param_2 + 0x34) == 0) || (*(int *)(*(int *)(param_2 + 0x34) + 8) == 0)) {
        puVar7 = &DAT_001ac158;
      }
      else {
        puVar7 = &DAT_001ac05c;
      }
      FUN_00024642(3,s_sendLLQRefresh__using_existing___001ac15c,puVar7,iVar3,uVar4);
    }
    uVar4 = 0;
    if (*(int *)(param_2 + 0xf8) != 0) {
      uVar4 = *(undefined4 *)(*(int *)(param_2 + 0xf8) + 4);
    }
    iVar2 = FUN_0019569c(local_1c,local_3c,local_40,*DAT_001ac190,*(undefined4 *)(param_2 + 0xc0),
                         iVar9,*(undefined2 *)(param_2 + 0xf4),uVar4,0);
    if (iVar2 != 0) {
      if (*(int *)(param_2 + 0xf8) == 0) {
        pcVar8 = &DAT_001ac19c;
      }
      else {
        pcVar8 = s__TCP__001ac194;
      }
      FUN_00024642(0,s_sendLLQRefresh__mDNSSendDNSMessa_001ac1a0,pcVar8);
      iVar2 = *(int *)(param_2 + 0xf8);
      if (iVar2 != 0) {
        FUN_0019558a(*(undefined4 *)(iVar2 + 4));
        if (*(int *)(&DAT_00002324 + iVar2) != 0) {
          FUN_00195340();
        }
        FUN_00195340(iVar2);
        uVar4 = 0;
        goto LAB_001abfe2;
      }
    }
  }
  else {
    iVar6 = local_1c + DAT_001ac054;
    *(ushort *)(iVar6 + 0x18) =
         CONCAT11(*(undefined1 *)(iVar6 + 0x18),*(undefined1 *)(iVar6 + 0x19));
    *(ushort *)(iVar6 + 0x1a) =
         CONCAT11(*(undefined1 *)(iVar6 + 0x1a),*(undefined1 *)(iVar6 + 0x1b));
    *(ushort *)(iVar6 + 0x1c) =
         CONCAT11(*(undefined1 *)(iVar6 + 0x1c),*(undefined1 *)(iVar6 + 0x1d));
    *(ushort *)(iVar6 + 0x1e) =
         CONCAT11(*(undefined1 *)(iVar6 + 0x1e),*(undefined1 *)(iVar6 + 0x1f));
    FUN_0001f1ac(local_3c,&local_40,*(undefined4 *)(param_2 + 0x34),0);
    *(ushort *)(iVar6 + 0x18) =
         CONCAT11(*(undefined1 *)(iVar6 + 0x18),*(undefined1 *)(iVar6 + 0x19));
    *(ushort *)(iVar6 + 0x1a) =
         CONCAT11(*(undefined1 *)(iVar6 + 0x1a),*(undefined1 *)(iVar6 + 0x1b));
    *(ushort *)(iVar6 + 0x1c) =
         CONCAT11(*(undefined1 *)(iVar6 + 0x1c),*(undefined1 *)(iVar6 + 0x1d));
    *(ushort *)(iVar6 + 0x1e) =
         CONCAT11(*(undefined1 *)(iVar6 + 0x1e),*(undefined1 *)(iVar6 + 0x1f));
    if (local_40 == 0) {
      uVar4 = FUN_000203e4(*(undefined2 *)(iVar2 + 0x10));
      FUN_00024642(0,s_sendLLQRefresh__DNSDigest_SignMe_001ac0b4,iVar3,uVar4);
      return;
    }
    if (((*(int *)(param_2 + 0x34) == 0) || (*(int *)(*(int *)(param_2 + 0x34) + 8) == 0)) ||
       (*(int *)(param_2 + 0xf8) != 0)) goto LAB_001abeac;
    if (*DAT_001ac058 != 0) {
      uVar4 = FUN_000203e4(*(undefined2 *)(iVar2 + 0x10));
      FUN_00024642(3,s_sendLLQRefresh_setting_up_new_TL_001ac0ec,iVar3,uVar4);
    }
    if (*(int *)(param_2 + 0xdc) == 0) {
      uVar4 = FUN_000203e4(*(undefined2 *)(iVar2 + 0x10));
      FUN_00024642(0,s_sendLLQRefresh_ERROR___q_>nta_is_001ac124,iVar3,uVar4);
      return;
    }
    uVar4 = FUN_00024a04(local_1c,local_3c,local_40,1,iVar9,*(undefined2 *)(param_2 + 0xf4),
                         *(int *)(param_2 + 0xdc) + DAT_001ac120,param_2,0);
LAB_001abfe2:
    *(undefined4 *)(param_2 + 0xf8) = uVar4;
  }
  *(short *)(local_34 + 2) = (short)local_34[2] + 1;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(local_38 + 0x1c);
LAB_001abff8:
  FUN_0003f5f0(local_1c,param_2);
  return;
}

