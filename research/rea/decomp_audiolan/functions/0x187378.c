// rea decompile_all
// name: FUN_00187378
// address: 0x187378
// body: available
// range: 0x187378-0x187421 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00187378(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  if (0 < *param_1) {
    return -3;
  }
  if (param_2 == 0x11) {
    if (param_6 == 0) {
      FUN_00187f94(param_1);
      goto LAB_001873bc;
    }
  }
  else if ((param_2 == 6) && (param_6 == 0)) {
    FUN_00187f84(param_1);
LAB_001873bc:
    if ((code *)param_1[0xe] != entry) {
      (*(code *)param_1[0xe])(param_1);
    }
    param_1[0xb] = param_5;
    param_1[1] = param_4;
    if (param_3 != 0) {
      FUN_000027f4((int)param_1 + 0x12,0x14,&DAT_00187424,param_3);
    }
    iVar1 = (*(code *)param_1[0x10])(param_1);
    if (iVar1 == 0) {
      if (param_2 == 0x11) {
        FUN_000027f4(param_1 + 0x1e,10,&DAT_00187424,&DAT_00187428);
      }
      else if (param_2 == 6) {
        FUN_000027f4(param_1 + 0x1e,10,&DAT_00187424,&DAT_0018742c);
      }
      return 0;
    }
    if ((code *)param_1[0xf] != entry) {
      (*(code *)param_1[0xf])(param_1);
    }
    return iVar1;
  }
  return -2;
}

