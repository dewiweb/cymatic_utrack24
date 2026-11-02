// rea decompile_all
// name: FUN_000aac2c
// address: 0xaac2c
// body: available
// range: 0xaac2c-0xaacab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000aac2c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_18;
  undefined4 uStack_14;
  int local_10;
  
  iStack_18 = param_2;
  uStack_14 = param_3;
  local_10 = param_4;
  FUN_00236674(&iStack_18,param_1 + 0x8e0);
  do {
    FUN_00236654(&uStack_14,param_1 + 0x8e0);
    iVar2 = FUN_0022d878(&iStack_18,&uStack_14);
    if (iVar2 == 0) {
      local_10 = param_2;
      FUN_002368e4(param_1 + 0x8e0,&local_10);
      uVar3 = 1;
LAB_000aac68:
      return CONCAT44(iStack_18,uVar3);
    }
    piVar1 = (int *)FUN_0022d844(&iStack_18);
    if (*piVar1 == param_2) {
      FUN_00002898(DAT_000aacac);
      uVar3 = 0;
      goto LAB_000aac68;
    }
    FUN_00232c10(&iStack_18);
  } while( true );
}

