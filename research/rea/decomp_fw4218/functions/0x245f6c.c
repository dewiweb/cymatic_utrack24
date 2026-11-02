// rea decompile_all
// name: FUN_00245f6c
// address: 0x245f6c
// body: available
// range: 0x245f6c-0x246043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00245f6c(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  local_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  do {
    iVar2 = param_2 - param_1;
    if (iVar2 >> 3 < 0x11) {
LAB_0024603c:
      return CONCAT44(local_30,iVar2);
    }
    if (param_3 == 0) {
      iVar2 = FUN_00245b38(param_1,param_2,param_2,0);
      local_30 = param_4;
      goto LAB_0024603c;
    }
    local_30 = FUN_0024855c(param_1,param_1 + ((param_2 - param_1 >> 3) / 2) * 8,param_2 + -8,
                            param_4);
    uVar1 = FUN_00070a08(&iStack_2c,local_30);
    iVar2 = FUN_002479b8(param_1,param_2,uVar1,param_4);
    FUN_00070a68(&iStack_2c);
    param_3 = param_3 / 2;
    FUN_00245f6c(iVar2,param_2,param_3,param_4);
    param_2 = iVar2;
  } while( true );
}

