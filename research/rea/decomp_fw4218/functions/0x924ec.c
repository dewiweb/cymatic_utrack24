// rea decompile_all
// name: FUN_000924ec
// address: 0x924ec
// body: available
// range: 0x924ec-0x925d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000924ec(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [16];
  undefined4 local_20;
  
  iVar1 = FUN_00003d18(*param_2,&DAT_000925d8);
  if (iVar1 == 0) {
    uVar2 = FUN_000f8ee0();
    FUN_000f8e0c(uVar2,0);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00003d18(*param_2,&DAT_000925e0);
    if (iVar1 == 0) {
      FUN_000f8ee0();
      FUN_000f63e0();
      FUN_000c8adc();
      uVar2 = 0;
    }
    else {
      local_20 = 1;
      iVar1 = FUN_0004cca8(*param_2,&local_20);
      if (iVar1 == 0) {
        FUN_00002898(s_Unknown_frequency__s_000925e8,*param_2);
        uVar2 = 6;
      }
      else {
        FUN_0012e10c(auStack_30);
        uVar2 = FUN_000f8ee0();
        FUN_000b0e64(uVar2,auStack_30,6,local_20);
        uVar2 = FUN_000f8ee0();
        FUN_000f8eec(uVar2,auStack_30,2);
        FUN_0012e13c(auStack_30);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

