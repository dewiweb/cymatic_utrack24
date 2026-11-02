// rea decompile_all
// name: FUN_000d6154
// address: 0xd6154
// body: available
// range: 0xd6154-0xd61f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000d6154(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  uVar1 = FUN_0004cecc();
  FUN_001f00bc();
  if (param_2 == 0) {
    FUN_000d6110(param_1);
  }
  else {
    puVar2 = (undefined4 *)FUN_001eb840(param_2 + 8);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_001f06d4(uVar1);
      return 0;
    }
    uVar5 = param_2;
    if ((*param_1 != 0) && (uVar3 = *(uint *)(*param_1 + 4), uVar3 < param_2)) {
      uVar5 = uVar3;
    }
    puVar2[1] = param_2;
    *puVar2 = 1;
    piVar6 = (int *)*param_1;
    if (piVar6 != (int *)0x0) {
      FUN_00003b88(puVar2 + 2,piVar6 + 2,uVar5);
      iVar4 = *piVar6;
      *piVar6 = iVar4 + -1;
      if (iVar4 + -1 == 0) {
        FUN_001dae24(*param_1);
      }
    }
    *param_1 = (int)puVar2;
  }
  FUN_001f06d4(uVar1);
  return 1;
}

