// rea decompile_all
// name: FUN_00171490
// address: 0x171490
// body: available
// range: 0x171490-0x171503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00171490(undefined4 param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = FUN_00171378(param_1,*_DAT_00171504 & 0xff,&local_18,2);
  FUN_00002898(s____Byte_0__x_and_Byte_1__x_00171506 + 2,local_18 & 0xff,local_18._1_1_);
  if (iVar1 == 0) {
    FUN_00002898(s_ADAT__getAdatModuleRevision___Re_0017153c);
  }
  else {
    *param_2 = local_18._1_1_ & 0xf;
    FUN_00002898(s_Module_ID_read_is__x_00171524,*param_2);
  }
  return iVar1 != 0;
}

