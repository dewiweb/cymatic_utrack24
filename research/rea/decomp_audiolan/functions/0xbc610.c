// rea decompile_all
// name: FUN_000bc610
// address: 0xbc610
// body: available
// range: 0xbc610-0xbc7a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000bc610(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint extraout_r3;
  uint uVar7;
  bool bVar8;
  undefined4 local_30 [2];
  int iStack_28;
  uint local_24;
  uint local_20;
  
  uVar1 = _DAT_000bc7a8;
  iStack_28 = param_1;
  local_24 = param_2;
  local_20 = param_3;
  FUN_001a0700();
  uVar3 = *(uint *)(param_1 + 0x214);
  uVar2 = (undefined1)local_20;
  uVar7 = local_20 & 0xff;
  bVar8 = uVar3 == local_24;
  if (uVar7 != 0xff) {
    uVar3 = (uint)*(byte *)(param_1 + 0x251);
  }
  if (uVar7 != 0xff && uVar3 != uVar7) {
    pbVar4 = *(byte **)(param_1 + 0x128);
    pbVar6 = *(byte **)(param_1 + 300);
    uVar3 = extraout_r3;
    while( true ) {
      if (pbVar4 != pbVar6) {
        uVar3 = (uint)*pbVar4;
      }
      if (pbVar4 == pbVar6 || uVar3 == uVar7) break;
      pbVar4 = pbVar4 + 1;
    }
    if (pbVar6 == pbVar4) {
      FUN_000028a4(s____ERROR__RavennaConfiguration__I_000bc7a9 + 3,uVar7);
      goto LAB_000bc6a4;
    }
    iVar5 = FUN_00041c14(s__cfg_AppSettings_Global_000bc7ec,local_30);
    if (iVar5 != 0) {
      iVar5 = FUN_00048f94(local_30[0],s_SampleRate_000bc804,uVar7);
      FUN_00041dd4(local_30[0]);
      if (iVar5 != 0) {
        *(undefined1 *)(param_1 + 0x251) = uVar2;
        FUN_000be614(param_1);
        goto LAB_000bc6f4;
      }
    }
    FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bc820,s_SampleRate_000bc804);
  }
  else {
    local_20 = CONCAT31(local_20._1_3_,*(undefined1 *)(param_1 + 0x251));
LAB_000bc6f4:
    if (bVar8) {
      local_24 = *(uint *)(param_1 + 0x214);
LAB_000bc738:
      FUN_000bd1e4(param_1);
      FUN_001a0d18(uVar1);
      return 1;
    }
    iVar5 = FUN_001d90f0(param_1 + 0x1f8,&local_24);
    if (iVar5 == 0) {
      FUN_000028a4(s_ERROR__RavennaConfiguration__Inv_000bc854,local_24);
    }
    else {
      iVar5 = FUN_00048f94(*(undefined4 *)(param_1 + 0x114),s_User_AudioMode_000bc810,local_24);
      if (iVar5 != 0) {
        *(uint *)(param_1 + 0x214) = local_24;
        goto LAB_000bc738;
      }
      FUN_000028a4(s_ERROR__RavennaConfiguration__Cou_000bc820,s_User_AudioMode_000bc810);
    }
  }
LAB_000bc6a4:
  FUN_001a0d18(uVar1);
  return 0;
}

