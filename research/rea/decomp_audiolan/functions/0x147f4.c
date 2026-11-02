// rea decompile_all
// name: FUN_000147f4
// address: 0x147f4
// body: available
// range: 0x147f4-0x148ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000147f4(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                 int param_7,uint param_8,undefined4 param_9,char *param_10,undefined4 param_11)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_2 + 4) = param_4;
  FUN_000122ec(*(undefined4 *)(param_1 + 0x44),param_2,param_3,param_4,param_6,param_8,param_9,
               param_11);
  if (*param_10 < '\0') {
    return;
  }
  iVar3 = param_2 + 0x14 + (uint)*(ushort *)(param_2 + -2);
  iVar4 = param_5 + 0x14 + (uint)*(ushort *)(param_5 + -2);
  pcVar1 = param_10;
  while( true ) {
    while( true ) {
      if (*pcVar1 < 0) break;
      uVar2 = *(uint *)(iVar4 + *pcVar1 * 4);
      if (param_8 != 0) {
        uVar2 = param_8 | uVar2 >> 8;
      }
      *(uint *)(iVar3 + pcVar1[1] * 4) = uVar2;
      pcVar1 = pcVar1 + 2;
    }
    param_3 = param_3 + -1;
    if (param_3 == 0) break;
    iVar3 = iVar3 + param_6 * 4;
    iVar4 = iVar4 + param_7 * 4;
    pcVar1 = param_10;
  }
  return;
}

