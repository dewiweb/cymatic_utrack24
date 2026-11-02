// rea decompile_all
// name: FUN_0012f9b0
// address: 0x12f9b0
// body: available
// range: 0x12f9b0-0x12fabf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0012f9b0(int param_1,undefined2 *param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0016d7a4(0x98,DAT_0012fac0);
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_0012fc08(iVar1,0,param_1,param_4), piVar2 != (int *)0x0))
  {
    if (0x1f < param_3 - (int)param_2) {
      *(undefined2 *)((int)piVar2 + 0x6e) = *param_2;
      *(undefined2 *)(piVar2 + 0x1c) = param_2[1];
      *(undefined2 *)((int)piVar2 + 0x72) = param_2[2];
      *(undefined2 *)(piVar2 + 0x1d) = param_2[3];
      *(undefined2 *)((int)piVar2 + 0x76) = param_2[4];
      *(undefined2 *)(piVar2 + 0x1e) = param_2[5];
      *(undefined2 *)((int)piVar2 + 0x7a) = param_2[6];
      *(undefined2 *)(piVar2 + 0x1f) = param_2[7];
      *(undefined2 *)((int)piVar2 + 0x7e) = param_2[8];
      *(undefined2 *)(piVar2 + 0x20) = param_2[9];
      *(undefined2 *)((int)piVar2 + 0x82) = param_2[10];
      *(undefined2 *)(piVar2 + 0x21) = param_2[0xb];
      FUN_00003628((int)piVar2 + 0x86,param_2 + 0xc,8);
      if (param_5 != 0) {
        *(undefined2 *)((int)piVar2 + 0x6a) = 0x20;
      }
      iVar1 = FUN_000e9bb4(piVar2,0x3c,param_1 + 0x548);
      if (iVar1 != 0) {
        return piVar2;
      }
    }
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return (int *)0x0;
}

