// rea decompile_all
// name: FUN_0013a22c
// address: 0x13a22c
// body: available
// range: 0x13a22c-0x13a303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0013a22c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  
  FUN_000686a0(param_2);
  piVar1 = DAT_0013a304;
  iVar6 = 6;
  while( true ) {
    piVar2 = DAT_0013a308;
    uVar3 = *(uint *)(*piVar1 + *(int *)(*(int *)(param_1 + 0x18) + 4) * 0x40 + 0x24);
    uVar4 = uVar3 & 0x1f;
    uVar3 = (uVar3 & 0x3ffff) >> 0xd;
    if (uVar3 < uVar4) {
      uVar3 = uVar3 + 0x20;
    }
    if (uVar3 == uVar4) break;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      return 0;
    }
    FUN_000173f4(0x82);
  }
  if (iVar6 == 0) {
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar6 + 0x1c) < 0x10) {
    puVar5 = (uint *)(*DAT_0013a308 + *(int *)(iVar6 + 0x1c) * 4 + 0x3000);
    *puVar5 = *puVar5 & 0xfffff7ff;
    *(int *)(*piVar2 + 0x3104) = 1 << (*(uint *)(iVar6 + 0x1c) & 0xff);
  }
  FUN_00074bb8(*(undefined4 *)(iVar6 + 4));
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00012bfc();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 1;
}

