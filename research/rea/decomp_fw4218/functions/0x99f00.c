// rea decompile_all
// name: FUN_00099f00
// address: 0x99f00
// body: available
// range: 0x99f00-0x9a06f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00099f00(int param_1,uint param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  piVar2 = DAT_0009a070;
  bVar1 = false;
  if ((char)DAT_0009a070[8] == '\0') {
    return;
  }
  puVar9 = (uint *)(DAT_0009a070 + 2);
  do {
    iVar3 = FUN_0009adfc(param_1);
    if (iVar3 != 0) {
      bVar1 = true;
    }
    do {
      if ((*(int *)(*piVar2 + 4) == 0) && (*(char *)((int)piVar2 + 0x21) != '\0')) {
        return;
      }
      if (param_2 <= *puVar9) {
        return;
      }
      piVar2[5] = 0;
      iVar3 = FUN_0009adfc(param_1);
      if (iVar3 == 0) {
        if (*(char *)((int)piVar2 + 0x21) == '\0') {
          FUN_001cf828(*(int *)(param_1 + 0x1ec) + 0xc4);
          FUN_001d0130(0x14);
        }
        bVar1 = false;
      }
      if (((uint)piVar2[7] < param_2) && (3 < *(uint *)(piVar2[1] + 4))) {
        uVar8 = 0;
        uVar6 = 0;
        uVar5 = 0;
        do {
          iVar3 = piVar2[1];
          if (*(int *)(iVar3 + 4) != 0) {
            pbVar4 = *(byte **)(iVar3 + 0x10) + 1;
            uVar8 = (uint)**(byte **)(iVar3 + 0x10);
            if (*(byte **)(iVar3 + 0xc) <= pbVar4) {
              pbVar4 = *(byte **)(iVar3 + 8);
            }
            *(byte **)(iVar3 + 0x10) = pbVar4;
            FUN_00029894(iVar3 + 4);
          }
          uVar7 = uVar5 + 1;
          uVar6 = uVar6 | uVar8 << ((uVar5 & 0x1f) << 3);
          uVar5 = uVar7;
        } while ((int)uVar7 < 4);
        while (uVar6 != 0) {
          uVar6 = uVar6 - 1;
          iVar3 = piVar2[1];
          if (*(int *)(iVar3 + 4) != 0) {
            uVar5 = *(int *)(iVar3 + 0x10) + 1;
            if (*(uint *)(iVar3 + 0xc) <= uVar5) {
              uVar5 = *(uint *)(iVar3 + 8);
            }
            *(uint *)(iVar3 + 0x10) = uVar5;
            FUN_00029894(iVar3 + 4);
          }
        }
        piVar2[7] = -1;
      }
    } while (bVar1);
  } while( true );
}

