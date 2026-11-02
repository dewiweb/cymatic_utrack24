// rea decompile_all
// name: FUN_001791b4
// address: 0x1791b4
// body: available
// range: 0x1791b4-0x17929b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001791b4(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  if (param_2 == 0x15e) {
    uVar2 = *(undefined4 *)(param_1 + 100);
    FUN_001a2920(&uStack_2c,param_1 + 4);
    *(undefined1 *)(param_1 + 0x380) = 1;
    iVar1 = FUN_000134dc(uVar2,10,param_1 + 0x37c);
    if (iVar1 == 0) {
      local_30 = param_5;
      iVar1 = FUN_00013480(uVar2,param_3,param_4,param_5);
      FUN_001a2938(&uStack_2c);
      if (iVar1 == param_5) {
        uVar2 = 1;
      }
      else {
        FUN_00002898(s_ERROR__HWCom__readWrite_failed___001792e0,iVar1,param_5);
        uVar2 = 0;
      }
    }
    else {
      FUN_00002898(_DAT_0017929c,iVar1,*(undefined1 *)(param_1 + 0x380));
      FUN_001a2938(&uStack_2c);
      uVar2 = 0;
    }
  }
  else {
    FUN_00002898(s___ERROR__HWCom__readWrite__Not_i_0017929e + 2,param_2);
    uVar2 = 0;
  }
  return CONCAT44(local_30,uVar2);
}

