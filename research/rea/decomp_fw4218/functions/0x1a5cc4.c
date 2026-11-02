// rea decompile_all
// name: FUN_001a5cc4
// address: 0x1a5cc4
// body: available
// range: 0x1a5cc4-0x1a5da3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a5cc4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  if (*(undefined4 **)(param_1 + 0x18) != puVar3) {
    puVar5 = *(undefined4 **)(param_1 + 0x18);
    puVar4 = puVar3;
    do {
      if (*(int *)*puVar4 == param_2) {
        if (puVar3 != puVar5) {
          puVar3 = puVar4 + 1;
          if (puVar3 != puVar5) {
            iVar1 = (int)puVar5 - (int)puVar3 >> 2;
            if (0 < iVar1) {
              iVar6 = 0;
              if (puVar3 < puVar5) {
                iVar2 = -(((int)puVar5 - (int)puVar3) * 0x20000000 >> 0x1f);
                if (iVar2 == 1) {
                  iVar6 = 1;
                  *puVar4 = *puVar3;
                }
              }
              else {
                iVar2 = 0;
              }
              for (; iVar2 < iVar1; iVar2 = iVar2 + 2) {
                puVar4[iVar6] = puVar3[iVar6];
                puVar4[iVar6 + 1] = puVar3[iVar6 + 1];
                iVar6 = iVar6 + 2;
              }
            }
          }
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -4;
        }
        FUN_001eecc8();
        return 0;
      }
      puVar4 = puVar4 + 1;
    } while (puVar5 != puVar4);
  }
  return 0xffffff95;
}

