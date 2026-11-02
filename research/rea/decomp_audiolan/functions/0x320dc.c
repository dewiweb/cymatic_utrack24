// rea decompile_all
// name: FUN_000320dc
// address: 0x320dc
// body: available
// range: 0x320dc-0x32427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000320dc(int *param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined2 local_66;
  undefined1 auStack_60 [16];
  undefined2 local_50;
  undefined1 local_4d;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [28];
  int *piStack_1c;
  int local_18;
  
  uVar4 = _DAT_00032484;
  uVar3 = DAT_0003247c;
  uVar5 = DAT_00032428;
  iVar11 = 0;
  piStack_1c = param_1;
  local_18 = param_2;
  if (param_2 == 0) {
    iVar11 = FUN_00030b90(DAT_00032428);
    if (iVar11 != 0) {
      FUN_00029e6c(uVar5);
      FUN_00029eac(3,s_PTP_MSG__RX_pdelay_resp_msg_ptr___0003242c);
    }
    return;
  }
  if (param_1 == (int *)0x0) {
    iVar11 = FUN_00030b90(DAT_00032428);
    if (iVar11 == 0) {
      return;
    }
    FUN_00029e6c(uVar5);
    FUN_00029eac(3,s_PTP_MSG__RX_pdelay_resp_me____NU_00032458);
    return;
  }
  cVar1 = *(char *)(*param_1 + 0x25a);
  if ((((cVar1 != '\x01') && (cVar1 != '\x03')) && (cVar1 != '\x02')) &&
     (*(char *)(*param_1 + 0x26d) == '\x02')) {
    if (*(uint *)(param_2 + 8) < 0x36) {
      iVar11 = FUN_00030b90(DAT_0003247c);
      if (iVar11 == 0) goto LAB_00032398;
      FUN_00029e6c(uVar3);
      uVar5 = 4;
      pcVar8 = DAT_00032480;
    }
    else {
      iVar9 = *(int *)(param_2 + 0xc);
      iVar6 = FUN_00030b90(_DAT_00032484);
      if (iVar6 != 0) {
        FUN_00029e6c(uVar4);
        uVar5 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
        FUN_00029eac(6,s__PTP_MSG__RX_pdelay_response_wit_00032487 + 1,uVar5);
      }
      do {
        iVar6 = FUN_00030b90(uVar4);
        if (iVar6 != 0) {
          FUN_00029e6c(uVar4);
          FUN_00029eac(6,&DAT_000324bc,*(undefined1 *)(iVar9 + iVar11 + 0x14));
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 8);
      iVar11 = FUN_00030b90(_DAT_00032484);
      if (iVar11 != 0) {
        FUN_00029e6c(_DAT_00032484);
        FUN_00029eac(6,s_on_port__d_000324c0,*(undefined2 *)(*param_1 + 2));
      }
      iVar11 = *param_1;
      uVar7 = 0;
      do {
        if (*(char *)(iVar9 + uVar7 + 0x2c) != *(char *)(iVar11 + uVar7 + 0x250)) goto LAB_000322ec;
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < 8);
      if ((CONCAT11(*(undefined1 *)(iVar9 + 0x34),*(undefined1 *)(iVar9 + 0x35)) !=
           CONCAT11(*(undefined1 *)(iVar11 + 600),*(undefined1 *)(iVar11 + 0x259))) ||
         (uVar7 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e)),
         uVar7 != *(ushort *)((int)param_1 + 0x4a))) {
LAB_000322ec:
        uVar5 = _DAT_00032484;
        iVar11 = FUN_00030b90(_DAT_00032484);
        if (iVar11 == 0) {
          return;
        }
        FUN_00029e6c(uVar5);
        uVar5 = 6;
        pcVar8 = s___PTP_MSG__RX_pdelay_response__R_00032512 + 2;
LAB_00032420:
        FUN_00029eac(uVar5,pcVar8);
        return;
      }
      if (**(char **)(*param_1 + 0x274) == '\x01') {
        lVar12 = FUN_000358c6(*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar9 + 0xc));
        lVar12 = lVar12 + *(longlong *)(*param_1 + 0x3d8);
        uVar13 = FUN_0003583c((int)lVar12,(int)((ulonglong)lVar12 >> 0x20));
        *(char *)(iVar9 + 8) = (char)uVar13;
        *(char *)(iVar9 + 9) = (char)((ulonglong)uVar13 >> 8);
        *(char *)(iVar9 + 10) = (char)((ulonglong)uVar13 >> 0x10);
        *(char *)(iVar9 + 0xb) = (char)((ulonglong)uVar13 >> 0x18);
        *(char *)(iVar9 + 0xc) = (char)((ulonglong)uVar13 >> 0x20);
        *(char *)(iVar9 + 0xd) = (char)((ulonglong)uVar13 >> 0x28);
        *(char *)(iVar9 + 0xe) = (char)((ulonglong)uVar13 >> 0x30);
        *(char *)(iVar9 + 0xf) = (char)((ulonglong)uVar13 >> 0x38);
      }
      if ((int)((uint)*(byte *)(iVar9 + 6) << 0x1e) < 0) {
        puVar10 = (ushort *)(param_1 + 0x10);
        if ((*(char *)((int)param_1 + 0x42) == '\0') &&
           (uVar2 = *puVar10, *puVar10 = uVar2 + 1, uVar5 = _DAT_00032484, 9 < (ushort)(uVar2 + 1)))
        {
          iVar11 = FUN_00030b90(_DAT_00032484);
          if (iVar11 != 0) {
            FUN_00029e6c(uVar5);
            FUN_00029eac(6,_DAT_00032510,*puVar10);
          }
          *puVar10 = 0;
        }
        *(undefined1 *)((int)param_1 + 0x42) = 0;
        FUN_00030aa4();
        FUN_00030aea(param_1 + 9,local_18);
        return;
      }
      FUN_00036f7c(auStack_48);
      FUN_00036f7c(&local_70);
      FUN_00036fa0(auStack_48,iVar9,*(undefined2 *)(*param_1 + 2));
      local_70 = *(undefined1 *)(iVar9 + 0x2c);
      local_6f = *(undefined1 *)(iVar9 + 0x2d);
      local_6e = *(undefined1 *)(iVar9 + 0x2e);
      local_6d = *(undefined1 *)(iVar9 + 0x2f);
      local_6c = *(undefined1 *)(iVar9 + 0x30);
      local_6b = *(undefined1 *)(iVar9 + 0x31);
      local_6a = *(undefined1 *)(iVar9 + 0x32);
      local_69 = *(undefined1 *)(iVar9 + 0x33);
      local_68 = *(undefined1 *)(iVar9 + 0x34);
      local_67 = *(undefined1 *)(iVar9 + 0x35);
      local_66 = FUN_000358f6(*(undefined2 *)(iVar9 + 0x1e));
      local_50 = *(undefined2 *)(*param_1 + 2);
      local_4d = 2;
      iVar11 = FUN_00036da0(&local_70);
      if ((iVar11 == 0) || (iVar11 = FUN_00036da0(auStack_48), iVar11 == 0)) {
        uVar5 = DAT_00032428;
        iVar11 = FUN_00030b90(DAT_00032428);
        if (iVar11 == 0) {
          return;
        }
        FUN_00029e6c(uVar5);
        uVar5 = 3;
        pcVar8 = DAT_0003250c;
        goto LAB_00032420;
      }
      uVar13 = FUN_000358c6(*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar9 + 0xc));
      FUN_000346f4(*param_1 + 0x250,auStack_38,auStack_60,0,uVar13,0,0,0,0);
      uVar5 = _DAT_00032484;
      iVar11 = FUN_00030b90(_DAT_00032484);
      if (iVar11 == 0) goto LAB_00032398;
      FUN_00029e6c(uVar5);
      uVar5 = 6;
      pcVar8 = s_PTP_MSG__RX_pdelay_response__>_c_000324cc;
    }
    FUN_00029eac(uVar5,pcVar8);
  }
LAB_00032398:
  FUN_00030aa4(local_18);
  return;
}

