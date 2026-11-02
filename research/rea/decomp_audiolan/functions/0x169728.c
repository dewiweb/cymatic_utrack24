// rea decompile_all
// name: FUN_00169728
// address: 0x169728
// body: available
// range: 0x169728-0x16985b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00169728(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  char acStack_2c [8];
  
  bVar5 = false;
  if (param_3 == 0x3000 || param_3 == 0x3001) {
    bVar5 = *(int *)(param_1 + 0x4c) == 0;
  }
  if (bVar5) {
    bVar4 = 0;
    do {
      acStack_2c[1] = 0x7b;
      acStack_2c[2] = 0;
      uVar3 = 0;
      acStack_2c[0] = bVar4 + 0xb0;
      while ((uVar3 < *(ushort *)(param_1 + 0x30) &&
             (puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + uVar3 * 4),
             puVar1 != (undefined4 *)0x0))) {
        piVar2 = *(int **)(param_1 + 0x14);
        if (piVar2 != (int *)0x0) {
          piVar2 = (int *)((int)piVar2 + *(int *)(*piVar2 + -0x14));
        }
        (**(code **)*puVar1)(puVar1,piVar2,3,acStack_2c);
        uVar3 = uVar3 + 1 & 0xfffeffff;
      }
      acStack_2c[1] = 0x79;
      acStack_2c[2] = 0;
      uVar3 = 0;
      acStack_2c[0] = bVar4 + 0xb0;
      while ((uVar3 < *(ushort *)(param_1 + 0x30) &&
             (puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + uVar3 * 4),
             puVar1 != (undefined4 *)0x0))) {
        piVar2 = *(int **)(param_1 + 0x14);
        if (piVar2 != (int *)0x0) {
          piVar2 = (int *)((int)piVar2 + *(int *)(*piVar2 + -0x14));
        }
        (**(code **)*puVar1)(puVar1,piVar2,3,acStack_2c);
        uVar3 = uVar3 + 1 & 0xfffeffff;
      }
      bVar4 = bVar4 + 1;
    } while (bVar4 < 0x10);
    return;
  }
  return;
}

