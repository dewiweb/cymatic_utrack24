// rea decompile_all
// name: FUN_001d2c60
// address: 0x1d2c60
// body: available
// range: 0x1d2c60-0x1d2cf3 inclusive
// range: 0x1efdc8-0x1eff8f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001d2c60(uint param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = DAT_001d2cfc;
  if ((param_1 < DAT_001d2cf4) || ((DAT_001d2cf4 - DAT_001d2cf8) + DAT_001d2cfc <= param_1)) {
    uVar8 = DAT_001d2d00;
    if (DAT_001d2d00 <= param_1) {
      uVar8 = DAT_001d2d04;
    }
    if ((DAT_001d2d00 > param_1 || uVar8 < param_1) || param_1 == uVar8) {
      uVar8 = DAT_001d2cf8;
      if (DAT_001d2cf8 <= param_1) {
        uVar8 = DAT_001d2cfc;
      }
      if ((DAT_001d2cf8 > param_1 || DAT_001d2cfc < param_1) || param_1 == uVar8) {
        uVar9 = DAT_001d2d08;
        if (DAT_001d2d08 <= param_1) {
          uVar9 = DAT_001d2d0c;
        }
        if (((DAT_001d2d08 > param_1 || uVar9 < param_1) || param_1 == uVar9) &&
           (((param_1 < DAT_001d2d10 || (uVar9 = DAT_001d2d14, DAT_001d2d14 <= param_1)) &&
            (uVar9 = DAT_001d2d18, DAT_001d2d18 <= param_1)))) {
          uVar9 = DAT_001d2d1c;
        }
      }
    }
  }
  else {
    param_1 = *(uint *)((param_1 - (DAT_001d2cf4 - DAT_001d2cf8)) + -4);
  }
  if (param_1 == 0) {
    return 3;
  }
  piVar5 = *(int **)(param_1 - 4);
  puVar6 = (uint *)(param_1 - 8);
  FUN_001cf70c(piVar5 + 5,0xffffffff,uVar9);
  if (((uint)puVar6 & 7) == 0) {
    uVar7 = DAT_001eff94;
    if ((*puVar6 < 8) ||
       (uVar7 = _DAT_001eff9c, *(int *)(*(int *)(param_1 - 4) + 0x10) != DAT_001eff98)) {
      FUN_001dc5b8(param_1,uVar7);
    }
  }
  else {
    FUN_001dc5b8(param_1,DAT_001eff90);
  }
  piVar3 = (int *)*piVar5;
  uVar9 = *puVar6 + 7 & 0xfffffff8;
  iVar1 = *piVar3;
  while (iVar1 != 0) {
    if (((uint *)piVar3[2] <= puVar6) && (puVar6 < (uint *)(piVar3[2] + piVar3[4]))) {
      puVar2 = (uint *)piVar3[3];
      uVar7 = 0;
      if ((puVar2 == (uint *)0x0) || (puVar6 < puVar2)) {
        *puVar6 = (uint)puVar2;
        *(uint *)(param_1 - 4) = uVar9;
        piVar3[3] = (int)puVar6;
        piVar3[5] = piVar3[5] + uVar9;
        if ((int)puVar6 + uVar9 == *puVar6) {
          *(int *)(param_1 - 4) = *(int *)(*puVar6 + 4) + *(int *)(param_1 - 4);
          *puVar6 = *(uint *)*puVar6;
        }
        goto LAB_001eff80;
      }
      puVar4 = (uint *)*puVar2;
      goto LAB_001efecc;
    }
    piVar3 = (int *)*piVar3;
    iVar1 = *piVar3;
  }
  FUN_001dc5b8(puVar6,s___invalid_heap_pointer_2_001eff9d + 3);
  uVar7 = 0xffffffff;
  goto LAB_001eff80;
LAB_001efecc:
  if (puVar4 == (uint *)0x0) goto LAB_001eff44;
  if (puVar6 < puVar4) {
    *puVar6 = (uint)puVar4;
    *(uint *)(param_1 - 4) = uVar9;
    *puVar2 = (uint)puVar6;
    if ((uint *)(puVar2[1] + (int)puVar2) == puVar6) {
      puVar2[1] = puVar2[1] + uVar9;
      *puVar2 = *puVar6;
      puVar6 = puVar2;
    }
    if ((uint *)(puVar6[1] + (int)puVar6) == puVar4) {
      *puVar6 = *puVar4;
      puVar6[1] = puVar6[1] + puVar4[1];
    }
    goto LAB_001eff34;
  }
  puVar2 = puVar4;
  puVar4 = (uint *)*puVar4;
  goto LAB_001efecc;
LAB_001eff44:
  if ((uint *)(puVar2[1] + (int)puVar2) == puVar6) {
    puVar2[1] = puVar2[1] + uVar9;
  }
  else {
    *puVar6 = 0;
    *(uint *)(param_1 - 4) = uVar9;
    *puVar2 = (uint)puVar6;
  }
LAB_001eff34:
  piVar3[5] = piVar3[5] + uVar9;
LAB_001eff80:
  FUN_001cf828(piVar5 + 5);
  return uVar7;
}

