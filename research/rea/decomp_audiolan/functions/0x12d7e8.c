// rea decompile_all
// name: FUN_0012d7e8
// address: 0x12d7e8
// body: available
// range: 0x12d7e8-0x12d87b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


short FUN_0012d7e8(int param_1,int param_2,int param_3)

{
  int iVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  sVar2 = 0;
  if (iVar3 != 0) {
    for (iVar1 = *(int *)(iVar3 + 0xf8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xf8)) {
      iVar3 = iVar1;
    }
    while (iVar3 != 0) {
      if ((*(uint *)(iVar3 + 0x68) & 0x1000000) == 0 && (*(uint *)(iVar3 + 0x68) & 0x10000) == 0) {
        if (param_2 != 0) {
          sVar2 = *(short *)(iVar3 + 0x50) + sVar2;
        }
        if (param_3 != 0) {
          sVar2 = *(short *)(iVar3 + 100) + sVar2;
        }
      }
      iVar3 = FUN_001d7a54(param_1);
    }
  }
  return sVar2;
}

