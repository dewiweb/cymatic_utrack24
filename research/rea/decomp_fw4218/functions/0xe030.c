// rea decompile_all
// name: FUN_0000e030
// address: 0xe030
// body: available
// range: 0xe030-0xe14b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe148 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0000e128) */
/* WARNING: Removing unreachable block (ram,0x0000e12c) */

void FUN_0000e030(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *local_20;
  int *local_1c;
  
  iVar1 = param_1[2];
  FUN_001f00bc();
  if (param_1[0x18] == param_3) {
    (**(code **)(*param_1 + 0x74))(param_1);
    (**(code **)(*param_1 + 0x1b0))(param_1);
    iVar3 = param_1[2];
    FUN_001f00bc(DAT_0000dcfc);
    local_20 = *(int **)(iVar3 + 0x148);
    local_1c = *(int **)(iVar3 + 0x14c);
    if (local_1c == (int *)0x0) {
      if (local_20 != (int *)0x0) goto LAB_0000e148;
    }
    else {
      if (local_20 == (int *)0x0) {
LAB_0000e148:
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      *local_1c = *local_1c + 1;
    }
    FUN_001f06d4(DAT_0000dcfc);
    (**(code **)(*local_20 + 0x28))(local_20,param_1 + 0x16);
    FUN_00202008(&local_20);
    *(undefined1 *)(param_1 + 0x17) = 0;
    param_1[0x18] = -1;
    piVar2 = (int *)param_1[0xf];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2,param_1,8);
    }
  }
  FUN_001f06d4(iVar1 + 0x118);
  return;
}

