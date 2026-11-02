// rea decompile_all
// name: FUN_001a52e0
// address: 0x1a52e0
// body: available
// range: 0x1a52e0-0x1a5471 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001a52e0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_001a5474;
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_1[2] != 0) {
    if ((code *)*DAT_001a5474 == entry) {
      FUN_0018a280();
    }
    else {
      (*(code *)*DAT_001a5474)();
    }
  }
  if (*param_1 != 0) {
    if ((code *)*puVar1 == entry) {
      FUN_0018a280();
    }
    else {
      (*(code *)*puVar1)();
    }
  }
  if (param_1[1] != 0) {
    FUN_001a7920();
  }
  if (param_1[4] != 0) {
    if ((code *)*puVar1 == entry) {
      FUN_0018a280();
    }
    else {
      (*(code *)*puVar1)();
    }
  }
  FUN_001a4d54(param_1 + 5,DAT_001a5478);
  FUN_001a4d54(param_1 + 0x11,DAT_001a547c);
  if (param_1[0x13] != 0) {
    FUN_001a2ca4();
  }
  FUN_001a4d54(param_1 + 7,DAT_001a5480);
  FUN_001a4d54(param_1 + 9,DAT_001a5480);
  FUN_001a4d54(param_1 + 0xb,DAT_001a5484);
  FUN_001a4d54(param_1 + 0xd,DAT_001a5488);
  FUN_001a4d54(param_1 + 0xf,DAT_001a548c);
  FUN_001a4d54(param_1 + 0x14,DAT_001a5484);
  FUN_001a4d54(param_1 + 0x18,DAT_001a5488);
  FUN_001a4d54(param_1 + 0x1d,DAT_001a5484);
  FUN_001a4d54(param_1 + 0x23,DAT_001a548c);
  FUN_001a4d54(param_1 + 0x16,DAT_001a5490);
  if (param_1[0x1a] != 0) {
    FUN_001a3338();
  }
  if (param_1[0x1b] != 0) {
    FUN_001a3510();
  }
  if (param_1[0x1c] != 0) {
    FUN_001a37f8();
  }
  if (param_1[0x1f] != 0) {
    FUN_001a40ac();
  }
  if (param_1[0x20] != 0) {
    FUN_001a3338();
  }
  FUN_001a4d54(param_1 + 0x21,DAT_001a5494);
  FUN_001a4d54(param_1 + 0x25,DAT_001a547c);
  FUN_001a4d54(param_1 + 0x27,DAT_001a5498);
  FUN_001a4d54(param_1 + 0x29,DAT_001a549c);
  if (param_1[0x2b] != 0) {
    FUN_001a71d0();
  }
  FUN_001a4d54(param_1 + 0x2c,DAT_001a54a0);
  FUN_001a4d54(param_1 + 0x2e,DAT_001a5494);
  FUN_001a4d54(param_1 + 0x30,DAT_001a54a4);
  FUN_001a4d54(param_1 + 0x32,DAT_001a54a8);
  if (param_1[0x35] != 0) {
    if ((code *)*puVar1 == entry) {
      FUN_0018a280();
    }
    else {
      (*(code *)*puVar1)();
    }
  }
  if ((code *)*puVar1 != entry) {
    (*(code *)*puVar1)(param_1);
    return;
  }
  FUN_0018a280(param_1);
  return;
}

