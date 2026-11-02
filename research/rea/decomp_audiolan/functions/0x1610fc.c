// rea decompile_all
// name: FUN_001610fc
// address: 0x1610fc
// body: available
// range: 0x1610fc-0x16116b inclusive
// range: 0x16117a-0x16117d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_001610fc(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_1;
  iVar1 = FUN_0010f8a8(0,0,param_2,param_3,param_1,param_2,param_3);
  if (iVar1 == 0) {
    if (((int)param_2 < 0) || (0x16 < param_2)) {
      param_2 = 0;
    }
    iVar1 = FUN_0010f84e(0,0,*(undefined4 *)(DAT_00161180 + param_2 * 4),param_3);
  }
  iVar2 = iVar1;
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = FUN_000034d0();
    iVar3 = FUN_000034d0(iVar1);
    uVar4 = FUN_0016d76c(iVar2 + iVar3 + 1);
    uVar4 = FUN_00003418(uVar4,*(undefined4 *)(param_1 + 4));
    iVar2 = FUN_00003604(uVar4,iVar1);
    FUN_0016d744(*(undefined4 *)(param_1 + 4));
    FUN_0016d744(iVar1);
  }
  *(int *)(param_1 + 4) = iVar2;
  return CONCAT44(iVar5,param_1);
}

