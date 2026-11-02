// rea decompile_all
// name: FUN_001a15e0
// address: 0x1a15e0
// body: available
// range: 0x1a15e0-0x1a1691 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001a15e0(int param_1,byte *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x10) + param_3 * 8;
  uVar1 = (*(uint *)(param_1 + 0x10) & 0x1ff) >> 3;
  *(uint *)(param_1 + 0x10) = uVar3;
  iVar4 = *(int *)(param_1 + 0x14);
  if (uVar3 < param_3 * 8) {
    iVar4 = iVar4 + 1;
    *(int *)(param_1 + 0x14) = iVar4;
  }
  uVar3 = param_3 >> 0x1d;
  *(uint *)(param_1 + 0x14) = iVar4 + uVar3;
  uVar9 = -uVar1 + 0x40;
  if (param_3 < uVar9) {
    uVar3 = 0;
  }
  else {
    pbVar5 = (byte *)(param_1 + uVar1 + 0x18);
    uVar8 = param_4;
    if (uVar9 != 0) {
      pbVar2 = param_2 + -1;
      pbVar6 = (byte *)(param_1 + uVar1 + 0x17);
      if ((uVar1 & 1) != 0) {
        *pbVar5 = *param_2;
        pbVar2 = param_2;
        pbVar6 = pbVar5;
      }
      for (uVar7 = uVar9 >> 1; uVar3 = 0, uVar7 != 0; uVar7 = uVar7 - 1) {
        pbVar5 = pbVar2 + 1;
        pbVar2 = pbVar2 + 2;
        pbVar6[1] = *pbVar5;
        uVar8 = (uint)*pbVar2;
        pbVar6 = pbVar6 + 2;
        *pbVar6 = *pbVar2;
      }
    }
    FUN_001a0e74(param_1,param_1 + 0x18,uVar3,uVar8,param_4);
    uVar1 = -uVar1;
    while (uVar3 = uVar9, uVar1 + 0x7f < param_3) {
      FUN_001a0e74(param_1,param_2 + uVar3);
      uVar9 = uVar3 + 0x40;
      uVar1 = uVar3;
    }
    uVar1 = 0;
  }
  pbVar5 = (byte *)(param_1 + uVar1 + 0x18);
  param_2 = param_2 + uVar3;
  param_3 = param_3 - uVar3;
  if (param_3 != 0) {
    pbVar2 = (byte *)(param_1 + uVar1 + 0x17);
    pbVar6 = param_2 + -1;
    if ((param_3 & 1) != 0) {
      *pbVar5 = *param_2;
      pbVar2 = pbVar5;
      pbVar6 = param_2;
    }
    for (param_3 = param_3 >> 1; param_3 != 0; param_3 = param_3 - 1) {
      pbVar5 = pbVar6 + 1;
      pbVar6 = pbVar6 + 2;
      pbVar2[1] = *pbVar5;
      pbVar2 = pbVar2 + 2;
      *pbVar2 = *pbVar6;
    }
  }
  return;
}

