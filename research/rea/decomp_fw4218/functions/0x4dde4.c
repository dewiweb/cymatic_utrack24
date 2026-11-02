// rea decompile_all
// name: FUN_0004dde4
// address: 0x4dde4
// body: available
// range: 0x4dde4-0x4df37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0004dde4(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  uVar5 = DAT_0004df40;
  for (piVar7 = DAT_0004df38; (*piVar7 != -1 && (*piVar7 != *DAT_0004df3c)); piVar7 = piVar7 + 7) {
  }
  if (*piVar7 == -1) {
    *(undefined4 *)(DAT_0004df40 + 0x84) = 7;
    FUN_00013290(s_Slow_timings___prescaler__d_0004df64,*(undefined4 *)((uVar5 & 0xfffffff8) + 0x84)
                );
  }
  else {
    *(undefined4 *)(DAT_0004df40 + 0x84) = 0;
    iVar2 = FUN_0004cc38((short)piVar7[1],7);
    iVar3 = FUN_0004cc38(*(undefined2 *)((int)piVar7 + 6),7);
    iVar4 = FUN_0004cc38((short)piVar7[2],7);
    uVar5 = FUN_0004cc38(*(undefined2 *)((int)piVar7 + 10),7);
    *(uint *)(DAT_0004df40 + 0x100) = iVar2 << 0x18 | iVar3 << 0x10 | iVar4 << 8 | uVar5;
    iVar2 = FUN_0004cc38((short)piVar7[3],0xf);
    sVar1 = *(short *)((int)piVar7 + 0xe);
    iVar3 = FUN_0004cc38((short)piVar7[4],0xff);
    uVar5 = FUN_0004cc38(*(undefined2 *)((int)piVar7 + 0x12),7);
    *(uint *)(DAT_0004df40 + 0x104) =
         iVar2 << 0x18 | (uint)(sVar1 != 0) << 0x10 | iVar3 << 8 | uVar5;
    iVar2 = FUN_0004cc38((short)piVar7[5],7);
    iVar3 = FUN_0004cc38(*(undefined2 *)((int)piVar7 + 0x16),7);
    uVar6 = FUN_0004cc38((short)piVar7[6],0x7f);
    uVar5 = DAT_0004df40;
    *(uint *)(DAT_0004df40 + 0x108) = iVar2 << 0x10 | iVar3 << 8 | uVar6;
    FUN_00013290(s_Fast_timings___prescaler__d_0004df44,*(undefined4 *)(uVar5 + 0x84));
  }
  return;
}

