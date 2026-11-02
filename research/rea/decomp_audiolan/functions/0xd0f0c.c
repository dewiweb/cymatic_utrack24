// rea decompile_all
// name: FUN_000d0f0c
// address: 0xd0f0c
// body: available
// range: 0xd0f0c-0xd1003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000d0f0c(void)

{
  bool bVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  FUN_000405d0(&local_60);
  bVar1 = local_54 == 0;
  if (bVar1) {
    local_54 = local_50;
  }
  if (bVar1 && local_54 == 0) {
    bVar1 = local_4c == 0;
    if (bVar1) {
      local_4c = local_48;
    }
    if (bVar1 && local_4c == 0) {
      bVar1 = local_44 == 0;
      if (bVar1) {
        local_44 = local_40;
      }
      if (bVar1 && local_44 == 0) {
        bVar1 = local_3c == 0;
        if (bVar1) {
          local_3c = local_38;
        }
        if (bVar1 && local_3c == 0) {
          bVar1 = local_34 == 0;
          if (bVar1) {
            local_34 = local_24;
          }
          if (bVar1 && local_34 == 0) {
            bVar1 = local_20 == 0;
            if (bVar1) {
              local_20 = local_1c;
            }
            if (bVar1 && local_20 == 0) {
              return local_20;
            }
          }
        }
      }
    }
  }
  return 1;
}

