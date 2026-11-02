// rea decompile_all
// name: FUN_001147c8
// address: 0x1147c8
// body: available
// range: 0x1147c8-0x114d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001147c8(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 int param_6,int *param_7)

{
  undefined4 local_28;
  
  local_28 = 0xffffffff;
  if (param_3 == 8) {
    FUN_00114764(param_1,&local_28,1,DAT_00114d10);
  }
  else if (param_3 == 0x18) {
    FUN_00114764(param_1,&local_28,1,DAT_00114d14);
  }
  if (param_4 == 8) {
    FUN_00114764(param_1,&local_28,0x1f,DAT_00114d18);
  }
  else if (param_4 == 0x18) {
    FUN_00114764(param_1,&local_28,0x1f,DAT_00114d1c);
  }
  if (param_4 != 0) {
    FUN_00114764(param_1,&local_28,0x3d,DAT_00114d20);
    FUN_00114764(param_1,&local_28,0x3e,DAT_00114d24);
    FUN_00114764(param_1,&local_28,0x3f,DAT_00114d28);
    FUN_00114764(param_1,&local_28,0x40,DAT_00114d2c);
    if (param_4 != 8) {
      FUN_00114764(param_1,&local_28,0x41,DAT_00114d30);
      FUN_00114764(param_1,&local_28,0x42,DAT_00114d34);
      FUN_00114764(param_1,&local_28,0x43,DAT_00114d38);
      FUN_00114764(param_1,&local_28,0x44,DAT_00114d3c);
      FUN_00114764(param_1,&local_28,0x45,DAT_00114d40);
      FUN_00114764(param_1,&local_28,0x46,DAT_00114d44);
      FUN_00114764(param_1,&local_28,0x47,DAT_00114d48);
      FUN_00114764(param_1,&local_28,0x48,DAT_00114d4c);
    }
  }
  if (param_3 != 0) {
    FUN_00114764(param_1,&local_28,0x5b,DAT_00114d50);
    FUN_00114764(param_1,&local_28,0x5c,DAT_00114d54);
    FUN_00114764(param_1,&local_28,0x5d,DAT_00114d58);
    FUN_00114764(param_1,&local_28,0x5e,DAT_00114d5c);
    if (param_3 != 8) {
      FUN_00114764(param_1,&local_28,0x5f,DAT_00114d60);
      FUN_00114764(param_1,&local_28,0x60,DAT_00114d64);
      FUN_00114764(param_1,&local_28,0x61,DAT_00114d68);
      FUN_00114764(param_1,&local_28,0x62,DAT_00114d6c);
      FUN_00114764(param_1,&local_28,99,DAT_00114d70);
      FUN_00114764(param_1,&local_28,100,DAT_00114d74);
      FUN_00114764(param_1,&local_28,0x65,DAT_00114d78);
      FUN_00114764(param_1,&local_28,0x66,DAT_00114d7c);
    }
  }
  FUN_00114764(param_1,&local_28,0x7a,DAT_00114d20);
  FUN_00114764(param_1,&local_28,0x7c,DAT_00114d80);
  if (param_3 == 8) {
    FUN_00114764(param_1,&local_28,0x7e,DAT_00114d10);
  }
  else if (param_3 == 0x18) {
    FUN_00114764(param_1,&local_28,0x7e,DAT_00114d14);
  }
  if (param_3 != 0) {
    FUN_00114764(param_1,&local_28,0xb5,DAT_00114d50);
    FUN_00114764(param_1,&local_28,0xb6,DAT_00114d54);
    FUN_00114764(param_1,&local_28,0xb7,DAT_00114d58);
    FUN_00114764(param_1,&local_28,0xb8,DAT_00114d5c);
    if (param_3 != 8) {
      FUN_00114764(param_1,&local_28,0xb9,DAT_00114d60);
      FUN_00114764(param_1,&local_28,0xba,DAT_00114d64);
      FUN_00114764(param_1,&local_28,0xbb,DAT_00114d68);
      FUN_00114764(param_1,&local_28,0xbc,DAT_00114d6c);
      FUN_00114764(param_1,&local_28,0xbd,DAT_00114d70);
      FUN_00114764(param_1,&local_28,0xbe,DAT_00114d74);
      FUN_00114764(param_1,&local_28,0xbf,DAT_00114d78);
      FUN_00114764(param_1,&local_28,0xc0,DAT_00114d7c);
    }
  }
  FUN_00114764(param_1,&local_28,0x97,DAT_00114d20);
  FUN_00114764(param_1,&local_28,0x98,DAT_00114d20);
  FUN_00114764(param_1,&local_28,0x7b,DAT_00114d20);
  FUN_00114764(param_1,&local_28,0x7d,DAT_00114d20);
  if (param_6 != 0) {
    FUN_00114764(param_1,&local_28,0x49,DAT_00114d84);
  }
  FUN_00114764(param_1,&local_28,0);
  *param_7 = param_1 + 0x4fc;
  return;
}

