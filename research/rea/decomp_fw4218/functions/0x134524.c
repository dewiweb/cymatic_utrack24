// rea decompile_all
// name: FUN_00134524
// address: 0x134524
// body: available
// range: 0x134524-0x13484b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00134524(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x25) == '\0') {
    if (param_2 == 0) {
      switch(*(undefined1 *)(param_1 + 0x26)) {
      case 0:
        break;
      case 1:
        *(undefined1 *)(param_1 + 0x26) = 6;
        break;
      case 2:
        *(undefined1 *)(param_1 + 0x26) = 1;
        break;
      case 3:
        *(undefined1 *)(param_1 + 0x26) = 2;
        break;
      case 4:
        *(undefined1 *)(param_1 + 0x26) = 3;
        break;
      case 5:
        *(undefined1 *)(param_1 + 0x26) = 4;
        break;
      case 6:
        *(undefined1 *)(param_1 + 0x26) = 5;
      }
    }
    else {
      switch(*(undefined1 *)(param_1 + 0x26)) {
      case 0:
        break;
      case 1:
        *(undefined1 *)(param_1 + 0x26) = 2;
        break;
      case 2:
        *(undefined1 *)(param_1 + 0x26) = 3;
        break;
      case 3:
        *(undefined1 *)(param_1 + 0x26) = 4;
        break;
      case 4:
        *(undefined1 *)(param_1 + 0x26) = 5;
        break;
      case 5:
        *(undefined1 *)(param_1 + 0x26) = 6;
        break;
      case 6:
        *(undefined1 *)(param_1 + 0x26) = 1;
      }
    }
    FUN_00134424(param_1);
  }
  else {
    switch(*(undefined1 *)(param_1 + 0x26)) {
    case 0:
      break;
    case 1:
      if (param_2 == 0) {
        *(char *)(param_1 + 0x27) = *(char *)(param_1 + 0x27) + -1;
        if (*(char *)(param_1 + 0x27) == '\0') {
          *(undefined1 *)(param_1 + 0x27) = 1;
        }
      }
      else {
        *(char *)(param_1 + 0x27) = *(char *)(param_1 + 0x27) + '\x01';
        if (0x1f < *(byte *)(param_1 + 0x27)) {
          *(undefined1 *)(param_1 + 0x27) = 0x1f;
        }
      }
      break;
    case 2:
      if (param_2 == 0) {
        *(char *)(param_1 + 0x28) = *(char *)(param_1 + 0x28) + -1;
        if (*(char *)(param_1 + 0x28) == '\0') {
          *(undefined1 *)(param_1 + 0x28) = 0xc;
        }
      }
      else {
        *(char *)(param_1 + 0x28) = *(char *)(param_1 + 0x28) + '\x01';
        if (0xc < *(byte *)(param_1 + 0x28)) {
          *(undefined1 *)(param_1 + 0x28) = 1;
        }
      }
      break;
    case 3:
      if (param_2 == 0) {
        *(char *)(param_1 + 0x29) = *(char *)(param_1 + 0x29) + -1;
        if (99 < *(byte *)(param_1 + 0x29)) {
          *(undefined1 *)(param_1 + 0x29) = 99;
        }
      }
      else {
        *(char *)(param_1 + 0x29) = *(char *)(param_1 + 0x29) + '\x01';
        if (99 < *(byte *)(param_1 + 0x29)) {
          *(undefined1 *)(param_1 + 0x29) = 0;
        }
      }
      break;
    case 4:
      if (param_2 == 0) {
        *(char *)(param_1 + 0x2a) = *(char *)(param_1 + 0x2a) + -1;
        if (0x18 < *(byte *)(param_1 + 0x2a)) {
          *(undefined1 *)(param_1 + 0x2a) = 0x18;
        }
      }
      else {
        *(char *)(param_1 + 0x2a) = *(char *)(param_1 + 0x2a) + '\x01';
        if (0x18 < *(byte *)(param_1 + 0x2a)) {
          *(undefined1 *)(param_1 + 0x2a) = 0;
        }
      }
      break;
    case 5:
      if (param_2 == 0) {
        *(char *)(param_1 + 0x2b) = *(char *)(param_1 + 0x2b) + -1;
        if (0x3b < *(byte *)(param_1 + 0x2b)) {
          *(undefined1 *)(param_1 + 0x2b) = 0x3b;
        }
      }
      else {
        *(char *)(param_1 + 0x2b) = *(char *)(param_1 + 0x2b) + '\x01';
        if (0x3b < *(byte *)(param_1 + 0x2b)) {
          *(undefined1 *)(param_1 + 0x2b) = 0;
        }
      }
    }
    FUN_00134424(param_1);
  }
  return;
}

