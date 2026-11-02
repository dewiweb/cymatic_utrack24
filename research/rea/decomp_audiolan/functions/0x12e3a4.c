// rea decompile_all
// name: FUN_0012e3a4
// address: 0x12e3a4
// body: available
// range: 0x12e3a4-0x12e55f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0012e3a4(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (*(short *)((int)param_1 + 10) != 0) {
    do {
      uVar2 = FUN_001375f0(*param_1,*(undefined2 *)(param_1[1] + uVar4 * 8));
      iVar3 = FUN_0015e940(uVar2,param_2);
      if ((iVar3 != 0) && (*(short *)(param_1[1] + uVar4 * 8 + 2) == *(short *)(param_2 + 0xc))) {
        *(undefined1 *)(param_1[1] + uVar4 * 8 + 4) = 4;
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)((int)param_1 + 10));
  }
  if ((uint)*(ushort *)((int)param_1 + 10) == (uint)*(ushort *)(param_1 + 2)) {
    if (param_1[1] == 0) {
      iVar3 = FUN_0016d774(0x10,DAT_0012e560);
      uVar2 = 0;
      if (iVar3 != 0) {
        uVar2 = FUN_0016dd70(iVar3,DAT_0012e564,8,2);
      }
      param_1[1] = uVar2;
      FUN_00003860(uVar2,0x10);
      *(undefined2 *)(param_1 + 2) = 2;
    }
    else {
      iVar5 = *(ushort *)(param_1 + 2) + 2;
      iVar3 = FUN_0016d774(iVar5 * 8,DAT_0012e560);
      if ((iVar3 == 0) || (iVar3 = FUN_0016dd70(iVar3,DAT_0012e564,8,iVar5), iVar3 == 0)) {
        return 0;
      }
      FUN_00003628(iVar3,param_1[1],(uint)*(ushort *)(param_1 + 2) << 3);
      FUN_00003860(iVar3 + (uint)*(ushort *)(param_1 + 2) * 8,0x10);
      FUN_0016d744(param_1[1]);
      param_1[1] = iVar3;
      *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + 2;
    }
  }
  uVar1 = FUN_00137638(*param_1,param_2);
  *(undefined2 *)(param_1[1] + (uint)*(ushort *)((int)param_1 + 10) * 8) = uVar1;
  *(undefined2 *)(param_1[1] + (uint)*(ushort *)((int)param_1 + 10) * 8 + 2) =
       *(undefined2 *)(param_2 + 0xc);
  *(undefined1 *)(param_1[1] + (uint)*(ushort *)((int)param_1 + 10) * 8 + 4) = 4;
  *(undefined1 *)(param_1[1] + (uint)*(ushort *)((int)param_1 + 10) * 8 + 6) = 1;
  *(short *)((int)param_1 + 10) = *(short *)((int)param_1 + 10) + 1;
  return 1;
}

