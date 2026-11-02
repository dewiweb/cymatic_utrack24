// rea decompile_all
// name: FUN_000f8fcc
// address: 0xf8fcc
// body: available
// range: 0xf8fcc-0xf932b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000f8fcc(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  iVar1 = FUN_000b0f28(param_1,s_BeBoB_App_000f9330,0x14,DAT_000f932c,DAT_000f932c,DAT_000f932c,
                       0x1000,DAT_000f932c,DAT_000f932c);
  iVar1 = FUN_00142c30(iVar1 + 0x174);
  piVar2 = (int *)FUN_001448e8(iVar1 + 4);
  iVar1 = DAT_000f933c;
  piVar2[-0x5e] = DAT_000f933c;
  piVar2[-0x19] = iVar1 + 0xac;
  piVar2[-1] = iVar1 + 0xd0;
  *piVar2 = iVar1 + 0xf0;
  iVar1 = FUN_0006a740(piVar2 + 1,0x1a);
  iVar1 = FUN_000f4b94(iVar1 + 0x168,iVar1 + -0x17c);
  uVar3 = FUN_002306f8(auStack_18);
  iVar1 = FUN_00234474(iVar1 + 0x124,auStack_14,uVar3);
  iVar1 = FUN_00122510(iVar1 + 0x1c);
  *(undefined1 *)(iVar1 + 0x58) = 0;
  *(undefined1 *)(iVar1 + 0x59) = 0;
  iVar1 = FUN_00203fac(iVar1 + 0x5c);
  iVar1 = FUN_0024503c(iVar1 + 0xc,0);
  iVar4 = FUN_00130e90(iVar1 + 4,iVar1 + -0x318);
  iVar1 = DAT_000f9340;
  *(undefined2 *)(DAT_000f9340 + iVar4 + -0x490) = 0xffff;
  *(undefined2 *)(iVar1 + 2 + iVar4 + -0x490) = 0xffff;
  *(undefined1 *)(iVar4 + 0x18) = 0;
  *(undefined1 *)(iVar4 + 0x19) = 0;
  iVar1 = FUN_000d4f0c(iVar4 + 0x1c);
  iVar1 = FUN_0006b594(iVar1 + 0x10,iVar1);
  iVar1 = FUN_0012884c(iVar1 + 100);
  iVar1 = FUN_0011ab20(iVar1 + 0x14);
  iVar1 = FUN_00146ba4(iVar1 + 0x14);
  iVar1 = FUN_00092600(iVar1 + 0x14);
  iVar1 = FUN_000fa580(iVar1 + 0x14,iVar1 + -0x3e4);
  iVar1 = FUN_0012418c(iVar1 + 0x18,iVar1 + -0x3f8);
  iVar1 = FUN_00111088(iVar1 + 0x1c);
  iVar1 = FUN_000cd164(iVar1 + 0x14);
  iVar1 = FUN_00137e04(iVar1 + 0x14);
  iVar1 = FUN_000fb0a8(iVar1 + 0x14);
  iVar1 = FUN_0012f81c(iVar1 + 0x14);
  iVar1 = FUN_00110138(iVar1 + 0x14);
  iVar1 = FUN_0013ad80(iVar1 + 0x14);
  uVar3 = FUN_001282fc(auStack_28,0,0x7f);
  uVar5 = FUN_001282fc(auStack_20,DAT_000f9344,0xffffff81,0);
  FUN_00069e8c(iVar1 + -0x4a0,uVar5,uVar3);
  FUN_00069c54(iVar1 + -0x4a0,0x18);
  FUN_00069c54(iVar1 + -0x4a0,0x19);
  FUN_0006a2a0(iVar1 + -0x4a0,0x18);
  FUN_0006a2a0(iVar1 + -0x4a0,0x19);
  uVar3 = FUN_001282fc(auStack_28,0,0xffffff81);
  FUN_00069f60(iVar1 + -0x4a0,0x18,uVar3,0);
  uVar3 = FUN_001282fc(auStack_28,0,0xffffff81);
  FUN_00069f60(iVar1 + -0x4a0,0x19,uVar3,0);
  *DAT_000f9348 = 0;
  FUN_00178f04();
  uVar6 = FUN_00178208();
  *DAT_000f9348 = *DAT_000f9348 & 0xfffff8ff | (uVar6 & 7) << 8;
  return iVar1 + -0x61c;
}

