// rea decompile_all
// name: FUN_0002c4b0
// address: 0x2c4b0
// body: available
// range: 0x2c4b0-0x2c5f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002c4b0(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 auStack_28 [4];
  undefined1 local_24;
  undefined1 local_1e;
  undefined1 local_15;
  undefined1 local_14;
  
  FUN_000366c0(0x40000000);
  FUN_0002b288();
  FUN_0002f9c8();
  FUN_0003661e(param_1);
  FUN_0003b64e(param_1 + 0x1c,0x30,10);
  *(undefined2 *)(param_1 + 0x84) = param_2;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  iVar1 = FUN_0003b1cc();
  uVar2 = DAT_0002c5f4;
  if ((iVar1 == 0) && (iVar1 = FUN_000366e0(DAT_0002c5f4), iVar1 != 0)) {
    FUN_0002f9bc(uVar2);
    FUN_0002f9fc(3,s_Could_not_initialize_environment_0002c5f8);
  }
  FUN_0002aaf4(param_1 + 0xa0,param_1);
  FUN_0002bde8(param_1 + 0x28);
  iVar1 = param_1 + 0x40;
  FUN_0002c1c6();
  FUN_000396d6(param_1 + 0x60,iVar1);
  FUN_0003bea2(param_1 + 0x56);
  if (*(short *)(param_1 + 0x84) == 0) {
    FUN_0003b646(auStack_28,iVar1,0x16);
    FUN_0002b694(auStack_28);
    *(undefined1 *)(param_1 + 0x44) = local_24;
    *(undefined1 *)(param_1 + 0x4a) = local_1e;
    FUN_0002c3d0(iVar1,local_15);
    *(undefined1 *)(param_1 + 0x54) = local_14;
  }
  iVar1 = FUN_0003a654(param_1,1);
  *(int *)(param_1 + 0xa4) = iVar1;
  uVar2 = DAT_0002c650;
  if (iVar1 == 0) {
    iVar1 = FUN_000366e0(DAT_0002c650);
    if (iVar1 == 0) {
      return;
    }
    FUN_0002f9bc(uVar2);
    uVar2 = 3;
    pcVar3 = s_ENV__Could_not_create_the_PTP_Po_0002c654;
  }
  else {
    uVar2 = FUN_001e11e8((int)*(char *)(iVar1 + 0x268));
    FUN_0003c79c(param_1 + 0x88,uVar2,0);
    FUN_0003c808(param_1 + 0x88);
    FUN_0002b654();
    FUN_0003c92c();
    FUN_000399b4();
    if (*(int *)(param_1 + 0xa4) != 0) {
      FUN_00039968(auStack_28,0xd);
      FUN_0003acbe(*(undefined4 *)(param_1 + 0xa4),auStack_28);
    }
    uVar2 = _DAT_0002c628;
    iVar1 = FUN_000366e0(_DAT_0002c628);
    if (iVar1 == 0) {
      return;
    }
    FUN_0002f9bc(uVar2);
    uVar2 = 6;
    pcVar3 = s__ENV__PTP_Environment_initialize_0002c62b + 1;
  }
  FUN_0002f9fc(uVar2,pcVar3);
  return;
}

