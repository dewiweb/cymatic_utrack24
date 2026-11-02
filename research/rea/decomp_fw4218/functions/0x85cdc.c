// rea decompile_all
// name: FUN_00085cdc
// address: 0x85cdc
// body: available
// range: 0x85cdc-0x85e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00085cdc(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [8];
  undefined4 local_3c;
  undefined1 auStack_38 [12];
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 auStack_20 [12];
  undefined1 auStack_14 [4];
  
  FUN_00063980(auStack_44);
  uVar1 = FUN_00230d7c(auStack_14);
  FUN_00244878(auStack_50,uVar1);
  for (puVar2 = (undefined4 *)FUN_002399d0(DAT_00085e40);
      puVar3 = (undefined4 *)FUN_00239990(DAT_00085e40), puVar3 != puVar2; puVar2 = puVar2 + 3) {
    local_5c = *puVar2;
    uStack_58 = puVar2[1];
    uStack_54 = puVar2[2];
    local_60 = FUN_00006604(local_5c,*(undefined4 *)(DAT_00085e44 + 0x1c));
    FUN_0024477c(auStack_50,&local_60);
  }
  FUN_00070a84(auStack_44,DAT_00085e44);
  FUN_002449c8(auStack_38,auStack_50);
  local_28 = FUN_000bd790(param_1,*(undefined4 *)(DAT_00085e44 + 0x1c));
  local_2c = (uint)*(ushort *)(DAT_00085e44 + 0x26);
  local_3c = *(undefined4 *)(DAT_00085e44 + 0x80);
  local_24 = (uint)*(ushort *)(DAT_00085e44 + 0x1a);
  FUN_0023bb74(auStack_20,DAT_00085e48);
  uVar4 = (uint)*(byte *)(DAT_00085e44 + 4);
  if (uVar4 == 2) {
    iVar5 = FUN_00084f7c(param_1,*(undefined4 *)(DAT_00085e44 + 0x1c));
    iVar6 = FUN_0023bdc8(auStack_20,0);
    *(int *)(iVar6 + 0xc) = iVar5;
    uVar4 = FUN_0023bdc8(auStack_20,1);
    *(int *)(uVar4 + 0xc) = iVar5 + 1;
  }
  FUN_000f4e84(uVar4);
  uVar1 = FUN_000f4fc0();
  FUN_00094734(uVar1,auStack_44);
  FUN_00094d30(uVar1,*(undefined4 *)(DAT_00085e44 + 0x80));
  FUN_00244974(auStack_50);
  FUN_000639f4(auStack_44);
  return;
}

