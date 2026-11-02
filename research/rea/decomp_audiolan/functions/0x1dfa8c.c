// rea decompile_all
// name: FUN_001dfa8c
// address: 0x1dfa8c
// body: available
// range: 0x1dfa8c-0x1dfb77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001dfad2) */
/* WARNING: Removing unreachable block (ram,0x001dfad6) */

void FUN_001dfa8c(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  puVar9 = (undefined4 *)param_1[1];
  if (puVar9 == (undefined4 *)param_1[2]) {
    uVar8 = (int)puVar9 - *param_1 >> 2;
    if ((uint)(param_1[2] - *param_1 >> 2) <= uVar8) {
      uVar4 = (uVar8 >> 1) + uVar8 + (uVar8 >> 3);
      uVar1 = uVar8 + 1;
      if (uVar8 + 1 <= uVar4) {
        uVar1 = uVar4;
      }
      puVar2 = (undefined4 *)FUN_0010f82c(uVar1 * 4,0);
      puVar6 = puVar2;
      for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar9; puVar5 = puVar5 + 1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar5;
        }
        puVar6 = puVar6 + 1;
      }
      puVar5 = (undefined4 *)(((int)puVar9 - *param_1 & 0xfffffffcU) + (int)puVar2);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *param_2;
      }
      puVar6 = (undefined4 *)param_1[1];
      puVar5 = (undefined4 *)(((int)puVar9 - *param_1 & 0xfffffffcU) + (int)puVar2);
      for (; puVar9 != puVar6; puVar9 = puVar9 + 1) {
        puVar5 = puVar5 + 1;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar9;
        }
      }
      iVar7 = param_1[1];
      iVar3 = *param_1;
      FUN_0010fa20(iVar3,param_1[2] - iVar3 >> 2,0);
      *param_1 = (int)puVar2;
      param_1[1] = (int)(puVar2 + (iVar7 - iVar3 >> 2) + 1);
      param_1[2] = (int)(puVar2 + uVar1);
      return;
    }
    param_1[1] = (int)(puVar9 + 1);
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = puVar9[-1];
    }
  }
  else {
    param_1[1] = (int)(puVar9 + 1);
    if (puVar9 == (undefined4 *)0x0) {
      return;
    }
  }
  *puVar9 = *param_2;
  return;
}

