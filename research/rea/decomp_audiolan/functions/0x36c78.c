// rea decompile_all
// name: FUN_00036c78
// address: 0x36c78
// body: available
// range: 0x36c78-0x36d4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00036c78(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 auStack_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  
  FUN_00035778(DAT_00036d50,1,3);
  *DAT_00036d54 = 1;
  iVar5 = 0x20;
  puVar2 = DAT_00036d58;
  puVar4 = DAT_00036d5c;
  do {
    puVar2[0x18] = 0;
    puVar4[0x10] = 0;
    puVar2 = puVar2 + 0x30;
    puVar4 = puVar4 + 0x20;
    *puVar2 = 0;
    iVar5 = iVar5 + -1;
    *puVar4 = 0;
    puVar1 = DAT_00036d60;
  } while (iVar5 != 0);
  local_4c = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  FUN_0003763e(*DAT_00036d60,0,0,0,0);
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  FUN_000374f0(*puVar1,0,&local_50);
  while (uVar3 = FUN_00037100(*puVar1), uVar3 != 0) {
    if ((uVar3 & 1) == 0) {
      if ((int)(uVar3 << 0x1e) < 0) {
        FUN_00037278(*puVar1,auStack_1c,auStack_18,auStack_54,auStack_28,auStack_20,auStack_24);
      }
    }
    else {
      FUN_00037310(*puVar1,auStack_1c,auStack_18,auStack_54);
    }
  }
  FUN_00025b0c();
  FUN_00026204();
  local_50 = 2;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_2c = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_40 = 0xc;
  FUN_000374f0(*puVar1,&DAT_000017a0,&local_50);
  return;
}

