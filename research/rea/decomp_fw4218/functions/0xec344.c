// rea decompile_all
// name: FUN_000ec344
// address: 0xec344
// body: available
// range: 0xec344-0xec4af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000ec344(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  
  iVar8 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  if (((param_2 & 0x80000000) == 0) && (param_2 != 0)) {
    param_2 = param_2 + 8;
    if ((param_2 & 0xfffffffc) != 0) {
      param_2 = param_2 + (4 - (param_2 & 3));
    }
    if ((param_2 != 0) && (param_2 <= *(uint *)(param_1 + 0x18))) {
      piVar1 = (int *)(param_1 + 0xc);
      piVar2 = *(int **)(param_1 + 0xc);
      do {
        piVar7 = piVar2;
        piVar3 = piVar1;
        if (param_2 <= (uint)piVar7[1]) break;
        piVar1 = piVar7;
        piVar2 = (int *)*piVar7;
      } while ((int *)*piVar7 != (int *)0x0);
      if (*(int **)(param_1 + 0x14) != piVar7) {
        iVar8 = *piVar3;
        *piVar3 = *piVar7;
        iVar8 = iVar8 + 8;
        if (0x8000 < piVar7[1] - param_2) {
          puVar4 = (uint *)((int)piVar7 + param_2);
          puVar4[1] = piVar7[1] - param_2;
          piVar7[1] = param_2;
          puVar9 = (uint *)(param_1 + 0xc);
          do {
            puVar6 = puVar9;
            puVar9 = (uint *)*puVar6;
          } while (puVar9 < puVar4);
          if ((uint *)(puVar6[1] + (int)puVar6) == puVar4) {
            puVar6[1] = puVar6[1] + puVar4[1];
            puVar4 = puVar6;
          }
          if ((uint *)(puVar4[1] + (int)puVar4) == puVar9) {
            if (puVar9 == *(uint **)(param_1 + 0x14)) {
              *puVar4 = (uint)*(uint **)(param_1 + 0x14);
            }
            else {
              puVar4[1] = puVar9[1] + puVar4[1];
              *puVar4 = *(uint *)*puVar6;
            }
          }
          else {
            *puVar4 = (uint)puVar9;
          }
          if (puVar6 != puVar4) {
            *puVar6 = (uint)puVar4;
          }
        }
        uVar5 = *(int *)(param_1 + 0x18) - piVar7[1];
        *(uint *)(param_1 + 0x18) = uVar5;
        if (*(uint *)(param_1 + 0x1c) < uVar5) {
          uVar5 = *(uint *)(param_1 + 0x1c);
        }
        *(uint *)(param_1 + 0x1c) = uVar5;
        *piVar7 = 0;
        piVar7[1] = piVar7[1] | 0x80000000;
      }
    }
  }
  return iVar8;
}

