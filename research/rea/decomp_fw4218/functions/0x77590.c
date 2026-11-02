// rea decompile_all
// name: FUN_00077590
// address: 0x77590
// body: available
// range: 0x77590-0x7763f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00077590(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00070ef0(param_1,s_UI_Main_Control_00077644,0,0x40,DAT_00077640,DAT_00077640,
                       DAT_00077640,DAT_00077640,DAT_00077640,DAT_00077640);
  iVar1 = FUN_0007d178(iVar1 + 0x114);
  piVar2 = (int *)FUN_001ae0f4(iVar1 + 0x18,param_2,iVar1 + 0x14);
  iVar1 = DAT_00077654;
  piVar2[-0x4b] = DAT_00077654;
  piVar2[-5] = iVar1 + 0x94;
  piVar2[-4] = iVar1 + 0xb0;
  piVar2[-3] = iVar1 + 0xd8;
  piVar2[-2] = iVar1 + 0xf0;
  piVar2[-1] = iVar1 + 0x104;
  piVar2[-6] = iVar1 + 0x80;
  *piVar2 = iVar1 + 0x118;
  return piVar2 + -0x4b;
}

