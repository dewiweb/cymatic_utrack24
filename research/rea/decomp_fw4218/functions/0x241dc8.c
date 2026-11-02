// rea decompile_all
// name: FUN_00241dc8
// address: 0x241dc8
// body: available
// range: 0x241dc8-0x242023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_00241dc8(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint local_20;
  uint local_1c [2];
  
  if (param_2 != param_1) {
    puVar1 = (undefined4 *)*param_1;
    puVar5 = (undefined4 *)*param_2;
    iVar7 = (int)param_2[1] - (int)puVar5;
    local_20 = iVar7 >> 2;
    if ((uint)((int)(param_1[2] - (int)puVar1) >> 2) < local_20) {
      uVar8 = (int)(param_1[1] - (int)puVar1) >> 2;
      local_1c[0] = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
      if (local_1c[0] < uVar8 + 1) {
        local_1c[0] = uVar8 + 1;
      }
      puVar3 = local_1c;
      if (local_1c[0] <= local_20) {
        puVar3 = &local_20;
      }
      uVar8 = *puVar3;
      puVar2 = (undefined4 *)FUN_00173860(uVar8 << 2,0);
      puVar6 = (undefined4 *)param_2[1];
      puVar5 = puVar2;
      for (puVar1 = (undefined4 *)*param_2; puVar1 != puVar6; puVar1 = puVar1 + 1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar1;
        }
        puVar5 = puVar5 + 1;
      }
      FUN_00173a54(*param_1,(int)(param_1[2] - *param_1) >> 2,0);
      *param_1 = (uint)puVar2;
      param_1[1] = (param_2[1] - *param_2 & 0xfffffffc) + (int)puVar2;
      param_1[2] = (uint)(puVar2 + uVar8);
    }
    else {
      uVar8 = (int)(param_1[1] - (int)puVar1) >> 2;
      if (uVar8 < local_20) {
        iVar9 = (int)(puVar5 + uVar8) - (int)puVar5;
        iVar7 = iVar9 >> 2;
        if (0 < iVar7) {
          iVar4 = 0;
          if (puVar5 < puVar5 + uVar8) {
            iVar9 = -(iVar9 * 0x20000000 >> 0x1f);
            if (iVar9 == 1) {
              iVar4 = 1;
              *puVar1 = *puVar5;
            }
          }
          else {
            iVar9 = 0;
          }
          for (; iVar9 < iVar7; iVar9 = iVar9 + 2) {
            puVar1[iVar4] = puVar5[iVar4];
            puVar1[iVar4 + 1] = puVar5[iVar4 + 1];
            iVar4 = iVar4 + 2;
          }
        }
        param_1[1] = (param_2[1] - *param_2 & 0xfffffffc) + *param_1;
        puVar2 = (undefined4 *)param_2[1];
        puVar5 = (undefined4 *)(*param_1 + uVar8 * 4);
        for (puVar1 = (undefined4 *)(*param_2 + uVar8 * 4); puVar1 != puVar2; puVar1 = puVar1 + 1) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar1;
          }
          puVar5 = puVar5 + 1;
        }
      }
      else {
        if (0 < (int)local_20) {
          iVar9 = 0;
          if (puVar5 < (undefined4 *)param_2[1]) {
            iVar7 = -(iVar7 * 0x20000000 >> 0x1f);
            if (iVar7 == 1) {
              iVar9 = 1;
              *puVar1 = *puVar5;
            }
          }
          else {
            iVar7 = 0;
          }
          for (; iVar7 < (int)local_20; iVar7 = iVar7 + 2) {
            puVar1[iVar9] = puVar5[iVar9];
            puVar1[iVar9 + 1] = puVar5[iVar9 + 1];
            iVar9 = iVar9 + 2;
          }
        }
        uVar8 = (param_2[1] - *param_2 & 0xfffffffc) + *param_1;
        param_1[1] = uVar8;
        param_1[2] = uVar8;
      }
    }
    return param_1;
  }
  return param_1;
}

