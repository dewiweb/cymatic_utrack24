// rea decompile_all
// name: FUN_0011a4fc
// address: 0x11a4fc
// body: available
// range: 0x11a4fc-0x11a5ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0011a4fc(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                  int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                  undefined4 param_12,undefined4 param_13,undefined4 param_14)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0016d7a4(0xe0,DAT_0011a5f0,param_3,param_4,param_1);
  if ((iVar1 != 0) &&
     (piVar2 = (int *)FUN_0011a5f4(iVar1,0,param_1,param_1 + 0x6a8), piVar2 != (int *)0x0)) {
    FUN_0010f650(piVar2 + 0x19,param_2);
    FUN_0010f650(piVar2 + 0x1d,param_3);
    piVar2[0x26] = param_10;
    piVar2[0x27] = param_11;
    piVar2[0x20] = param_6;
    piVar2[0x21] = param_5;
    piVar2[0x22] = param_4;
    piVar2[0x23] = param_9;
    piVar2[0x24] = param_8;
    piVar2[0x25] = param_7;
    FUN_0010e498(piVar2 + 0x2b,param_12);
    FUN_0010e498(piVar2 + 0x2d,param_13);
    FUN_000ea348(piVar2 + 0x28,param_14);
    *(byte *)(piVar2 + 0x32) = *(byte *)(piVar2 + 0x32) | 1;
    iVar1 = FUN_000e9bb4(piVar2,5,param_1 + 0x548);
    if (iVar1 != 0) {
      return piVar2;
    }
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return (int *)0x0;
}

