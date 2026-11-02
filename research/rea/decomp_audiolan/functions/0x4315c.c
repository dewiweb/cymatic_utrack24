// rea decompile_all
// name: FUN_0004315c
// address: 0x4315c
// body: available
// range: 0x4315c-0x43247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0004315c(undefined4 param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_18;
  
  puVar1 = DAT_0004324c;
  local_18 = DAT_00043248;
  uVar2 = FUN_0004cdc0(*DAT_0004324c);
  iVar3 = FUN_0004e720(*puVar1,uVar2,param_1,&local_18);
  if (iVar3 != 0) {
    iVar3 = FUN_001d8eb0(&local_18,&DAT_00043250);
    if ((iVar3 == 0) ||
       ((((iVar3 = FUN_001d8eb0(&local_18,&DAT_00043254), iVar3 != 0 &&
          (iVar3 = FUN_001d8eb0(&local_18,&DAT_00043258), iVar3 != 0)) &&
         (iVar3 = FUN_001d8eb0(&local_18,&DAT_00043260), iVar3 != 0)) &&
        ((iVar3 = FUN_001d8eb0(&local_18,s_enable_00043268), iVar3 != 0 &&
         (iVar3 = FUN_001d8eb0(&local_18,s_ENABLE_00043270), iVar3 != 0)))))) {
      *param_2 = 0;
    }
    else {
      *param_2 = 1;
    }
    FUN_001da44c(&local_18);
    return 1;
  }
  FUN_001da44c(&local_18);
  return 0;
}

