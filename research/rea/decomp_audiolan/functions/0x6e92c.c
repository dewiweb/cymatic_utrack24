// rea decompile_all
// name: FUN_0006e92c
// address: 0x6e92c
// body: available
// range: 0x6e92c-0x6eb8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0006e92c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint local_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint local_28;
  
  puVar2 = (undefined4 *)FUN_000608cc(param_1,param_2,param_3);
  *puVar2 = DAT_0006eb90;
  iVar3 = FUN_0008472c(puVar2 + 0x12);
  iVar7 = iVar3 + -0x48;
  iVar4 = FUN_00153ce4(iVar7,param_2);
  if (iVar4 == 0) {
    FUN_000607c0(iVar7,iVar3 + -8,iVar3 + -0xc);
    bVar1 = false;
    for (iVar4 = 0; *(int *)(DAT_0006eb94 + iVar4 * 0x14) != 0; iVar4 = iVar4 + 1) {
      FUN_00003628(&local_3c,DAT_0006eb94 + iVar4 * 0x14 + 8,8);
      uVar5 = *(undefined4 *)(DAT_0006eb94 + iVar4 * 0x14 + 4);
      FUN_00003628(&local_2c,iVar3 + -8,8);
      iVar6 = FUN_00154c58(iVar7,*(undefined4 *)(iVar3 + -0xc),local_2c,local_28,uVar5);
      if (iVar6 == 1) {
        *(int *)(iVar3 + -0x10) = DAT_0006eb94 + iVar4 * 0x14;
        bVar1 = true;
        break;
      }
    }
    if (bVar1) {
      iVar3 = DAT_0006eb94 + iVar4 * 0x14;
      local_3c = *(uint *)(iVar3 + 0x10);
      puVar2 = (undefined4 *)(DAT_0006eb94 + iVar4 * 0x14);
      FUN_0006e7d0(iVar7,*puVar2,puVar2[1],puVar2[2],*(undefined4 *)(iVar3 + 0xc));
      FUN_00015210(&DAT_0006eb98,*(undefined4 *)(DAT_0006eb94 + iVar4 * 0x14));
      FUN_00015210(s_detected__0006eb9c);
      FUN_00060b4c(iVar7);
    }
    else if ((param_4 != 0) && (param_5 != 0)) {
      FUN_000038a0(&local_38,0x14);
      local_28 = param_5;
      local_3c = param_5;
      local_38 = param_4;
      FUN_0006e7d0(iVar7,param_4,uStack_34,uStack_30,local_2c);
      FUN_00015210(&DAT_0006eb98,local_38);
      FUN_00015210(s_with_sector_map__s___0006eba8,local_28);
      local_3c = (uint)*(ushort *)(iVar3 + -2);
      FUN_00015210(s_ID__manuf_device__02x__04x__04x__0006ebc0,*(undefined4 *)(iVar3 + -0xc),
                   *(undefined2 *)(iVar3 + -8),*(undefined2 *)(iVar3 + -6),
                   *(undefined2 *)(iVar3 + -4));
      FUN_00060b4c(iVar7);
    }
  }
  return iVar7;
}

