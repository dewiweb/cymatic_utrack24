// rea decompile_all
// name: FUN_00084308
// address: 0x84308
// body: available
// range: 0x84308-0x844cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00084308(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  int local_20 [2];
  
  piVar3 = DAT_000844d0;
  iVar1 = *param_2;
  if (*(int *)(iVar1 + -0xc) == -1) {
    uVar10 = *(uint *)(iVar1 + -4);
    if (0xfffffff1 < uVar10) {
      local_20[0] = -0xf;
      FUN_0010f7cc(8,DAT_000844d4,DAT_000844d4,uVar10);
    }
    if (uVar10 != 0) {
      piVar3 = (int *)FUN_0010f82c(uVar10 + 0xe,0);
      if (piVar3 != (int *)0x0) {
        *piVar3 = 0;
        piVar3[1] = 0;
        piVar3[2] = 0;
      }
      piVar3[1] = uVar10;
      piVar3[2] = uVar10;
      puVar6 = (undefined1 *)((int)piVar3 + uVar10 + 0xc);
      *piVar3 = 0;
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = 0;
      }
    }
    *param_1 = (int)(piVar3 + 3);
    FUN_00003628(piVar3 + 3,*param_2,uVar10);
  }
  else {
    *param_1 = iVar1;
    piVar2 = (int *)(iVar1 + -0xc);
    if (piVar2 != piVar3) {
      *piVar2 = *piVar2 + 1;
    }
  }
  piVar11 = param_2 + 5;
  param_1[1] = param_2[1];
  *(char *)(param_1 + 2) = (char)param_2[2];
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  piVar2 = param_1 + 5;
  *piVar2 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_20[1] = 1;
  local_20[0] = param_2[6] - *piVar11 >> 2;
  piVar3 = local_20;
  if (local_20[0] == 0) {
    piVar3 = local_20 + 1;
  }
  iVar1 = *piVar3;
  puVar4 = (undefined4 *)FUN_0010f82c(iVar1 << 2,0);
  *piVar2 = (int)puVar4;
  puVar9 = (undefined4 *)param_2[6];
  for (puVar7 = (undefined4 *)*piVar11; puVar7 != puVar9; puVar7 = puVar7 + 1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *puVar7;
    }
    puVar4 = puVar4 + 1;
  }
  iVar5 = param_2[6];
  iVar8 = *piVar11;
  param_1[7] = *piVar2 + iVar1 * 4;
  param_1[8] = 0;
  param_1[6] = *piVar2 + (iVar5 - iVar8 >> 2) * 4;
  if (param_2[8] != 0) {
    iVar5 = FUN_001a0808(0x40,1);
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = FUN_000c4754(iVar5,param_2[8]);
    }
    param_1[8] = iVar1;
  }
  return param_1;
}

