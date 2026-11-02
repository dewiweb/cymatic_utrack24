// rea decompile_all
// name: FUN_001863a0
// address: 0x1863a0
// body: available
// range: 0x1863a0-0x18643d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001863a0(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int local_20;
  undefined4 local_1c;
  int local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  *param_4 = 0;
  if (param_2 < 0) {
    return -2;
  }
  if (param_3 < 0x65) {
    return -2;
  }
  if (DAT_00186440 < param_3) {
    return -2;
  }
  if (0 < param_2) {
    FUN_001726b2(param_1,param_2,&local_1c,&local_20,&local_18);
    if (local_18 == 0) {
      return -6;
    }
    if (local_20 == 0) {
      return -6;
    }
    iVar1 = FUN_001a6f04(*(undefined4 *)(*(int *)(local_18 + 0x20) + 8),s_INVITE_00186444);
    if (iVar1 == 0) {
      iVar1 = FUN_0017184c(param_1,local_1c,local_20,param_3,param_4,0);
    }
    else {
      iVar1 = FUN_00171cd0(param_1,param_4,*(undefined4 *)(local_20 + 4),param_3,
                           *(undefined4 *)(local_18 + 0x20));
      if (iVar1 != 0) {
        return iVar1;
      }
      if (0xc6 < param_3 - 0x65U) {
        return 0;
      }
      iVar1 = FUN_001727d0(param_1,*param_4,*(undefined4 *)(local_18 + 0x20));
    }
    if (iVar1 == 0) {
      return 0;
    }
    return iVar1;
  }
  return -6;
}

