// rea decompile_all
// name: FUN_00179820
// address: 0x179820
// body: available
// range: 0x179820-0x17997b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_00179820(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)FUN_0006f700(param_1,param_2,0,param_3,param_4,param_5,param_6,param_7);
  *puVar1 = DAT_0017997c;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x33] = 0xffffffff;
  puVar1[0x32] = 0;
  puVar1[0x35] = 0;
  FUN_001f0168(puVar1 + 0x34,s_Timer_00179980);
  puVar1[0x3d] = _DAT_00179988;
  puVar1[0x3e] = 0;
  *(undefined1 *)(puVar1 + 0x3f) = 0;
  *(undefined1 *)((int)puVar1 + 0xfd) = 1;
  iVar2 = FUN_00003738(param_2);
  iVar3 = FUN_001f01c4(iVar2 + 6,1);
  FUN_000036d4(iVar3,param_2);
  FUN_001c6cb8(iVar3 + iVar2,s___Event_0017998a + 2);
  if (puVar1[0x3e] != iVar3) {
    FUN_001eecc8();
    puVar1[0x3e] = iVar3;
  }
  puVar4 = (undefined4 *)FUN_001f01c4(0x1c,1);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    iVar2 = puVar1[0x3e];
    if (puVar1[0x3e] == 0) {
      iVar2 = s_____TimerIsWaiting_00179994._0_4_;
    }
    *puVar4 = 0;
    FUN_001ce8fc(puVar4,iVar2,0,0);
    thunk_EXT_FUN_00400100(puVar4);
  }
  puVar1[0x31] = puVar4;
  puVar4 = (undefined4 *)FUN_001f01c4(0x1c,1);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    FUN_001ce8fc(puVar4,s_____TimerIsWaiting_00179994 + 4,0,0);
    thunk_EXT_FUN_00400100(puVar4);
  }
  puVar1[0x32] = puVar4;
  FUN_0006f678(puVar1);
  return puVar1;
}

