// rea decompile_all
// name: FUN_00057710
// address: 0x57710
// body: available
// range: 0x57710-0x57793 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00057710(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_40 [8];
  undefined4 *local_20 [2];
  
  local_40[0] = 0;
  FUN_0017ae30(local_40,s_SIPHandler_00057794);
  uVar1 = *DAT_000577a0;
  uVar2 = DAT_000577a0[1];
  local_20[0] = (undefined4 *)FUN_001a0808(0x18,1);
  if (local_20[0] != (undefined4 *)0x0) {
    *local_20[0] = DAT_000577a4;
    local_20[0][1] = param_1;
    local_20[0][2] = uVar1;
    local_20[0][3] = uVar2;
    local_20[0][4] = param_2;
    local_20[0][5] = local_40;
  }
  thunk_EXT_FUN_004005e0(param_1 + 0xd0,local_20,0xffffffff);
  FUN_0017afd4(local_40,0xffffffff);
  FUN_0017aec0(local_40);
  return;
}

