// rea decompile_all
// name: FUN_0004df8c
// address: 0x4df8c
// body: available
// range: 0x4df8c-0x4e24b inclusive
// range: 0x4e3a4-0x4e3b7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0004df8c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_160 [24];
  undefined4 local_148;
  int local_144;
  int iStack_140;
  uint local_13c;
  uint local_138;
  int local_128;
  int local_124;
  undefined4 local_120 [62];
  uint local_28;
  
  iVar5 = DAT_0004e24c;
  while ((iVar1 = FUN_000034d0(iVar5), iVar1 != 0x18 ||
         (iVar2 = FUN_00003960(iVar5,_DAT_0004e250), iVar4 = DAT_0004e24c, iVar2 != 0))) {
    iVar5 = iVar5 + iVar1 + 1;
  }
  uVar8 = (iVar5 + 0x19) - DAT_0004e24c;
  uVar7 = 0;
  iVar1 = *(int *)s_______ERROR__Could_not_query_fla_0004e252._2_4_;
  iVar5 = 0;
  while( true ) {
    iVar2 = FUN_00189fb4(0,iVar1 + uVar7,local_120);
    if (iVar2 != 0) {
      FUN_000151c4(s_______ERROR__Could_not_query_fla_0004e252 + 6);
      return 0;
    }
    iVar2 = FUN_00189f64(0,local_120[0],&local_128,&local_124);
    if (iVar2 != 0) {
      FUN_000151c4(s_ERROR__Could_not_query_flash_blo_0004e284);
      return 0;
    }
    uVar9 = (local_124 - local_128) + 1;
    uVar6 = uVar9;
    if (uVar7 == 0) {
      uVar6 = uVar9 - (iVar1 - local_128);
      iVar5 = local_128;
    }
    if (uVar8 - uVar7 < uVar6) {
      uVar6 = uVar8 - uVar7;
    }
    iVar2 = FUN_00189e68(0,local_128,uVar9);
    if (iVar2 != 0) {
      FUN_000151c4(s_ERROR__Could_not_add_r_w_area_0004e2b0);
      return 0;
    }
    iVar2 = FUN_00189e90(0,local_128,uVar9);
    if (iVar2 != 0) {
      FUN_000151c4(s_ERROR__Could_not_erase_flash_0004e2d0);
      return 0;
    }
    iVar2 = FUN_0018a1a4(0,iVar1 + uVar7,iVar4 + uVar7,uVar9);
    if (iVar2 != 0) break;
    uVar7 = uVar7 + uVar6;
    if (uVar8 <= uVar7) {
      uVar7 = 0;
      do {
        uVar6 = 0x100;
        if (uVar8 - uVar7 < 0x100) {
          uVar6 = uVar8 - uVar7;
        }
        iVar2 = FUN_0018a0b4(0,iVar1 + uVar7,&local_128,uVar6);
        if (iVar2 != 0) {
          FUN_000151c4(s_ERROR__Could_not_read_flash_0004e310);
          return 0;
        }
        iVar2 = FUN_0000339c(&local_128,iVar4 + uVar7,uVar6);
        if (iVar2 != 0) {
          FUN_000151c4(s_ERROR__Verify_failed_0004e330);
          return 0;
        }
        uVar7 = uVar7 + uVar6;
      } while (uVar7 < uVar8);
      local_28 = 0xffffffff;
      FUN_001102e0(DAT_0004e24c,uVar8,&local_28);
      local_28 = ~local_28;
      FUN_0009cdb8(auStack_160);
      uVar3 = FUN_000c8b00();
      iVar4 = FUN_000c7af8(uVar3,2,auStack_160);
      if (iVar4 == 0) {
        FUN_000151c4(s_ERROR__Application_meta_info_not_0004e348);
        uVar3 = FUN_000c8b00();
        iVar4 = FUN_000c7af8(uVar3,1,auStack_160);
        if (iVar4 == 0) {
          FUN_000151c4(s_ERROR__Bootloader_meta_info_not_f_0004e3b8);
          return 0;
        }
      }
      local_148 = 4;
      local_144 = *(int *)s_____ERROR__Could_not_write_confi_0004e370._0_4_ - iVar5;
      local_138 = local_28;
      iStack_140 = iVar1;
      local_13c = uVar8;
      iVar5 = FUN_0018a1a4(0,iVar5,auStack_160,0x38);
      if (iVar5 != 0) {
        FUN_000151c4(s_____ERROR__Could_not_write_confi_0004e370 + 4);
        return 0;
      }
      return 1;
    }
  }
  FUN_000151c4(s_ERROR__Could_not_write_flash_0004e2f0);
  return 0;
}

