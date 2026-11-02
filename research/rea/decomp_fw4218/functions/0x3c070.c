// rea decompile_all
// name: FUN_0003c070
// address: 0x3c070
// body: available
// range: 0x3c070-0x3c1bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0003c070(int *param_1,uint *param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined1 local_1c;
  
  iVar9 = param_2[2] + param_3[2];
  if ((0xffff < param_2[1]) && (iVar2 = FUN_000366e0(DAT_0003c1c0,-1 - *param_2), iVar2 != 0)) {
    FUN_0002f9bc(DAT_0003c1c0);
    FUN_0002f9fc(3,s_TIME__in_1_too_large_in_addition_0003c1c4);
  }
  if ((0xffff < param_3[1]) && (iVar2 = FUN_000366e0(DAT_0003c1c0,-1 - *param_3), iVar2 != 0)) {
    FUN_0002f9bc(DAT_0003c1c0);
    FUN_0002f9fc(3,s_TIME__in_2_too_large_in_addition_0003c1f0);
  }
  if ((char)param_2[3] == '\0') {
    if ((char)param_3[3] != '\0') {
      local_24 = param_2[1];
      local_28 = *param_2;
      local_20 = param_2[2];
      local_1c = 1;
      FUN_0003c68c(param_1,param_3,&local_28);
      goto LAB_0003c132;
    }
    uVar10 = FUN_001c6f84(iVar9);
    uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
    param_1[2] = (int)uVar10;
    *(undefined1 *)(param_1 + 3) = 0;
    if (iVar9 == 0) {
      uVar6 = *param_2;
      uVar4 = *param_3;
      uVar5 = param_3[1];
      uVar3 = param_2[1];
      *param_1 = uVar6 + uVar4;
      param_1[1] = uVar3 + uVar5 + (uint)CARRY4(uVar6,uVar4);
      goto LAB_0003c132;
    }
    uVar4 = *param_2 + *param_3;
    iVar9 = param_2[1] + param_3[1] + (uint)CARRY4(*param_2,*param_3) + (uint)CARRY4(uVar3,uVar4);
    *param_1 = uVar3 + uVar4;
  }
  else {
    if ((char)param_3[3] == '\0') {
      local_24 = param_3[1];
      local_28 = *param_3;
      local_20 = param_3[2];
      local_1c = 1;
      FUN_0003c68c(param_1,param_2,&local_28);
      goto LAB_0003c132;
    }
    uVar10 = FUN_001c6f84(iVar9);
    uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
    param_1[2] = (int)uVar10;
    *(undefined1 *)(param_1 + 3) = 1;
    if (iVar9 != 0) {
      uVar5 = *param_2;
      uVar4 = param_2[1];
      uVar8 = *param_3;
      uVar7 = param_3[1];
      uVar6 = uVar5 + uVar8;
      *param_1 = uVar3 + uVar6;
      param_1[1] = uVar4 + uVar7 + (uint)CARRY4(uVar5,uVar8) + (uint)CARRY4(uVar3,uVar6);
      goto LAB_0003c132;
    }
    iVar9 = param_2[1] + param_3[1] + (uint)CARRY4(*param_2,*param_3);
    *param_1 = *param_2 + *param_3;
  }
  param_1[1] = iVar9;
LAB_0003c132:
  iVar9 = 0xffff - param_1[1];
  if (0xffff < (uint)param_1[1]) {
    param_1[1] = 0xffff;
    *param_1 = -1;
    param_1[2] = _DAT_0003c21c;
    uVar1 = DAT_0003c1c0;
    iVar2 = FUN_000366e0(DAT_0003c1c0);
    iVar9 = 0;
    if (iVar2 != 0) {
      FUN_0002f9bc(uVar1);
      iVar9 = FUN_0002f9fc(3,s__TIME__Overflow_in_addition_0003c21f + 1);
    }
  }
  return iVar9;
}

