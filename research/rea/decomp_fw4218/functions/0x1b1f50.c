// rea decompile_all
// name: FUN_001b1f50
// address: 0x1b1f50
// body: available
// range: 0x1b1f50-0x1b2047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001b1f50(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *param_1;
  FUN_001c6e90(param_1[1] - iVar5);
  iVar4 = param_2 * 0x14;
  if (param_2 < extraout_r1) {
    piVar1 = (int *)(iVar5 + iVar4);
    iVar5 = 0;
    if ((piVar1[1] != 0) && (iVar5 = FUN_001b2228(param_1), iVar5 != 0)) {
      FUN_00002898(DAT_001b2048);
      iVar5 = iVar5 + 1;
    }
    uVar2 = *(undefined4 *)(*piVar1 + 4);
    FUN_00002898(DAT_001b204c,uVar2);
    iVar3 = FUN_00003738(uVar2);
    uVar6 = iVar3 + iVar5;
    if (0x13 < uVar6) goto LAB_001b1fba;
  }
  else {
    uVar6 = 0;
  }
  for (; uVar6 < 0x14; uVar6 = uVar6 + 1) {
    FUN_00002898(&DAT_001b2050);
  }
LAB_001b1fba:
  FUN_00002898(&DAT_001b2054);
  iVar5 = *param_1;
  FUN_001c6e90(param_1[1] - iVar5);
  if ((param_2 < extraout_r1_00) &&
     (piVar1 = *(int **)(iVar5 + iVar4), iVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,param_3 == 2),
     iVar5 == 0)) {
    piVar1 = (int *)(*param_1 + iVar4);
    uVar6 = piVar1[4];
    if ((uVar6 == 0) || (FUN_001c6e90(param_1[1] - *param_1), extraout_r1_01 <= uVar6)) {
      FUN_00002898(s_executes___s__command_001b2060,*(undefined4 *)(*piVar1 + 4));
    }
    else {
      do {
        iVar4 = *param_1;
        FUN_001c6e90(param_1[1] - iVar4);
        if (extraout_r1_02 <= uVar6) {
          return;
        }
        FUN_00002898(&DAT_001b2058,*(undefined4 *)(*(int *)(iVar4 + uVar6 * 0x14) + 4));
        uVar6 = *(uint *)(*param_1 + uVar6 * 0x14 + 8);
      } while (uVar6 != 0);
      FUN_00002898(&DAT_001b205c);
    }
  }
  FUN_00002898(&DAT_001b2078);
  return;
}

