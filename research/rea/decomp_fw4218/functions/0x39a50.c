// rea decompile_all
// name: FUN_00039a50
// address: 0x39a50
// body: available
// range: 0x39a50-0x39e57 inclusive
// range: 0x39eec-0x39f8b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00039a50(undefined4 param_1,int param_2)

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
  
  uVar10 = DAT_00039e5c;
  if (param_2 == 0) {
    iVar7 = FUN_000366e0(DAT_00039e5c);
    if (iVar7 == 0) {
      return 0;
    }
    FUN_0002f9bc(uVar10);
    FUN_0002f9fc(3,s_PORT_ITF__PTP2_Message___msg____N_00039e60);
    return 0;
  }
  FUN_0003b30c();
  iVar7 = FUN_001db294(DAT_00039e58);
  puVar8 = (undefined1 *)FUN_001db2a8();
  uVar10 = DAT_00039e5c;
  if ((puVar8 == (undefined1 *)0x0) || (iVar7 == 0)) {
    iVar7 = FUN_000366e0(DAT_00039e5c);
    if (iVar7 == 0) {
      return 0;
    }
    FUN_0002f9bc(uVar10);
    FUN_0002f9fc(3,DAT_00039e88);
    return 0;
  }
  cVar1 = *(char *)(param_2 + 0x15);
  if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x03')) || (cVar1 == '\x02')) {
    FUN_0003b524();
  }
  iVar9 = FUN_0002b67c();
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
  uVar10 = DAT_00039e5c;
  cVar1 = *(char *)(param_2 + 0x10);
  if (cVar1 == '\x01') {
    cVar1 = *(char *)(param_2 + 0x15);
    if (((((cVar1 == '\0') || (cVar1 == '\x01')) ||
         ((cVar1 == '\x02' || (uVar15 = DAT_00039e90, cVar1 == '\x03')))) &&
        ((uVar15 = DAT_00039e8c, cVar1 == '\x02' || (cVar1 == '\x03')))) ||
       (uVar6 = (undefined2)uVar15, cVar1 == '\n')) {
      uVar6 = (undefined2)uVar15;
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
    uVar12 = *(uint *)(param_2 + 8);
    if ((uVar12 < 0x16) || (0x600 < uVar12 - 0x2a)) {
      iVar7 = FUN_000366e0(DAT_00039e5c);
joined_r0x00039cc0:
      if (iVar7 == 0) {
        return 0;
      }
      FUN_0002f9bc(uVar10);
      FUN_0002f9fc(3,s_D__PORT_ITF__PTP_message_at_of_r_00039e95 + 3);
      return 0;
    }
    uVar12 = uVar12 & 0xffff;
    FUN_000039e0(puVar8,DAT_00039ed8,0x2a);
    *(undefined2 *)(puVar8 + 0x22) = uVar6;
    *(undefined2 *)(puVar8 + 0x24) = uVar6;
    if ((((*(byte *)(param_2 + 0x16) & 1) != 0) && (*(uint *)(param_2 + 8) < 0x7c)) &&
       ((*(char *)(param_2 + 0x15) == '\0' || (*(char *)(param_2 + 0x15) == '\x01')))) {
      FUN_00003c18(puVar8 + uVar12 + 0x2a,0x7c - uVar12);
      uVar12 = 0x7c;
    }
    uVar13 = uVar12 + 8 & 0xffff;
    uVar3 = (ushort)(uVar13 >> 8) | (ushort)(uVar13 << 8);
    *(ushort *)(puVar8 + 0x26) = uVar3;
    FUN_000039e0(puVar8 + 0x2a,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8));
    iVar11 = DAT_00039ec0;
    puVar8[0x1a] = (char)((uint)*(undefined4 *)(DAT_00039ec0 + 8) >> 0x18);
    puVar8[0x1b] = (char)((uint)*(undefined4 *)(iVar11 + 8) >> 0x10);
    uVar10 = *(undefined4 *)(iVar11 + 8);
    puVar8[0x1c] = (char)((uint)uVar10 >> 8);
    puVar8[0x1d] = (char)uVar10;
    iVar11 = iVar9 * 4 + DAT_00039edc;
    puVar8[0x1e] = *(undefined1 *)(DAT_00039edc + iVar9 * 4);
    puVar8[0x1f] = *(undefined1 *)(iVar11 + 1);
    puVar8[0x20] = *(undefined1 *)(iVar11 + 2);
    puVar8[0x21] = *(undefined1 *)(iVar11 + 3);
    *(ushort *)(puVar8 + 0x18) = uVar3;
    puVar8[0x16] = 0;
    *(undefined2 *)(puVar8 + 0x28) = 0;
    iVar11 = FUN_0002b67c();
    if ((iVar11 == 1) || (*(char *)(param_2 + 0x15) != '\0')) {
      uVar6 = FUN_001de0c4(uVar12 + 0x14,puVar8 + 0x16);
      *(undefined2 *)(puVar8 + 0x28) = uVar6;
    }
    sVar2 = *DAT_00039ee0;
    sVar4 = sVar2 + 2;
    *DAT_00039ee0 = sVar4;
    *(ushort *)(puVar8 + 0x12) = (ushort)(sVar2 + 1U) >> 8 | sVar4 * 0x100;
    puVar8[0xf] = 0xe0;
    puVar8[0x16] = *DAT_00039ee4;
    uVar13 = uVar12 + 0x1c & 0xffff;
    *(ushort *)(puVar8 + 0x10) = (ushort)(uVar13 >> 8) | (ushort)(uVar13 << 8);
    *(undefined2 *)(puVar8 + 0x18) = 0;
    uVar6 = FUN_001de0c4(0x14,puVar8 + 0xe);
    *(undefined2 *)(puVar8 + 0x18) = uVar6;
    iVar11 = iVar9 * 6 + DAT_00039ed0;
    *puVar8 = *(undefined1 *)(DAT_00039ed0 + iVar9 * 6);
    puVar8[1] = *(undefined1 *)(iVar11 + 1);
    puVar8[2] = *(undefined1 *)(iVar11 + 2);
    puVar8[3] = *(undefined1 *)(iVar11 + 3);
    puVar8[4] = *(undefined1 *)(iVar11 + 4);
    puVar8[5] = *(undefined1 *)(iVar11 + 5);
    iVar9 = DAT_00039ec0;
    puVar8[6] = *(undefined1 *)(DAT_00039ec0 + 1);
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
         (uVar10 = DAT_00039e90, cVar1 == '\x03')) &&
        ((uVar10 = DAT_00039e8c, cVar1 == '\x02' || (cVar1 == '\x03')))) ||
       (uVar6 = (undefined2)uVar10, cVar1 == '\n')) {
      uVar6 = (undefined2)uVar10;
      local_24 = 1;
    }
    else {
      local_24 = 0;
      *(byte *)(_DAT_00039e94 + 1) = *(byte *)(param_2 + 0x17) & 0xf;
    }
    uVar10 = DAT_00039e5c;
    uVar12 = *(uint *)(param_2 + 8);
    if ((uVar12 < 0x16) || (0x600 < uVar12 - 0x2a)) {
      iVar7 = FUN_000366e0(DAT_00039e5c);
      goto joined_r0x00039cc0;
    }
    uVar12 = uVar12 & 0xffff;
    FUN_000039e0(puVar8,DAT_00039ebc,0x3e);
    *(undefined2 *)(puVar8 + 0x36) = uVar6;
    *(undefined2 *)(puVar8 + 0x38) = uVar6;
    if ((((*(byte *)(param_2 + 0x16) & 1) != 0) && (*(uint *)(param_2 + 8) < 0x7c)) &&
       ((*(char *)(param_2 + 0x15) == '\0' || (*(char *)(param_2 + 0x15) == '\x01')))) {
      FUN_00003c18(puVar8 + uVar12 + 0x3e,0x7c - uVar12);
      uVar12 = 0x7c;
    }
    uVar3 = (ushort)(uVar12 + 8 >> 8) & 0xff | (ushort)((uVar12 + 8 & 0xff) << 8);
    *(ushort *)(puVar8 + 0x3a) = uVar3;
    uVar16 = uVar3;
    FUN_000039e0(puVar8 + 0x3e,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8));
    uVar13 = 0;
    do {
      iVar9 = DAT_00039ec0 + uVar13;
      puVar8[uVar13 + 0x16] = *(undefined1 *)(iVar9 + 0xc);
      *(undefined1 *)(DAT_00039ec4 + uVar13) = *(undefined1 *)(iVar9 + 0xc);
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar13 < 0x10);
    uVar13 = 0;
    iVar9 = local_24 * 0x10 + _DAT_00039e94;
    do {
      puVar8[uVar13 + 0x26] = *(undefined1 *)(iVar9 + uVar13);
      *(undefined1 *)(DAT_00039ec4 + uVar13 + 0x10) = *(undefined1 *)(iVar9 + uVar13);
      puVar5 = DAT_00039ec8;
      uVar13 = uVar13 + 1 & 0xff;
    } while (uVar13 < 0x10);
    *DAT_00039ec8 = 0;
    puVar5[1] = 0;
    iVar9 = DAT_00039ec4;
    *(ushort *)(DAT_00039ec4 + 0x22) = uVar16;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0x11;
    *(undefined2 *)(iVar9 + 0x28) = uVar6;
    *(undefined2 *)(iVar9 + 0x2a) = uVar6;
    *(ushort *)(iVar9 + 0x2c) = uVar16;
    *(undefined2 *)(iVar9 + 0x2e) = 0;
    FUN_000039e0(DAT_00039ecc,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8));
    uVar6 = FUN_001de0c4(uVar12 + 0x30,DAT_00039ec4);
    *(undefined2 *)(puVar8 + 0x3c) = uVar6;
    *(ushort *)(puVar8 + 0x12) = uVar3;
    puVar8[0x14] = 0x11;
    puVar8[0x15] = 1;
    iVar9 = local_24 * 6 + DAT_00039ed0;
    uVar12 = uVar12 + 0x3e;
    *puVar8 = *(undefined1 *)(DAT_00039ed0 + local_24 * 6);
    puVar8[1] = *(undefined1 *)(iVar9 + 1);
    puVar8[2] = *(undefined1 *)(iVar9 + 2);
    puVar8[3] = *(undefined1 *)(iVar9 + 3);
    puVar8[4] = *(undefined1 *)(iVar9 + 4);
    puVar8[5] = *(undefined1 *)(iVar9 + 5);
    iVar9 = DAT_00039ec0;
    puVar8[6] = *(undefined1 *)(DAT_00039ec0 + 1);
    puVar8[7] = *(undefined1 *)(iVar9 + 2);
    puVar8[8] = *(undefined1 *)(iVar9 + 3);
    puVar8[9] = *(undefined1 *)(iVar9 + 4);
    puVar8[10] = *(undefined1 *)(iVar9 + 5);
    puVar8[0xb] = *(undefined1 *)(iVar9 + 6);
    *(short *)(puVar8 + 0xc) = (short)DAT_00039ed4;
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
    iVar11 = iVar9 * 6 + DAT_00039ed0;
    *puVar8 = *(undefined1 *)(DAT_00039ed0 + iVar9 * 6);
    puVar8[1] = *(undefined1 *)(iVar11 + 1);
    puVar8[2] = *(undefined1 *)(iVar11 + 2);
    puVar8[3] = *(undefined1 *)(iVar11 + 3);
    puVar8[4] = *(undefined1 *)(iVar11 + 4);
    puVar8[5] = *(undefined1 *)(iVar11 + 5);
    iVar9 = DAT_00039ec0;
    puVar8[6] = *(undefined1 *)(DAT_00039ec0 + 1);
    puVar8[7] = *(undefined1 *)(iVar9 + 2);
    puVar8[8] = *(undefined1 *)(iVar9 + 3);
    puVar8[9] = *(undefined1 *)(iVar9 + 4);
    puVar8[10] = *(undefined1 *)(iVar9 + 5);
    puVar8[0xb] = *(undefined1 *)(iVar9 + 6);
    *(short *)(puVar8 + 0xc) = (short)DAT_00039ee8;
    FUN_000039e0(puVar8 + 0xe,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8));
    uVar12 = *(int *)(param_2 + 8) + 0xe;
  }
  uVar12 = uVar12 & 0xffff;
  if (*(short *)(param_2 + 0x12) != -1) {
    FUN_00003ab4(puVar8 + 0x10,puVar8 + 0xc,uVar12 - 0xc);
    *(undefined2 *)(puVar8 + 0xc) = 0x81;
    uVar13 = (uint)*(ushort *)(param_2 + 0x12) + (uint)*(byte *)(param_2 + 0x14) * 0x2000 & 0xffff;
    uVar12 = uVar12 + 4 & 0xffff;
    *(ushort *)(puVar8 + 0xe) = (ushort)(uVar13 >> 8) | (ushort)(uVar13 << 8);
  }
  uVar10 = DAT_00039f8c;
  iVar9 = 3;
  do {
    FUN_001f4514(iVar7,uVar12);
    iVar11 = FUN_001f3ec8(param_1,iVar7,1);
    if (iVar11 == 0) {
      return 1;
    }
    iVar14 = FUN_000366e0(uVar10);
    if (iVar14 != 0) {
      FUN_0002f9bc(uVar10);
      FUN_0002f9fc(3,_DAT_00039f90,param_1,iVar9,iVar11);
    }
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar7 = FUN_000366e0(uVar10);
  if (iVar7 != 0) {
    FUN_0002f9bc(uVar10);
    FUN_0002f9fc(3,s___PORT_ITF__Could_not_send_data_o_00039f92 + 2,param_1);
  }
  return 0;
}

