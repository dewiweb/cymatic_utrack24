// rea decompile_all
// name: FUN_00122920
// address: 0x122920
// body: available
// range: 0x122920-0x1229b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00122920(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = DAT_001229b8;
  *param_1 = *DAT_001229b8;
  iVar3 = piVar1[9];
  param_1[0x1c] = iVar3;
  *(int *)((int)param_1 + *(int *)(iVar3 + -0x38) + 0x70) = piVar1[10];
  piVar2 = (int *)FUN_00117bd8(param_1,piVar1 + 1,DAT_001229bc,**(undefined4 **)(param_2 + 0x7c),
                               param_1);
  iVar3 = *piVar1;
  *piVar2 = iVar3;
  *(int *)((int)piVar2 + *(int *)(iVar3 + -0x10)) = piVar1[7];
  *(int *)((int)piVar2 + *(int *)(*piVar2 + -0xc)) = piVar1[6];
  piVar2[0x10] = piVar1[8];
  piVar2[0x11] = param_2;
  iVar3 = FUN_00136c98(piVar2 + 0x12,piVar2);
  FUN_001350dc(*(undefined4 *)(iVar3 + 0x14),param_2);
  return iVar3 + -0x48;
}

