// rea decompile_all
// name: FUN_001a461c
// address: 0x1a461c
// body: available
// range: 0x1a461c-0x1a469f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a461c(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  *param_2 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0xfffffffe;
  }
  iVar6 = 0;
  iVar2 = FUN_000034d0();
  if (param_1[1] != 0) {
    iVar6 = FUN_000034d0();
  }
  if (*(code **)s_x2___s___s_001a46a0._0_4_ == entry) {
    iVar3 = FUN_0019b388(iVar2 + iVar6 + 3);
  }
  else {
    iVar3 = (**(code **)s_x2___s___s_001a46a0._0_4_)(iVar2 + iVar6 + 3);
  }
  *param_2 = iVar3;
  if (iVar3 != 0) {
    if (param_1[1] == 0) {
      iVar5 = *param_1;
      pcVar4 = &DAT_001a46ac;
    }
    else {
      iVar5 = *param_1;
      pcVar4 = s_x2___s___s_001a46a0 + 4;
      param_4 = param_1[1];
    }
    FUN_00002904(iVar3,iVar2 + iVar6 + 3,pcVar4,iVar5,param_4);
    bVar1 = *(byte *)*param_2;
    if (bVar1 - 0x62 < 0x18) {
      *(byte *)*param_2 = bVar1 - 0x20;
    }
    return 0;
  }
  return 0xfffffffc;
}

