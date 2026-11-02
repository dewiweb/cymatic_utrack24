// rea decompile_all
// name: FUN_0016d0dc
// address: 0x16d0dc
// body: available
// range: 0x16d0dc-0x16d213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0016d0dc(int *param_1,undefined4 param_2,undefined2 *param_3)

{
  int iVar1;
  undefined2 **ppuVar2;
  ushort uVar3;
  uint uVar4;
  undefined2 *local_28 [2];
  undefined1 auStack_20 [8];
  
  param_1 = (int *)(*(int *)(*param_1 + -0x44) + (int)param_1);
  if (param_1[0x11] == 0) {
    FUN_0010e728(local_28);
    uVar4 = 0;
    ppuVar2 = local_28;
    if (*(short *)((int)param_1 + 0x3e) != 0) {
      do {
        if ((param_1[0x10] != 0) &&
           (iVar1 = FUN_0015e784(local_28,*(undefined4 *)(param_1[0x10] + uVar4 * 8)), iVar1 == 0))
        {
          *param_3 = *(undefined2 *)(param_1[0x10] + uVar4 * 8 + 4);
          FUN_0010e7f4(local_28);
          return 1;
        }
        uVar4 = uVar4 + 1 & 0xfffeffff;
        ppuVar2 = local_28;
      } while (uVar4 < *(ushort *)((int)param_1 + 0x3e));
    }
  }
  else {
    FUN_0010e7e0(auStack_20);
    uVar3 = 0;
    if (*(short *)((int)param_1 + 0x3e) != 0) {
      do {
        local_28[0] = param_3;
        (*(code *)**(undefined4 **)param_1[0x11])
                  ((undefined4 *)param_1[0x11],*(int *)(*param_1 + -0x14) + (int)param_1,uVar3,
                   auStack_20);
        iVar1 = FUN_0015e784(auStack_20,param_2);
        if (iVar1 == 0) {
          FUN_0010e7f4(auStack_20);
          return 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)((int)param_1 + 0x3e));
    }
    ppuVar2 = (undefined2 **)auStack_20;
  }
  FUN_0010e7f4(ppuVar2);
  return 0;
}

