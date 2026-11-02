// rea decompile_all
// name: FUN_00032fac
// address: 0x32fac
// body: available
// range: 0x32fac-0x33155 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00032fac(int *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [28];
  
  iVar6 = FUN_0002687e();
  uVar8 = DAT_00033188;
  if (iVar6 != 0) {
    FUN_00030ace(auStack_30);
    iVar7 = *param_1;
    FUN_00030b0c(auStack_30,iVar6,0x36,9,*(undefined1 *)(iVar7 + 0x3b4),0,
                 (int)*(short *)(iVar7 + 0x3b6),*(undefined1 *)(iVar7 + 0x3b8),
                 *(undefined1 *)(iVar7 + 0x3e0));
    uVar5 = FUN_000358f6(*(undefined2 *)(param_2 + 0x1e));
    FUN_000329d0(param_1,iVar6,uVar5,9,0x36,*(undefined1 *)(*param_1 + 0x3b4));
    uVar1 = *(undefined1 *)(param_2 + 0xb);
    uVar8 = *(undefined4 *)(param_2 + 8);
    uVar3 = *(undefined3 *)(param_2 + 0xc);
    uVar2 = *(undefined1 *)(param_2 + 0xf);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    *(char *)(iVar6 + 8) = (char)*(undefined3 *)(param_2 + 8);
    *(char *)(iVar6 + 9) = (char)((uint)uVar8 >> 8);
    *(char *)(iVar6 + 10) = (char)((uint)uVar8 >> 0x10);
    *(undefined1 *)(iVar6 + 0xb) = uVar1;
    *(char *)(iVar6 + 0xc) = (char)uVar3;
    *(char *)(iVar6 + 0xd) = (char)((uint)uVar4 >> 8);
    *(char *)(iVar6 + 0xe) = (char)((uint)uVar4 >> 0x10);
    *(undefined1 *)(iVar6 + 0xf) = uVar2;
    FUN_00036f7c(auStack_58);
    FUN_00036fa0(auStack_58,param_2,*(undefined2 *)(*param_1 + 2));
    iVar7 = FUN_00036da0(auStack_58);
    uVar8 = DAT_00033188;
    if (iVar7 == 0) {
      iVar6 = FUN_00030b90(DAT_00033188);
      if (iVar6 != 0) {
        FUN_00029e6c(uVar8);
        FUN_00029eac(3,DAT_000331bc,*(undefined2 *)(*param_1 + 2));
      }
    }
    else {
      FUN_000366d8(auStack_48,iVar6 + 0x22);
      *(undefined1 *)(iVar6 + 0x2c) = *(undefined1 *)(param_2 + 0x14);
      *(undefined1 *)(iVar6 + 0x2d) = *(undefined1 *)(param_2 + 0x15);
      *(undefined1 *)(iVar6 + 0x2e) = *(undefined1 *)(param_2 + 0x16);
      *(undefined1 *)(iVar6 + 0x2f) = *(undefined1 *)(param_2 + 0x17);
      *(undefined1 *)(iVar6 + 0x30) = *(undefined1 *)(param_2 + 0x18);
      *(undefined1 *)(iVar6 + 0x31) = *(undefined1 *)(param_2 + 0x19);
      *(undefined1 *)(iVar6 + 0x32) = *(undefined1 *)(param_2 + 0x1a);
      *(undefined1 *)(iVar6 + 0x33) = *(undefined1 *)(param_2 + 0x1b);
      *(undefined1 *)(iVar6 + 0x34) = *(undefined1 *)(param_2 + 0x1c);
      uVar8 = _DAT_00033158;
      *(undefined1 *)(iVar6 + 0x35) = *(undefined1 *)(param_2 + 0x1d);
      iVar6 = FUN_00030b90(uVar8);
      if (iVar6 != 0) {
        FUN_00029e6c(uVar8);
        FUN_00029eac(6,s__PTP_MSG__TX_delay_response_0003315b + 1);
      }
      iVar6 = FUN_00030b90(uVar8);
      if (iVar6 != 0) {
        FUN_00029e6c(uVar8);
        uVar8 = FUN_000358f6(*(undefined2 *)(param_2 + 0x1e));
        FUN_00029eac(6,s_Seq_ID___d_00033178,uVar8);
      }
      FUN_00033eb4(*(undefined2 *)(*param_1 + 2),auStack_30);
    }
    FUN_00030aa4(auStack_30);
    return;
  }
  iVar6 = FUN_00030b90(DAT_00033188);
  if (iVar6 != 0) {
    FUN_00029e6c(uVar8);
    FUN_00029eac(3,s_PTP_MSG__Could_not_create_delay_r_0003318c);
  }
  return;
}

