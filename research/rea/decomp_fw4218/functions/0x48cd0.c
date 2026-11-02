// rea decompile_all
// name: FUN_00048cd0
// address: 0x48cd0
// body: available
// range: 0x48cd0-0x48dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00048cd0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_20 [8];
  
  uVar1 = FUN_001dbf2c();
  uVar2 = FUN_001f01c4(uVar1,1);
  FUN_00003c08(uVar2,uVar1,0x32);
  puVar3 = (undefined4 *)FUN_001f01c4(0x20,1);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  FUN_001cf568(puVar3,s_bootstrap_00048dfc,0);
  uVar4 = FUN_001f01c4(0xb8,1);
  FUN_00003c58(uVar4,0xb8);
  iVar5 = FUN_001cf8e8(uVar4,s__bootstrapThread_00048e0b + 1,_DAT_00048e08,puVar3,uVar2,uVar1,2,2,0,
                       1);
  if (iVar5 != 0) {
    FUN_00013290(s_Error__Could_not_create_boostrap_00048e1c);
  }
  FUN_001cf70c(puVar3,0xffffffff);
  FUN_001cfbd8(uVar4,0xffffffff);
  FUN_001d0518(uVar4);
  FUN_001cfa80(uVar4);
  FUN_001eecc8(uVar2);
  FUN_001eecc8(uVar4);
  FUN_001cf5f8(puVar3);
  FUN_001eecc8(puVar3);
  uVar1 = FUN_001cfb1c();
  FUN_001cfcb8(uVar1,1,auStack_20);
  FUN_001d0518(uVar1);
  return;
}

