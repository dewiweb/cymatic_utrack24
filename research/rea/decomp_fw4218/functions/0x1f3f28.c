// rea decompile_all
// name: FUN_001f3f28
// address: 0x1f3f28
// body: available
// range: 0x1f3f28-0x1f4233 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f3f28(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  uVar6 = s_LW__Unable_to_refresh_LLQ____s___001f4238._0_4_;
  local_34 = (int *)(param_2 + 0x100);
  iVar9 = param_2 + 0xe0;
  local_38 = param_1 + 0xc0;
  iVar1 = param_2 + 0x220;
  iVar2 = param_2 + 0x130;
  local_1c = param_1;
  iStack_18 = param_2;
  if ((*local_34 != 0) &&
     (((*(char *)(param_2 + 0xff) == '\x03' && (2 < *(short *)(param_2 + 0x108))) ||
      (*(int *)(param_2 + 0x104) - *(int *)(param_1 + 0xdc) < 0)))) {
    uVar3 = FUN_00003e14(*(int *)s_LW__Unable_to_refresh_LLQ____s___001f4238._0_4_ * 900,
                         *(int *)s_LW__Unable_to_refresh_LLQ____s___001f4238._0_4_);
    uVar4 = FUN_00025930(*(undefined2 *)(iVar1 + 0x10));
    FUN_0002a1c6(0,s_LW__Unable_to_refresh_LLQ____s___001f4238 + 4,iVar2,uVar4,uVar3);
    *(undefined1 *)(param_2 + 0xff) = 4;
    iVar1 = *(int *)uVar6;
    *(int *)(param_2 + 0x10) = iVar1 * 3;
    *(int *)(param_2 + 0xc) = *(int *)(local_38 + 0x1c) + iVar1 * -3 + 1;
    goto LAB_001f422c;
  }
  local_54 = 1;
  local_52 = 2;
  local_50 = 0;
  if (*(int *)(param_2 + 0xf8) != 0) {
    FUN_001e5a70(auStack_30,iVar9,param_3,param_4,param_1 + DAT_001f4234);
    iVar5 = FUN_001eb818(auStack_2c);
    if (iVar5 == 0) {
      local_50 = *DAT_001f4278 << 8 | *DAT_001f4278 >> 8;
    }
    else {
      local_50 = (ushort)((*(uint *)(param_1 + 0x2788) & 0xff) << 8) |
                 (ushort)(*(uint *)(param_1 + 0x2788) >> 8) & 0xff;
    }
  }
  local_4c = local_34[3];
  local_48 = local_34[4];
  local_44 = *local_34;
  local_3c = local_1c + DAT_001f4280;
  FUN_000291f8(local_3c,*(undefined2 *)(param_2 + 0x12e),*DAT_001f427c);
  local_40 = FUN_001f2aa0(local_3c,local_1c + DAT_001f4284,param_2,&local_54);
  if (local_40 == 0) {
    uVar6 = FUN_00025930(*(undefined2 *)(iVar1 + 0x10));
    FUN_0002a1c6(0,s_sendLLQRefresh__putLLQ_failed____001f4294,iVar2,uVar6);
    return;
  }
  local_40 = FUN_001f2974(local_1c,local_3c,local_40,*(undefined4 *)(param_2 + 0x34));
  if (local_40 == 0) {
    uVar6 = FUN_00025930(*(undefined2 *)(iVar1 + 0x10));
    FUN_0002a1c6(0,s_sendLLQRefresh__putHINFO_failed___001f42bc,iVar2,uVar6);
    return;
  }
  if ((*(int *)(param_2 + 0x34) == 0) || (*(int *)(*(int *)(param_2 + 0x34) + 8) == 0)) {
LAB_001f40e0:
    if (*DAT_001f428c != 0) {
      uVar6 = FUN_00025930(*(undefined2 *)(iVar1 + 0x10));
      if ((*(int *)(param_2 + 0x34) == 0) || (*(int *)(*(int *)(param_2 + 0x34) + 8) == 0)) {
        puVar7 = &DAT_001f438c;
      }
      else {
        puVar7 = &DAT_001f4290;
      }
      FUN_0002a1c6(3,s_sendLLQRefresh__using_existing___001f4390,puVar7,iVar2,uVar6);
    }
    uVar6 = 0;
    if (*(int *)(param_2 + 0xf8) != 0) {
      uVar6 = *(undefined4 *)(*(int *)(param_2 + 0xf8) + 4);
    }
    iVar1 = FUN_001e5b84(local_1c,local_3c,local_40,*DAT_001f43c4,*(undefined4 *)(param_2 + 0xc0),
                         iVar9,*(undefined2 *)(param_2 + 0xf4),uVar6,0);
    if (iVar1 != 0) {
      if (*(int *)(param_2 + 0xf8) == 0) {
        pcVar8 = &DAT_001f43d0;
      }
      else {
        pcVar8 = s__TCP__001f43c8;
      }
      FUN_0002a1c6(0,s_sendLLQRefresh__mDNSSendDNSMessa_001f43d4,pcVar8);
      iVar1 = *(int *)(param_2 + 0xf8);
      if (iVar1 != 0) {
        FUN_001e5a72(*(undefined4 *)(iVar1 + 4));
        if (*(int *)(&DAT_00002324 + iVar1) != 0) {
          FUN_001e5828();
        }
        FUN_001e5828(iVar1);
        uVar6 = 0;
        goto LAB_001f4216;
      }
    }
  }
  else {
    iVar5 = local_1c + DAT_001f4288;
    *(ushort *)(iVar5 + 0x18) =
         CONCAT11(*(undefined1 *)(iVar5 + 0x18),*(undefined1 *)(iVar5 + 0x19));
    *(ushort *)(iVar5 + 0x1a) =
         CONCAT11(*(undefined1 *)(iVar5 + 0x1a),*(undefined1 *)(iVar5 + 0x1b));
    *(ushort *)(iVar5 + 0x1c) =
         CONCAT11(*(undefined1 *)(iVar5 + 0x1c),*(undefined1 *)(iVar5 + 0x1d));
    *(ushort *)(iVar5 + 0x1e) =
         CONCAT11(*(undefined1 *)(iVar5 + 0x1e),*(undefined1 *)(iVar5 + 0x1f));
    FUN_00024f7c(local_3c,&local_40,*(undefined4 *)(param_2 + 0x34),0);
    *(ushort *)(iVar5 + 0x18) =
         CONCAT11(*(undefined1 *)(iVar5 + 0x18),*(undefined1 *)(iVar5 + 0x19));
    *(ushort *)(iVar5 + 0x1a) =
         CONCAT11(*(undefined1 *)(iVar5 + 0x1a),*(undefined1 *)(iVar5 + 0x1b));
    *(ushort *)(iVar5 + 0x1c) =
         CONCAT11(*(undefined1 *)(iVar5 + 0x1c),*(undefined1 *)(iVar5 + 0x1d));
    *(ushort *)(iVar5 + 0x1e) =
         CONCAT11(*(undefined1 *)(iVar5 + 0x1e),*(undefined1 *)(iVar5 + 0x1f));
    if (local_40 == 0) {
      uVar6 = FUN_00025930(*(undefined2 *)(iVar1 + 0x10));
      FUN_0002a1c6(0,s_sendLLQRefresh__DNSDigest_SignMe_001f42e8,iVar2,uVar6);
      return;
    }
    if (((*(int *)(param_2 + 0x34) == 0) || (*(int *)(*(int *)(param_2 + 0x34) + 8) == 0)) ||
       (*(int *)(param_2 + 0xf8) != 0)) goto LAB_001f40e0;
    if (*DAT_001f428c != 0) {
      uVar6 = FUN_00025930(*(undefined2 *)(iVar1 + 0x10));
      FUN_0002a1c6(3,s_sendLLQRefresh_setting_up_new_TL_001f4320,iVar2,uVar6);
    }
    if (*(int *)(param_2 + 0xdc) == 0) {
      uVar6 = FUN_00025930(*(undefined2 *)(iVar1 + 0x10));
      FUN_0002a1c6(0,s_sendLLQRefresh_ERROR___q_>nta_is_001f4358,iVar2,uVar6);
      return;
    }
    uVar6 = FUN_0002a588(local_1c,local_3c,local_40,1,iVar9,*(undefined2 *)(param_2 + 0xf4),
                         *(int *)(param_2 + 0xdc) + DAT_001f4354,param_2,0);
LAB_001f4216:
    *(undefined4 *)(param_2 + 0xf8) = uVar6;
  }
  *(short *)(local_34 + 2) = (short)local_34[2] + 1;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(local_38 + 0x1c);
LAB_001f422c:
  FUN_00044250(local_1c,param_2);
  return;
}

