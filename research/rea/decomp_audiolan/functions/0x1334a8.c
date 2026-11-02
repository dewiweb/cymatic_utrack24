// rea decompile_all
// name: FUN_001334a8
// address: 0x1334a8
// body: available
// range: 0x1334a8-0x1335a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001334a8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                  undefined4 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)FUN_0016d7a4(0xa8,DAT_001335a4);
  piVar1 = DAT_001335a8;
  if (piVar3 != (int *)0x0) {
    iVar4 = *DAT_001335a8;
    piVar3[0x29] = DAT_001335ac;
    *piVar3 = iVar4;
    piVar3 = (int *)FUN_000ea620(piVar3,DAT_001335b4,DAT_001335b0);
    uVar2 = DAT_001335b8;
    iVar4 = *piVar1;
    *piVar3 = iVar4;
    *(int *)((int)piVar3 + *(int *)(iVar4 + -0xc)) = piVar1[1];
    piVar3[0x28] = param_4;
    iVar4 = FUN_000ea56c(piVar3,*(undefined1 *)(*(int *)(param_4 + 0x24) + 0x15d),param_1,param_3,
                         param_4,param_5,param_6,DAT_001335c0,*(undefined2 *)(param_1 + 0xc),param_2
                         ,0,0,DAT_001335bc,uVar2,*(int *)(*piVar3 + -0xc) + (int)piVar3);
    if (iVar4 != 0) {
      return piVar3;
    }
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  return (int *)0x0;
}

