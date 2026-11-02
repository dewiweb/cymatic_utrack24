// rea decompile_all
// name: FUN_001dd810
// address: 0x1dd810
// body: available
// range: 0x1dd810-0x1dda33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001dd810(int *param_1,int *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint local_20;
  uint local_1c [2];
  
  if (param_2 != param_1) {
    puVar5 = (undefined1 *)*param_2;
    puVar7 = (undefined1 *)*param_1;
    local_20 = param_2[1] - (int)puVar5 >> 1;
    if ((uint)(param_1[2] - (int)puVar7 >> 1) < local_20) {
      uVar8 = param_1[1] - (int)puVar7 >> 1;
      local_1c[0] = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
      if (local_1c[0] < uVar8 + 1) {
        local_1c[0] = uVar8 + 1;
      }
      puVar1 = local_1c;
      if (local_1c[0] <= local_20) {
        puVar1 = &local_20;
      }
      uVar8 = *puVar1;
      puVar2 = (undefined1 *)FUN_0010f82c(uVar8 << 1,0);
      puVar6 = (undefined1 *)param_2[1];
      puVar5 = puVar2;
      for (puVar7 = (undefined1 *)*param_2; puVar7 != puVar6; puVar7 = puVar7 + 2) {
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = *puVar7;
          puVar5[1] = puVar7[1];
        }
        puVar5 = puVar5 + 2;
      }
      FUN_0010fa20(*param_1,param_1[2] - *param_1 >> 1,0);
      *param_1 = (int)puVar2;
      param_1[1] = (int)(puVar2 + (param_2[1] - *param_2 >> 1) * 2);
      param_1[2] = (int)(puVar2 + uVar8 * 2);
    }
    else {
      uVar8 = param_1[1] - (int)puVar7 >> 1;
      if (uVar8 < local_20) {
        iVar3 = (int)(uVar8 * 2) >> 1;
        iVar4 = 1;
        if (1 < iVar3 + 1) {
          do {
            iVar4 = iVar4 + 1;
            *puVar7 = *puVar5;
            puVar2 = puVar5 + 1;
            puVar5 = puVar5 + 2;
            puVar7[1] = *puVar2;
            puVar7 = puVar7 + 2;
          } while (iVar4 < iVar3 + 1);
        }
        param_1[1] = *param_1 + (param_2[1] - *param_2 >> 1) * 2;
        puVar2 = (undefined1 *)param_2[1];
        puVar5 = (undefined1 *)(*param_1 + uVar8 * 2);
        for (puVar7 = (undefined1 *)(*param_2 + uVar8 * 2); puVar7 != puVar2; puVar7 = puVar7 + 2) {
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = *puVar7;
            puVar5[1] = puVar7[1];
          }
          puVar5 = puVar5 + 2;
        }
      }
      else {
        iVar3 = 1;
        if (1 < (int)(local_20 + 1)) {
          do {
            iVar3 = iVar3 + 1;
            *puVar7 = *puVar5;
            puVar2 = puVar5 + 1;
            puVar5 = puVar5 + 2;
            puVar7[1] = *puVar2;
            puVar7 = puVar7 + 2;
          } while (iVar3 < (int)(local_20 + 1));
        }
        iVar3 = *param_1 + (param_2[1] - *param_2 >> 1) * 2;
        param_1[1] = iVar3;
        param_1[2] = iVar3;
      }
    }
    return param_1;
  }
  return param_1;
}

