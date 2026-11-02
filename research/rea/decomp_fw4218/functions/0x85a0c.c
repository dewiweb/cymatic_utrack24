// rea decompile_all
// name: FUN_00085a0c
// address: 0x85a0c
// body: available
// range: 0x85a0c-0x85c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00085a0c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int local_158;
  undefined1 local_154;
  undefined4 local_150;
  undefined1 auStack_14c [4];
  undefined1 auStack_148 [4];
  undefined1 local_144;
  undefined1 auStack_140 [128];
  undefined1 auStack_c0 [128];
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [4];
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  FUN_000f4e84();
  uVar2 = FUN_000f4fb4();
  iVar3 = FUN_0006d818(uVar2);
  if (iVar3 == 0) {
    FUN_0006b674(&local_158);
    iVar3 = FUN_001b5850(uVar1);
    FUN_00093a14(uVar1,iVar3 + -1);
    local_154 = 0;
    local_150 = 0;
    local_158 = iVar3 + -1;
    FUN_0023223c(auStack_148,param_2);
    iVar3 = FUN_0022d2f0(auStack_148,0,10,u_MultiTrack_00085c70);
    if (iVar3 == 0) {
      local_144 = 4;
    }
    else {
      iVar3 = FUN_0022d2f0(auStack_148,0,0xb,u__MultiTrack_00085c88);
      if (iVar3 == 0) {
        local_144 = 4;
      }
      else {
        local_144 = 2;
      }
    }
    iVar3 = FUN_0022cefc(param_2,&DAT_00085ca0,0xffffffff);
    FUN_0022d1b0(auStack_28,param_2,iVar3 + 1,0xffffffff);
    FUN_0023223c(auStack_14c,auStack_28);
    FUN_00232190(auStack_28);
    uVar2 = FUN_0022d168(auStack_14c);
    FUN_000028cc(auStack_c0,&DAT_00085ca4,uVar2);
    FUN_000028cc(auStack_140,s_added_to_playlist_00085ca8);
    uVar2 = FUN_0006b620(auStack_40,&local_158);
    uVar4 = FUN_00093a08(uVar1);
    FUN_0007ea58(uVar4,uVar2);
    FUN_0006b6e8(auStack_40);
    iVar3 = FUN_00093a08(uVar1);
    FUN_00092bb8(uVar1,iVar3 + 0x30);
    uVar1 = FUN_0011eda0();
    FUN_0011ff88(uVar1,auStack_c0,auStack_140);
    uVar1 = FUN_0011eda0();
    FUN_000a1000(uVar1,0x1c);
    FUN_001d0130(2000);
    uVar1 = FUN_0011eda0();
    FUN_000a0ec8(uVar1,6,0);
    FUN_0006b6e8(&local_158);
    uVar1 = 1;
  }
  else {
    FUN_000028cc(auStack_c0,s_Song_insertion_not_allowed_00085c44);
    FUN_000028cc(auStack_140,s_in_Sync_Group_00085c60);
    uVar1 = FUN_0011eda0();
    FUN_0011ff88(uVar1,auStack_c0,auStack_140);
    uVar1 = FUN_0011eda0();
    FUN_000a1000(uVar1,0x1c);
    FUN_001d0130(2000);
    uVar1 = FUN_0011eda0();
    FUN_000a0ec8(uVar1,6,0);
    uVar1 = 0;
  }
  return uVar1;
}

