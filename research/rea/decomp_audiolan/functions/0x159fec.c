// rea decompile_all
// name: FUN_00159fec
// address: 0x159fec
// body: available
// range: 0x159fec-0x15a0a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x15a0a0 to 0x1a0d18 FUN_001a0d18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0015a094) */

void FUN_00159fec(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uStack_20;
  
  uVar1 = DAT_0015a0a4;
  uStack_20 = param_4;
  FUN_001a0700();
  uVar2 = FUN_0000332e(*(undefined4 *)(param_2 + 0x1bc),&DAT_0015a0a8);
  if (*(uint *)(*(int *)(param_2 + 0x1bc) + -4) <= uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar3 = FUN_0000332e(*(int *)(param_2 + 0x1bc),&DAT_0015a0ac);
  if (*(uint *)(*(int *)(param_2 + 0x1bc) + -4) <= uVar3) {
    uVar3 = 0xffffffff;
  }
  if (uVar2 == uVar3) {
    FUN_001da358(param_1,&LAB_0015a0b0,&uStack_20);
    FUN_001a0d18(uVar1);
    return;
  }
  FUN_001d8dd0(param_1,param_2 + 0x1bc,uVar2 + 1,(uVar3 - uVar2) + -1);
  FUN_001a0d18(uVar1);
  return;
}

