// rea decompile_all
// name: FUN_001812f0
// address: 0x1812f0
// body: available
// range: 0x1812f0-0x1813b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001812f0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  
  piVar1 = DAT_001813b4;
  if ((((*DAT_001813b4 == 0 || param_1 == (int *)0x0) || param_1 == (int *)0xffffffff) ||
      (*param_1 != DAT_001813b8)) || (iVar4 = param_1[1], local_20 = param_4, iVar4 == 0)) {
    return 0xffffffff;
  }
  do {
    while( true ) {
      iVar2 = FUN_0004d6f0(*piVar1,iVar4,param_1[2]);
      if (iVar2 == 0) {
        return 0xffffffff;
      }
      param_1[2] = param_1[2] + 1;
      iVar3 = FUN_00152714(iVar2);
      if (iVar3 != 0) break;
      if (param_2 != 0) goto LAB_0018137c;
    }
  } while (param_2 == 1);
LAB_0018137c:
  FUN_00152a48(&local_20,*piVar1,iVar2);
  FUN_000038f4(param_3,local_20,0x80);
  FUN_001da44c(&local_20);
  return 0;
}

