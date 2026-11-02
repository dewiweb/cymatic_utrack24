// rea decompile_all
// name: FUN_0004fd9c
// address: 0x4fd9c
// body: available
// range: 0x4fd9c-0x4ff53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0004fd9c(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_28 [4];
  int *piStack_24;
  
  if (param_1[0x30] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x11c))(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    (**(code **)(*(int *)param_1[0x29] + 0x14))(auStack_28,(int *)param_1[0x29],0);
    FUN_001a0700(DAT_0004ff54);
    if (piStack_24 == (int *)param_1[0x30]) {
      FUN_001a0d18(DAT_0004ff54);
    }
    else {
      FUN_001a0d18(DAT_0004ff54);
      FUN_001a0700(DAT_0004ff54);
      if ((int *)param_1[0x30] != (int *)0x0) {
        iVar2 = (**(code **)(*(int *)param_1[0x30] + 0xc4))();
        if ((iVar2 == 0) && ((int *)param_1[0x30] != (int *)0x0)) {
          (**(code **)(*(int *)param_1[0x30] + 4))();
        }
        param_1[0x30] = 0;
      }
      FUN_001a0d18(DAT_0004ff54);
      if (piStack_24 != (int *)0x0) {
        param_1[0x30] = (int)piStack_24;
        (**(code **)(*piStack_24 + 0xc0))();
      }
    }
    FUN_001bb864(auStack_28);
    if (param_1[0x30] == 0) {
      return 0;
    }
    piVar3 = (int *)FUN_0008b5d4();
    (**(code **)(*piVar3 + 0x30))(piVar3,*(undefined4 *)(iVar1 + 8));
    piVar3 = (int *)param_1[0x30];
    uVar4 = (**(code **)(*param_1 + 0x14))(param_1);
    iVar1 = (**(code **)(*piVar3 + 200))(piVar3,*(undefined1 *)(iVar1 + 4),3,uVar4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

