// rea decompile_all
// name: FUN_001765b4
// address: 0x1765b4
// body: available
// range: 0x1765b4-0x1766b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17664a to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001765b4(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if (*param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*param_2 + 0x1c);
  }
  if (iVar3 != 0) {
    do {
      iVar2 = *(int *)(param_1 + 0x804);
      if (0x199 < iVar2 + 1U) {
        FUN_00176128(param_1);
        iVar2 = 0;
        *(undefined4 *)(param_1 + 0x804) = 0;
      }
      *(undefined1 *)(param_1 + iVar2) = 0x20;
      *(int *)(param_1 + 0x804) = *(int *)(param_1 + 0x804) + 1;
      if ((iVar3 == 0) || (pcVar4 = *(char **)(iVar3 + 4), *(char **)(iVar3 + 4) == (char *)0x0)) {
        pcVar4 = DAT_001766c0;
      }
      if (*pcVar4 == '\0') {
        pcVar4 = s__anonymous_001766b4;
      }
      else if ((iVar3 == 0) ||
              (pcVar4 = *(char **)(iVar3 + 4), *(char **)(iVar3 + 4) == (char *)0x0)) {
        pcVar4 = DAT_001766c0;
      }
      if (pcVar4 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      uVar1 = FUN_00003738();
      FUN_00176438(param_1,pcVar4,uVar1);
      iVar2 = *(int *)(param_1 + 0x804);
      if (0x199 < iVar2 + 2U) {
        FUN_00176128(param_1);
        iVar2 = 0;
        *(undefined4 *)(param_1 + 0x804) = 0;
      }
      *(undefined1 *)(param_1 + iVar2) = 0x3d;
      *(undefined1 *)(*(int *)(param_1 + 0x804) + param_1 + 1) = 0x22;
      *(int *)(param_1 + 0x804) = *(int *)(param_1 + 0x804) + 2;
      if ((iVar3 == 0) || (pcVar4 = *(char **)(iVar3 + 8), *(char **)(iVar3 + 8) == (char *)0x0)) {
        pcVar4 = DAT_001766c0;
      }
      FUN_00174eb8(param_1,pcVar4,2,param_3);
      iVar2 = *(int *)(param_1 + 0x804);
      if (0x199 < iVar2 + 1U) {
        FUN_00176128(param_1);
        iVar2 = 0;
        *(undefined4 *)(param_1 + 0x804) = 0;
      }
      *(undefined1 *)(param_1 + iVar2) = 0x22;
      *(int *)(param_1 + 0x804) = *(int *)(param_1 + 0x804) + 1;
      if (iVar3 != 0) {
        iVar3 = *(int *)(iVar3 + 0x10);
      }
    } while (iVar3 != 0);
  }
  return;
}

