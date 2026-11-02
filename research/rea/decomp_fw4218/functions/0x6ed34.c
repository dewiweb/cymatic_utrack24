// rea decompile_all
// name: FUN_0006ed34
// address: 0x6ed34
// body: available
// range: 0x6ed34-0x6edcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0006ed34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_3;
  uStack_14 = param_4;
  puVar1 = (undefined4 *)FUN_00071bb0(param_1);
  *puVar1 = _DAT_0006edcc;
  iVar2 = FUN_00091838(puVar1 + 1,s___LED_Control_0006edce + 2);
  uVar3 = FUN_00230638(&uStack_14);
  iVar2 = FUN_002419a0(iVar2 + 0x24,uVar3);
  uVar3 = FUN_002304f4(&uStack_18);
  iVar2 = FUN_002412bc(iVar2 + 0xc,uVar3);
  *(undefined4 *)(iVar2 + 0xc) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x18) = 0xffffffff;
  *(undefined1 *)(iVar2 + 0x1c) = 0;
  *(undefined1 *)(iVar2 + 0x1d) = 0;
  *(undefined1 *)(iVar2 + 0x1e) = 0;
  *(undefined1 *)(iVar2 + 0x1f) = 0;
  *(undefined1 *)(iVar2 + 0x20) = 0;
  return iVar2 + -0x34;
}

