// rea decompile_all
// name: FUN_0023c8ac
// address: 0x23c8ac
// body: available
// range: 0x23c8ac-0x23c975 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0023c8ac(int *param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  
  iVar1 = param_1[2];
  iVar8 = *param_1;
  piVar10 = param_1;
  puVar3 = param_2;
  uVar2 = FUN_0022e442(param_1);
  if (uVar2 < (uint)(iVar1 - iVar8 >> 1)) {
    puVar3 = (undefined2 *)param_1[1];
    param_1[1] = (int)(puVar3 + 1);
    if (puVar3 != (undefined2 *)0x0) {
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
  uVar4 = FUN_0022e442(param_1);
  uVar9 = (uVar4 >> 1) + uVar4 + (uVar4 >> 3);
  uVar2 = uVar4 + 1;
  if (uVar4 + 1 <= uVar9) {
    uVar2 = uVar9;
  }
  iVar1 = FUN_00173860(uVar2 * 2,0);
  FUN_00246f4a(*param_1,param_2,iVar1,param_1,piVar10,puVar3);
  puVar5 = (undefined2 *)(((int)param_2 - *param_1 & 0xfffffffeU) + iVar1);
  if (puVar5 != (undefined2 *)0x0) {
    *puVar5 = *param_3;
  }
  FUN_00246f4a(param_2,param_1[1],((int)param_2 - *param_1 & 0xfffffffeU) + iVar1 + 2,param_1,
               piVar10,puVar3);
  iVar6 = FUN_0022e442(param_1);
  iVar7 = *param_1;
  for (iVar8 = iVar7; iVar8 != param_1[1]; iVar8 = iVar8 + 2) {
  }
  FUN_00173a54(iVar7,param_1[2] - iVar7 >> 1,0);
  *param_1 = iVar1;
  param_1[1] = iVar6 * 2 + iVar1 + 2;
  param_1[2] = uVar2 * 2 + iVar1;
  return;
}

