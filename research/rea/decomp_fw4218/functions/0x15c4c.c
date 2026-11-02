// rea decompile_all
// name: FUN_00015c4c
// address: 0x15c4c
// body: available
// range: 0x15c4c-0x15da7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00015c4c(int param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_1 + (uint)*(ushort *)(param_1 + 0x34) * 4;
  iVar6 = *(int *)(iVar7 + 0x2c);
  uVar3 = FUN_00074c48(*(undefined4 *)(iVar6 + 4),9);
  if ((uVar3 & 0x80) == 0) {
    *(int *)(*(int *)(param_2 + 0x14) + 0x2c) = *(int *)(*(int *)(param_2 + 0x14) + 0x2c) + 1;
    return (undefined4 *)0x0;
  }
  sVar2 = *(short *)(param_1 + 0x34) + 1;
  *(short *)(param_1 + 0x34) = sVar2;
  if (sVar2 == 2) {
    *(undefined2 *)(param_1 + 0x34) = 0;
  }
  puVar4 = (uint *)FUN_00012c2c(*(undefined4 *)(param_1 + 4),0);
  piVar1 = DAT_00015da8;
  if (puVar4 == (uint *)0x0) {
    uVar3 = *(int *)(iVar7 + 0x24) + 0xc;
    *(uint *)(iVar6 + 0x18) = uVar3;
    *(uint *)(*piVar1 + *(int *)(iVar6 + 4) * 4 + 0x200) =
         *(uint *)(iVar6 + 0x20) & 0xff | (uVar3 & 0xff00ffff) << 8;
    **(int **)(param_2 + 0x14) = **(int **)(param_2 + 0x14) + 1;
    return (undefined4 *)0x0;
  }
  if (*(short *)(param_2 + 0x22) != 0) {
    FUN_001dad70(puVar4,(*puVar4 & 0xffff) + 4);
  }
  puVar5 = *(undefined4 **)(iVar7 + 0x24);
  *(uint **)(iVar7 + 0x24) = puVar4;
  *(uint **)(iVar6 + 0x18) = puVar4 + 3;
  *(uint *)(*piVar1 + *(int *)(iVar6 + 4) * 4 + 0x200) =
       *(uint *)(iVar6 + 0x20) & 0xff | ((uint)(puVar4 + 3) & 0xff00ffff) << 8;
  *puVar5 = *(undefined4 *)(param_1 + 0xc);
  puVar5[1] = puVar5[4];
  puVar5[2] = *(undefined4 *)(param_1 + 0x14);
  puVar5[3] = *(undefined4 *)(param_1 + 0x18);
  puVar5[4] = *(undefined4 *)(param_1 + 0x1c);
  *(char *)(param_1 + 0x18) = (char)*(undefined4 *)(param_1 + 0x18) + *(char *)(param_1 + 0x21);
  *(int *)(*(int *)(param_2 + 0x14) + 0x18) = *(int *)(*(int *)(param_2 + 0x14) + 0x18) + 1;
  return puVar5;
}

