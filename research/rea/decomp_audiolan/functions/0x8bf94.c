// rea decompile_all
// name: FUN_0008bf94
// address: 0x8bf94
// body: available
// range: 0x8bf94-0x8c19b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0008c080) */
/* WARNING: Removing unreachable block (ram,0x0008c08c) */

int * FUN_0008bf94(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = DAT_0008c19c;
  piVar10 = (int *)*param_2;
  if ((int *)param_2[1] != piVar10) {
    do {
      iVar8 = *piVar10;
      puVar3 = (undefined4 *)FUN_001a0808(0x18,1);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = uVar2;
        *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(iVar8 + 4);
        puVar3[2] = *(undefined4 *)(iVar8 + 8);
        puVar3[3] = *(undefined4 *)(iVar8 + 0xc);
        puVar3[4] = *(undefined4 *)(iVar8 + 0x10);
        *(undefined1 *)(puVar3 + 5) = *(undefined1 *)(iVar8 + 0x14);
        *(undefined1 *)((int)puVar3 + 0x15) = *(undefined1 *)(iVar8 + 0x15);
      }
      puVar9 = (undefined4 *)param_1[1];
      if (puVar9 == (undefined4 *)param_1[2]) {
        uVar1 = (int)puVar9 - *param_1 >> 2;
        if (uVar1 < (uint)(param_1[2] - *param_1 >> 2)) {
          param_1[1] = (int)(puVar9 + 1);
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = puVar9[-1];
          }
          *puVar9 = puVar3;
        }
        else {
          uVar11 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar11 < uVar1 + 1) {
            uVar11 = uVar1 + 1;
          }
          puVar4 = (undefined4 *)FUN_0010f82c(uVar11 << 2,0);
          puVar5 = puVar4;
          for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar9; puVar6 = puVar6 + 1) {
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = *puVar6;
            }
            puVar5 = puVar5 + 1;
          }
          puVar6 = (undefined4 *)(((int)puVar9 - *param_1 & 0xfffffffcU) + (int)puVar4);
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = puVar3;
          }
          puVar6 = (undefined4 *)param_1[1];
          puVar3 = (undefined4 *)(((int)puVar9 - *param_1 & 0xfffffffcU) + (int)puVar4);
          for (; puVar9 != puVar6; puVar9 = puVar9 + 1) {
            puVar3 = puVar3 + 1;
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = *puVar9;
            }
          }
          iVar8 = *param_1;
          iVar7 = param_1[1];
          FUN_0010fa20(iVar8,param_1[2] - iVar8 >> 2,0);
          param_1[2] = (int)(puVar4 + uVar11);
          param_1[1] = (int)(puVar4 + (iVar7 - iVar8 >> 2) + 1);
          *param_1 = (int)puVar4;
        }
      }
      else {
        param_1[1] = (int)(puVar9 + 1);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = puVar3;
        }
      }
      piVar10 = piVar10 + 1;
    } while ((int *)param_2[1] != piVar10);
  }
  return param_1;
}

