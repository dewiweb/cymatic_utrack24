// rea decompile_all
// name: FUN_0007f9b8
// address: 0x7f9b8
// body: available
// range: 0x7f9b8-0x7fb1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0007f9b8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_5 == 0) {
    piVar2 = (int *)FUN_0007fbac(param_1,param_2);
    if (piVar2 == (int *)0x0) {
      return -0x20;
    }
    iVar1 = FUN_001f01c4(0x30,1);
    iVar4 = -0x21;
    if (iVar1 != 0) {
      iVar1 = FUN_0007d478(iVar1,param_2,piVar2);
      if (iVar1 == 0) goto LAB_0007faf8;
      iVar4 = FUN_0007d25c(iVar1,param_2,DAT_0007fb30);
      if (iVar4 == 0) {
        *(int *)(param_2 + 0x10) = iVar1;
        return 0;
      }
    }
    if (iVar4 != 0) {
LAB_0007faf8:
      (**(code **)(*piVar2 + 0x14))(piVar2);
      return iVar4;
    }
  }
  else {
    iVar1 = FUN_001c7218(param_2,DAT_0007fb24,DAT_0007fb20,0xffffffff);
    if ((iVar1 == 0) ||
       (piVar2 = (int *)FUN_0007fd58(param_1,iVar1,param_3,param_4), piVar2 == (int *)0x0)) {
      return -0x20;
    }
    iVar1 = FUN_001f01c4(0x40,1);
    iVar4 = -0x22;
    if (iVar1 != 0) {
      iVar1 = FUN_00098d34(iVar1,param_2,piVar2);
      if (iVar1 == 0) goto LAB_0007fa80;
      iVar4 = FUN_001c7218(param_2,DAT_0007fb24,DAT_0007fb20,0xffffffff);
      uVar3 = DAT_0007fb28;
      if (iVar4 == 0) {
        uVar3 = DAT_0007fb2c;
      }
      iVar4 = FUN_00098b08(iVar1,param_2,uVar3);
      if (iVar4 == 0) {
        *(int *)(param_2 + 0x14) = iVar1;
        return 0;
      }
    }
    if (iVar4 != 0) {
LAB_0007fa80:
      (**(code **)(*piVar2 + 0x1c))(piVar2);
      return iVar4;
    }
  }
  return 0;
}

