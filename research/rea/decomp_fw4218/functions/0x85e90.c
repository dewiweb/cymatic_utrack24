// rea decompile_all
// name: FUN_00085e90
// address: 0x85e90
// body: available
// range: 0x85e90-0x85f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00085e90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  iVar1 = FUN_000c149c(param_1);
  piVar2 = (int *)FUN_000faa14(iVar1 + 0x7c);
  iVar1 = DAT_00085f78;
  piVar2[-0x1f] = DAT_00085f78;
  *piVar2 = iVar1 + 0x34;
  iVar1 = FUN_00013224(s__dev_uart1_00085f7c,0);
  piVar2[1] = iVar1;
  iVar1 = FUN_001ffb40(DAT_00085fb0,s_sds___cne_AppSettings_Global_Ena_00085f88);
  if (iVar1 == 0) {
    FUN_00002898(DAT_00085fb4);
  }
  if ((*DAT_00085fb0 != '\0') && (piVar2[1] != -1)) {
    local_18 = 8;
    local_14 = 0;
    FUN_000134dc(piVar2[1],8,&local_18);
  }
  if (*DAT_00085fb8 == 0) {
    iVar1 = FUN_001c6b14(0x114,DAT_00085fbc);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_000d0688(iVar1);
    }
    *DAT_00085fb8 = iVar1;
  }
  return piVar2 + -0x1f;
}

