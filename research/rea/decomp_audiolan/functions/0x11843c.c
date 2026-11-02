// rea decompile_all
// name: FUN_0011843c
// address: 0x11843c
// body: available
// range: 0x11843c-0x1184d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0011843c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined8 uVar5;
  
  uVar1 = FUN_0017bfc0();
  (**(code **)(**(int **)(param_1 + 4) + 0x48))();
  uVar5 = FUN_00117fd8(*(int *)(param_1 + 4) + 0x220);
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar2 = FUN_0012bcac(param_1 + 0x120,uVar1,(int)uVar5,uVar4);
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  FUN_001194c4(param_1 + 0x140,uVar1,(int)uVar5,uVar4);
  uVar3 = *(uint *)(param_1 + 0x160);
  if (0x32 < uVar3) {
    uVar3 = 0x32;
  }
  uVar1 = extraout_r1;
  if (uVar3 == 0) {
    uVar1 = 1;
  }
  *(uint *)(param_1 + 0x160) = uVar3;
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 0x160) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x160);
                    /* WARNING: Could not recover jumptable at 0x001184d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 0x4c))();
  return;
}

