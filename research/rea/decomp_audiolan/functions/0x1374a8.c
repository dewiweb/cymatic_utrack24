// rea decompile_all
// name: FUN_001374a8
// address: 0x1374a8
// body: available
// range: 0x1374a8-0x1375e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001374a8(int *param_1,uint param_2)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (uint)*(ushort *)(param_1 + 1);
  if (uVar4 == param_2) {
    return;
  }
  if (uVar4 < param_2) {
    iVar1 = FUN_0016d774(param_2 << 4,DAT_001375e8);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_0016dd70(iVar1,DAT_001375ec,0x10,param_2);
    if (iVar1 != 0) {
      FUN_000038a0(iVar1 + (uint)*(ushort *)(param_1 + 1) * 0x10,
                   (param_2 - *(ushort *)(param_1 + 1)) * 0x10);
      if (*param_1 != 0) {
        FUN_000037d0(iVar1,*param_1,(uint)*(ushort *)(param_1 + 1) << 4);
        FUN_0016d744(*param_1);
      }
      *param_1 = iVar1;
      *(short *)(param_1 + 1) = (short)param_2;
      return;
    }
    return;
  }
  psVar2 = (short *)(*param_1 + param_2 * 0x10 + 0xc);
  iVar1 = 0;
  uVar3 = uVar4 - param_2 & 0xffff;
  uVar5 = param_2;
  do {
    if ((*psVar2 != 0) && (uVar6 = param_2 + iVar1 + 1, (int)uVar5 < (int)uVar6)) {
      uVar5 = uVar6 & 0xffff;
    }
    uVar3 = uVar3 - 1 & 0xffff;
    psVar2 = psVar2 + 8;
    iVar1 = iVar1 + 1;
  } while (uVar3 != 0);
  if (uVar4 <= uVar5) {
    return;
  }
  iVar1 = FUN_0016d774(uVar5 << 4,DAT_001375e8);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_0016dd70(iVar1,DAT_001375ec,0x10,uVar5);
  if (iVar1 != 0) {
    FUN_000037d0(iVar1,*param_1,uVar5 << 4);
    FUN_0016d744(*param_1);
    *param_1 = iVar1;
    *(short *)(param_1 + 1) = (short)uVar5;
    return;
  }
  return;
}

