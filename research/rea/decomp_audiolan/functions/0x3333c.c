// rea decompile_all
// name: FUN_0003333c
// address: 0x3333c
// body: available
// range: 0x3333c-0x33493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003333c(int *param_1)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_44 [28];
  undefined1 auStack_28 [20];
  
  iVar3 = FUN_00030bd4();
  uVar1 = DAT_00033494;
  if (iVar3 == 0) {
    iVar3 = FUN_00030b90(DAT_00033494);
    if (iVar3 != 0) {
      FUN_00029e6c(uVar1);
      FUN_00029eac(3,s_PTP_MSG__Could_not_create_pdelay_00033498);
    }
    return;
  }
  FUN_00030ace(auStack_44);
  iVar4 = *param_1;
  FUN_00030b0c(auStack_44,iVar3,0x36,2,*(undefined1 *)(iVar4 + 0x3b4),0,
               (int)*(short *)(iVar4 + 0x3b6),*(undefined1 *)(iVar4 + 0x3b8),
               *(undefined1 *)(iVar4 + 0x3e0));
  sVar2 = *(short *)((int)param_1 + 0x4a) + 1;
  *(short *)((int)param_1 + 0x4a) = sVar2;
  FUN_000329d0(param_1,iVar3,sVar2,2,0x36,*(undefined1 *)(*param_1 + 0x3b4));
  if (**(char **)(*param_1 + 0x274) == '\x01') {
    lVar5 = FUN_000358c6(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
    lVar5 = lVar5 - *(longlong *)(*param_1 + 0x3d8);
    uVar6 = FUN_0003583c((int)lVar5,(int)((ulonglong)lVar5 >> 0x20));
    *(char *)(iVar3 + 8) = (char)uVar6;
    *(char *)(iVar3 + 9) = (char)((ulonglong)uVar6 >> 8);
    *(char *)(iVar3 + 10) = (char)((ulonglong)uVar6 >> 0x10);
    *(char *)(iVar3 + 0xb) = (char)((ulonglong)uVar6 >> 0x18);
    *(char *)(iVar3 + 0xc) = (char)((ulonglong)uVar6 >> 0x20);
    *(char *)(iVar3 + 0xd) = (char)((ulonglong)uVar6 >> 0x28);
    *(char *)(iVar3 + 0xe) = (char)((ulonglong)uVar6 >> 0x30);
    *(char *)(iVar3 + 0xf) = (char)((ulonglong)uVar6 >> 0x38);
  }
  FUN_00025a58(auStack_28);
  FUN_000366d8(auStack_28,iVar3 + 0x22);
  uVar1 = _DAT_000334cc;
  iVar3 = FUN_00030b90(_DAT_000334cc);
  if (iVar3 != 0) {
    FUN_00029e6c(uVar1);
    FUN_00029eac(6,s__PTP_MSG__TX_pdelay_request_000334cf + 1);
  }
  iVar3 = FUN_00030b90(uVar1);
  if (iVar3 != 0) {
    FUN_00029e6c(uVar1);
    FUN_00029eac(6,s_Seq_ID___d_000334ec,*(undefined2 *)((int)param_1 + 0x4a));
  }
  FUN_00033eb4(*(undefined2 *)(*param_1 + 2),auStack_44);
  FUN_00030aa4(auStack_44);
  return;
}

