// rea decompile_all
// name: FUN_0000ae44
// address: 0xae44
// body: available
// range: 0xae44-0xaf0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0000ae44(uint param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  bool bVar6;
  
  bVar6 = param_2 == 0;
  uVar2 = param_1;
  if (-1 < (int)param_2) {
    uVar2 = (uint)*(byte *)(param_1 + 0x21);
    bVar6 = uVar2 == param_2;
  }
  if (!bVar6 && (-1 < (int)param_2 && (int)param_2 <= (int)uVar2)) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x48) + param_2 * 4);
    if (iVar3 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_001c7218(iVar3,DAT_0000b720,DAT_0000b71c,0xffffffff);
    }
    iVar3 = (**(code **)(*piVar5 + 0x28))(piVar5);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = (**(code **)(*piVar5 + 0x3c))(piVar5);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = (**(code **)(*piVar5 + 0x2c))(piVar5,0);
    if (iVar3 != 0) {
      cVar1 = (char)*(undefined4 *)(iVar3 + 0x114);
      if ((*(int *)(param_1 + 0x18) != 0 && cVar1 != -1) && (cVar1 != -2)) {
        *(char *)(param_1 + 0x2a) = cVar1;
      }
      uVar4 = FUN_001b2a1c(iVar3);
      *(undefined4 *)(param_1 + 0x24) = uVar4;
      return 1;
    }
  }
  return 0;
}

