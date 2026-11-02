// rea decompile_all
// name: FUN_000b4074
// address: 0xb4074
// body: available
// range: 0xb4074-0xb4217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000b4074(undefined4 param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_28;
  uint local_24;
  
  local_28 = param_3;
  local_24 = param_4;
  iVar2 = FUN_00003d18(*param_2,&DAT_000b4218);
  if (iVar2 == 0) {
    FUN_00178f04();
    iVar2 = FUN_001776c0();
    FUN_00002898(s_SPI_shift_register_OUT__000b4220);
    FUN_00002898(s_Byte_1__0x_02X__SyncSel0__d_Sync_000b423c,*(undefined1 *)(iVar2 + 0x18),
                 *(uint *)(iVar2 + 0x18) & 1,(*(uint *)(iVar2 + 0x18) & 3) >> 1);
    local_24 = *(uint *)(iVar2 + 0x14) >> 0x1f;
    local_28 = (*(uint *)(iVar2 + 0x14) & 0x7ffffff) >> 0x1a;
    FUN_00002898(_DAT_000b426c,*(undefined1 *)(iVar2 + 0x17),
                 (*(uint *)(iVar2 + 0x14) & 0x1ffffff) >> 0x18,
                 (*(uint *)(iVar2 + 0x14) & 0x3ffffff) >> 0x19);
    FUN_00002898(s_SPI_shift_register_OUT__000b4220 + 0x18);
    FUN_00002898(s____SPI_shift_register_IN__000b426e + 2);
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      FUN_00002898(s_Byte__d__0x_02X_000b428c,iVar4 + 1,*(undefined1 *)(iVar2 + 0x1c + iVar4));
    }
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_00003d18(*param_2,&DAT_000b42a0);
    if (iVar2 == 0) {
      if (param_3 == 3) {
        FUN_00002fec(param_2[1],&DAT_000b42a4,&local_24);
        FUN_00002fec(param_2[2],&DAT_000b42a8,&local_28);
        uVar1 = local_28;
        if (((int)local_24 < 1) || (9 < (int)local_24)) {
          FUN_00002898(s_Byte_number_not_in_range_1_______000b42ac,9);
          uVar3 = 6;
        }
        else {
          FUN_00002898(s___set_byte__d_to_0x_02X_000b42d0,local_24,local_28 & 0xff);
          FUN_00178f04();
          iVar2 = FUN_001776c0();
          *(char *)(iVar2 + (0x19 - local_24)) = (char)uVar1;
          uVar3 = 0;
        }
      }
      else {
        FUN_00002898(s_SPI_shift_register_OUT__000b4220 + 0x18);
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 6;
    }
  }
  return uVar3;
}

