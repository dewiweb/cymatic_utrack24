// rea decompile_all
// name: FUN_000f91e0
// address: 0xf91e0
// body: available
// range: 0xf91e0-0xf9253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000f91e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,
                undefined4 param_16)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_000f2bc4(param_1,DAT_000f9254,param_2,param_3);
  iVar2 = DAT_000f9258 + 0x1c;
  *piVar1 = DAT_000f9258;
  piVar1[1] = iVar2;
  piVar1[9] = param_4;
  piVar1[10] = param_5;
  piVar1[0xb] = param_6;
  piVar1[0xc] = param_7;
  piVar1[0xd] = param_8;
  piVar1[0xe] = param_9;
  piVar1[0xf] = param_10;
  piVar1[0x10] = param_11;
  iVar2 = FUN_0010f5fc(piVar1 + 0x11,param_12);
  iVar2 = FUN_0010f5fc(iVar2 + 0xc,param_13);
  iVar2 = FUN_0010e770(iVar2 + 0xc,param_14);
  iVar2 = FUN_0010e770(iVar2 + 8,param_15);
  iVar2 = FUN_000ea2a4(iVar2 + 8,param_16);
  return iVar2 + -0x6c;
}

