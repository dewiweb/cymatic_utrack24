// rea decompile_all
// name: FUN_0014f93a
// address: 0x14f93a
// body: available
// range: 0x14f93a-0x14f9d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0014f93a(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1 == param_2) {
    return param_1;
  }
  if ((*(char *)(param_1 + 0xc) != '\0') || (*(char *)(param_2 + 0xc) != '\0')) {
    iVar4 = *(int *)(param_2 + 4);
    if (iVar4 != 0) {
      iVar4 = iVar4 + 8;
    }
    FUN_0014f524(param_1,iVar4,*(undefined4 *)(param_2 + 8),param_4,param_4);
    return param_1;
  }
  if (*(int *)(param_2 + 8) == 0) {
    FUN_0014f588(param_1);
    return param_1;
  }
  piVar5 = (int *)(param_1 + 4);
  uVar1 = FUN_0004664c();
  FUN_001a0700(uVar1);
  uVar2 = 1;
  piVar3 = (int *)*piVar5;
  if (piVar3 != *(int **)(param_2 + 4)) {
    if (piVar3 != (int *)0x0) {
      iVar4 = *piVar3;
      *piVar3 = iVar4 + -1;
      if (iVar4 + -1 == 0) {
        FUN_0018a280(*piVar5);
      }
    }
    piVar3 = *(int **)(param_2 + 4);
    *piVar5 = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
    if ((uVar2 & 0xff) == 0) goto LAB_0014f9cc;
  }
  FUN_001a0d18(uVar1);
LAB_0014f9cc:
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return param_1;
}

