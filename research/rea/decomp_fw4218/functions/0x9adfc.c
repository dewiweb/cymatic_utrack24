// rea decompile_all
// name: FUN_0009adfc
// address: 0x9adfc
// body: available
// range: 0x9adfc-0x9aef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0009adfc(void)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  piVar1 = DAT_0009aef4;
  iVar6 = *DAT_0009aef4;
  if (((DAT_0009aef4[7] == -1) && (3 < *(uint *)(DAT_0009aef4[1] + 4))) &&
     (puVar9 = (uint *)(DAT_0009aef4 + 7), 3 < *(uint *)(DAT_0009aef4[1] + 4))) {
    uVar8 = 0;
    uVar7 = 0;
    uVar3 = 0;
    do {
      iVar4 = piVar1[1];
      if (*(int *)(iVar4 + 4) != 0) {
        pbVar2 = *(byte **)(iVar4 + 0x10) + 1;
        uVar8 = (uint)**(byte **)(iVar4 + 0x10);
        if (*(byte **)(iVar4 + 0xc) <= pbVar2) {
          pbVar2 = *(byte **)(iVar4 + 8);
        }
        *(byte **)(iVar4 + 0x10) = pbVar2;
        FUN_00029894(iVar4 + 4);
      }
      uVar5 = uVar3 + 1;
      uVar7 = uVar7 | uVar8 << ((uVar3 & 0x1f) << 3);
      uVar3 = uVar5;
    } while ((int)uVar5 < 4);
    *puVar9 = uVar7;
  }
  if ((piVar1[5] == 0) && (*(int *)(iVar6 + 4) != 0)) {
    if (*(int *)(iVar6 + 4) != 0) {
      iVar4 = *(int *)(iVar6 + 0x10);
      FUN_00003b88(piVar1 + 2,iVar4,0x13);
      uVar3 = iVar4 + 0x14;
      if (*(uint *)(iVar6 + 0xc) <= uVar3) {
        uVar3 = *(uint *)(iVar6 + 8);
      }
      *(uint *)(iVar6 + 0x10) = uVar3;
      FUN_00029894(iVar6 + 4);
    }
    return 1;
  }
  return 0;
}

