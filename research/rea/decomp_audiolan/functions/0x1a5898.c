// rea decompile_all
// name: FUN_001a5898
// address: 0x1a5898
// body: available
// range: 0x1a5898-0x1a5949 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001a5898(int param_1,char *param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return 0;
  }
  if ((code *)*DAT_001a594c == entry) {
    piVar1 = (int *)FUN_0019b388(0xc);
  }
  else {
    piVar1 = (int *)(*(code *)*DAT_001a594c)(0xc);
  }
  if (piVar1 == (int *)0x0) {
    return -4;
  }
  *piVar1 = 0;
  FUN_001a4c50(piVar1 + 1);
  pcVar2 = (char *)FUN_00003318(param_2,0x3b);
  if (pcVar2 == (char *)0x0) {
    iVar3 = FUN_000034d0(param_2);
    pcVar2 = param_2 + iVar3;
  }
  else {
    iVar3 = FUN_0016e3b0(piVar1 + 1,pcVar2);
    if (iVar3 != 0) goto LAB_001a5940;
  }
  iVar3 = (int)pcVar2 - (int)param_2;
  if (iVar3 + 1 < 2) {
    iVar3 = -5;
  }
  else {
    if ((code *)*DAT_001a594c == entry) {
      iVar4 = FUN_0019b388(iVar3 + 1);
    }
    else {
      iVar4 = (*(code *)*DAT_001a594c)(iVar3 + 1);
    }
    *piVar1 = iVar4;
    if (iVar4 != 0) {
      FUN_001a3128(iVar4,param_2,iVar3);
      *(undefined4 *)(param_1 + 0xd0) = 2;
      FUN_001a4a80(param_1 + 0x1c,piVar1,0xffffffff);
      return 0;
    }
    iVar3 = -4;
  }
LAB_001a5940:
  FUN_001a176c(piVar1);
  return iVar3;
}

