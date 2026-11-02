// rea decompile_all
// name: FUN_0017184c
// address: 0x17184c
// body: available
// range: 0x17184c-0x17192d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0017184c(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5,
                int param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  *param_5 = 0;
  iVar2 = FUN_00174440(param_2,param_3);
  if ((iVar2 == 0) || (iVar3 = *(int *)(iVar2 + 0x20), iVar3 == 0)) {
    return -6;
  }
  if (((((99 < param_4 - 200U) || (param_3 == 0)) || (*(int *)(param_3 + 4) != 0)) &&
      ((cVar1 = *(char *)(iVar2 + 0x2c), cVar1 != '\a' && (cVar1 != '\b')))) && (cVar1 != '\t')) {
    if (param_3 == 0) {
      iVar3 = FUN_00171cd0(param_1,param_5,0,param_4,iVar3);
    }
    else {
      iVar3 = FUN_00171cd0(param_1,param_5,*(undefined4 *)(param_3 + 4),param_4,iVar3);
    }
    if (iVar3 != 0) {
      *param_5 = 0;
      return iVar3;
    }
    if (param_4 - 0x65U < 199) {
      iVar3 = FUN_001727d0(param_1,*param_5,*(undefined4 *)(iVar2 + 0x20));
      if (iVar3 != 0) {
        FUN_001a52e0(*param_5);
        *param_5 = 0;
        return iVar3;
      }
    }
    if (param_6 == 1) {
      if ((param_4 - 200U < 100) && (param_3 != 0)) {
        FUN_00173b7c(param_3,*param_5);
        FUN_001a3c88(*(undefined4 *)(param_3 + 4),0x15);
      }
      iVar3 = FUN_001a688c(*param_5);
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar2 + 4);
      FUN_001a7216(iVar2,iVar3);
      FUN_00179b24(param_1);
      *param_5 = 0;
    }
    return 0;
  }
  return -3;
}

