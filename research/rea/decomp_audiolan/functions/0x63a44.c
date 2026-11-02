// rea decompile_all
// name: FUN_00063a44
// address: 0x63a44
// body: available
// range: 0x63a44-0x63b4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00063a44(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 extraout_r1;
  
  puVar1 = (undefined4 *)
           FUN_0006e06c(param_1,s_SAPReceiver_00063b50,0,DAT_00063b4c,DAT_00063b4c,DAT_00063b4c,
                        DAT_00063b4c,DAT_00063b4c);
  *puVar1 = DAT_00063b5c;
  puVar1[0x30] = param_2;
  *(undefined2 *)(puVar1 + 0x33) = 0;
  *(undefined2 *)((int)puVar1 + 0xce) = 0;
  *(undefined1 *)(puVar1 + 0x34) = 0;
  *(undefined1 *)((int)puVar1 + 0xd1) = 0;
  puVar1[0x35] = 0;
  puVar1[0x37] = 0;
  FUN_001a07ac(puVar1 + 0x36,s_SAPReceiver_00063b50);
  puVar1[0x3f] = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  *(undefined1 *)(puVar1 + 0x45) = 0;
  *(undefined1 *)((int)puVar1 + 0x115) = extraout_r1;
  puVar1[0x42] = 0;
  puVar1[0x41] = 0;
  puVar1[0x40] = 0;
  piVar2 = (int *)FUN_0010f82c(0xc,0);
  iVar3 = FUN_0010f82c(0x50,0);
  piVar2[2] = iVar3;
  *piVar2 = puVar1[0x3f];
  piVar2[1] = 1;
  puVar1[0x3f] = piVar2;
  puVar4 = (undefined1 *)piVar2[2];
  puVar1[0x41] = puVar4;
  puVar1[0x42] = puVar4 + 0x50;
  puVar1[0x41] = puVar4 + 0x50;
  *(undefined4 *)(puVar4 + 8) = 0;
  *(undefined4 *)(puVar4 + 0xc) = 0;
  *puVar4 = 0;
  puVar1[0x43] = puVar4;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined4 *)(puVar1[0x43] + 8) = puVar1[0x43];
  *(undefined4 *)(puVar1[0x43] + 0xc) = puVar1[0x43];
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  return puVar1;
}

