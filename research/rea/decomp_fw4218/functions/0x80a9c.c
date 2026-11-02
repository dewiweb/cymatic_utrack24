// rea decompile_all
// name: FUN_00080a9c
// address: 0x80a9c
// body: available
// range: 0x80a9c-0x80ba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00080a9c(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [9];
  undefined1 auStack_33 [7];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_00002898(DAT_00080ba8);
  FUN_00002898(DAT_00080bac);
  iVar1 = DAT_00080bb0;
  iVar3 = 0;
  do {
    puVar2 = *(undefined4 **)(iVar1 + iVar3 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00002898(&DAT_00080bb4,*puVar2,puVar2[1],puVar2[2]);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40);
  FUN_00002898(s__12s__12s__12s__8s__8s__8s__10s___00080c1c,s_Component_00080c10,
               s_CreationDate_00080c00,s_CreationTime_00080bf0,&DAT_00080bec,s_Version_00080be4,
               s_FlashID_00080bdc,s_BaseAddr_00080bd0,s_Length_00080bc8);
  FUN_00002898(s__12s__12s__12s__8s__8s__8s__10s_00080c58,&DAT_00080bc4,s_YYYYMMDD_00080c4c,
               s_HHMMSS_00080c44,&DAT_00080bc4,&DAT_00080bc4,&DAT_00080bc4,&DAT_00080bc4);
  FUN_00002898(DAT_00080c7c);
  iVar1 = _DAT_00080c80;
  uVar4 = 0;
  do {
    puVar5 = (undefined1 *)(iVar1 + uVar4 * 8);
    iVar3 = FUN_001eee4c(*puVar5,0,auStack_40);
    if (iVar3 == 0) {
      FUN_00002898(s____12s__12s__12s__8d__8d__8d_0x__00080c82 + 2,*(undefined4 *)(puVar5 + 4),
                   auStack_3c,auStack_33,local_2c,local_28,uStack_24,uStack_20,uStack_1c);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 6);
  return 0;
}

