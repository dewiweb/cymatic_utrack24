// rea decompile_all
// name: FUN_000162b4
// address: 0x162b4
// body: available
// range: 0x162b4-0x16437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000162b4(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 local_20;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  local_20 = param_4;
  if ((*(byte *)(*(int *)(param_1 + 0x40) + 0x12) & 1) == 0) {
    *(undefined4 *)(param_1 + iVar2 * 4 + 0xc) = param_2;
    iVar2 = *(int *)(param_1 + 0x2c) + 1;
    *(int *)(param_1 + 0x2c) = iVar2;
    iVar8 = 0;
    puVar9 = (uint *)(*(int *)(param_1 + 0x40) + (uint)*(byte *)(param_1 + 0x3e) * 4 + 0x20);
    if (0 < iVar2) {
      do {
        iVar2 = param_1 + iVar8 * 4;
        puVar3 = *(uint **)(iVar2 + 0xc);
        puVar4 = puVar3 + 2;
        uVar1 = (*puVar3 & 0xffff) - 8 >> 2;
        puVar5 = puVar4;
        if (uVar1 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = uVar1 & 1;
          if (uVar7 == 1) {
            puVar5 = puVar3 + 3;
            *puVar9 = *puVar4;
          }
        }
        if (uVar7 < uVar1) {
          do {
            puVar3 = puVar5 + 1;
            uVar7 = uVar7 + 2;
            *puVar9 = *puVar5;
            puVar5 = puVar5 + 2;
            *puVar9 = *puVar3;
          } while ((int)uVar7 < (int)uVar1);
        }
        FUN_00012bfc(*(undefined4 *)(iVar2 + 0xc));
        *(undefined4 *)(iVar2 + 0xc) = 0;
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x2c));
    }
    FUN_001fe1e4(&local_20);
    *(byte *)(*(int *)(param_1 + 0x40) + 0x12) = *(byte *)(*(int *)(param_1 + 0x40) + 0x12) | 1;
    FUN_001fe1f8(local_20);
    piVar6 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x18);
    *piVar6 = *(int *)(param_1 + 0x2c) + *piVar6;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    return;
  }
  if (iVar2 < 8) {
    *(undefined4 *)(param_1 + iVar2 * 4 + 0xc) = param_2;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    return;
  }
  FUN_00012bfc(param_2);
  *(int *)(*(int *)(param_3 + 0x18) + 0x28) = *(int *)(*(int *)(param_3 + 0x18) + 0x28) + 1;
  return;
}

