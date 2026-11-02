// rea decompile_all
// name: FUN_000d2cc4
// address: 0xd2cc4
// body: available
// range: 0xd2cc4-0xd2dd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000d2cc4(int param_1,undefined4 *param_2,uint param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_68;
  uint local_64;
  undefined1 auStack_60 [64];
  
  FUN_000028cc(auStack_60,s__02d__02d__02d_000d2dd4,*param_2,param_2[1],param_2[2]);
  uVar2 = FUN_0011eda0();
  FUN_0011f9d8(uVar2,auStack_60);
  local_64 = 0;
  local_68 = 0;
  uVar3 = FUN_000bfe18(param_1 + 0x14);
  uVar4 = FUN_000bfda0(param_1 + 0x14);
  uVar5 = FUN_000bda98(param_1 + 0x14);
  lVar1 = (ulonglong)(uVar5 >> 3) *
          ((ulonglong)uVar4 * ((ulonglong)param_3 * (ulonglong)uVar3 & 0xffffffff) & 0xffffffff);
  iVar6 = (int)((ulonglong)lVar1 >> 0x20);
  FUN_000bdabc(param_1 + 0x14,&local_64,&local_68,iVar6,(int)lVar1,
               (int)((ulonglong)param_3 * (ulonglong)uVar3 * (ulonglong)uVar4 >> 0x20) *
               (uVar5 >> 3) + iVar6);
  if (local_64 < 0x18) {
    FUN_000028cc(auStack_60,s_Rem__02dh_02dm_000d2df0,local_64,local_68);
  }
  else {
    FUN_000028cc(auStack_60,s_Rem__dhrs_000d2de4,local_64);
  }
  uVar2 = FUN_0011eda0();
  FUN_0012066c(uVar2,auStack_60);
  if ((local_64 == 0) && (local_68 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

