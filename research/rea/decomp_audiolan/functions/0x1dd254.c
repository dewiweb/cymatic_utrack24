// rea decompile_all
// name: FUN_001dd254
// address: 0x1dd254
// body: available
// range: 0x1dd254-0x1dd463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001dd254(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint local_20;
  uint local_1c [2];
  
  if (param_2 == param_1) {
    return param_1;
  }
  puVar1 = (undefined4 *)*param_2;
  puVar4 = (undefined4 *)*param_1;
  iVar7 = param_2[1] - (int)puVar1;
  local_20 = iVar7 >> 2;
  if ((uint)(param_1[2] - (int)puVar4 >> 2) < local_20) {
    uVar6 = param_1[1] - (int)puVar4 >> 2;
    local_1c[0] = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
    if (local_1c[0] < uVar6 + 1) {
      local_1c[0] = uVar6 + 1;
    }
    puVar2 = local_1c;
    if (local_1c[0] <= local_20) {
      puVar2 = &local_20;
    }
    uVar6 = *puVar2;
    puVar3 = (undefined4 *)FUN_0010f82c(uVar6 << 2,0);
    puVar5 = (undefined4 *)param_2[1];
    puVar4 = puVar3;
    for (puVar1 = (undefined4 *)*param_2; puVar1 != puVar5; puVar1 = puVar1 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar1;
      }
      puVar4 = puVar4 + 1;
    }
    FUN_0010fa20(*param_1,param_1[2] - *param_1 >> 2,0);
    *param_1 = (int)puVar3;
    param_1[1] = (int)(puVar3 + (param_2[1] - *param_2 >> 2));
    param_1[2] = (int)(puVar3 + uVar6);
  }
  else {
    uVar6 = param_1[1] - (int)puVar4 >> 2;
    if (uVar6 < local_20) {
      if (0 < (int)(uVar6 * 4) >> 2) {
        puVar3 = puVar1 + -1;
        puVar5 = puVar4 + -1;
        if ((int)(uVar6 << 0x1f) < 0) {
          *puVar4 = *puVar1;
          puVar3 = puVar1;
          puVar5 = puVar4;
        }
        for (iVar7 = (int)(uVar6 * 4) >> 3; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar5[1] = puVar3[1];
          puVar3 = puVar3 + 2;
          puVar5 = puVar5 + 2;
          *puVar5 = *puVar3;
        }
      }
      param_1[1] = *param_1 + (param_2[1] - *param_2 >> 2) * 4;
      puVar3 = (undefined4 *)param_2[1];
      puVar4 = (undefined4 *)(*param_1 + uVar6 * 4);
      for (puVar1 = (undefined4 *)(*param_2 + uVar6 * 4); puVar1 != puVar3; puVar1 = puVar1 + 1) {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar1;
        }
        puVar4 = puVar4 + 1;
      }
    }
    else {
      if (0 < (int)local_20) {
        puVar3 = puVar4 + -1;
        puVar5 = puVar1 + -1;
        if (iVar7 * 0x20000000 < 0) {
          *puVar4 = *puVar1;
          puVar3 = puVar4;
          puVar5 = puVar1;
        }
        for (iVar7 = iVar7 >> 3; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar3[1] = puVar5[1];
          puVar5 = puVar5 + 2;
          puVar3 = puVar3 + 2;
          *puVar3 = *puVar5;
        }
      }
      iVar7 = *param_1 + (param_2[1] - *param_2 >> 2) * 4;
      param_1[1] = iVar7;
      param_1[2] = iVar7;
    }
  }
  return param_1;
}

