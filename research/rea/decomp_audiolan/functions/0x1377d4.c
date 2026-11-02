// rea decompile_all
// name: FUN_001377d4
// address: 0x1377d4
// body: available
// range: 0x1377d4-0x1378cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001377d4(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_0016d7a4(0xf0,DAT_001378d0);
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00137ea0(iVar1,param_3,1), piVar2 != (int *)0x0)) {
    iVar1 = piVar2[0x1c];
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + 0xc) + -1;
      *(int *)(iVar1 + 0xc) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(piVar2[0x1c] + 4) = 0;
      }
    }
    piVar2[0x1c] = param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 4) = piVar2[0x19];
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      *(int *)(param_2 + 8) = piVar2[0x1a];
    }
    FUN_000f58d4(piVar2 + 0x1e,param_1);
    iVar1 = FUN_000fb7e0(piVar2,0,DAT_001378d4,param_3 + 0x484,param_4,500,10,
                         *(int *)(*piVar2 + -0xc) + (int)piVar2);
    if (iVar1 != 0) {
      return piVar2;
    }
    FUN_000fbae8(piVar2,0);
  }
  return (int *)0x0;
}

