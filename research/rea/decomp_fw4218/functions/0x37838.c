// rea decompile_all
// name: FUN_00037838
// address: 0x37838
// body: available
// range: 0x37838-0x37b49 inclusive
// range: 0x37b4c-0x37b8b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00037838(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined2 local_86;
  undefined1 auStack_80 [16];
  undefined2 local_70;
  undefined1 local_6d;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [20];
  int *piStack_1c;
  int local_18;
  
  uVar2 = _DAT_00037c04;
  uVar3 = DAT_00037bfc;
  uVar6 = DAT_00037b8c;
  iVar9 = 0;
  piStack_1c = param_1;
  local_18 = param_2;
  if (param_2 == 0) {
    iVar9 = FUN_000366e0(DAT_00037b8c);
    if (iVar9 != 0) {
      FUN_0002f9bc(uVar6);
      FUN_0002f9fc(3,s_PTP_MSG__RX_pdelay_response_foll_00037b90);
    }
    return;
  }
  if (param_1 == (int *)0x0) {
    iVar9 = FUN_000366e0(DAT_00037b8c);
    if (iVar9 == 0) {
      return;
    }
    FUN_0002f9bc(uVar6);
    FUN_0002f9fc(3,s_PTP_MSG__RX_pdelay_response_foll_00037bc8);
    return;
  }
  cVar1 = *(char *)(*param_1 + 0x25a);
  if ((((cVar1 == '\x01') || (cVar1 == '\x03')) || (cVar1 == '\x02')) ||
     (*(char *)(*param_1 + 0x26d) != '\x02')) goto LAB_00037b82;
  if (*(uint *)(param_2 + 8) < 0x36) {
    iVar9 = FUN_000366e0(DAT_00037bfc);
    if (iVar9 == 0) goto LAB_00037b82;
    FUN_0002f9bc(uVar3);
    uVar3 = 4;
    uVar6 = DAT_00037c00;
  }
  else {
    iVar8 = *(int *)(param_2 + 0xc);
    iVar4 = param_1[0xc];
    if (iVar4 == 0) {
      iVar9 = FUN_000366e0(DAT_00037bfc);
      if (iVar9 != 0) {
        FUN_0002f9bc(uVar3);
        FUN_0002f9fc(4,DAT_00037c58);
      }
      goto LAB_00037b82;
    }
    iVar5 = FUN_000366e0(_DAT_00037c04);
    if (iVar5 != 0) {
      FUN_0002f9bc(uVar2);
      uVar6 = FUN_0003b6a2(*(undefined2 *)(iVar8 + 0x1e));
      FUN_0002f9fc(6,s__PTP_MSG__RX_pdelay_response_fol_00037c07 + 1,uVar6);
    }
    do {
      iVar5 = FUN_000366e0(uVar2);
      if (iVar5 != 0) {
        FUN_0002f9bc(uVar2);
        FUN_0002f9fc(6,&DAT_00037c44,*(undefined1 *)(iVar8 + iVar9 + 0x14));
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 8);
    iVar9 = FUN_000366e0(_DAT_00037c04);
    if (iVar9 != 0) {
      FUN_0002f9bc(_DAT_00037c04);
      FUN_0002f9fc(6,s_on_port__d_00037c48,*(undefined2 *)(*param_1 + 2));
    }
    iVar9 = *param_1;
    uVar7 = 0;
    do {
      if (*(char *)(iVar8 + uVar7 + 0x2c) != *(char *)(iVar9 + uVar7 + 0x250)) goto LAB_00037a50;
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < 8);
    if ((CONCAT11(*(undefined1 *)(iVar8 + 0x34),*(undefined1 *)(iVar8 + 0x35)) ==
         CONCAT11(*(undefined1 *)(iVar9 + 600),*(undefined1 *)(iVar9 + 0x259))) &&
       (uVar7 = FUN_0003b6a2(*(undefined2 *)(iVar8 + 0x1e)),
       uVar7 == *(ushort *)((int)param_1 + 0x4a))) {
      iVar9 = *param_1;
      uVar7 = 0;
      do {
        if (*(char *)(iVar4 + uVar7 + 0x2c) != *(char *)(iVar9 + uVar7 + 0x250)) goto LAB_00037a50;
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < 8);
      if ((CONCAT11(*(undefined1 *)(iVar4 + 0x34),*(undefined1 *)(iVar4 + 0x35)) !=
           CONCAT11(*(undefined1 *)(iVar9 + 600),*(undefined1 *)(iVar9 + 0x259))) ||
         (uVar7 = FUN_0003b6a2(*(undefined2 *)(iVar4 + 0x1e)),
         uVar7 != *(ushort *)((int)param_1 + 0x4a))) goto LAB_00037a50;
      FUN_0003cbd4(auStack_68);
      FUN_0003cbd4(&local_90);
      FUN_0003cbf8(auStack_68,iVar4,*(undefined2 *)(*param_1 + 2));
      local_90 = *(undefined1 *)(iVar4 + 0x2c);
      local_8f = *(undefined1 *)(iVar4 + 0x2d);
      local_8e = *(undefined1 *)(iVar4 + 0x2e);
      local_8d = *(undefined1 *)(iVar4 + 0x2f);
      local_8c = *(undefined1 *)(iVar4 + 0x30);
      local_8b = *(undefined1 *)(iVar4 + 0x31);
      local_8a = *(undefined1 *)(iVar4 + 0x32);
      local_89 = *(undefined1 *)(iVar4 + 0x33);
      local_88 = *(undefined1 *)(iVar4 + 0x34);
      local_87 = *(undefined1 *)(iVar4 + 0x35);
      local_86 = FUN_0003b6a2(*(undefined2 *)(iVar4 + 0x1e));
      local_70 = *(undefined2 *)(*param_1 + 2);
      local_6d = 2;
      *(undefined1 *)((int)param_1 + 0x42) = 1;
      *(undefined2 *)(param_1 + 8) = 0;
      iVar9 = FUN_0003ca58(&local_90);
      if ((iVar9 == 0) || (iVar9 = FUN_0003ca58(auStack_68), iVar9 == 0)) {
        uVar6 = DAT_00037b8c;
        iVar9 = FUN_000366e0(DAT_00037b8c);
        if (iVar9 == 0) goto LAB_00037b82;
        FUN_0002f9bc(uVar6);
        uVar3 = 3;
        uVar6 = DAT_00037c5c;
        goto LAB_00037b4c;
      }
      FUN_0003c28c(auStack_40,iVar8 + 0x22);
      FUN_0003c28c(auStack_30,iVar4 + 0x22);
      uVar10 = FUN_0003b672(*(undefined4 *)(iVar8 + 8),*(undefined4 *)(iVar8 + 0xc));
      uVar11 = FUN_0003b672(*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc));
      FUN_0003a290(*param_1 + 0x250,auStack_58,auStack_80,auStack_40,uVar11,auStack_40,auStack_30,
                   uVar10);
      uVar6 = _DAT_00037c04;
      iVar9 = FUN_000366e0(_DAT_00037c04);
      if (iVar9 == 0) goto LAB_00037b82;
      FUN_0002f9bc(uVar6);
      uVar6 = DAT_00037c54;
    }
    else {
LAB_00037a50:
      uVar6 = _DAT_00037c04;
      iVar9 = FUN_000366e0(_DAT_00037c04);
      if (iVar9 == 0) goto LAB_00037b82;
      FUN_0002f9bc(uVar6);
      uVar6 = DAT_00037c60;
    }
    uVar3 = 6;
  }
LAB_00037b4c:
  FUN_0002f9fc(uVar3,uVar6);
LAB_00037b82:
  FUN_000365f4(local_18);
  return;
}

