// rea decompile_all
// name: FUN_000acd6c
// address: 0xacd6c
// body: available
// range: 0xacd6c-0xace67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000acd6c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = param_3;
  uStack_24 = param_4;
  (**(code **)(*param_2 + 0x34))(&uStack_28,param_2);
  iVar1 = FUN_001bece0(&uStack_28);
  if (iVar1 == 0xb201) {
    iVar2 = FUN_0013e424(param_1 + 0x848,param_3);
  }
  else if (iVar1 == 0xb202) {
    iVar2 = FUN_0013e17c(param_1 + 0x848,param_3);
  }
  else if ((iVar1 < DAT_000ace68) || (DAT_000ace68 + 0x17 < iVar1)) {
    iVar2 = DAT_000ace6c;
    if ((DAT_000ace6c <= iVar1) && (iVar2 = DAT_000ace6c + 0x17, iVar1 <= iVar2)) {
      iVar2 = FUN_0013e9f8(param_1 + 0x848,iVar1 + -0xd070,param_3);
    }
  }
  else {
    iVar2 = FUN_0013e998(param_1 + 0x848,iVar1 + -0xd050,param_3);
  }
  return iVar2;
}

