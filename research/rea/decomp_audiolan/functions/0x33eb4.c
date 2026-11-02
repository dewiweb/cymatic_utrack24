// rea decompile_all
// name: FUN_00033eb4
// address: 0x33eb4
// body: available
// range: 0x33eb4-0x342bb inclusive
// range: 0x34350-0x343ef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00033eb4(undefined4 param_1,int param_2)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  undefined1 *puVar5;
  undefined2 uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  ushort uVar16;
  int local_24;
  
  uVar10 = DAT_000342c0;
  if (param_2 == 0) {
    iVar7 = FUN_00030b90(DAT_000342c0);
    if (iVar7 == 0) {
      return 0;
    }
    FUN_00029e6c(uVar10);
    FUN_00029eac(3,s_PORT_ITF__PTP2_Message___msg____N_000342c4);
    return 0;
  }
  FUN_001ab224();
  iVar7 = FUN_0018a8b4(DAT_000342bc);
  puVar8 = (undefined1 *)FUN_0018a8c8();
  uVar10 = DAT_000342c0;
  if ((puVar8 == (undefined1 *)0x0) || (iVar7 == 0)) {
    iVar7 = FUN_00030b90(DAT_000342c0);
    if (iVar7 == 0) {
      return 0;
    }
    FUN_00029e6c(uVar10);
    FUN_00029eac(3,DAT_000342ec);
    return 0;
  }
  cVar1 = *(char *)(param_2 + 0x15);
  if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x03')) || (cVar1 == '\x02')) {
    FUN_001ac348();
  }
  iVar9 = FUN_00025b0c();
  if ((iVar9 == 0) && (*(char *)(param_2 + 0x15) == '\0')) {
    iVar9 = *(int *)(param_2 + 0xc);
    *(undefined1 *)(iVar9 + 0x28) = 0;
    *(undefined1 *)(iVar9 + 0x29) = 0;
    *(undefined1 *)(iVar9 + 0x2a) = 0;
    *(undefined1 *)(iVar9 + 0x2b) = 0;
    *(undefined1 *)(iVar9 + 0x22) = 0;
    *(undefined1 *)(iVar9 + 0x23) = 0;
    *(undefined1 *)(iVar9 + 0x24) = 0;
    *(undefined1 *)(iVar9 + 0x25) = 0;
    *(undefined1 *)(iVar9 + 0x26) = 0;
    *(undefined1 *)(iVar9 + 0x27) = 0;
  }
  uVar10 = DAT_000342c0;
  cVar1 = *(char *)(param_2 + 0x10);
  if (cVar1 == '\x01') {
    cVar1 = *(char *)(param_2 + 0x15);
    if (((((cVar1 == '\0') || (cVar1 == '\x01')) ||
         ((cVar1 == '\x02' || (uVar15 = DAT_000342f4, cVar1 == '\x03')))) &&
        ((uVar15 = DAT_000342f0, cVar1 == '\x02' || (cVar1 == '\x03')))) ||
       (uVar6 = (undefined2)uVar15, cVar1 == '\n')) {
      uVar6 = (undefined2)uVar15;
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
    uVar12 = *(uint *)(param_2 + 8);
    if ((uVar12 < 0x16) || (0x600 < uVar12 - 0x2a)) {
      iVar7 = FUN_00030b90(DAT_000342c0);
joined_r0x00034124:
      if (iVar7 == 0) {
        s_4___PORT_ITF__Could_not_send_dat_000343f4[0] =
             (char)s_4___PORT_ITF__Could_not_send_dat_000343f4._0_4_;
        s_4___PORT_ITF__Could_not_send_dat_000343f4[1] =
             SUB41(s_4___PORT_ITF__Could_not_send_dat_000343f4._0_4_,1);
        s_4___PORT_ITF__Could_not_send_dat_000343f4[2] =
             SUB41(s_4___PORT_ITF__Could_not_send_dat_000343f4._0_4_,2);
        s_4___PORT_ITF__Could_not_send_dat_000343f4[3] =
             SUB41(s_4___PORT_ITF__Could_not_send_dat_000343f4._0_4_,3);
        return 0;
      }
      FUN_00029e6c(uVar10);
      FUN_00029eac(3,s____PORT_ITF__PTP_message_at_of_r_000342f9 + 3);
      return 0;
    }
    uVar12 = uVar12 & 0xffff;
    FUN_00003628(puVar8,DAT_0003433c,0x2a);
    *(undefined2 *)(puVar8 + 0x22) = uVar6;
    *(undefined2 *)(puVar8 + 0x24) = uVar6;
    if ((((*(byte *)(param_2 + 0x16) & 1) != 0) && (*(uint *)(param_2 + 8) < 0x7c)) &&
       ((*(char *)(param_2 + 0x15) == '\0' || (*(char *)(param_2 + 0x15) == '\x01')))) {
      FUN_00003860(puVar8 + uVar12 + 0x2a,0x7c - uVar12);
      uVar12 = 0x7c;
    }
    uVar13 = uVar12 + 8 & 0xffff;
    uVar3 = (ushort)(uVar13 >> 8) | (ushort)(uVar13 << 8);
    *(ushort *)(puVar8 + 0x26) = uVar3;
    FUN_00003628(puVar8 + 0x2a,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8));
    iVar11 = DAT_00034324;
    puVar8[0x1a] = (char)((uint)*(undefined4 *)(DAT_00034324 + 8) >> 0x18);
    puVar8[0x1b] = (char)((uint)*(undefined4 *)(iVar11 + 8) >> 0x10);
    uVar10 = *(undefined4 *)(iVar11 + 8);
    puVar8[0x1c] = (char)((uint)uVar10 >> 8);
    puVar8[0x1d] = (char)uVar10;
    iVar11 = iVar9 * 4 + DAT_00034340;
    puVar8[0x1e] = *(undefined1 *)(DAT_00034340 + iVar9 * 4);
    puVar8[0x1f] = *(undefined1 *)(iVar11 + 1);
    puVar8[0x20] = *(undefined1 *)(iVar11 + 2);
    puVar8[0x21] = *(undefined1 *)(iVar11 + 3);
    *(ushort *)(puVar8 + 0x18) = uVar3;
    puVar8[0x16] = 0;
    *(undefined2 *)(puVar8 + 0x28) = 0;
    iVar11 = FUN_00025b0c();
    if ((iVar11 == 1) || (*(char *)(param_2 + 0x15) != '\0')) {
      uVar6 = FUN_0018d530(uVar12 + 0x14,puVar8 + 0x16);
      *(undefined2 *)(puVar8 + 0x28) = uVar6;
    }
    sVar2 = *DAT_00034344;
    sVar4 = sVar2 + 2;
    *DAT_00034344 = sVar4;
    *(ushort *)(puVar8 + 0x12) = (ushort)(sVar2 + 1U) >> 8 | sVar4 * 0x100;
    puVar8[0xf] = 0xe0;
    puVar8[0x16] = *DAT_00034348;
    uVar13 = uVar12 + 0x1c & 0xffff;
    *(ushort *)(puVar8 + 0x10) = (ushort)(uVar13 >> 8) | (ushort)(uVar13 << 8);
    *(undefined2 *)(puVar8 + 0x18) = 0;
    uVar6 = FUN_0018d530(0x14,puVar8 + 0xe);
    *(undefined2 *)(puVar8 + 0x18) = uVar6;
    iVar11 = iVar9 * 6 + DAT_00034334;
    *puVar8 = *(undefined1 *)(DAT_00034334 + iVar9 * 6);
    puVar8[1] = *(undefined1 *)(iVar11 + 1);
    puVar8[2] = *(undefined1 *)(iVar11 + 2);
    puVar8[3] = *(undefined1 *)(iVar11 + 3);
    puVar8[4] = *(undefined1 *)(iVar11 + 4);
    puVar8[5] = *(undefined1 *)(iVar11 + 5);
    iVar9 = DAT_00034324;
    puVar8[6] = *(undefined1 *)(DAT_00034324 + 1);
    puVar8[7] = *(undefined1 *)(iVar9 + 2);
    puVar8[8] = *(undefined1 *)(iVar9 + 3);
    puVar8[9] = *(undefined1 *)(iVar9 + 4);
    puVar8[10] = *(undefined1 *)(iVar9 + 5);
    puVar8[0xb] = *(undefined1 *)(iVar9 + 6);
    uVar12 = uVar12 + 0x2a;
    *(undefined2 *)(puVar8 + 0xc) = 8;
  }
  else if (cVar1 == '\x02') {
    cVar1 = *(char *)(param_2 + 0x15);
    if ((((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) ||
         (uVar10 = DAT_000342f4, cVar1 == '\x03')) &&
        ((uVar10 = DAT_000342f0, cVar1 == '\x02' || (cVar1 == '\x03')))) ||
       (uVar6 = (undefined2)uVar10, cVar1 == '\n')) {
      uVar6 = (undefined2)uVar10;
      local_24 = 1;
    }
    else {
      local_24 = 0;
      *(byte *)(_DAT_000342f8 + 1) = *(byte *)(param_2 + 0x17) & 0xf;
    }
    uVar10 = DAT_000342c0;
    uVar12 = *(uint *)(param_2 + 8);
    if ((uVar12 < 0x16) || (0x600 < uVar12 - 0x2a)) {
      iVar7 = FUN_00030b90(DAT_000342c0);
      goto joined_r0x00034124;
    }
    uVar12 = uVar12 & 0xffff;
    FUN_00003628(puVar8,DAT_00034320,0x3e);
    *(undefined2 *)(puVar8 + 0x36) = uVar6;
    *(undefined2 *)(puVar8 + 0x38) = uVar6;
    if ((((*(byte *)(param_2 + 0x16) & 1) != 0) && (*(uint *)(param_2 + 8) < 0x7c)) &&
       ((*(char *)(param_2 + 0x15) == '\0' || (*(char *)(param_2 + 0x15) == '\x01')))) {
      FUN_00003860(puVar8 + uVar12 + 0x3e,0x7c - uVar12);
      uVar12 = 0x7c;
    }
    uVar3 = (ushort)(uVar12 + 8 >> 8) & 0xff | (ushort)((uVar12 + 8 & 0xff) << 8);
    *(ushort *)(puVar8 + 0x3a) = uVar3;
    uVar16 = uVar3;
    FUN_00003628(puVar8 + 0x3e,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8));
    uVar13 = 0;
    do {
      iVar9 = DAT_00034324 + uVar13;
      puVar8[uVar13 + 0x16] = *(undefined1 *)(iVar9 + 0xc);
      *(undefined1 *)(DAT_00034328 + uVar13) = *(undefined1 *)(iVar9 + 0xc);
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar13 < 0x10);
    uVar13 = 0;
    iVar9 = local_24 * 0x10 + _DAT_000342f8;
    do {
      puVar8[uVar13 + 0x26] = *(undefined1 *)(iVar9 + uVar13);
      *(undefined1 *)(DAT_00034328 + uVar13 + 0x10) = *(undefined1 *)(iVar9 + uVar13);
      puVar5 = DAT_0003432c;
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar13 < 0x10);
    *DAT_0003432c = 0;
    puVar5[1] = 0;
    iVar9 = DAT_00034328;
    *(ushort *)(DAT_00034328 + 0x22) = uVar16;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0x11;
    *(undefined2 *)(iVar9 + 0x28) = uVar6;
    *(undefined2 *)(iVar9 + 0x2a) = uVar6;
    *(ushort *)(iVar9 + 0x2c) = uVar16;
    *(undefined2 *)(iVar9 + 0x2e) = 0;
    FUN_00003628(DAT_00034330,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8));
    uVar6 = FUN_0018d530(uVar12 + 0x30,DAT_00034328);
    *(undefined2 *)(puVar8 + 0x3c) = uVar6;
    *(ushort *)(puVar8 + 0x12) = uVar3;
    puVar8[0x14] = 0x11;
    puVar8[0x15] = 1;
    iVar9 = local_24 * 6 + DAT_00034334;
    uVar12 = uVar12 + 0x3e;
    *puVar8 = *(undefined1 *)(DAT_00034334 + local_24 * 6);
    puVar8[1] = *(undefined1 *)(iVar9 + 1);
    puVar8[2] = *(undefined1 *)(iVar9 + 2);
    puVar8[3] = *(undefined1 *)(iVar9 + 3);
    puVar8[4] = *(undefined1 *)(iVar9 + 4);
    puVar8[5] = *(undefined1 *)(iVar9 + 5);
    iVar9 = DAT_00034324;
    puVar8[6] = *(undefined1 *)(DAT_00034324 + 1);
    puVar8[7] = *(undefined1 *)(iVar9 + 2);
    puVar8[8] = *(undefined1 *)(iVar9 + 3);
    puVar8[9] = *(undefined1 *)(iVar9 + 4);
    puVar8[10] = *(undefined1 *)(iVar9 + 5);
    puVar8[0xb] = *(undefined1 *)(iVar9 + 6);
    *(short *)(puVar8 + 0xc) = (short)DAT_00034338;
  }
  else {
    if (cVar1 != '\x03') {
      return 0;
    }
    cVar1 = *(char *)(param_2 + 0x15);
    if (((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\n')) {
      iVar9 = 3;
    }
    else {
      iVar9 = 2;
    }
    iVar11 = iVar9 * 6 + DAT_00034334;
    *puVar8 = *(undefined1 *)(DAT_00034334 + iVar9 * 6);
    puVar8[1] = *(undefined1 *)(iVar11 + 1);
    puVar8[2] = *(undefined1 *)(iVar11 + 2);
    puVar8[3] = *(undefined1 *)(iVar11 + 3);
    puVar8[4] = *(undefined1 *)(iVar11 + 4);
    puVar8[5] = *(undefined1 *)(iVar11 + 5);
    iVar9 = DAT_00034324;
    puVar8[6] = *(undefined1 *)(DAT_00034324 + 1);
    puVar8[7] = *(undefined1 *)(iVar9 + 2);
    puVar8[8] = *(undefined1 *)(iVar9 + 3);
    puVar8[9] = *(undefined1 *)(iVar9 + 4);
    puVar8[10] = *(undefined1 *)(iVar9 + 5);
    puVar8[0xb] = *(undefined1 *)(iVar9 + 6);
    *(short *)(puVar8 + 0xc) = (short)DAT_0003434c;
    FUN_00003628(puVar8 + 0xe,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8));
    uVar12 = *(int *)(param_2 + 8) + 0xe;
  }
  uVar12 = uVar12 & 0xffff;
  if (*(short *)(param_2 + 0x12) != -1) {
    FUN_000036fc(puVar8 + 0x10,puVar8 + 0xc,uVar12 - 0xc);
    *(undefined2 *)(puVar8 + 0xc) = 0x81;
    uVar13 = (uint)*(ushort *)(param_2 + 0x12) + (uint)*(byte *)(param_2 + 0x14) * 0x2000 & 0xffff;
    uVar12 = uVar12 + 4 & 0xffff;
    *(ushort *)(puVar8 + 0xe) = (ushort)(uVar13 >> 8) | (ushort)(uVar13 << 8);
  }
  uVar10 = DAT_000343f0;
  iVar9 = 3;
  do {
    FUN_001ac2e0(iVar7,uVar12);
    iVar11 = FUN_001abc94(param_1,iVar7,1);
    if (iVar11 == 0) {
      return 1;
    }
    iVar14 = FUN_00030b90(uVar10);
    if (iVar14 != 0) {
      FUN_00029e6c(uVar10);
      FUN_00029eac(3,s_4___PORT_ITF__Could_not_send_dat_000343f4._0_4_,param_1,iVar9,iVar11);
    }
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar7 = FUN_00030b90(uVar10);
  if (iVar7 != 0) {
    FUN_00029e6c(uVar10);
    FUN_00029eac(3,s_4___PORT_ITF__Could_not_send_dat_000343f4 + 4,param_1);
  }
  return 0;
}

