// rea decompile_all
// name: FUN_00009350
// address: 0x9350
// body: available
// range: 0x9350-0x948f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00009350(int param_1,int param_2)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short *local_28;
  short *local_24;
  int local_20;
  
  if (param_2 != 0xff) {
    iVar4 = param_1 + 0x118;
    FUN_001a0700(iVar4);
    local_28 = (short *)0x0;
    local_24 = (short *)0x0;
    local_20 = 0;
    piVar2 = *(int **)(param_1 + 0x148);
    if (piVar2 == (int *)0x0) {
      FUN_0010fa20(0,0,0);
    }
    else {
      iVar3 = (**(code **)(*piVar2 + 0x68))(piVar2,&local_28);
      psVar1 = local_28;
      if (iVar3 == 0) {
        FUN_0010fa20(local_28,local_20 - (int)local_28 >> 1,0);
      }
      else {
        for (; local_24 != psVar1; psVar1 = psVar1 + 1) {
          if (*psVar1 == param_2) {
            FUN_0010fa20(local_28,local_20 - (int)local_28 >> 1,0);
            FUN_001a0d18(iVar4);
            return 1;
          }
        }
        FUN_0010fa20(local_28,local_20 - (int)local_28 >> 1,0);
      }
    }
    FUN_001a0d18(iVar4);
  }
  return 0;
}

