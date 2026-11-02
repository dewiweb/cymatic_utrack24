// rea decompile_all
// name: FUN_001db588
// address: 0x1db588
// body: available
// range: 0x1db588-0x1db599 inclusive
// range: 0x1db5bc-0x1db5db inclusive
// range: 0x1db5e2-0x1db653 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001db588(int param_1)

{
  int iVar1;
  
  if (param_1 == 0x21) {
switchD_001db598_caseD_1:
    return 0;
  }
  if (0x21 < param_1) {
    iVar1 = param_1 - DAT_001db654;
    if (param_1 != DAT_001db654) {
      if (DAT_001db654 <= param_1) {
        if (iVar1 == DAT_001db65c) {
          return 1;
        }
        if (DAT_001db65c <= iVar1) {
          iVar1 = (iVar1 - DAT_001db65c) + DAT_001db664;
          if (iVar1 == 0) {
            return 4;
          }
          if (iVar1 + DAT_001db668 != 0) {
            return 1;
          }
          return 6;
        }
        if (DAT_001db660 <= iVar1) {
          return 1;
        }
        if (iVar1 != 1) {
          if (iVar1 != 2) {
            return 1;
          }
          return 0xe;
        }
        return 0xc;
      }
      if (param_1 == 0xf0) {
        return 1;
      }
      if (0xf0 < param_1) {
        if (param_1 == DAT_001db658) {
          return 0;
        }
        if (DAT_001db658 <= param_1) {
          if (param_1 - DAT_001db658 == 1) {
            return 2;
          }
          if (param_1 - DAT_001db658 != 2) {
            return 1;
          }
          return 8;
        }
        if (param_1 == 0x100) {
          return 1;
        }
        if (param_1 != 0x1000) {
          return 1;
        }
        return 3;
      }
      switch(param_1) {
      case 0x22:
        goto switchD_001db598_caseD_2;
      case 0x23:
        goto switchD_001db598_caseD_3;
      case 0x24:
        break;
      case 0x25:
        goto switchD_001db598_caseD_5;
      case 0x26:
        goto switchD_001db598_caseD_6;
      default:
        return 1;
      }
    }
switchD_001db598_caseD_4:
    return 10;
  }
  switch(param_1) {
  case 0:
  case 8:
  case 0x10:
  case 0x20:
    return 3;
  case 1:
  case 9:
  case 0x11:
    goto switchD_001db598_caseD_1;
  case 2:
  case 10:
  case 0x12:
switchD_001db598_caseD_2:
    return 2;
  case 3:
  case 0xb:
  case 0x13:
switchD_001db598_caseD_3:
    return 8;
  case 4:
  case 0xc:
  case 0x14:
    goto switchD_001db598_caseD_4;
  case 5:
  case 0xd:
  case 0x15:
switchD_001db598_caseD_5:
    return 0xc;
  case 6:
  case 0xe:
  case 0x16:
switchD_001db598_caseD_6:
    return 0xe;
  default:
    return 1;
  }
}

