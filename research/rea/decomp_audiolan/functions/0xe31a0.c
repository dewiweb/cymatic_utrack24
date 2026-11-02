// rea decompile_all
// name: FUN_000e31a0
// address: 0xe31a0
// body: available
// range: 0xe31a0-0xe32d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000e31a0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 4) + 0xcc);
  *(undefined2 *)(param_1 + 0x34) = 0;
  uVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x1c))();
  uVar8 = 0;
  do {
    iVar3 = uVar8 + 1;
    if (iVar3 == 2) {
      iVar3 = 0;
    }
    uVar4 = (**(code **)(**(int **)(param_1 + iVar3 * 4 + 0x2c) + 0x1c))();
    iVar3 = param_1 + uVar8 * 4;
    FUN_000750b4(*(undefined4 *)(iVar3 + 0x2c),uVar4);
    FUN_000750ac(*(undefined4 *)(iVar3 + 0x2c),uVar2);
    FUN_00074e68(*(undefined4 *)(iVar3 + 0x2c));
    piVar1 = DAT_000e32d4;
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  uVar8 = 0;
  do {
    iVar3 = param_1 + uVar8 * 4;
    if (*(int *)(iVar3 + 0x24) != 0) {
      FUN_00014b7c();
      *(undefined4 *)(iVar3 + 0x24) = 0;
    }
    puVar5 = (uint *)FUN_00014bac(*(undefined4 *)(param_1 + 4),0);
    *(uint **)(iVar3 + 0x24) = puVar5;
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
    if (*(short *)(param_2 + 0x22) != 0) {
      FUN_0018a24c(puVar5,(*puVar5 & 0xffff) + 4);
    }
    iVar6 = *(int *)(iVar3 + 0x2c);
    uVar7 = *(int *)(iVar3 + 0x24) + 0xc;
    *(uint *)(iVar6 + 0x18) = uVar7;
    uVar8 = uVar8 + 1;
    *(uint *)(*piVar1 + *(int *)(iVar6 + 4) * 4 + 0x200) =
         *(uint *)(iVar6 + 0x20) & 0xff | (uVar7 & 0xff00ffff) << 8;
  } while (uVar8 < 2);
  FUN_0006a968(param_2);
  return 1;
}

