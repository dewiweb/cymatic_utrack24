// rea decompile_all
// name: FUN_00084d48
// address: 0x84d48
// body: available
// range: 0x84d48-0x84deb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00084d48(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  undefined1 auStack_14 [4];
  
  uVar1 = FUN_00230d7c(auStack_14);
  FUN_00244878(auStack_20,uVar1);
  for (puVar2 = (undefined4 *)FUN_002399d0(DAT_00084dec);
      puVar3 = (undefined4 *)FUN_00239990(DAT_00084dec), puVar3 != puVar2; puVar2 = puVar2 + 3) {
    local_2c = *puVar2;
    uStack_28 = puVar2[1];
    uStack_24 = puVar2[2];
    local_30 = FUN_00006604(local_2c,*(undefined4 *)(DAT_00084df0 + 0x1c));
    FUN_0024477c(auStack_20,&local_30);
  }
  uVar1 = FUN_000bfdd4(param_1,DAT_00084df4);
  uVar4 = FUN_0011eda0();
  FUN_0011fc58(uVar4,uVar1,auStack_20);
  FUN_00244974(auStack_20);
  return;
}

