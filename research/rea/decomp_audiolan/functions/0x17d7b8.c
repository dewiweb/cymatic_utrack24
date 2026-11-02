// rea decompile_all
// name: FUN_0017d7b8
// address: 0x17d7b8
// body: available
// range: 0x17d7b8-0x17d84f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0017d7b8(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *local_28;
  byte local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  while( true ) {
    while (iVar1 = FUN_0019196c(*param_1,param_2,param_3,0), -1 < iVar1) {
      if ((iVar1 == 0) || (param_3 <= iVar1)) {
        return 0;
      }
      param_3 = param_3 - iVar1;
      param_2 = param_2 + iVar1;
    }
    local_18 = 0;
    FUN_00190c40(*param_1,&local_18);
    if ((local_18 != 4) && (local_18 != 0xb)) break;
    local_20 = 0;
    local_24[0] = 0;
    local_24[1] = 0;
    local_24[2] = 0;
    local_24[3] = 0;
    local_1c = DAT_0017d850;
    uVar2 = *param_1;
    local_24[(int)(((uint)((int)uVar2 >> 0x1f) >> 0x1d) + uVar2) >> 3] =
         local_24[(int)(((uint)((int)uVar2 >> 0x1f) >> 0x1d) + uVar2) >> 3] |
         (byte)(1 << (uVar2 & 7));
    local_28 = &local_20;
    iVar1 = FUN_001913d8(*param_1 + 1,0,local_24);
    if ((iVar1 < 1) && (iVar1 < 0)) {
      FUN_00190c40(*param_1,&local_28);
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

