// rea decompile_all
// name: FUN_0000a884
// address: 0xa884
// body: available
// range: 0xa884-0xa90b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000a884(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = _DAT_0000a91c;
  if (param_2 == -2) {
    FUN_000028a4(s____DEBUG__DataStreamHandler__set_0000a91d + 3);
    *(undefined4 *)(param_1 + 0x24) = 0xfffffffe;
    return 1;
  }
  uVar3 = 0;
  iVar2 = 0;
  if (*(byte *)(param_1 + 0x21) != 0) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x18) + iVar2 * 4 + 0x68) == param_2) {
        uVar3 = 1;
        *(int *)(param_1 + 0x24) = param_2;
        goto LAB_0000a900;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x21));
  }
  pcVar1 = s_DEBUG__DataStreamHandler__setSyn_0000a958;
LAB_0000a900:
  FUN_000028a4(pcVar1,param_2);
  return uVar3;
}

