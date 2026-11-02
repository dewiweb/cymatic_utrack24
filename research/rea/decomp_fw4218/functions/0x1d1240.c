// rea decompile_all
// name: FUN_001d1240
// address: 0x1d1240
// body: available
// range: 0x1d1240-0x1d12fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_001d1240(int param_1,uint param_2,uint param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_4 == (int *)0x0) {
    uVar3 = s_L_______l___INTERNAL_ERROR__>_NU_001d12fc._0_4_;
    if ((-1 < (int)param_3) &&
       (uVar3 = s_L_______l___INTERNAL_ERROR__>_NU_001d12fc._4_4_, param_2 <= param_3)) {
      uVar3 = s_L_______l___INTERNAL_ERROR__>_NU_001d12fc._8_4_;
    }
    FUN_001f4b38(uVar3,s_L_______l___INTERNAL_ERROR__>_NU_001d12fc + 0xc);
  }
  else if (param_3 < param_2) {
    iVar2 = *(int *)(param_1 + param_3 * 4);
    *param_4 = iVar2;
    if (iVar2 != 0) {
      return 1;
    }
  }
  if (param_5 != 0) {
    iVar2 = s_L_______l___INTERNAL_ERROR__>_NU_001d12fc._0_4_;
    if ((-1 < (int)param_3) &&
       (iVar2 = s_L_______l___INTERNAL_ERROR__>_NU_001d12fc._4_4_, param_2 <= param_3)) {
      iVar2 = s_L_______l___INTERNAL_ERROR__>_NU_001d12fc._8_4_;
    }
    if (iVar2 != 0) {
      FUN_00002858(DAT_001d1324,0x100,param_5,&stack0x00000004);
      uVar3 = DAT_001d1328;
      iVar1 = DAT_001d1324;
      *(undefined1 *)(DAT_001d1324 + 0xff) = 0;
      FUN_000028b4(DAT_001d132c,uVar3,iVar1,iVar2);
    }
  }
  return 0;
}

