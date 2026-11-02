// rea decompile_all
// name: FUN_0008cb30
// address: 0x8cb30
// body: available
// range: 0x8cb30-0x8cbff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0008cb30(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  if (*(undefined4 **)(param_1 + 0x14) != puVar5) {
    do {
      piVar3 = (int *)*puVar5;
      if (piVar3 != (int *)0x0) {
        piVar1 = (int *)piVar3[1];
        piVar4 = (int *)*piVar3;
        if (piVar1 != piVar4) {
          do {
            if ((int *)*piVar4 != (int *)0x0) {
              (**(code **)(*(int *)*piVar4 + 4))();
            }
            piVar1 = (int *)piVar3[1];
            piVar4 = piVar4 + 1;
          } while (piVar1 != piVar4);
        }
        if ((int *)*piVar3 != piVar1) {
          piVar3[1] = (int)piVar1 - ((int)piVar1 - *piVar3 & 0xfffffffcU);
        }
        FUN_0010fa20(*piVar3,piVar3[2] - *piVar3 >> 2,0);
        FUN_0019f30c(piVar3);
      }
      puVar5 = puVar5 + 1;
    } while (*(undefined4 **)(param_1 + 0x14) != puVar5);
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x10) != iVar2) {
    *(uint *)(param_1 + 0x14) = iVar2 - (iVar2 - *(int *)(param_1 + 0x10) & 0xfffffffcU);
  }
  return 1;
}

