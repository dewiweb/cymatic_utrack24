// rea decompile_all
// name: FUN_000f2534
// address: 0xf2534
// body: available
// range: 0xf2534-0xf262f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_000f2534(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  
  uVar4 = 1;
  uVar1 = 0;
  if ((param_2 == 0 || param_3 == 0) || param_4 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0xbd0) = param_2;
  *(int *)(param_1 + 0xbd8) = param_3;
  *(int *)(param_1 + 0x8c) = param_4;
  *(undefined1 *)(param_1 + 0xbe6) = 1;
  *(undefined1 *)(param_1 + 0xbe8) = 0;
  uVar5 = param_1 + 0x9bU & 0xfffffffc;
  *(undefined1 *)(param_1 + 0xbf8) = 0;
  *(uint *)(param_1 + 0xbc8) = uVar5;
  *(uint *)(param_1 + 0xbcc) = param_1 + 0x633U & 0xfffffffc;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 4) = uVar5;
  if ((*(byte *)(param_2 + 0x34) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xbe7) = 0;
    iVar2 = (**(code **)(param_2 + 0x20))(param_3);
    if (iVar2 == 0) {
      iVar2 = FUN_0016d774(0x200,DAT_000f2630);
      *(int *)(param_1 + 0xbdc) = iVar2;
      if (iVar2 != 0) {
        uVar1 = 0x200;
        goto LAB_000f25ac;
      }
    }
    else {
      iVar3 = FUN_0016d774(iVar2,DAT_000f2630);
      *(int *)(param_1 + 0xbdc) = iVar3;
      if (iVar3 != 0) {
        *(int *)(param_1 + 0xbe0) = iVar2;
        goto LAB_000f25b0;
      }
    }
    uVar4 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xbe7) = 1;
    *(undefined4 *)(param_1 + 0xbdc) = 0;
LAB_000f25ac:
    *(undefined4 *)(param_1 + 0xbe0) = uVar1;
LAB_000f25b0:
    *(int **)(param_1 + 0x90) = param_5;
    if (param_5 != (int *)0x0) {
      (**(code **)(*param_5 + 0x2c))(param_5,param_1);
    }
  }
  *(undefined1 *)(param_1 + 0xbe5) = uVar4;
  return uVar4;
}

