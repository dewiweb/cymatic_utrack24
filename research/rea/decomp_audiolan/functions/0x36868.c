// rea decompile_all
// name: FUN_00036868
// address: 0x36868
// body: available
// range: 0x36868-0x3695b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00036868(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_r2;
  undefined4 uVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_2 == 0) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined1 *)((int)param_1 + 0xc) = 1;
    return;
  }
  lVar9 = *param_1;
  lVar7 = FUN_0016d878(*(undefined4 *)((int)param_1 + 4));
  uVar8 = FUN_0016d878((int)lVar9,param_2);
  uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
  uVar1 = lVar7 + (ulonglong)uVar3;
  if (((int)(uVar1 >> 0x20) == 0 &&
       !CARRY4((uint)CARRY4(uVar3,(uint)lVar7),(uint)((ulonglong)lVar7 >> 0x20))) &&
     ((uVar1 & 0xffff0000) == 0)) {
    *(int *)param_1 = (int)uVar8;
    *(int *)((int)param_1 + 4) = (int)uVar1;
    uVar8 = FUN_0016d878((int)param_1[1],param_2);
    lVar9 = FUN_0000243c((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),_DAT_00036964,0);
    uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
    uVar3 = 0xffff - *(int *)((int)param_1 + 4);
    bVar6 = -(int)*param_1 - 1U <= (uint)lVar9;
    if (uVar3 < uVar4 || uVar4 - uVar3 < (uint)bVar6) {
      *(undefined4 *)((int)param_1 + 4) = 0xffff;
      *(undefined4 *)param_1 = 0xffffffff;
      *(undefined4 *)(param_1 + 1) = DAT_0003695c;
      uVar5 = DAT_00036960;
      iVar2 = FUN_00030b90(DAT_00036960,0xffff,(uVar4 - uVar3) - (uint)!bVar6);
      if (iVar2 != 0) goto LAB_0003694a;
    }
    else {
      *param_1 = lVar9 + *param_1;
      uVar8 = FUN_0016d878((int)param_1[1],param_2);
      FUN_0000243c((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),_DAT_00036964,0);
      *(undefined4 *)(param_1 + 1) = extraout_r2;
    }
    return;
  }
  *(undefined4 *)((int)param_1 + 4) = 0xffff;
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = DAT_0003695c;
  uVar5 = DAT_00036960;
  iVar2 = FUN_00030b90(DAT_00036960);
  if (iVar2 == 0) {
    return;
  }
LAB_0003694a:
  FUN_00029e6c(uVar5);
  FUN_00029eac(3,s__TIME__Overflow_in_multiplicatio_00036967 + 1);
  return;
}

