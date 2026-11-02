// rea decompile_all
// name: FUN_0003372c
// address: 0x3372c
// body: available
// range: 0x3372c-0x3394d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003372c(int *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  undefined1 auStack_5c [28];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [28];
  
  iVar6 = FUN_00030c04();
  uVar9 = DAT_00033980;
  if (iVar6 == 0) {
    iVar6 = FUN_00030b90(DAT_00033980);
    if (iVar6 != 0) {
      FUN_00029e6c(uVar9);
      FUN_00029eac(3,s_PTP_MSG__Could_not_create_pdelay_00033984);
    }
    return;
  }
  FUN_00030ace(auStack_5c);
  iVar7 = *param_1;
  FUN_00030b0c(auStack_5c,iVar6,0x36,3,*(undefined1 *)(iVar7 + 0x3b4),0,
               (int)*(short *)(iVar7 + 0x3b6),*(undefined1 *)(iVar7 + 0x3b8),
               *(undefined1 *)(iVar7 + 0x3e0));
  uVar5 = FUN_000358f6(*(undefined2 *)(param_2 + 0x1e));
  FUN_000329d0(param_1,iVar6,uVar5,3,0x36,*(undefined1 *)(*param_1 + 0x3b4));
  *(undefined1 *)(iVar6 + 0x2c) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)(iVar6 + 0x2d) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)(iVar6 + 0x2e) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)(iVar6 + 0x2f) = *(undefined1 *)(param_2 + 0x17);
  *(undefined1 *)(iVar6 + 0x30) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)(iVar6 + 0x31) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)(iVar6 + 0x32) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)(iVar6 + 0x33) = *(undefined1 *)(param_2 + 0x1b);
  *(undefined1 *)(iVar6 + 0x34) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)(iVar6 + 0x35) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined1 *)(iVar6 + 4) = *(undefined1 *)(param_2 + 4);
  if ((int)((uint)*(byte *)(iVar6 + 6) << 0x1e) < 0) {
    *(undefined1 *)(iVar6 + 8) = 0;
    *(undefined1 *)(iVar6 + 9) = 0;
    *(undefined1 *)(iVar6 + 10) = 0;
    *(undefined1 *)(iVar6 + 0xb) = 0;
    *(undefined1 *)(iVar6 + 0xc) = 0;
    *(undefined1 *)(iVar6 + 0xd) = 0;
    *(undefined1 *)(iVar6 + 0xe) = 0;
    *(undefined1 *)(iVar6 + 0xf) = 0;
    FUN_00036f7c(auStack_40);
    FUN_00036fa0(auStack_40,param_2,*(undefined2 *)(*param_1 + 2));
    iVar7 = FUN_00036da0(auStack_40);
    uVar9 = DAT_00033980;
    if (iVar7 != 0) {
      FUN_000366d8(auStack_30,iVar6 + 0x22);
      iVar7 = FUN_00033eb4(*(undefined2 *)(*param_1 + 2),auStack_5c);
      iVar8 = FUN_00030b90(_DAT_00033950);
      if (iVar8 != 0) {
        FUN_00029e6c(_DAT_00033950);
        FUN_00029eac(6,s__PTP_MSG__TX_pdelay_response_00033953 + 1);
      }
      iVar8 = FUN_00030b90(_DAT_00033950);
      if (iVar8 != 0) {
        FUN_00029e6c(_DAT_00033950);
        uVar9 = FUN_000358f6(*(undefined2 *)(param_2 + 0x1e));
        FUN_00029eac(6,s_Seq_ID___d_00033970,uVar9);
      }
      if (iVar7 == 1) {
        FUN_000334fc(param_1,param_2,iVar6);
      }
      goto LAB_00033944;
    }
    iVar6 = FUN_00030b90(DAT_00033980);
    if (iVar6 == 0) goto LAB_00033944;
    FUN_00029e6c(uVar9);
    uVar11 = (uint)*(ushort *)(*param_1 + 2);
    uVar9 = 3;
    pcVar10 = DAT_000339b8;
  }
  else {
    uVar1 = *(undefined1 *)(param_2 + 0xb);
    uVar9 = *(undefined4 *)(param_2 + 8);
    uVar3 = *(undefined3 *)(param_2 + 0xc);
    uVar2 = *(undefined1 *)(param_2 + 0xf);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    *(char *)(iVar6 + 8) = (char)*(undefined3 *)(param_2 + 8);
    *(char *)(iVar6 + 9) = (char)((uint)uVar9 >> 8);
    *(char *)(iVar6 + 10) = (char)((uint)uVar9 >> 0x10);
    *(undefined1 *)(iVar6 + 0xb) = uVar1;
    *(char *)(iVar6 + 0xc) = (char)uVar3;
    *(char *)(iVar6 + 0xd) = (char)((uint)uVar4 >> 8);
    *(char *)(iVar6 + 0xe) = (char)((uint)uVar4 >> 0x10);
    *(undefined1 *)(iVar6 + 0xf) = uVar2;
    FUN_00033eb4(*(undefined2 *)(*param_1 + 2),auStack_5c);
    uVar9 = _DAT_00033950;
    iVar6 = FUN_00030b90(_DAT_00033950);
    if (iVar6 != 0) {
      FUN_00029e6c(uVar9);
      FUN_00029eac(6,s__PTP_MSG__TX_pdelay_response_00033953 + 1);
    }
    iVar6 = FUN_00030b90(uVar9);
    if (iVar6 == 0) goto LAB_00033944;
    FUN_00029e6c(uVar9);
    uVar11 = FUN_000358f6(*(undefined2 *)(param_2 + 0x1e));
    uVar9 = 6;
    pcVar10 = s_Seq_ID___d_00033970;
  }
  FUN_00029eac(uVar9,pcVar10,uVar11);
LAB_00033944:
  FUN_00030aa4(auStack_5c);
  return;
}

