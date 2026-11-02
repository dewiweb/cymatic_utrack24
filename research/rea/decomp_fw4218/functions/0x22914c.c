// rea decompile_all
// name: FUN_0022914c
// address: 0x22914c
// body: available
// range: 0x22914c-0x2291f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0022914c(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((uint)param_1[4] <= (uint)(param_2 * 8 + param_1[3])) {
    iVar1 = param_1[5];
    iVar2 = FUN_0022cdc4(param_1);
    iVar3 = FUN_0022cdc4(param_1);
    uVar6 = param_2 * 8 + iVar3;
    uVar5 = iVar1 << 1;
    if ((uint)(iVar1 << 1) < uVar6) {
      uVar5 = uVar6;
    }
    uVar4 = FUN_0022868c(*param_1,param_1[2],param_1[5],uVar5);
    param_1[2] = uVar4;
    param_1[5] = uVar5;
    param_1[3] = param_1[2] + iVar2;
    param_1[4] = param_1[2] + param_1[5];
  }
  uVar4 = param_1[3];
  param_1[3] = param_2 * 8 + param_1[3];
  return uVar4;
}

