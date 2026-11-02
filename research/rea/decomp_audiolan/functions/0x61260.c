// rea decompile_all
// name: FUN_00061260
// address: 0x61260
// body: available
// range: 0x61260-0x61527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_00061260(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iStack_2c;
  int iStack_28;
  
  iStack_2c = param_3;
  iStack_28 = param_4;
  iVar2 = FUN_000034d0(param_2);
  iVar2 = FUN_001a0808(iVar2 + 1,1);
  *(int *)(param_1 + 0x3c) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  FUN_00003418(iVar2,param_2);
  iVar2 = iStack_2c;
  param_4 = param_4 + 4;
  if (param_6 != 0) {
    iVar3 = FUN_0018a5f0();
    param_4 = FUN_00006158(param_4 + iVar3 + -1,iVar3);
    param_4 = param_4 * iVar3;
  }
  iVar3 = FUN_00061538(param_1,&iStack_2c,param_4,param_5);
  if (iVar3 == 0) {
    uVar5 = FUN_00182164(param_5);
    FUN_000028a4(DAT_0006152c,param_4,uVar5);
    FUN_00061624(param_1);
    return 0;
  }
  iVar4 = FUN_00179dac(param_1,*(undefined4 *)(param_1 + 0x3c),param_4 + -4,
                       *(undefined4 *)(iVar3 + 4));
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar3 + 0xc);
    FUN_0018a280(iVar3);
    iVar3 = iStack_2c;
    while( true ) {
      if (iVar2 <= iVar3) {
        return 1;
      }
      iStack_2c = iVar2 - iVar3;
      puVar6 = (undefined4 *)FUN_0019b388(0x10);
      if (puVar6 == (undefined4 *)0x0) break;
      iVar8 = 0;
      iVar4 = FUN_0018a5f0();
      if (param_6 != 0) {
        iVar8 = iVar4 + -4;
      }
      iVar9 = iStack_2c * param_4 + iVar8;
      iVar7 = FUN_001a0814(iVar9,param_5,1);
      while (iVar7 == 0) {
        if (iStack_2c == 0) goto LAB_00061478;
        iStack_2c = iStack_2c + -1;
        iVar9 = iStack_2c * param_4 + iVar8;
        iVar7 = FUN_001a0814(iVar9,param_5,1);
      }
      if (iStack_2c == 0) {
LAB_00061478:
        FUN_0018a280(puVar6);
        goto LAB_00061480;
      }
      puVar6[3] = iVar7;
      *puVar6 = 0;
      puVar6[2] = iVar9;
      if (param_6 == 0) {
        puVar6[1] = iVar7;
      }
      else {
        iVar8 = FUN_00006158(iVar7 + iVar4 + -1);
        puVar6[1] = iVar4 * iVar8;
      }
      if (puVar6 == (undefined4 *)0x0) goto LAB_00061480;
      FUN_0019ec88(param_1);
      iVar3 = iVar3 + iStack_2c;
    }
    FUN_000028a4(DAT_00061530);
LAB_00061480:
    FUN_00182164(param_5);
    thunk_FUN_00181e78(param_5);
    FUN_000028a4(DAT_00061534,iVar2,iVar3,param_4);
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_00179ea8(param_1);
      FUN_0019f30c(*(undefined4 *)(param_1 + 0x40));
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_0019f30c();
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    piVar1 = (int *)*(int *)(param_1 + 0x34);
    while (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      FUN_0019f30c(piVar1[3]);
      FUN_0019f30c(piVar1);
      piVar1 = (int *)iVar2;
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    FUN_000028a4(DAT_00061528);
    FUN_0018a280(iVar3);
    FUN_00061624(param_1);
  }
  return 0;
}

