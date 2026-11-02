// rea decompile_all
// name: FUN_001a0864
// address: 0x1a0864
// body: available
// range: 0x1a0864-0x1a08ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a08c4 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

uint FUN_001a0864(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  int unaff_lr;
  
  if (param_3 == 0) {
    param_3 = unaff_lr;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  if (*DAT_001a0900 != DAT_001a0904) {
    if ((param_2 == 1) && (param_1 < 0x201)) {
      uVar1 = FUN_0003fd3c();
      if ((uVar1 & 3) == 0) {
        return uVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    uVar1 = FUN_001a0dbc(param_1 + 7 & 0xfffffff8,param_2,param_3);
    if (uVar1 == 0) {
      switch(param_2) {
      case 0:
      case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 4:
      case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 6:
      case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 8:
      case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        return 0;
      }
    }
    return uVar1;
  }
  return 0;
}

