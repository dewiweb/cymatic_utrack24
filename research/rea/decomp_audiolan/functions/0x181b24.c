// rea decompile_all
// name: FUN_00181b24
// address: 0x181b24
// body: available
// range: 0x181b24-0x181bb7 inclusive
// range: 0x1a040c-0x1a05d3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00181b24(uint param_1)

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
  
  uVar9 = DAT_00181bc0;
  if ((param_1 < DAT_00181bb8) || ((DAT_00181bb8 - DAT_00181bbc) + DAT_00181bc0 <= param_1)) {
    uVar8 = DAT_00181bc4;
    if (DAT_00181bc4 <= param_1) {
      uVar8 = DAT_00181bc8;
    }
    if ((DAT_00181bc4 > param_1 || uVar8 < param_1) || param_1 == uVar8) {
      uVar8 = DAT_00181bbc;
      if (DAT_00181bbc <= param_1) {
        uVar8 = DAT_00181bc0;
      }
      if ((DAT_00181bbc > param_1 || DAT_00181bc0 < param_1) || param_1 == uVar8) {
        uVar9 = DAT_00181bcc;
        if (DAT_00181bcc <= param_1) {
          uVar9 = DAT_00181bd0;
        }
        if (((DAT_00181bcc > param_1 || uVar9 < param_1) || param_1 == uVar9) &&
           (((param_1 < DAT_00181bd4 || (uVar9 = DAT_00181bd8, DAT_00181bd8 <= param_1)) &&
            (uVar9 = DAT_00181bdc, DAT_00181bdc <= param_1)))) {
          uVar9 = DAT_00181be0;
        }
      }
    }
  }
  else {
    param_1 = *(uint *)((param_1 - (DAT_00181bb8 - DAT_00181bbc)) + -4);
  }
  if (param_1 == 0) {
    return 3;
  }
  piVar5 = *(int **)(param_1 - 4);
  puVar6 = (uint *)(param_1 - 8);
  FUN_0017afd4(piVar5 + 5,0xffffffff,uVar9);
  if (((uint)puVar6 & 7) == 0) {
    uVar7 = DAT_001a05d8;
    if ((*puVar6 < 8) ||
       (uVar7 = _DAT_001a05e0, *(int *)(*(int *)(param_1 - 4) + 0x10) != DAT_001a05dc)) {
      FUN_0018b5e4(param_1,uVar7);
    }
  }
  else {
    FUN_0018b5e4(param_1,DAT_001a05d4);
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
        goto LAB_001a05c4;
      }
      puVar4 = (uint *)*puVar2;
      goto LAB_001a0510;
    }
    piVar3 = (int *)*piVar3;
    iVar1 = *piVar3;
  }
  FUN_0018b5e4(puVar6,s___invalid_heap_pointer_2_001a05e2 + 2);
  uVar7 = 0xffffffff;
  goto LAB_001a05c4;
LAB_001a0510:
  if (puVar4 == (uint *)0x0) goto LAB_001a0588;
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
    goto LAB_001a0578;
  }
  puVar2 = puVar4;
  puVar4 = (uint *)*puVar4;
  goto LAB_001a0510;
LAB_001a0588:
  if ((uint *)(puVar2[1] + (int)puVar2) == puVar6) {
    puVar2[1] = puVar2[1] + uVar9;
  }
  else {
    *puVar6 = 0;
    *(uint *)(param_1 - 4) = uVar9;
    *puVar2 = (uint)puVar6;
  }
LAB_001a0578:
  piVar3[5] = piVar3[5] + uVar9;
LAB_001a05c4:
  FUN_0017b0f0(piVar5 + 5);
  return uVar7;
}

