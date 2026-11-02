// rea decompile_all
// name: FUN_00077fac
// address: 0x77fac
// body: available
// range: 0x77fac-0x7800d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00077fac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [4];
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 auStack_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_24 = param_1;
  local_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_00129f48(auStack_50);
  local_4c = (undefined1)param_3;
  local_4b = (undefined1)param_4;
  local_4a = param_6;
  local_49 = param_7;
  local_48 = param_8;
  if (param_5 == 0) {
    local_47 = 0;
  }
  else {
    uVar2 = FUN_000f4dc8(auStack_2c,param_5);
    uVar1 = FUN_00078122(local_24,uVar2);
    FUN_000f4e1c(auStack_2c);
    local_47 = uVar1;
  }
  uVar2 = FUN_00077f86(local_24,local_20,auStack_50);
  FUN_00129f78(auStack_50);
  return uVar2;
}

