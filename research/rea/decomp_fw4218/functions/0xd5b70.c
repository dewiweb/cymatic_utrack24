// rea decompile_all
// name: FUN_000d5b70
// address: 0xd5b70
// body: available
// range: 0xd5b70-0xd5d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd5d18 to 0x1f06d4 FUN_001f06d4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000d5d0c) */
/* WARNING: Removing unreachable block (ram,0x000d5c04) */
/* WARNING: Removing unreachable block (ram,0x000d5c10) */

void FUN_000d5b70(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  
  FUN_001f00bc(param_1 + 4);
  puVar2 = *(undefined4 **)(param_1 + 0x2c);
  piVar9 = (int *)(param_1 + 0x28);
  if (puVar2 == *(undefined4 **)(param_1 + 0x30)) {
    uVar1 = (int)puVar2 - *piVar9 >> 2;
    if (uVar1 < (uint)((int)*(undefined4 **)(param_1 + 0x30) - *piVar9 >> 2)) {
      *(undefined4 **)(param_1 + 0x2c) = puVar2 + 1;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = puVar2[-1];
      }
      *puVar2 = param_2;
    }
    else {
      uVar3 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
      uVar10 = uVar1 + 1;
      if (uVar1 + 1 <= uVar3) {
        uVar10 = uVar3;
      }
      puVar4 = (undefined4 *)FUN_00173860(uVar10 << 2,0);
      puVar7 = puVar4;
      for (puVar6 = (undefined4 *)*piVar9; puVar6 != puVar2; puVar6 = puVar6 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar6;
        }
        puVar7 = puVar7 + 1;
      }
      puVar6 = (undefined4 *)(((int)puVar2 - *piVar9 & 0xfffffffcU) + (int)puVar4);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = param_2;
      }
      puVar7 = *(undefined4 **)(param_1 + 0x2c);
      puVar6 = (undefined4 *)(((int)puVar2 - *piVar9 & 0xfffffffcU) + (int)puVar4);
      for (; puVar2 != puVar7; puVar2 = puVar2 + 1) {
        puVar6 = puVar6 + 1;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar2;
        }
      }
      iVar5 = *piVar9;
      iVar8 = *(int *)(param_1 + 0x2c);
      FUN_00173a54(iVar5,*(int *)(param_1 + 0x30) - iVar5 >> 2,0);
      *(undefined4 **)(param_1 + 0x30) = puVar4 + uVar10;
      *(undefined4 **)(param_1 + 0x2c) = puVar4 + (iVar8 - iVar5 >> 2) + 1;
      *piVar9 = (int)puVar4;
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x2c) = puVar2 + 1;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = param_2;
    }
  }
  FUN_001f06d4(param_1 + 4);
  return;
}

