// rea decompile_all
// name: FUN_001d6158
// address: 0x1d6158
// body: available
// range: 0x1d6158-0x1d6237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d6194 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001d6158(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar4 = (int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x24) = param_3;
  *piVar4 = param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_3 != 0) {
    if (param_2 == 0) {
      piVar1 = (int *)FUN_001a0808(0x14,1);
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        *piVar1 = 0;
        piVar1[1] = 0x10000;
        piVar1[2] = 0;
        piVar1[3] = 0;
        piVar1[4] = 0;
        iVar3 = FUN_001a0808(1);
        piVar1[3] = iVar3;
        piVar1[4] = iVar3;
        iVar3 = piVar1[1];
        piVar2 = (int *)FUN_0019b388(iVar3 + 0xc);
        piVar2[1] = 0;
        *piVar2 = iVar3;
        piVar2[2] = *piVar1;
        *piVar1 = (int)piVar2;
      }
      *piVar4 = (int)piVar1;
      *(int **)(param_1 + 0x14) = piVar1;
    }
    iVar3 = FUN_001d631c(*piVar4,*(undefined4 *)(param_1 + 0x24));
    *(int *)(param_1 + 0x18) = iVar3;
    *(int *)(param_1 + 0x1c) = iVar3;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x24) + iVar3;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_000032f8();
}

