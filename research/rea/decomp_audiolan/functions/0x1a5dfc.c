// rea decompile_all
// name: FUN_001a5dfc
// address: 0x1a5dfc
// body: available
// range: 0x1a5dfc-0x1a5eb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a5dfc(int param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    return 0xfffffffb;
  }
  if ((code *)*DAT_001a5eb8 == entry) {
    puVar1 = (undefined4 *)FUN_0019b388(4);
  }
  else {
    puVar1 = (undefined4 *)(*(code *)*DAT_001a5eb8)(4);
  }
  uVar4 = 0xfffffffc;
  *(undefined4 **)(param_1 + 0x68) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 0xd0) = 2;
    piVar5 = *(int **)(param_1 + 0x68);
    iVar2 = FUN_000034d0(param_2);
    if (iVar2 + 1U < 2) {
      uVar4 = 0xfffffffb;
    }
    else {
      if ((code *)*DAT_001a5eb8 == entry) {
        iVar3 = FUN_0019b388(iVar2 + 1);
      }
      else {
        iVar3 = (*(code *)*DAT_001a5eb8)(iVar2 + 1);
      }
      *piVar5 = iVar3;
      if (iVar3 != 0) {
        FUN_001a702a(iVar3,param_2,iVar2);
        return 0;
      }
    }
    puVar1 = DAT_001a5ebc;
    piVar5 = *(int **)(param_1 + 0x68);
    if (piVar5 != (int *)0x0) {
      if (*piVar5 != 0) {
        if ((code *)*DAT_001a5ebc == entry) {
          FUN_0018a280();
        }
        else {
          (*(code *)*DAT_001a5ebc)();
        }
      }
      if ((code *)*puVar1 == entry) {
        FUN_0018a280(piVar5);
      }
      else {
        (*(code *)*puVar1)(piVar5);
      }
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    return uVar4;
  }
  return 0xfffffffc;
}

