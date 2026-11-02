// rea decompile_all
// name: FUN_000673cc
// address: 0x673cc
// body: available
// range: 0x673cc-0x67497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_000673cc(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)
           FUN_0006e06c(param_1,s_ARCTCPServer_0006749c,0,DAT_00067498,DAT_00067498,DAT_00067498,
                        DAT_00067498,DAT_00067498);
  *puVar1 = DAT_000674ac;
  puVar1[0x31] = 0;
  puVar1[0x30] = param_2;
  puVar1[0x32] = 0;
  *(undefined2 *)(puVar1 + 0x33) = 0;
  *(undefined2 *)((int)puVar1 + 0xce) = 0;
  *(undefined2 *)(puVar1 + 0x34) = 0;
  *(undefined1 *)((int)puVar1 + 0xd2) = param_3;
  *(undefined1 *)((int)puVar1 + 0xd3) = 0;
  *(undefined1 *)(puVar1 + 0x35) = 0;
  *(undefined1 *)((int)puVar1 + 0xd5) = 0;
  puVar1[0x37] = 0;
  puVar1[0x36] = 0;
  *DAT_000674b0 = puVar1;
  uVar2 = FUN_0018ab18(0);
  iVar3 = FUN_0018dc6c(uVar2,DAT_000674b4);
  if (iVar3 != 0) {
    FUN_000028a4(DAT_000674b8,*(undefined1 *)((int)puVar1 + 0xd2));
  }
  iVar3 = FUN_0018dc40(uVar2,DAT_000674bc);
  if (iVar3 != 0) {
    FUN_000028a4(DAT_000674c0,*(undefined1 *)((int)puVar1 + 0xd2));
  }
  return puVar1;
}

