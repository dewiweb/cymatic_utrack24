// rea decompile_all
// name: FUN_0001589c
// address: 0x1589c
// body: available
// range: 0x1589c-0x15a67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001589c(int param_1,int param_2,undefined4 param_3,short *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  short *psStack_20;
  
  uVar6 = 0;
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 0x16) & 1) != 0) {
    uVar6 = *(ushort *)(*(int *)(param_1 + 0x20) + 0x18) & 0xffff1fff;
  }
  if (uVar6 == 0) {
    return;
  }
  psStack_20 = param_4;
  do {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar7 = uVar6;
    if ((int)uVar1 < (int)uVar6) {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x14);
      *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + 1;
      uVar7 = uVar1;
    }
    uVar6 = uVar6 - uVar7;
    psStack_20 = (short *)FUN_00012c2c(*(undefined4 *)(param_1 + 8),0);
    if (psStack_20 == (short *)0x0) {
      piVar4 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x14);
      *piVar4 = *piVar4 + 1;
      *(byte *)(*(int *)(param_1 + 0x20) + 0x16) = *(byte *)(*(int *)(param_1 + 0x20) + 0x16) & 0xfe
      ;
      return;
    }
    *psStack_20 = (short)uVar7 + 8;
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x20) + param_2 * 4 + 0x20);
    if (0 < (int)uVar7 >> 2) {
      psVar5 = psStack_20 + 2;
      if ((int)(uVar7 << 0x1d) < 0) {
        *(undefined4 *)(psStack_20 + 4) = *puVar3;
        psVar5 = psStack_20 + 4;
      }
      for (iVar2 = (int)uVar7 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)(psVar5 + 2) = *puVar3;
        psVar5 = psVar5 + 4;
        *(undefined4 *)psVar5 = *puVar3;
      }
    }
    iVar2 = thunk_EXT_FUN_004005e0(*(int *)(param_1 + 0x24) + 0x10,&psStack_20,0);
    if (iVar2 != 0) {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x14);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      FUN_00012bfc(psStack_20);
    }
  } while (0 < (int)uVar6);
  *(byte *)(*(int *)(param_1 + 0x20) + 0x16) = *(byte *)(*(int *)(param_1 + 0x20) + 0x16) & 0xfe;
  if (*(char *)(param_1 + 0x1d) == '\0') {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(iVar2 + 0x16) & 0x20) == 0) {
    *(byte *)(iVar2 + 0x16) = *(byte *)(iVar2 + 0x16) | 0x20;
  }
  DAT_b000000e = DAT_b000000e;
  return;
}

