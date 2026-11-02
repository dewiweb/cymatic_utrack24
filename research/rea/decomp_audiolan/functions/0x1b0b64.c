// rea decompile_all
// name: FUN_001b0b64
// address: 0x1b0b64
// body: available
// range: 0x1b0b64-0x1b0bc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001b0b64(undefined4 param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 *puStack_1c;
  int iStack_18;
  
  local_20 = param_1;
  puStack_1c = param_2;
  iStack_18 = param_3;
  uVar1 = FUN_0017bfc0();
  iVar4 = -1;
  if (param_3 == 0) {
    param_3 = -1;
  }
  iVar2 = thunk_EXT_FUN_004002f0(local_20,local_28,param_3);
  if (iVar2 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = local_28[0];
    }
    uVar3 = FUN_0017bfc0();
    if (uVar3 < uVar1) {
      return (uVar3 - uVar1) + -1;
    }
    iVar4 = uVar3 - uVar1;
    if (iVar4 == 0) {
      return 1;
    }
    if (iVar4 == -1) {
      return -2;
    }
  }
  else if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return iVar4;
}

