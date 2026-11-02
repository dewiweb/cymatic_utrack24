// rea decompile_all
// name: FUN_000b6254
// address: 0xb6254
// body: available
// range: 0xb6254-0xb635f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b6254(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [56];
  
  uVar1 = DAT_000b6360;
  FUN_001a0700();
  iVar2 = 0;
  do {
    if (*(int **)(DAT_000b6364 + iVar2 * 4) == param_2) goto LAB_000b629c;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  iVar2 = 0;
  do {
    if (*(int *)(DAT_000b6364 + iVar2 * 4) == 0) {
      *(int **)(DAT_000b6364 + iVar2 * 4) = param_2;
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  uVar3 = (**(code **)(*param_2 + 8))(param_2);
  uVar4 = FUN_0018afdc();
  iVar2 = FUN_00003960(uVar4,uVar3);
  if (iVar2 == 0) {
    FUN_00002904(auStack_48,0x32,DAT_000b6368,uVar3);
    iVar2 = FUN_001ac500(auStack_48);
    if (((iVar2 == 0) && (iVar2 = FUN_001ac5a0(auStack_48), iVar2 == 0)) &&
       (iVar2 = FUN_001ac444(auStack_48), iVar2 == 0)) {
      FUN_001ac364(auStack_48);
    }
  }
LAB_000b629c:
  FUN_001a0d18(uVar1);
  return 0;
}

