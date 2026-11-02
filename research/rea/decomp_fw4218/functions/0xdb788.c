// rea decompile_all
// name: FUN_000db788
// address: 0xdb788
// body: available
// range: 0xdb788-0xdb84f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000db788(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  int iVar1;
  int iStack_20;
  
  iVar1 = param_4;
  iStack_20 = param_4;
  if (1 < *(uint *)(param_1 + 0x28)) {
    return param_4;
  }
  do {
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + param_4;
      return param_4;
    }
    while( true ) {
      while (FUN_001fe1e4(&iStack_20), (*(uint *)(*(int *)(param_1 + 4) + 0xf44) & 2) != 0) {
        FUN_001fe1f8(iStack_20);
      }
      if (*(char *)(param_1 + 0x34) != '\x01') goto LAB_000db81c;
      if ((*param_3 != '\n') || (*(char *)(param_1 + 0x35) == '\r')) break;
      FUN_00076814(param_1,0xd);
      *(undefined1 *)(param_1 + 0x35) = 0xd;
      FUN_001fe1f8(iStack_20);
    }
    *(char *)(param_1 + 0x35) = *param_3;
LAB_000db81c:
    FUN_00076814(param_1,*param_3);
    FUN_001fe1f8(iStack_20);
    param_3 = param_3 + 1;
    iVar1 = iVar1 + -1;
  } while( true );
}

