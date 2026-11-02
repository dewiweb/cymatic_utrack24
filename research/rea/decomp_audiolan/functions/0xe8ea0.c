// rea decompile_all
// name: FUN_000e8ea0
// address: 0xe8ea0
// body: available
// range: 0xe8ea0-0xe9077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000e8ea0(int *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  param_1[1] = 1;
  param_1[2] = 0x82;
  iVar2 = FUN_0016d774(0x208,DAT_000e9078);
  *param_1 = iVar2;
  FUN_000038a0(iVar2,param_1[2] << 2);
  FUN_000e86a8(param_1,param_3[1] + param_2[1]);
  uVar3 = 0;
  if (param_3[1] != 0) {
    do {
      uVar6 = 0;
      uVar4 = 0;
      uVar5 = 0;
      if (param_2[1] != 0) {
        do {
          lVar1 = (ulonglong)*(uint *)(*param_3 + uVar3 * 4) *
                  (ulonglong)*(uint *)(*param_2 + uVar4 * 4) +
                  (ulonglong)*(uint *)(*param_1 + (uVar4 + uVar3) * 4) + (ulonglong)uVar6;
          *(int *)(*param_1 + (uVar4 + uVar3) * 4) = (int)lVar1;
          uVar5 = param_2[1];
          uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      if (uVar5 + uVar3 < param_3[1] + uVar5) {
        iVar9 = (param_3[1] + uVar5) - (uVar5 + uVar3);
        iVar2 = 0;
        do {
          iVar7 = param_2[1] + uVar3 + iVar2;
          uVar5 = *(uint *)(*param_1 + iVar7 * 4);
          iVar2 = iVar2 + 1;
          iVar8 = uVar5 + uVar6;
          uVar6 = (uint)CARRY4(uVar5,uVar6);
          iVar9 = iVar9 + -1;
          *(int *)(*param_1 + iVar7 * 4) = iVar8;
        } while (iVar9 != 0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_3[1]);
  }
  iVar2 = param_2[1];
  do {
    iVar9 = iVar2;
    iVar2 = iVar9 + -1;
    if (iVar2 < 1) {
      if (iVar2 < 0) goto LAB_000e8ff4;
      break;
    }
  } while (*(int *)(*param_2 + iVar2 * 4) == 0);
  if (iVar2 < param_2[1] + -1) {
    param_2[1] = iVar9;
  }
LAB_000e8ff4:
  iVar2 = param_3[1];
  do {
    iVar9 = iVar2;
    iVar2 = iVar9 + -1;
    if (iVar2 < 1) {
      if (iVar2 < 0) goto LAB_000e9034;
      break;
    }
  } while (*(int *)(*param_3 + iVar2 * 4) == 0);
  if (iVar2 < param_3[1] + -1) {
    param_3[1] = iVar9;
  }
LAB_000e9034:
  iVar2 = param_1[1];
  do {
    iVar9 = iVar2;
    iVar2 = iVar9 + -1;
    if (iVar2 < 1) {
      if (iVar2 < 0) {
        return;
      }
      break;
    }
  } while (*(int *)(*param_1 + iVar2 * 4) == 0);
  if (iVar2 < param_1[1] + -1) {
    param_1[1] = iVar9;
  }
  return;
}

