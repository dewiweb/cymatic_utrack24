// rea decompile_all
// name: FUN_00047560
// address: 0x47560
// body: available
// range: 0x47560-0x475bb inclusive
// range: 0x475e8-0x475f3 inclusive
// range: 0x47628-0x4763b inclusive
// range: 0x47690-0x4769b inclusive
// range: 0x476f0-0x476f7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_00047560(uint param_1,undefined4 param_2,int param_3)

{
  if (param_1 == 8) {
LAB_00047628:
    if (param_3 == 0) {
      switch(param_2) {
      case 0:
        goto switchD_000475ec_caseD_2;
      case 1:
        goto switchD_000475ec_caseD_3;
      case 2:
        goto switchD_000475ec_caseD_4;
      case 3:
        goto switchD_000475ec_caseD_a;
      case 4:
        goto switchD_000475ec_caseD_5;
      case 5:
        goto switchD_000475ec_caseD_6;
      case 6:
        goto switchD_000475ec_caseD_7;
      }
    }
    else {
      switch(param_2) {
      case 0:
        goto switchD_000475b4_caseD_2;
      case 1:
        goto switchD_000475b4_caseD_3;
      case 2:
        goto switchD_000475b4_caseD_4;
      case 3:
        goto switchD_000475b4_caseD_a;
      case 4:
        goto switchD_000475b4_caseD_5;
      case 5:
        goto switchD_000475b4_caseD_6;
      case 6:
        goto switchD_000475b4_caseD_7;
      }
    }
  }
  else {
    if ((int)param_1 < 8) {
      if (7 < param_1) {
        return 0xff;
      }
    }
    else if (param_1 != 0xc) {
      if ((int)param_1 < 0xc) {
        if ((param_1 != 9 && param_1 != 10) && param_1 != 0xb) {
          return 0xff;
        }
        goto LAB_00047628;
      }
      if ((param_1 != 0xd && param_1 != 0x40) && param_1 != 0xff) {
        return 0xff;
      }
    }
    if (param_3 == 0) {
      switch(param_2) {
      case 0:
      case 1:
      case 9:
        goto switchD_000475b4_caseD_0;
      case 2:
switchD_000475ec_caseD_2:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 3:
switchD_000475ec_caseD_3:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 4:
switchD_000475ec_caseD_4:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 5:
switchD_000475ec_caseD_5:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 6:
switchD_000475ec_caseD_6:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 7:
switchD_000475ec_caseD_7:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 10:
switchD_000475ec_caseD_a:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        goto switchD_000475b4_default;
      }
    }
    switch(param_2) {
    case 0:
    case 1:
    case 8:
    case 9:
switchD_000475b4_caseD_0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 2:
switchD_000475b4_caseD_2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 3:
switchD_000475b4_caseD_3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 4:
switchD_000475b4_caseD_4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 5:
switchD_000475b4_caseD_5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 6:
switchD_000475b4_caseD_6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 7:
switchD_000475b4_caseD_7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 10:
switchD_000475b4_caseD_a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
switchD_000475b4_default:
  return 0xff;
}

