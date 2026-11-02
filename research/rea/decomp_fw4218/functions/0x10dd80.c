// rea decompile_all
// name: FUN_0010dd80
// address: 0x10dd80
// body: available
// range: 0x10dd80-0x10de93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0010dd80(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [64];
  
  uVar1 = (uint)*(byte *)(param_1 + 0xdb);
  if (uVar1 == 0) {
    uVar1 = FUN_000028cc(auStack_5c,&DAT_0010de9c,&DAT_0010de94);
  }
  else if (uVar1 == 1) {
    uVar1 = FUN_000028cc(auStack_5c,&DAT_0010de9c,s_Play_Pause_0010dea0);
  }
  else if (uVar1 == 2) {
    uVar1 = FUN_000028cc(auStack_5c,&DAT_0010de9c,s_Record_0010deb8);
  }
  else if (uVar1 == 3) {
    uVar1 = FUN_000028cc(auStack_5c,&DAT_0010de9c,s_Play_Stop_0010deac);
  }
  for (uVar5 = 0x1e; uVar5 < 0x33; uVar5 = uVar5 + 1) {
    puVar2 = (uint *)FUN_002444e4(param_1 + 0xe4,uVar5 - 0x1e);
    uVar1 = *puVar2;
    if (uVar1 == 0x23) {
      uVar3 = FUN_00232964(auStack_60,auStack_5c,auStack_64);
      uVar4 = FUN_00243490(param_1 + 0xa0,uVar5 - 0x1e);
      FUN_00232a4c(uVar4,uVar3);
      uVar1 = FUN_002329f0(auStack_60);
    }
  }
  return uVar1;
}

