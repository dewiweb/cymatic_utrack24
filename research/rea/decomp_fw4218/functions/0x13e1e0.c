// rea decompile_all
// name: FUN_0013e1e0
// address: 0x13e1e0
// body: available
// range: 0x13e1e0-0x13e3cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0013e1e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_000f4e84();
  FUN_000f4fc0();
  iVar1 = *(int *)(param_1 + 0x8c);
  if (*(int *)(param_1 + 8) != 0) {
    uVar4 = 1;
    for (uVar3 = 0; (int)uVar3 < 0x18; uVar3 = uVar3 + 1) {
      if ((*(uint *)(param_1 + 8) & uVar4) != 0) {
        *(undefined2 *)(iVar1 + 0x770 + uVar3 * 2) = *(undefined2 *)(param_1 + 0x2c + uVar3 * 2);
        uVar2 = FUN_000b0158(*(undefined4 *)(param_1 + 0x8c),
                             *(undefined2 *)(iVar1 + 0x740 + uVar3 * 2));
        iVar5 = *(ushort *)(iVar1 + 0x770 + uVar3 * 2) - 0x8000;
        FUN_001282fc(&uStack_28,uVar2,
                     (int)((iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x18)) * 0x10000) >> 0x18,
                     *(short *)(iVar1 + 0x7a0 + uVar3 * 2) != 0);
        uVar2 = FUN_000f6910(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 300));
        FUN_00069f60(uVar2,uVar3 & 0xff,&uStack_28,0);
      }
      uVar4 = uVar4 << 1;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar4 = 1;
    for (uVar3 = 0; (int)uVar3 < 0x18; uVar3 = uVar3 + 1) {
      if ((*(uint *)(param_1 + 0xc) & uVar4) != 0) {
        *(undefined2 *)(iVar1 + 0x740 + uVar3 * 2) = *(undefined2 *)(param_1 + 0x5c + uVar3 * 2);
        uVar2 = FUN_000b0158(*(undefined4 *)(param_1 + 0x8c),
                             *(undefined2 *)(iVar1 + 0x740 + uVar3 * 2));
        iVar5 = *(ushort *)(iVar1 + 0x770 + uVar3 * 2) - 0x8000;
        FUN_001282fc(&uStack_28,uVar2,
                     (int)((iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x18)) * 0x10000) >> 0x18,
                     *(short *)(iVar1 + 0x7a0 + uVar3 * 2) != 0);
        uVar2 = FUN_000f6910(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 300));
        FUN_00069f60(uVar2,uVar3 & 0xff,&uStack_28,0);
      }
      uVar4 = uVar4 << 1;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return 0;
}

