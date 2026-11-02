// rea decompile_all
// name: FUN_00122844
// address: 0x122844
// body: available
// range: 0x122844-0x122943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00122844(int param_1,undefined4 *param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_00003d18(*param_2,s_route_00122944);
  if (iVar2 == 0) {
    if (1 < param_3) {
      sVar1 = FUN_00003258(param_2[1]);
      puVar3 = (undefined4 *)FUN_001b2d2c(*(undefined4 *)(param_1 + 0x14),(int)sVar1);
      if (puVar3 != (undefined4 *)0x0) {
        FUN_001bc094(*puVar3);
        FUN_0013de04();
        return 0;
      }
    }
  }
  else {
    iVar2 = FUN_00003d18(*param_2,&DAT_0012294c);
    if (iVar2 == 0) {
      if (1 < param_3) {
        sVar1 = FUN_00003258(param_2[1]);
        puVar3 = (undefined4 *)FUN_001b2d2c(*(undefined4 *)(param_1 + 0x14),(int)sVar1);
        if (puVar3 != (undefined4 *)0x0) {
          FUN_001bc094(*puVar3);
          FUN_0013df58();
          FUN_00002898(DAT_0012295c);
          FUN_00136168(*puVar3,(int)sVar1);
          return 0;
        }
      }
    }
    else {
      iVar2 = FUN_00003d18(*param_2,s_version_00122954);
      if (iVar2 == 0) {
        FUN_00002898(DAT_00122964,*DAT_00122960);
        return 0;
      }
    }
  }
  return 6;
}

