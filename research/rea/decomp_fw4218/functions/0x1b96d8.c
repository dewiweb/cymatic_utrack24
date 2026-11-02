// rea decompile_all
// name: FUN_001b96d8
// address: 0x1b96d8
// body: available
// range: 0x1b96d8-0x1b9743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong FUN_001b96d8(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  if (param_1[3] == 0) {
    FUN_00002898(DAT_001b9744);
  }
  else {
    pcVar3 = (char *)(param_1[3] + 5);
    for (iVar4 = 0; iVar4 < (int)(uint)*(ushort *)(param_1 + 5); iVar4 = iVar4 + 1) {
      iVar1 = FUN_0012d9a4(pcVar3 + 1);
      if ((*pcVar3 == '\x05') && (param_2 == (uint)(byte)pcVar3[5] * 0x100 + (uint)(byte)pcVar3[6]))
      {
        FUN_001ab000(param_3,pcVar3 + 7);
        return CONCAT44(param_1,1);
      }
      pcVar3 = pcVar3 + iVar1 + 5;
    }
    uVar2 = (**(code **)(*param_1 + 0x14))(param_1);
    FUN_00002898(DAT_001b9744 + 0x44,param_2,uVar2);
  }
  return ZEXT48(param_1) << 0x20;
}

