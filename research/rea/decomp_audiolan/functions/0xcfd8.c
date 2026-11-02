// rea decompile_all
// name: FUN_0000cfd8
// address: 0xcfd8
// body: available
// range: 0xcfd8-0xd14b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd110 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0000cfd8(int param_1,short *param_2)

{
  int iVar1;
  int *piStack_28;
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(char *)(*(int *)(param_1 + 0x1c) + 100) == '\x01')) {
    return 1;
  }
  if (*(char *)(param_1 + 0x5c) != '\0') {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 8);
  FUN_001a0700(DAT_0000d850);
  piStack_28 = *(int **)(iVar1 + 0x148);
  piStack_24 = *(int **)(iVar1 + 0x14c);
  if (piStack_24 == (int *)0x0) {
    if (piStack_28 != (int *)0x0) goto LAB_0000d110;
  }
  else {
    if (piStack_28 == (int *)0x0) goto LAB_0000d110;
    *piStack_24 = *piStack_24 + 1;
  }
  FUN_001a0d18(DAT_0000d850);
  if (piStack_28 == (int *)0x0) {
    if (*param_2 == -1) goto LAB_0000d138;
  }
  else {
    iVar1 = (**(code **)(*piStack_28 + 0x38))(piStack_28,param_2,param_1 + 0x60);
    if (iVar1 == 0) {
LAB_0000d138:
      FUN_001b995c(&piStack_28);
      return 0;
    }
    iVar1 = *(int *)(param_1 + 8);
    FUN_001a0700(DAT_0000d850);
    piStack_20 = *(int **)(iVar1 + 0x148);
    piStack_1c = *(int **)(iVar1 + 0x14c);
    if (piStack_1c == (int *)0x0) {
      if (piStack_20 != (int *)0x0) goto LAB_0000d110;
    }
    else {
      if (piStack_20 == (int *)0x0) {
LAB_0000d110:
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      *piStack_1c = *piStack_1c + 1;
    }
    FUN_001a0d18(DAT_0000d850);
    (**(code **)(*piStack_20 + 0x24))(piStack_20,param_1 + 0x58);
    FUN_001b995c(&piStack_20);
  }
  *(undefined1 *)(param_1 + 0x5c) = 1;
  FUN_001b995c(&piStack_28);
  return 1;
}

