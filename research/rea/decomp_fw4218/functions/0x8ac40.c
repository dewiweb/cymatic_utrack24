// rea decompile_all
// name: FUN_0008ac40
// address: 0x8ac40
// body: available
// range: 0x8ac40-0x8ad9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0008ac40(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_20 [8];
  int *local_18;
  
  if (param_3 != 1) {
    return 6;
  }
  iVar1 = FUN_00003d18(*param_2,s_start_0008ada0);
  uVar3 = DAT_0008ada8;
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_000b1210(auStack_20);
    *puVar2 = uVar3;
    uVar3 = FUN_000b4964();
    iVar1 = FUN_000b4840(uVar3,s_TelnetShellService_0008adb4,auStack_20);
    if (iVar1 == 0) goto LAB_0008ad78;
    iVar1 = FUN_001b6c4c(auStack_20);
    if (iVar1 != 0) {
      FUN_001f4728(&DAT_0008adb0);
      FUN_001f47c8(&DAT_0008adb0);
      FUN_001f466c(&DAT_0008adb0);
      FUN_001f458c(&DAT_0008adb0);
      (**(code **)(*local_18 + 0x14))(local_18,0x17);
    }
  }
  else {
    iVar1 = FUN_00003d18(*param_2,&DAT_0008adac);
    if (iVar1 != 0) {
      return 6;
    }
    puVar2 = (undefined4 *)FUN_000b1210(auStack_20);
    *puVar2 = uVar3;
    uVar3 = FUN_000b4964();
    iVar1 = FUN_000b4840(uVar3,s_TelnetShellService_0008adb4,auStack_20);
    if (iVar1 == 0) {
LAB_0008ad78:
      FUN_00002898(s_No_TelnetShellService_present_0008add4);
      FUN_000b1248(auStack_20,0);
      FUN_000b1228(auStack_20);
      return 6;
    }
    iVar1 = FUN_001b6c4c(auStack_20);
    if (iVar1 != 0) {
      (**(code **)(*local_18 + 0x18))();
      FUN_001f4728(s__dev_uart1_0008adc8);
      FUN_001f47c8(s__dev_uart1_0008adc8);
      FUN_001f466c(s__dev_uart1_0008adc8);
      FUN_001f458c(s__dev_uart1_0008adc8);
    }
  }
  FUN_000b1228(auStack_20);
  return 0;
}

