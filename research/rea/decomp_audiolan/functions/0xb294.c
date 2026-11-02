// rea decompile_all
// name: FUN_0000b294
// address: 0xb294
// body: available
// range: 0xb294-0xb44f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0000b334) */
/* WARNING: Removing unreachable block (ram,0x0000b340) */

void FUN_0000b294(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  
  iVar7 = param_2[1];
  if (*param_2 != iVar7) {
    param_2[1] = iVar7 - (iVar7 - *param_2 & 0xfffffffcU);
  }
  puVar9 = *(undefined4 **)(param_1 + 0x48);
  puVar10 = *(undefined4 **)(param_1 + 0x4c);
  if (puVar9 == puVar10) {
    return;
  }
  do {
    puVar8 = (undefined4 *)param_2[1];
    if (puVar8 == (undefined4 *)param_2[2]) {
      uVar1 = (int)puVar8 - *param_2 >> 2;
      if (uVar1 < (uint)(param_2[2] - *param_2 >> 2)) {
        param_2[1] = (int)(puVar8 + 1);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = puVar8[-1];
        }
        *puVar8 = *puVar9;
      }
      else {
        uVar2 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        uVar11 = uVar1 + 1;
        if (uVar1 + 1 <= uVar2) {
          uVar11 = uVar2;
        }
        puVar3 = (undefined4 *)FUN_0010f82c(uVar11 << 2,0);
        puVar5 = puVar3;
        for (puVar4 = (undefined4 *)*param_2; puVar4 != puVar8; puVar4 = puVar4 + 1) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar4;
          }
          puVar5 = puVar5 + 1;
        }
        puVar4 = (undefined4 *)(((int)puVar8 - *param_2 & 0xfffffffcU) + (int)puVar3);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar9;
        }
        puVar5 = (undefined4 *)param_2[1];
        puVar4 = (undefined4 *)(((int)puVar8 - *param_2 & 0xfffffffcU) + (int)puVar3);
        for (; puVar8 != puVar5; puVar8 = puVar8 + 1) {
          puVar4 = puVar4 + 1;
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *puVar8;
          }
        }
        iVar7 = *param_2;
        iVar6 = param_2[1];
        FUN_0010fa20(iVar7,param_2[2] - iVar7 >> 2,0);
        param_2[2] = (int)(puVar3 + uVar11);
        param_2[1] = (int)(puVar3 + (iVar6 - iVar7 >> 2) + 1);
        *param_2 = (int)puVar3;
      }
    }
    else {
      param_2[1] = (int)(puVar8 + 1);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar9;
      }
    }
    puVar9 = puVar9 + 1;
  } while (puVar9 != puVar10);
  return;
}

