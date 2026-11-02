// rea decompile_all
// name: FUN_001b284c
// address: 0x1b284c
// body: available
// range: 0x1b284c-0x1b2937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_001b284c(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7)

{
  undefined4 uVar1;
  short local_e;
  short local_c;
  short local_a;
  
  if ((param_2 & 0xff) == param_5) {
    if ((param_3 & 0xffff) == (param_6 & 0xffff)) {
      local_e = (short)(param_3 >> 0x10);
      if ((local_e == 0) || (param_6._2_2_ == 0)) {
        uVar1 = 1;
      }
      else if (local_e == param_6._2_2_) {
        local_c = (short)param_4;
        if ((local_c == 0) || ((short)param_7 == 0)) {
          uVar1 = 1;
        }
        else if ((param_4 & 0xffff) == (param_7 & 0xffff)) {
          local_a = (short)(param_4 >> 0x10);
          if ((local_a == 0) || (param_7._2_2_ == 0)) {
            uVar1 = 1;
          }
          else if (local_a == param_7._2_2_) {
            uVar1 = 1;
          }
          else {
            uVar1 = 0;
          }
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

