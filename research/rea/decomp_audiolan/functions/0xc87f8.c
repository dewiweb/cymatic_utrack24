// rea decompile_all
// name: FUN_000c87f8
// address: 0xc87f8
// body: available
// range: 0xc87f8-0xc8983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000c87f8(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_b0 [80];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [16];
  
  if (param_2 < 8) {
    FUN_00065b7c(param_3,*(undefined4 *)(_DAT_000c8984 + param_2 * 4));
    return 1;
  }
  iVar1 = FUN_000c899c();
  if (iVar1 != 0) {
    FUN_00002904(auStack_20,0x10,s____Resource_lu_000c8985 + 3,param_2 - 8);
    FUN_000e1e1c(auStack_58,param_1 + 4);
    local_28 = 0;
    uStack_24 = 0;
    uVar2 = FUN_0014f7cc(auStack_38,auStack_20);
    iVar1 = FUN_000e1aac(auStack_58,uVar2);
    FUN_0014f868(auStack_38);
    FUN_001b98a8(&local_28);
    if (iVar1 != 0) {
      uVar3 = FUN_0015c970(auStack_58);
      local_60 = 0;
      uStack_5c = 0;
      FUN_0014f7b8(auStack_48);
      FUN_001b98a8(&local_60);
      uVar4 = 0;
      if (uVar3 != 0) {
        do {
          iVar1 = FUN_000e1cfc(auStack_58,uVar4);
          if (iVar1 == 0) break;
          FUN_0015c8fc(auStack_58,auStack_48);
          iVar1 = FUN_001609a4(auStack_48,&DAT_000c8994);
          if (iVar1 != 0) {
            FUN_000acc64(auStack_b0);
            iVar1 = FUN_000e1dac(auStack_58,auStack_b0);
            if ((iVar1 != 0) && (iVar1 = FUN_00159870(auStack_b0,param_3), iVar1 != 0)) {
              FUN_000acc88(auStack_b0);
              FUN_0014f868(auStack_48);
              FUN_000e1e40(auStack_58);
              return 1;
            }
            FUN_000acc88(auStack_b0);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
      }
      FUN_0014f868(auStack_48);
    }
    FUN_000e1e40(auStack_58);
  }
  return 0;
}

