// rea decompile_all
// name: FUN_000fad64
// address: 0xfad64
// body: available
// range: 0xfad64-0xfae93 inclusive
// range: 0xfafb0-0xfb02b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_000fad64(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 local_20;
  
  local_20 = param_4;
  iVar1 = FUN_00003d18(*param_2,&DAT_000fae94);
  if (iVar1 == 0) {
    uVar2 = FUN_00178f04();
    pbVar3 = (byte *)FUN_00177ba0(uVar2,0);
    if ((*pbVar3 & 0x70) == 0x10) {
      FUN_00002898(s_MADI__SPI_Reg__OK_000faec0);
    }
    else {
      FUN_00002898(s_MADI_ID__SPI_Reg__FAILED_000fae98);
    }
    local_20 = 0;
    uVar2 = FUN_00178f04();
    iVar1 = FUN_001777d0(uVar2,&local_20);
    if ((iVar1 == 0) || ((char)local_20 != '\x01')) {
      FUN_00002898(s_MADI_ID__I2C__FAILED_000faee4);
    }
    else {
      FUN_00002898(s_MADI_ID__I2C__OK_000faf0c);
    }
  }
  else {
    iVar1 = FUN_00003d18(*param_2,&DAT_000faf30);
    if (iVar1 == 0) {
      uVar2 = FUN_00178f04();
      iVar1 = FUN_00177558(uVar2,0);
      if (iVar1 == 0) {
        FUN_00002898(s_MADI_opt_FAILED_000faf34);
        return 0;
      }
      FUN_00002898(s_MADI_opt_OK_000faf5c);
    }
    else {
      iVar1 = FUN_00003d18(*param_2,&DAT_000faf80);
      if (iVar1 == 0) {
        uVar2 = FUN_00178f04();
        iVar1 = FUN_00177558(uVar2,1);
        if (iVar1 == 0) {
          FUN_00002898(s_MADI_coax_FAILED_000faf88);
          return 0;
        }
        FUN_00002898(s_MADI_coax_OK_000fb02c);
      }
      else {
        iVar1 = FUN_00003d18(*param_2,s_muteOn_000fb050);
        if (iVar1 == 0) {
          uVar2 = FUN_00178f04();
          FUN_00177728(uVar2,0);
          FUN_00002898(s_MADI_muteOn_OK_000fb058);
        }
        else {
          iVar1 = FUN_00003d18(*param_2,s_muteOff_000fb07c);
          if (iVar1 != 0) {
            return 6;
          }
          uVar2 = FUN_00178f04();
          FUN_00177728(uVar2,1);
          FUN_00002898(s_MADI_muteOff_OK_000fb084);
        }
      }
    }
  }
  return 0;
}

