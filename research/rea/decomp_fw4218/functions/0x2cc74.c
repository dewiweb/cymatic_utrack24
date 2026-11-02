// rea decompile_all
// name: FUN_0002cc74
// address: 0x2cc74
// body: available
// range: 0x2cc74-0x2cd79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0002cc74(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 auStack_28 [4];
  undefined1 local_24;
  undefined1 local_1e;
  undefined1 local_15;
  undefined1 local_14;
  
  FUN_0003c794();
  FUN_000365d8(param_1);
  FUN_0003b64e(param_1 + 0x1c,0x30,10);
  FUN_0002bbb0();
  FUN_0003cbac();
  FUN_00039a2c();
  FUN_0002bba8();
  FUN_0002bde8(param_1 + 0x28);
  iVar1 = param_1 + 0x40;
  FUN_0002c1c6();
  FUN_000396d6(param_1 + 0x60,iVar1);
  FUN_0003bea2(param_1 + 0x56);
  *(undefined1 *)(param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  if (*(short *)(param_1 + 0x84) == 0) {
    FUN_0003b646(auStack_28,iVar1,0x16);
    FUN_0002b694(auStack_28);
    *(undefined1 *)(param_1 + 0x44) = local_24;
    *(undefined1 *)(param_1 + 0x4a) = local_1e;
    FUN_0002c3d0(iVar1,local_15);
    *(undefined1 *)(param_1 + 0x54) = local_14;
  }
  if (*(undefined1 **)(param_1 + 0xa4) != (undefined1 *)0x0) {
    uVar3 = 0;
    if (*(short *)(param_1 + 0x84) == 0) {
      uVar3 = **(undefined1 **)(param_1 + 0xa4);
    }
    FUN_0003acee();
    if (*(short *)(param_1 + 0x84) == 0) {
      FUN_0003ac28(*(undefined4 *)(param_1 + 0xa4),uVar3);
    }
  }
  uVar2 = FUN_001e11e8((int)*(char *)(*(int *)(param_1 + 0xa4) + 0x268));
  FUN_0003c79c(param_1 + 0x88,uVar2,0);
  FUN_0003c808(param_1 + 0x88);
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_00039968(auStack_28,0xd);
    FUN_0003acbe(*(undefined4 *)(param_1 + 0xa4),auStack_28);
  }
  uVar2 = DAT_0002cd7c;
  iVar1 = FUN_000366e0(DAT_0002cd7c);
  if (iVar1 != 0) {
    FUN_0002f9bc(uVar2);
    FUN_0002f9fc(6,DAT_0002cd80);
  }
  return;
}

