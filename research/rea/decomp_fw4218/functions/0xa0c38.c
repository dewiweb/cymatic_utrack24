// rea decompile_all
// name: FUN_000a0c38
// address: 0xa0c38
// body: available
// range: 0xa0c38-0xa0d13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_000a0c38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uStack_28 = param_2;
  uStack_24 = param_3;
  uStack_20 = param_4;
  iVar1 = FUN_0010fe70(param_1,param_2,param_3,param_4);
  piVar2 = (int *)FUN_000c149c(iVar1 + 0x14);
  iVar1 = _DAT_000a0d14;
  piVar2[-5] = _DAT_000a0d14;
  *piVar2 = iVar1 + 0x68;
  piVar2[0x1f] = param_5;
  iVar1 = FUN_00129574(piVar2 + 0x20);
  FUN_002042f0(&uStack_28);
  uVar3 = FUN_000b4964();
  iVar4 = FUN_000b4840(uVar3,s___TelnetShellService_000a0d16 + 2,&uStack_28);
  if (iVar4 == 0) {
    FUN_00002898(s_No_TelnetShellService_present_000a0d2c);
    FUN_00204318(&uStack_28,0);
  }
  else {
    iVar4 = FUN_001b6c4c(&uStack_28);
    if (iVar4 != 0) {
      piVar2 = (int *)FUN_0022bca8(&uStack_28);
      (**(code **)(*piVar2 + 0x14))(piVar2,0x17);
    }
  }
  thunk_FUN_000b1228(&uStack_28);
  return CONCAT44(uStack_28,iVar1 + -0x94);
}

