// rea decompile_all
// name: FUN_00003464
// address: 0x3464
// body: available
// range: 0x3464-0x34d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00003464(short *param_1,undefined1 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  short local_28 [2];
  short *local_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined4 local_18;
  
  iVar3 = 0;
  local_24 = param_1;
  puStack_20 = param_2;
  iStack_1c = param_3;
  local_18 = param_4;
  if (param_2 == (undefined1 *)0x0) {
    param_3 = 1;
    param_2 = &DAT_000034d4;
    local_24 = (short *)0x0;
  }
  while( true ) {
    if (param_3 == 0) {
      return -2;
    }
    iVar1 = FUN_00004ebc(local_28,*param_2,local_18);
    iVar3 = iVar3 + 1;
    if (iVar1 == -1) break;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    if (iVar1 != -2) {
      if (local_24 != (short *)0x0) {
        *local_24 = local_28[0];
      }
      iVar1 = 0;
      if (local_28[0] != 0) {
        iVar1 = iVar3;
      }
      return iVar1;
    }
  }
  puVar2 = (undefined4 *)FUN_00004104();
  *puVar2 = 4;
  return -1;
}

