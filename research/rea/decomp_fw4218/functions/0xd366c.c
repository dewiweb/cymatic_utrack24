// rea decompile_all
// name: FUN_000d366c
// address: 0xd366c
// body: available
// range: 0xd366c-0xd374f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_000d366c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uStack_28 = param_2;
  uStack_24 = param_3;
  uStack_20 = param_4;
  iVar1 = FUN_0010fe70(param_1,param_2,param_3,param_4);
  piVar2 = (int *)FUN_000bb4e8(iVar1 + 0x14);
  iVar1 = DAT_000d3750;
  piVar2[-5] = DAT_000d3750;
  *piVar2 = iVar1 + 0x68;
  piVar2[0x1f] = param_5;
  iVar1 = FUN_001a7f24(piVar2 + 0x20);
  uVar3 = FUN_0022f2d0(&uStack_20);
  iVar1 = FUN_00239b28(iVar1 + 0x28,uVar3);
  uVar3 = FUN_00230d7c(&uStack_24);
  iVar1 = FUN_00244878(iVar1 + 0xc,uVar3);
  uVar3 = FUN_00230d7c(&uStack_28);
  iVar1 = FUN_00244878(iVar1 + 0xc,uVar3);
  *(undefined1 *)(iVar1 + 0x10) = 0;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  iVar1 = FUN_0013f9f0(iVar1 + 0x14,param_4);
  *(undefined1 *)(iVar1 + 0x19b) = 0;
  *(undefined1 *)(iVar1 + 0x19c) = 0;
  return CONCAT44(uStack_28,iVar1 + -0xe8);
}

