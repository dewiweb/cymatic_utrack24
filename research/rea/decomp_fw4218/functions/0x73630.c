// rea decompile_all
// name: FUN_00073630
// address: 0x73630
// body: available
// range: 0x73630-0x738e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00073630(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_3c;
  
  iVar3 = *(int *)(param_3 + 0x1c) - *(int *)(param_3 + 0x18) >> 2;
  if (param_4 == 1) {
    iVar8 = 0;
    iVar7 = 0;
    uVar9 = 0;
    bVar1 = false;
    local_3c = 0;
    if (iVar3 != 0) {
      do {
        iVar3 = param_5[5];
        uVar2 = FUN_000ef8fc(param_3,uVar9);
        iVar4 = (**(code **)(*param_1 + 0x34))(param_1,param_2,uVar2);
        FUN_001a6044();
        iVar5 = FUN_001c0580();
        if (iVar4 < iVar5) {
          uVar2 = FUN_000ef8fc(param_3,uVar9);
          iVar5 = FUN_00073958(param_1,uVar2,iVar3 + iVar7,iVar4);
          iVar7 = iVar7 + (iVar5 - (iVar3 + iVar7)) + iVar4;
          if (iVar8 < iVar7) {
            iVar8 = iVar7;
          }
        }
        else {
          bVar1 = true;
          local_3c = iVar4;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)(*(int *)(param_3 + 0x1c) - *(int *)(param_3 + 0x18) >> 2));
    }
    FUN_001a6044();
    iVar3 = FUN_001c0598();
    if (param_5[3] + iVar8 <= iVar3) {
      if (bVar1) {
        FUN_001a6044();
        uVar2 = FUN_001c05a0();
        param_5[2] = uVar2;
        param_5[4] = local_3c;
        param_5[6] = uVar2;
      }
      else {
        FUN_001a6044();
        iVar3 = FUN_001c0590();
        param_5[2] = iVar3 + param_5[3];
        param_5[4] = iVar8;
        param_5[6] = iVar3 + param_5[3];
      }
      iVar3 = FUN_000ef8fc(param_3,0);
      if (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 2 == 0) {
        return 0;
      }
      iVar3 = FUN_000ef8fc(param_3,0);
      if (**(int **)(iVar3 + 4) == 0) {
        return 0;
      }
      piVar6 = (int *)FUN_001c7218(**(int **)(iVar3 + 4),DAT_000738ec,DAT_000738e8,0xffffffff);
      if (piVar6 == (int *)0x0) {
        return 0;
      }
      uVar9 = (**(code **)(*piVar6 + 0x1c))();
      FUN_00136838(*param_5,uVar9 | 0x240000);
      return 0;
    }
  }
  else {
    iVar8 = 0;
    iVar7 = 0;
    uVar9 = 0;
    if (iVar3 != 0) {
      do {
        uVar2 = FUN_000ef8fc(param_3,uVar9);
        iVar3 = (**(code **)(*param_1 + 0x30))(param_1,param_2,uVar2);
        iVar7 = iVar7 + iVar3;
        if (iVar8 < iVar7) {
          iVar8 = iVar7;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)(*(int *)(param_3 + 0x1c) - *(int *)(param_3 + 0x18) >> 2));
    }
    FUN_001a6044();
    iVar3 = FUN_001c0598();
    if (iVar8 <= iVar3) {
      FUN_001a6044();
      uVar2 = FUN_001c0590();
      param_5[1] = uVar2;
      param_5[3] = iVar8;
      param_5[5] = uVar2;
      iVar3 = FUN_000ef8fc(param_3,0);
      if (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 2 != 0) {
        iVar3 = FUN_000ef8fc(param_3,0);
        if ((**(int **)(iVar3 + 4) != 0) &&
           (piVar6 = (int *)FUN_001c7218(**(int **)(iVar3 + 4),DAT_000738ec,DAT_000738e8,0xffffffff)
           , piVar6 != (int *)0x0)) {
          uVar9 = (**(code **)(*piVar6 + 0x1c))();
          FUN_00136838(*param_5,uVar9 | 0x40000);
        }
      }
      return 0;
    }
  }
  return 0xffffff99;
}

