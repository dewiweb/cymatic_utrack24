// rea decompile_all
// name: FUN_0006a740
// address: 0x6a740
// body: available
// range: 0x6a740-0x6a8ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0006a740(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_34 [8];
  undefined4 local_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  puVar1 = (undefined4 *)
           FUN_0006f700(param_1,s_MixerUpdater_0006a8f4,1,DAT_0006a8f0,DAT_0006a8f0,DAT_0006a8f0,
                        DAT_0006a8f0,DAT_0006a8f0);
  *puVar1 = DAT_0006a904;
  uVar2 = FUN_0022f69c(auStack_14);
  iVar3 = FUN_0023d57c(puVar1 + 0x30,uVar2);
  uVar2 = FUN_0022f69c(auStack_18);
  iVar3 = FUN_0023d57c(iVar3 + 0xc,uVar2);
  uVar2 = FUN_00230c74(auStack_1c);
  iVar3 = FUN_00243d2c(iVar3 + 0xc,uVar2);
  uVar2 = FUN_00230c74(auStack_20);
  iVar3 = FUN_00243d2c(iVar3 + 0x14,uVar2);
  uVar2 = FUN_00230c74(auStack_24);
  iVar3 = FUN_00243d2c(iVar3 + 0x14,uVar2);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  iVar3 = FUN_001282fc(iVar3 + 0x1c,DAT_0006a908,0xffffff81,0);
  iVar3 = FUN_001282fc(iVar3 + 8,0,0x7f);
  uVar2 = FUN_00230574(auStack_28);
  iVar3 = FUN_002373dc(iVar3 + 8,uVar2);
  iVar3 = FUN_00091838(iVar3 + 0x18,s_MixerControl_0006a90c);
  FUN_001282fc(auStack_34,0xc1400000,0);
  FUN_0023d468(iVar3 + -0x84,param_2,auStack_34);
  local_2c = 0;
  FUN_002436d8(iVar3 + -0x6c,param_2,&local_2c);
  local_2c = 0;
  FUN_002436d8(iVar3 + -0x58,param_2,&local_2c);
  *(char *)(iVar3 + -0x2c) = (char)param_2;
  local_2c = 0;
  FUN_002436d8(iVar3 + -0x44,param_2,&local_2c);
  return iVar3 + -0x144;
}

