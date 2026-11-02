// rea decompile_all
// name: FUN_000371f4
// address: 0x371f4
// body: available
// range: 0x371f4-0x37513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000371f4(int *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [19];
  undefined1 local_35;
  undefined1 auStack_30 [20];
  int *piStack_1c;
  int local_18;
  
  uVar1 = _DAT_000375a8;
  uVar9 = DAT_00037558;
  uVar6 = DAT_00037514;
  piStack_1c = param_1;
  local_18 = param_2;
  if (param_2 == 0) {
    iVar3 = FUN_000366e0(DAT_00037558);
    if (iVar3 != 0) {
      FUN_0002f9bc(uVar9);
      FUN_0002f9fc(3,s_PTP_MSG__RX_follow_up_msg_ptr____0003755c);
    }
    return;
  }
  if (param_1 == (int *)0x0) {
    iVar3 = FUN_000366e0(DAT_00037558);
    if (iVar3 == 0) {
      return;
    }
    FUN_0002f9bc(uVar9);
    FUN_0002f9fc(3,s_PTP_MSG__RX_follow_up_me____NULL_00037584);
    return;
  }
  uVar9 = *(undefined4 *)(*param_1 + 0x27c);
  uVar2 = (uint)*(byte *)(*param_1 + 0x25a);
  if (((uVar2 == 1) || (uVar2 == 3)) || (uVar2 == 2)) {
LAB_00037388:
    FUN_000365f4(local_18);
    return;
  }
  if (*(uint *)(param_2 + 8) < 0x2c) {
    iVar3 = FUN_000366e0(DAT_00037514);
    if (iVar3 != 0) {
      FUN_0002f9bc(uVar6);
      FUN_0002f9fc(4,s_PTP_MSG__Received_follow_up_disc_00037518);
    }
    goto LAB_00037388;
  }
  iVar3 = *(int *)(param_2 + 0xc);
  if ((*(byte *)(iVar3 + 6) & 1) != 0) goto LAB_00037388;
  iVar4 = param_1[4];
  if (iVar4 == 0) {
    iVar3 = FUN_000366e0(DAT_00037514);
    if (iVar3 != 0) {
      FUN_0002f9bc(uVar6);
      FUN_0002f9fc(4,s_PTP_MSG__RX_follow_up__last_rece_000375ec);
    }
    goto LAB_00037388;
  }
  iVar5 = FUN_000366e0(_DAT_000375a8);
  if (iVar5 != 0) {
    FUN_0002f9bc(uVar1);
    uVar6 = FUN_0003b6a2(*(undefined2 *)(iVar3 + 0x1e));
    FUN_0002f9fc(6,s__PTP_MSG__RX_follow_up_with_Seq__000375ab + 1,uVar6);
  }
  uVar11 = 0;
  do {
    iVar5 = FUN_000366e0(uVar1);
    if (iVar5 != 0) {
      FUN_0002f9bc(uVar1);
      FUN_0002f9fc(6,&DAT_000375dc,*(undefined1 *)(iVar3 + uVar11 + 0x14));
    }
    uVar11 = uVar11 + 1 & 0xffff;
  } while (uVar11 < 8);
  iVar5 = FUN_000366e0(_DAT_000375a8);
  if (iVar5 != 0) {
    FUN_0002f9bc(_DAT_000375a8);
    FUN_0002f9fc(6,s_on_port__d_000375e0,*(undefined2 *)(*param_1 + 2));
  }
  if (((uVar2 != 9) && (uVar2 != 8)) || (iVar5 = FUN_0003676c(iVar3,uVar9), iVar5 == 0))
  goto LAB_00037504;
  iVar5 = iVar4 + 0x10;
  iVar7 = FUN_0003b6a2(*(undefined2 *)(iVar4 + 0x1e));
  iVar8 = FUN_0003b6a2(*(undefined2 *)(iVar3 + 0x1e));
  uVar6 = DAT_00037558;
  if (iVar7 != iVar8) {
    iVar4 = FUN_000366e0(DAT_00037558);
    if (iVar4 != 0) {
      FUN_0002f9bc(uVar6);
      FUN_0002f9fc(3,_DAT_00037620,*(undefined2 *)(iVar5 + 0xe),*(undefined2 *)(iVar3 + 0x1e));
    }
    goto LAB_00037388;
  }
  *(undefined1 *)((int)param_1 + 0x22) = 1;
  uVar9 = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  FUN_0003cbd4(auStack_58);
  FUN_0003cbf8(auStack_58,iVar3,*(undefined2 *)(*param_1 + 2));
  local_35 = 0;
  iVar5 = FUN_0003ca58(auStack_58);
  uVar6 = DAT_00037558;
  if (iVar5 == 0) {
    iVar3 = FUN_000366e0(DAT_00037558);
    if (iVar3 == 0) goto LAB_00037504;
    FUN_0002f9bc(uVar6);
    uVar6 = 3;
    pcVar10 = DAT_00037658;
  }
  else {
    FUN_0003c28c(auStack_30,iVar3 + 0x22);
    iVar5 = *param_1;
    if (*(char *)(iVar5 + 0x26d) == '\x01') {
      uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x270) + 0x14);
      uVar9 = *(undefined4 *)(*(int *)(iVar5 + 0x270) + 0x10);
    }
    else if (*(char *)(iVar5 + 0x26d) == '\x02') {
      uVar9 = *(undefined4 *)(iVar5 + 0x260);
      uVar6 = *(undefined4 *)(iVar5 + 0x264);
    }
    else {
      uVar6 = 0;
    }
    uVar12 = FUN_0003b672(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
    uVar13 = FUN_0003b672(*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc),
                          (uint)*(byte *)(iVar4 + 0xf) << 0x18,(uint)*(byte *)(iVar4 + 0xe) << 0x10,
                          uVar12);
    FUN_0002bf5c(*(undefined4 *)(*param_1 + 0x270),auStack_48,auStack_30,
                 (int)((ulonglong)uVar12 >> 0x20),uVar9,uVar6,uVar13,uVar12,
                 (int)*(char *)(iVar4 + 0x21),param_1[7]);
    iVar3 = *param_1;
    if ((*(char *)(iVar3 + 0x26d) == '\x01') && (*(char *)(iVar3 + 0x340) == '\0')) {
      uVar6 = FUN_0003a02a(iVar3 + 0x250);
      FUN_0003c83c(*param_1 + 0x340,uVar6);
      FUN_0003c808(*param_1 + 0x340);
    }
    uVar6 = _DAT_000375a8;
    iVar3 = FUN_000366e0(_DAT_000375a8);
    if (iVar3 == 0) goto LAB_00037504;
    FUN_0002f9bc(uVar6);
    uVar6 = 6;
    pcVar10 = s___PTP_MSG__RX_follow_up__>_Synch_00037622 + 2;
  }
  FUN_0002f9fc(uVar6,pcVar10);
LAB_00037504:
  FUN_000365f4(param_1 + 1);
  FUN_000365f4(local_18);
  return;
}

