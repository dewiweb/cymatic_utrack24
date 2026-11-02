// rea decompile_all
// name: FUN_0011d54c
// address: 0x11d54c
// body: available
// range: 0x11d54c-0x11d623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0011d54c(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,undefined2 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined2 *puVar4;
  
  iVar1 = FUN_0011be80();
  if (iVar1 != 0) {
    uVar2 = FUN_00142754();
    piVar3 = (int *)FUN_00130ef0(uVar2,1,param_4,0);
    if (piVar3 != (int *)0x0) {
      puVar4 = (undefined2 *)(**(code **)(*piVar3 + 0x24))(piVar3);
      if ((*(int *)(puVar4 + 6) == 0 || param_3 == 0) || ((ushort)puVar4[8] < param_3)) {
        *puVar4 = param_6;
      }
      else {
        *(undefined2 *)(*(int *)(puVar4 + 6) + param_3 * 0xc + -0xc) = param_6;
      }
      if ((*(int *)(puVar4 + 6) == 0 || param_3 == 0) || ((ushort)puVar4[8] < param_3)) {
        puVar4[1] = (short)param_5;
      }
      else {
        *(short *)(*(int *)(puVar4 + 6) + param_3 * 0xc + -10) = (short)param_5;
      }
      (**(code **)(*piVar3 + 0x70))(piVar3,param_3,param_5);
      return 1;
    }
  }
  return 0;
}

