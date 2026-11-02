// rea decompile_all
// name: FUN_0013bed4
// address: 0x13bed4
// body: available
// range: 0x13bed4-0x13c063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0013bed4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                  int param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar4 = param_3;
  uVar9 = param_4;
  piVar1 = (int *)FUN_0016d7a4(0xd8,DAT_0013c064);
  piVar7 = DAT_0013c068;
  if (piVar1 != (int *)0x0) {
    iVar8 = *(int *)(param_6 + 0x24);
    iVar5 = *DAT_0013c068;
    piVar1[0x35] = DAT_0013c06c;
    *piVar1 = iVar5;
    piVar1 = (int *)FUN_000ea620(piVar1,DAT_0013c074,DAT_0013c070);
    iVar5 = *piVar7;
    *piVar1 = iVar5;
    iVar6 = DAT_0013c07c;
    *(int *)((int)piVar1 + *(int *)(iVar5 + -0xc)) = piVar7[1];
    iVar5 = DAT_0013c078;
    iVar2 = iVar8 + 0x864;
    piVar1[0x28] = iVar6;
    piVar1[0x29] = iVar2;
    piVar1[0x2a] = iVar5;
    piVar1[0x2b] = 0;
    FUN_00134be8(iVar2,piVar1 + 0x28);
    piVar1[0x28] = DAT_0013c080;
    piVar1[0x2c] = 0;
    piVar1[0x2d] = iVar8;
    iVar5 = FUN_0010f058(piVar1 + 0x2f,0);
    piVar7 = (int *)(iVar5 + -0xbc);
    iVar6 = *(int *)(iVar5 + -0xc);
    if (iVar6 != 0) {
      iVar2 = *(int *)(iVar6 + 0xc) + -1;
      *(int *)(iVar6 + 0xc) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(*(int *)(iVar5 + -0xc) + 4) = 0;
      }
    }
    *(int *)(iVar5 + -0xc) = param_5;
    if (param_5 != 0) {
      *(undefined4 *)(param_5 + 4) = *(undefined4 *)(iVar5 + -0x18);
      *(int *)(param_5 + 0xc) = *(int *)(param_5 + 0xc) + 1;
      *(undefined4 *)(param_5 + 8) = *(undefined4 *)(iVar5 + -0x14);
    }
    *(short *)(iVar5 + -4) = (short)param_4;
    if (param_3 == 5) {
      uVar3 = 0x128;
    }
    else {
      uVar3 = 0x328;
    }
    iVar4 = FUN_000ea56c(piVar7,*(undefined1 *)(*(int *)(iVar5 + -8) + 0x15d),param_1,param_2,
                         param_6,param_7,param_8,uVar3,param_4,param_3,0,0,DAT_0013c088,DAT_0013c084
                         ,*(int *)(*piVar7 + -0xc) + (int)piVar7,param_1,param_2,iVar4,uVar9);
    if (iVar4 != 0) {
      return piVar7;
    }
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  return (int *)0x0;
}

