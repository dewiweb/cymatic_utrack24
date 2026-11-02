// rea decompile_all
// name: FUN_0014d682
// address: 0x14d682
// body: available
// range: 0x14d682-0x14d705 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0014d682(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  if (*(undefined4 **)(param_1 + 0x18) != puVar2) {
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    puVar3 = puVar2;
    do {
      if ((int *)*puVar3 == param_2) {
        if (puVar2 != puVar4) {
          if (puVar3 + 1 != puVar4) {
            puVar2 = puVar3 + 1;
            iVar1 = (int)puVar4 - (int)puVar2 >> 2;
            if (0 < iVar1) {
              iVar6 = 0;
              if (puVar2 < puVar4) {
                uVar5 = ((int)puVar4 - (int)puVar2 & 7U) >> 2;
                if (uVar5 == 1) {
                  *puVar3 = *puVar2;
                  iVar6 = 1;
                }
              }
              else {
                uVar5 = 0;
              }
              for (; (int)uVar5 < iVar1; uVar5 = uVar5 + 2) {
                iVar7 = iVar6 + 1;
                puVar3[iVar6] = puVar2[iVar6];
                iVar6 = iVar6 + 2;
                puVar3[iVar7] = puVar2[iVar7];
              }
            }
          }
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -4;
        }
        if (param_2 == (int *)0x0) {
          return 0;
        }
        (**(code **)(*param_2 + 4))();
        return 0;
      }
      puVar3 = puVar3 + 1;
    } while (puVar4 != puVar3);
  }
  return 0;
}

