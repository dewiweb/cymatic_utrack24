// rea decompile_all
// name: FUN_0004de94
// address: 0x4de94
// body: available
// range: 0x4de94-0x4df7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0004de94(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x48);
  uVar2 = uVar6 ^ 1;
  *(uint *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = 0;
  puVar1 = DAT_0004df7c;
  uVar4 = *(undefined4 *)(param_1 + uVar2 * 4 + 0x58);
  iVar3 = FUN_00189e90(0,uVar4,*DAT_0004df7c);
  if (iVar3 != 0) {
    FUN_000028a4(DAT_0004df80,*puVar1,uVar4);
    return 0;
  }
  piVar5 = (int *)**(int **)(param_2 + 0x10);
  if (piVar5 != *(int **)(param_2 + 0x10)) {
    do {
      iVar3 = FUN_0004d8c4(param_1,piVar5[2],1);
      if (iVar3 == 0) {
        FUN_000028a4(DAT_0004df88);
        return 0;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_2 + 0x10));
  }
  uVar4 = *(undefined4 *)(param_1 + uVar6 * 4 + 0x58);
  iVar3 = FUN_00189e90(0,uVar4,*puVar1);
  if (iVar3 != 0) {
    FUN_000028a4(DAT_0004df84,*puVar1,uVar4);
    return 0;
  }
  return 1;
}

