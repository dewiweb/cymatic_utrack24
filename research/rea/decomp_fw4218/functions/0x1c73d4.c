// rea decompile_all
// name: FUN_001c73d4
// address: 0x1c73d4
// body: available
// range: 0x1c73d4-0x1c7497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1c7494 to 0x248bd4 FUN_00248bd4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001c73d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint local_10;
  
  local_10 = param_4;
  FUN_001daeac(param_1,param_2,&local_10);
  local_10 = local_10 + 0x7e;
  bVar2 = local_10 == 0;
  if (((int)local_10 < 1) && (FUN_00249090(param_1,param_2,0,0), !bVar2)) {
    uVar1 = FUN_00248bd4(param_1,param_2);
    if ((uVar1 & 0x7fffffff) == 0) {
      thunk_FUN_000041ba(2,0);
    }
    return uVar1;
  }
  uVar4 = 0xfe < local_10;
  uVar3 = local_10 == 0xff;
  if (0xfe < (int)local_10) {
    FUN_000041ba(2);
    FUN_00249684(param_1,param_2,0,0);
    uVar1 = DAT_001c749c;
    if (!(bool)uVar4 || (bool)uVar3) {
      uVar1 = DAT_001c74a0;
    }
    return uVar1;
  }
  uVar1 = FUN_00248bd4(param_1,param_2);
  return uVar1;
}

