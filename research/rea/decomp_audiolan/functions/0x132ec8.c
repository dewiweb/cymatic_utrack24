// rea decompile_all
// name: FUN_00132ec8
// address: 0x132ec8
// body: available
// range: 0x132ec8-0x13304b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00132ec8(undefined4 *param_1,int param_2,undefined1 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  *param_3 = 0;
  uVar4 = 0;
  uVar3 = 0;
  if (*(short *)(param_1 + 4) != 0) {
    do {
      iVar2 = FUN_0013f040(*param_1,*(undefined2 *)(param_1[2] + uVar3 * 8));
      if (((iVar2 != 0) && (iVar2 = FUN_0015e940(iVar2,param_2), iVar2 != 0)) &&
         (*(short *)(param_1[2] + uVar3 * 8 + 2) == *(short *)(param_2 + 0xc))) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 4));
  }
  if ((uint)*(ushort *)(param_1 + 4) == (uint)*(ushort *)(param_1 + 3)) {
    *param_3 = 0x17;
  }
  else {
    if ((uint)*(ushort *)(param_1 + 4) == (uint)*(ushort *)((int)param_1 + 0xe)) {
      if (param_1[2] == 0) {
        uVar4 = FUN_0016d774(0x10,DAT_0013304c);
        param_1[2] = uVar4;
        FUN_00003860(uVar4,0x10);
        *(undefined2 *)((int)param_1 + 0xe) = 2;
      }
      else {
        iVar2 = FUN_0016d774((uint)*(ushort *)((int)param_1 + 0xe) * 8 + 0x10,DAT_0013304c);
        if (iVar2 == 0) {
          return 0;
        }
        FUN_00003628(iVar2,param_1[2],(uint)*(ushort *)((int)param_1 + 0xe) << 3);
        FUN_00003860(iVar2 + (uint)*(ushort *)((int)param_1 + 0xe) * 8,0x10);
        FUN_0016d744(param_1[2]);
        param_1[2] = iVar2;
        *(short *)((int)param_1 + 0xe) = *(short *)((int)param_1 + 0xe) + 2;
      }
    }
    uVar1 = FUN_0013ee24(*param_1,param_2);
    *(undefined2 *)(param_1[2] + (uint)*(ushort *)(param_1 + 4) * 8) = uVar1;
    *(undefined2 *)(param_1[2] + (uint)*(ushort *)(param_1 + 4) * 8 + 2) =
         *(undefined2 *)(param_2 + 0xc);
    uVar4 = 1;
    *(undefined2 *)(param_1[2] + (uint)*(ushort *)(param_1 + 4) * 8 + 4) = 0;
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
  }
  return uVar4;
}

