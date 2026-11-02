// rea decompile_all
// name: FUN_002428e0
// address: 0x2428e0
// body: available
// range: 0x2428e0-0x2429a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_002428e0(undefined1 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar7 = *(int *)(param_1 + 4);
  puVar9 = param_1;
  puVar3 = param_2;
  uVar2 = FUN_0022ec5c(param_1);
  if (uVar2 < (uint)(iVar1 - iVar7 >> 2)) {
    puVar3 = *(undefined4 **)(param_1 + 8);
    *(undefined4 **)(param_1 + 8) = puVar3 + 1;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = puVar3[-1];
    }
    puVar5 = puVar3 + -1;
    while (param_2 != puVar5) {
      puVar5 = puVar5 + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *puVar5;
    }
    *param_2 = *param_3;
    return;
  }
  uVar4 = FUN_0022ec5c(param_1);
  uVar8 = (uVar4 >> 1) + uVar4 + (uVar4 >> 3);
  uVar2 = uVar4 + 1;
  if (uVar4 + 1 <= uVar8) {
    uVar2 = uVar8;
  }
  iVar1 = FUN_001f01c4(uVar2 * 4,*param_1);
  FUN_00247646(*(undefined4 *)(param_1 + 4),param_2,iVar1,param_1,puVar9,puVar3);
  puVar5 = (undefined4 *)(((int)param_2 - *(int *)(param_1 + 4) & 0xfffffffcU) + iVar1);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = *param_3;
  }
  FUN_00247646(param_2,*(undefined4 *)(param_1 + 8),
               ((int)param_2 - *(int *)(param_1 + 4) & 0xfffffffcU) + iVar1 + 4,param_1,puVar9,
               puVar3);
  iVar7 = FUN_0022ec5c(param_1);
  for (iVar6 = *(int *)(param_1 + 4); iVar6 != *(int *)(param_1 + 8); iVar6 = iVar6 + 4) {
  }
  FUN_001eecc8();
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar7 * 4 + iVar1 + 4;
  *(uint *)(param_1 + 0xc) = uVar2 * 4 + iVar1;
  return;
}

