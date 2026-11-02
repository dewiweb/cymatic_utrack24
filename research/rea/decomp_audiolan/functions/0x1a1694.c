// rea decompile_all
// name: FUN_001a1694
// address: 0x1a1694
// body: available
// range: 0x1a1694-0x1a175f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001a1694(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_20;
  int *piStack_1c;
  undefined4 *local_18;
  
  *param_2 = 0;
  iVar2 = -2;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    piStack_1c = param_1;
    local_18 = param_2;
    if ((code *)*DAT_001a1760 == entry) {
      piVar3 = (int *)FUN_0019b388(0xc);
    }
    else {
      piVar3 = (int *)(*(code *)*DAT_001a1760)(0xc);
    }
    iVar2 = DAT_001a1764;
    if (piVar3 == (int *)0x0) {
      return iVar2;
    }
    *piVar3 = 0;
    FUN_001a4c50(piVar3 + 1);
    iVar4 = FUN_001a6f50(*param_1);
    *piVar3 = iVar4;
    if (iVar4 == 0) {
      FUN_001a176c(piVar3);
      return iVar2;
    }
    iVar2 = 0;
    while (iVar4 = FUN_001a4bc4(param_1 + 1,iVar2), iVar4 == 0) {
      uVar5 = FUN_001a4bdc(param_1 + 1,iVar2);
      iVar4 = FUN_001a7b30(uVar5,&local_20);
      puVar1 = DAT_001a1768;
      if (iVar4 != 0) {
        if (piVar3 == (int *)0x0) {
          return iVar4;
        }
        if (*piVar3 != 0) {
          if ((code *)*DAT_001a1768 == entry) {
            FUN_0018a280();
          }
          else {
            (*(code *)*DAT_001a1768)();
          }
        }
        FUN_001a7bd8(piVar3 + 1);
        *piVar3 = 0;
        if ((code *)*puVar1 != entry) {
          (*(code *)*puVar1)(piVar3);
          return iVar4;
        }
        FUN_0018a280(piVar3);
        return iVar4;
      }
      FUN_001a4a80(piVar3 + 1,local_20,0xffffffff);
      iVar2 = iVar2 + 1;
    }
    *local_18 = piVar3;
    iVar2 = 0;
  }
  return iVar2;
}

