// rea decompile_all
// name: FUN_0017dc98
// address: 0x17dc98
// body: available
// range: 0x17dc98-0x17dd73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0017dc98(int param_1,uint param_2,uint param_3,char *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *local_20;
  
  local_20 = param_4;
  if (param_4 == (char *)0x0) {
    iVar3 = DAT_0017dd74;
    if ((-1 < (int)param_3) && (iVar3 = DAT_0017dd78, param_2 <= param_3)) {
      iVar3 = _DAT_0017dd7c;
    }
    FUN_001ac910(iVar3,s___INTERNAL_ERROR__>_NULL_PTR_0017dd7e + 2);
  }
  else if (param_3 < param_2) {
    local_20 = (char *)0x0;
    uVar2 = FUN_000031b0(*(undefined4 *)(param_1 + param_3 * 4),&local_20,0);
    *(undefined4 *)param_4 = uVar2;
    if ((local_20 != (char *)0x0) && (*local_20 == '\0')) {
      return 1;
    }
  }
  if (param_5 != 0) {
    iVar3 = DAT_0017dd74;
    if ((-1 < (int)param_3) && (iVar3 = DAT_0017dd78, param_2 <= param_3)) {
      iVar3 = _DAT_0017dd7c;
    }
    if (iVar3 != 0) {
      FUN_00002864(DAT_0017dd9c,0x100,param_5,&stack0x00000004);
      uVar2 = DAT_0017dda0;
      iVar1 = DAT_0017dd9c;
      *(undefined1 *)(DAT_0017dd9c + 0xff) = 0;
      FUN_000028c0(DAT_0017dda4,uVar2,iVar1,iVar3);
    }
  }
  return 0;
}

