// rea decompile_all
// name: FUN_001397c8
// address: 0x1397c8
// body: available
// range: 0x1397c8-0x13982b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001397c8(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = _DAT_00139830;
  piVar1 = DAT_0013982c;
  if (param_2 == (int *)0x0) {
    *param_1 = *DAT_0013982c;
    param_1[0x25] = iVar2;
    param_2 = piVar1;
  }
  piVar1 = (int *)FUN_00120528(param_1,&DAT_00002080,s_u__TaskAudioLanDeviceGetInfo_00139831 + 3);
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int *)((int)piVar1 + *(int *)(iVar2 + -0xc)) = param_2[1];
  iVar2 = FUN_0010f638(piVar1 + 0x19);
  iVar2 = FUN_0010e7e0(iVar2 + 0x10);
  iVar2 = FUN_00146670(iVar2 + 0xc,0x40);
  return iVar2 + -0x80;
}

