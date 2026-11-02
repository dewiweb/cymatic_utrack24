// rea decompile_all
// name: FUN_001c673c
// address: 0x1c673c
// body: available
// range: 0x1c673c-0x1c6937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_001c673c(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  int *piStack_34;
  uint uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar6 = *(int *)(*param_1 + -0x58) + (int)param_1;
  uVar9 = 0;
  piStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  FUN_00180064(iVar6);
  uVar1 = DAT_001c6938;
  if (*(short *)(iVar6 + 0x3e) == 1) {
    uVar8 = param_2;
    if (*(int **)(iVar6 + 0x4c) != (int *)0x0 && param_2 != DAT_001c6938) {
      if (param_2 != 0) {
        uVar8 = (param_2 - 1) * 0x10000;
      }
      if (param_2 != 0) {
        uVar8 = uVar8 >> 0x10;
      }
      uVar3 = (**(code **)(**(int **)(iVar6 + 0x4c) + 0x48))();
      if (uVar3 <= uVar8) {
        uVar9 = 0x25;
        goto LAB_001c6914;
      }
    }
    uVar2 = FUN_001becec(local_2c);
    piVar4 = *(int **)(iVar6 + 0x4c);
    if (piVar4 == (int *)0x0) {
      *(undefined2 *)(iVar6 + 0x60) = uVar2;
    }
    else if (uVar8 == uVar1) {
      iVar7 = 0;
      iVar5 = (**(code **)(*piVar4 + 0x48))();
      if (0 < iVar5) {
        do {
          *(undefined2 *)(*(int *)(iVar6 + 0x60) + iVar7 * 2) = uVar2;
          iVar7 = iVar7 + 1;
          iVar5 = (**(code **)(**(int **)(iVar6 + 0x4c) + 0x48))();
        } while (iVar7 < iVar5);
      }
    }
    else {
      uVar3 = (**(code **)(*piVar4 + 0x48))();
      if (uVar8 < uVar3) {
        *(undefined2 *)(*(int *)(iVar6 + 0x60) + uVar8 * 2) = uVar2;
      }
    }
    iVar5 = FUN_001becec(local_2c);
    uVar8 = param_5;
    if (iVar5 != 0) {
      uVar8 = param_5 & 0xffff | 0x20;
    }
    uVar3 = FUN_001becec(local_2c);
    if (uVar3 < uVar1) {
      uVar8 = uVar8 & 0xffff | 0x40;
    }
    local_46 = *(undefined2 *)(iVar6 + 0x40);
    local_48 = *(undefined2 *)(iVar6 + 0x3e);
    local_44 = *(undefined2 *)(iVar6 + 0x42);
    local_42 = (short)param_2;
    iVar5 = FUN_0019666c(*(int *)(iVar6 + 0x48) + 0x98,*(undefined4 *)(iVar6 + 0x24),&local_48,
                         local_2c,param_4,uVar8 & 0xffff);
    if (iVar5 == 0) {
      FUN_0019ca74(*(undefined4 *)(iVar6 + 0x48));
      FUN_0019cea4(*(undefined4 *)(iVar6 + 0x48));
      local_3e = *(undefined2 *)(iVar6 + 0x40);
      local_40 = *(undefined2 *)(iVar6 + 0x3e);
      local_3c = *(undefined2 *)(iVar6 + 0x42);
      local_3a = (short)param_2;
      FUN_0019666c(*(int *)(iVar6 + 0x48) + 0x98,*(undefined4 *)(iVar6 + 0x24),&local_40,local_2c,
                   param_4,uVar8 & 0xffff);
    }
  }
  else {
    uVar9 = 0x11;
  }
LAB_001c6914:
  FUN_0017d850(iVar6,param_2,param_5);
  FUN_00180054(iVar6);
  return uVar9;
}

