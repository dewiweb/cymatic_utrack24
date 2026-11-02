// rea decompile_all
// name: FUN_0013bad4
// address: 0x13bad4
// body: available
// range: 0x13bad4-0x13bbdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0013bad4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5,undefined4 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)FUN_0016d7a4(0xe8,DAT_0013bbdc);
  iVar5 = DAT_0013bbe4;
  piVar1 = DAT_0013bbe0;
  if (piVar4 != (int *)0x0) {
    *piVar4 = *DAT_0013bbe0;
    uVar2 = DAT_0013bbe8;
    piVar4[0x39] = iVar5;
    piVar4 = (int *)FUN_000efa74(piVar4,uVar2);
    iVar3 = DAT_0013bbf0;
    iVar5 = *piVar1;
    *piVar4 = iVar5;
    *(int *)((int)piVar4 + *(int *)(iVar5 + -0xc)) = piVar1[1];
    iVar5 = DAT_0013bbec;
    piVar4[0x32] = iVar3;
    piVar4[0x33] = param_5 + 0x864;
    piVar4[0x34] = iVar5;
    piVar4[0x35] = 0;
    FUN_00134be8(param_5 + 0x864,piVar4 + 0x32);
    piVar4[0x32] = DAT_0013bbf4;
    piVar4[0x36] = 0;
    piVar4[0x37] = param_5;
    *(undefined1 *)(piVar4 + 0x38) = 0;
    FUN_001d3a4c(piVar4 + 0x32,param_4);
    iVar5 = FUN_000efa08(piVar4,param_1,param_2,param_3,0,param_5 + 0x484,param_6,
                         *(int *)(*piVar4 + -0xc) + (int)piVar4);
    if (iVar5 != 0) {
      return piVar4;
    }
    FUN_000fbae8(piVar4,0);
  }
  return (int *)0x0;
}

