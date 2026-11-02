// rea decompile_all
// name: FUN_00173550
// address: 0x173550
// body: available
// range: 0x173550-0x173657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00173550(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = FUN_00172e00(param_1,*(uint *)(_DAT_00173658 + 0x20) & 0xff,&local_18,2);
  FUN_00002898(s____Byte_0__x_and_Byte_1__x_0017365a + 2,local_18 & 0xff,local_18._1_1_);
  if (iVar1 == 0) {
    FUN_00002898(s_MADI__getMadiFs__Status_Register_001736fc);
    uVar2 = 0;
  }
  else {
    iVar1 = (int)(local_18 >> 8 & 0xc) >> 2;
    if (iVar1 == 0) {
      *param_2 = 1;
      FUN_00002898(s_Madi_Fs_is_44_1kHz_00173678);
    }
    else if (iVar1 == 1) {
      *param_2 = 2;
      FUN_00002898(s_Madi_Fs_is_48kHz_00173690);
    }
    else if (iVar1 == 2) {
      *param_2 = 3;
      FUN_00002898(s_Madi_Fs_is_88_2kHz_001736a4);
    }
    else {
      if (iVar1 != 3) {
        FUN_00002898(s_Madi_Fs_read_bits_is_out_of_rang_001736d0,iVar1);
        return 0;
      }
      *param_2 = 4;
      FUN_00002898(s_Madi_Fs_is_96kHz_001736bc);
    }
    uVar2 = 1;
  }
  return uVar2;
}

