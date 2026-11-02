// rea decompile_all
// name: FUN_00173d76
// address: 0x173d76
// body: available
// range: 0x173d76-0x173dd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x173dce to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00173d76(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*param_1 == 0) {
    piVar2 = (int *)((int)param_1 + 0x27U & 0xffffffe0);
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[5] = 0;
      piVar2[4] = 0x1000;
      piVar3 = piVar2 + 6;
      if (piVar3 != (int *)0x0) {
        piVar2[7] = 0;
        piVar2[8] = 0;
        piVar2[9] = 0;
        piVar2[10] = 0;
        piVar2[0xb] = 0;
        piVar2[0xc] = 0;
        *piVar3 = (int)piVar2;
        piVar2[0xd] = 0;
        piVar2[0xe] = (int)piVar2;
        piVar2[0x10] = 0;
        piVar2[0xf] = piVar2[4];
        piVar2[0x11] = 0;
      }
      *param_1 = (int)piVar3;
      piVar2[0xb] = (int)piVar3;
      iVar1 = *param_1;
      if (iVar1 != 0) {
        iVar1 = iVar1 + 0x20;
      }
      *piVar2 = iVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00003538();
}

