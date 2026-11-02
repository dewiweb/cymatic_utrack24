// rea decompile_all
// name: FUN_001a2e10
// address: 0x1a2e10
// body: available
// range: 0x1a2e10-0x1a2ea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a2e10(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *param_2 = 0;
  piVar1 = DAT_001a2ea4;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0xfffffffe;
  }
  if (param_1[1] == 0) {
    if (*DAT_001a2ea4 == 0) {
      iVar2 = FUN_000034d0();
      iVar2 = FUN_0019b388(iVar2 + 1);
    }
    else {
      iVar2 = FUN_000034d0();
      iVar2 = (*(code *)*piVar1)(iVar2 + 1);
    }
    *param_2 = iVar2;
    if (iVar2 == 0) {
      return 0xfffffffc;
    }
    FUN_000028d8(iVar2,&DAT_001a2ea8,*param_1);
  }
  else {
    if (*DAT_001a2ea4 == 0) {
      iVar2 = FUN_000034d0();
      iVar3 = FUN_000034d0(param_1[1]);
      iVar2 = FUN_0019b388(iVar2 + iVar3 + 2);
    }
    else {
      iVar2 = FUN_000034d0();
      iVar3 = FUN_000034d0(param_1[1]);
      iVar2 = (*(code *)*piVar1)(iVar2 + iVar3 + 2);
    }
    *param_2 = iVar2;
    if (iVar2 == 0) {
      return 0xfffffffc;
    }
    FUN_000028d8(iVar2,s__s__s_001a2eac,*param_1,param_1[1],param_4);
  }
  return 0;
}

