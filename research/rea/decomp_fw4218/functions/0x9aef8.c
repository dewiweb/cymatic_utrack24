// rea decompile_all
// name: FUN_0009aef8
// address: 0x9aef8
// body: available
// range: 0x9aef8-0x9b00b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0009aef8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  
  uVar2 = FUN_00249f24(*(undefined4 *)(param_1 + 0x224));
  uVar3 = FUN_00249f54(*(undefined4 *)(param_1 + param_2 * 0x38 + 0x248));
  uVar2 = FUN_00249c78(uVar3,uVar2);
  uVar2 = FUN_0024a000(uVar2,DAT_0009b00c);
  iVar1 = DAT_0009b010;
  uVar7 = (uint)*(ushort *)(param_1 + 0x232);
  uVar11 = true;
  if (uVar7 == 0) {
    return;
  }
  iVar8 = 0;
  uVar12 = false;
  do {
    uVar3 = FUN_00249f24(*(undefined4 *)(param_1 + 0x224));
    iVar10 = param_1 + iVar8 * 0x38;
    uVar4 = FUN_00249f54(*(undefined4 *)(iVar10 + 0x248));
    uVar3 = FUN_00249c78(uVar4,uVar3);
    uVar3 = FUN_0024a000(uVar3,DAT_0009b00c);
    FUN_0024a1b0(uVar3,uVar2);
    if (!(bool)uVar11 || (bool)uVar12) {
      uVar9 = *(undefined4 *)(param_1 + 0x93c);
      uVar4 = FUN_0024a2a4(*(undefined4 *)(param_1 + 0x940),uVar9);
      uVar5 = FUN_0024a2a4(uVar3,uVar2);
      uVar5 = FUN_00249c78(uVar5,uVar9);
      uVar4 = FUN_0024a000(uVar5,uVar4);
      uVar3 = FUN_00249b8c(uVar4,uVar3);
      *(undefined4 *)(iVar10 + 0x268) = uVar3;
      iVar6 = (int)((ulonglong)((longlong)iVar1 * (longlong)*(int *)(param_1 + 0x224)) >> 0x20);
      uVar4 = FUN_00249f24((iVar6 >> 5) - (iVar6 >> 0x1f));
      uVar3 = FUN_00249c78(uVar3,DAT_0009b014);
      FUN_0024a000(uVar3,uVar4);
      uVar3 = FUN_00249ed0();
      *(undefined4 *)(iVar10 + 0x248) = uVar3;
    }
    uVar11 = uVar7 != 0;
    uVar7 = uVar7 - 1;
    uVar12 = uVar7 == 0;
    iVar8 = iVar8 + 1;
  } while (!(bool)uVar12);
  return;
}

