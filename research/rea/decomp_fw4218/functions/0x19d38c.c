// rea decompile_all
// name: FUN_0019d38c
// address: 0x19d38c
// body: available
// range: 0x19d38c-0x19d53b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0019d38c(int *param_1,int *param_2,int param_3,undefined2 param_4,undefined2 *param_5,
                  undefined2 param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = DAT_0019d53c;
  if (param_2 == (int *)0x0) {
    *param_1 = *DAT_0019d53c;
    iVar3 = piVar1[7];
    param_1[0x14] = iVar3;
    *(int *)((int)param_1 + *(int *)(iVar3 + -0x38) + 0x50) = piVar1[8];
    iVar3 = piVar1[9];
    param_1[0x14] = iVar3;
    *(int *)((int)param_1 + *(int *)(iVar3 + -0x38) + 0x50) = piVar1[0xb];
    *(int *)((int)param_1 + *(int *)(param_1[0x14] + -0x48) + 0x50) = piVar1[10];
    param_2 = piVar1;
  }
  piVar1 = (int *)FUN_0018007c(param_1,param_2 + 1,DAT_0019d540,param_3,param_1);
  iVar3 = *param_2;
  *piVar1 = iVar3;
  *(int *)((int)piVar1 + *(int *)(iVar3 + -0x10)) = param_2[5];
  piVar4 = (int *)(param_3 + 0x6b8);
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0xc)) = param_2[4];
  *(int *)((int)piVar1 + *(int *)(*piVar1 + -0x14)) = param_2[6];
  piVar1[0x13] = (int)piVar4;
  *(undefined2 *)((int)piVar1 + 0x3e) = *param_5;
  *(undefined2 *)(piVar1 + 0x10) = param_5[1];
  piVar1[0x11] = *(int *)(param_5 + 2);
  *(undefined2 *)(piVar1 + 0x12) = param_4;
  *(undefined2 *)((int)piVar1 + 0x4a) = param_6;
  if ((uint)*(ushort *)(param_3 + 0x6be) == (uint)*(ushort *)(param_3 + 0x6bc)) {
    if (*piVar4 == 0) {
      puVar2 = (undefined4 *)FUN_001c6a94(0x10,DAT_0019d544);
      *piVar4 = (int)puVar2;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined2 *)(param_3 + 0x6bc) = 4;
    }
    else {
      iVar3 = FUN_001c6a94((uint)*(ushort *)(param_3 + 0x6bc) * 4 + 0x10,DAT_0019d544);
      if (iVar3 != 0) {
        FUN_00003b88(iVar3,*piVar4,(uint)*(ushort *)(param_3 + 0x6bc) << 2);
        puVar2 = (undefined4 *)(iVar3 + (uint)*(ushort *)(param_3 + 0x6bc) * 4);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        FUN_001c6a64(*piVar4);
        *piVar4 = iVar3;
        *(short *)(param_3 + 0x6bc) = *(short *)(param_3 + 0x6bc) + 4;
      }
    }
  }
  if ((uint)*(ushort *)(param_3 + 0x6be) < (uint)*(ushort *)(param_3 + 0x6bc)) {
    *(int **)(*piVar4 + (uint)*(ushort *)(param_3 + 0x6be) * 4) = piVar1;
    *(short *)(param_3 + 0x6be) = *(short *)(param_3 + 0x6be) + 1;
  }
  return piVar1;
}

