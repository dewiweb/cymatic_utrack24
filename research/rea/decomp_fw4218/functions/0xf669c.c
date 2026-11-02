// rea decompile_all
// name: FUN_000f669c
// address: 0xf669c
// body: available
// range: 0xf669c-0xf679b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_000f669c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_30 = param_2;
  if (*(char *)(param_1 + 0x47d) == '\0') {
    uStack_2c = param_3;
    uStack_28 = param_4;
    iVar2 = FUN_0022f0b0(param_1 + 0x48c);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_000b4964();
      iVar2 = FUN_000b4840(uVar1,s_USBHighSpeedCtrlService_000f679c,param_1 + 0x480);
      if (iVar2 == 0) {
        FUN_00002898(DAT_000f67b4);
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_00203f7c(&uStack_30,param_1 + 0x480);
        uVar3 = FUN_0022f0d0(param_1 + 0x48c);
        iVar2 = FUN_000c8ad0(uVar3,uVar1);
        FUN_000d0508(&uStack_30);
        if (iVar2 == 1) {
          piVar4 = (int *)FUN_0022bc84(param_1 + 0x480);
          iVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4);
          if (iVar2 == 0) {
            FUN_00002898(DAT_000f67bc);
            uVar1 = 0;
          }
          else {
            uVar1 = 1;
            *(undefined1 *)(param_1 + 0x47d) = 1;
          }
        }
        else {
          FUN_00002898(DAT_000f67b8);
          uVar1 = 0;
        }
      }
    }
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(uStack_30,uVar1);
}

