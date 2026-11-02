// rea decompile_all
// name: FUN_00182338
// address: 0x182338
// body: available
// range: 0x182338-0x182593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00182338(int *param_1,int *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar1 = DAT_00182594;
  if (param_2 == (int *)0x0) {
    *param_1 = *DAT_00182594;
    iVar4 = piVar1[7];
    param_1[0x36] = iVar4;
    *(int *)((int)param_1 + *(int *)(iVar4 + -0x38) + 0xd8) = piVar1[8];
    iVar4 = piVar1[9];
    param_1[0x36] = iVar4;
    *(int *)((int)param_1 + *(int *)(iVar4 + -0x38) + 0xd8) = piVar1[0xb];
    *(int *)((int)param_1 + *(int *)(param_1[0x36] + -0x48) + 0xd8) = piVar1[10];
    param_2 = piVar1;
  }
  piVar1 = (int *)FUN_0018007c(param_1,param_2 + 1,DAT_00182598,param_3,param_1);
  iVar4 = *param_2;
  *piVar1 = iVar4;
  iVar2 = DAT_001825a0;
  *(int *)((int)piVar1 + *(int *)(iVar4 + -0x10)) = param_2[5];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0xc)) = param_2[4];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0x14)) = param_2[6];
  iVar4 = DAT_0018259c;
  piVar1[0x10] = 0;
  piVar1[0x11] = 0;
  piVar1[0x14] = iVar4;
  piVar1[0x15] = 0;
  piVar1[0x13] = param_3 + 0x864;
  piVar1[0x12] = iVar2;
  FUN_00194134(param_3 + 0x864,piVar1 + 0x12);
  piVar1[0x16] = 0;
  iVar4 = DAT_001825a4;
  *(undefined2 *)(piVar1 + 0x17) = 0;
  *(undefined2 *)((int)piVar1 + 0x5e) = 0;
  piVar1[0x12] = iVar4;
  *(undefined2 *)(piVar1 + 0x18) = 0;
  iVar4 = FUN_001727f0(piVar1 + 0x19);
  iVar4 = FUN_00172710(iVar4 + 0x10);
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(undefined4 *)(iVar4 + 0x10) = 0;
  *(undefined4 *)(iVar4 + 0x14) = 0;
  *(undefined4 *)(iVar4 + 0x18) = 0;
  *(undefined4 *)(iVar4 + 0x1c) = 0;
  *(undefined4 *)(iVar4 + 0x20) = 0;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  iVar4 = FUN_0014cd58(iVar4 + 0x2c);
  iVar4 = FUN_00171e90(iVar4 + 0xc);
  iVar4 = FUN_00171e90(iVar4 + 8);
  *(undefined4 *)(iVar4 + -0x1c) = 0;
  *(int **)(iVar4 + 0x1c) = param_4;
  *(undefined4 *)(iVar4 + -0x34) = 0;
  *(undefined4 *)(iVar4 + -0x30) = 0;
  *(undefined4 *)(iVar4 + -0x2c) = 0;
  *(undefined4 *)(iVar4 + -0x28) = 0;
  *(undefined4 *)(iVar4 + -0x24) = 0;
  *(undefined4 *)(iVar4 + -0x20) = 0;
  *(undefined4 *)(iVar4 + -0x18) = 0;
  *(undefined1 *)(iVar4 + 0x14) = 0;
  *(undefined1 *)(iVar4 + 0x15) = 0;
  *(undefined4 *)(iVar4 + 0x18) = 0;
  *(undefined4 *)(iVar4 + 0x20) = 0;
  *(undefined4 *)(iVar4 + 8) = 0;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(undefined4 *)(iVar4 + 0x10) = 0;
  if ((uint)*(ushort *)((int)param_4 + 6) == (uint)*(ushort *)(param_4 + 1)) {
    if (*param_4 == 0) {
      puVar3 = (undefined4 *)FUN_001c6a94(0x10,DAT_001825a8);
      *param_4 = (int)puVar3;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined2 *)(param_4 + 1) = 4;
    }
    else {
      iVar2 = FUN_001c6a94((uint)*(ushort *)(param_4 + 1) * 4 + 0x10,DAT_001825a8);
      if (iVar2 != 0) {
        FUN_00003b88(iVar2,*param_4,(uint)*(ushort *)(param_4 + 1) << 2);
        puVar3 = (undefined4 *)(iVar2 + (uint)*(ushort *)(param_4 + 1) * 4);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        FUN_001c6a64(*param_4);
        *param_4 = iVar2;
        *(short *)(param_4 + 1) = (short)param_4[1] + 4;
      }
    }
  }
  if ((uint)*(ushort *)((int)param_4 + 6) < (uint)*(ushort *)(param_4 + 1)) {
    *(int *)(*param_4 + (uint)*(ushort *)((int)param_4 + 6) * 4) = iVar4 + -0xb4;
    *(short *)((int)param_4 + 6) = *(short *)((int)param_4 + 6) + 1;
  }
  return iVar4 + -0xb4;
}

