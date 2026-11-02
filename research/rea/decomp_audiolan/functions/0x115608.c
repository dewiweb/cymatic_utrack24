// rea decompile_all
// name: FUN_00115608
// address: 0x115608
// body: available
// range: 0x115608-0x115853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00115608(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined2 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
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
  undefined2 local_30 [4];
  undefined1 auStack_28 [8];
  
  uVar9 = 0;
  FUN_001179e0();
  uVar8 = DAT_00115854;
  if (*(short *)(param_1 + 0x3e) == 2) {
    uVar6 = param_2;
    if (*(int **)(param_1 + 0x4c) != (int *)0x0 && param_2 != DAT_00115854) {
      if (param_2 != 0) {
        uVar6 = (param_2 - 1) * 0x10000;
      }
      if (param_2 != 0) {
        uVar6 = uVar6 >> 0x10;
      }
      uVar2 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x48))();
      if (uVar2 <= uVar6) {
        uVar9 = 0x25;
        goto LAB_00115830;
      }
    }
    piVar3 = *(int **)(param_1 + 0x4c);
    uVar1 = (undefined2)param_3;
    if (piVar3 == (int *)0x0) {
      *(undefined2 *)(param_1 + 0x60) = uVar1;
    }
    else if (uVar6 == uVar8) {
      iVar7 = 0;
      iVar4 = (**(code **)(*piVar3 + 0x48))();
      if (0 < iVar4) {
        do {
          *(undefined2 *)(*(int *)(param_1 + 0x60) + iVar7 * 2) = uVar1;
          iVar7 = iVar7 + 1;
          iVar4 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x48))();
        } while (iVar7 < iVar4);
      }
    }
    else {
      uVar8 = (**(code **)(*piVar3 + 0x48))();
      if (uVar6 < uVar8) {
        *(undefined2 *)(*(int *)(param_1 + 0x60) + uVar6 * 2) = uVar1;
      }
    }
    FUN_0010e7e0(auStack_28);
    iVar4 = FUN_0012de68(*(undefined4 *)(param_1 + 0x6c),param_3,auStack_28,local_30);
    uVar8 = param_4;
    if (iVar4 == 0) {
      uVar8 = param_4 & 0xffff | 0x4000;
    }
    iVar4 = FUN_0012dc08(*(undefined4 *)(param_1 + 0x6c),param_3);
    if (iVar4 == 0) {
      uVar8 = uVar8 & 0xffff | 0x20;
    }
    iVar4 = FUN_0012db0c(*(undefined4 *)(param_1 + 0x6c),param_3);
    if (iVar4 == 0) {
      uVar8 = uVar8 & 0xffff | 0x40;
    }
    uVar5 = FUN_0015e89c(auStack_28);
    local_46 = *(undefined2 *)(param_1 + 0x40);
    local_48 = *(undefined2 *)(param_1 + 0x3e);
    local_44 = *(undefined2 *)(param_1 + 0x42);
    local_42 = (short)param_2;
    iVar4 = FUN_0013b4c4(*(int *)(param_1 + 0x48) + 0x98,*(undefined4 *)(param_1 + 0x24),&local_48,
                         param_3,uVar5,uVar8 & 0xffff,local_30[0]);
    if (iVar4 == 0) {
      FUN_00143a9c(*(undefined4 *)(param_1 + 0x48));
      FUN_00143ecc(*(undefined4 *)(param_1 + 0x48));
      uVar5 = FUN_0015e89c(auStack_28);
      local_3e = *(undefined2 *)(param_1 + 0x40);
      local_40 = *(undefined2 *)(param_1 + 0x3e);
      local_3c = *(undefined2 *)(param_1 + 0x42);
      local_3a = (short)param_2;
      FUN_0013b4c4(*(int *)(param_1 + 0x48) + 0x98,*(undefined4 *)(param_1 + 0x24),&local_40,param_3
                   ,uVar5,uVar8 & 0xffff,local_30[0]);
    }
    FUN_0010e7f4(auStack_28);
  }
  else {
    uVar9 = 0x11;
  }
LAB_00115830:
  FUN_00114fcc(param_1,param_2,param_4);
  FUN_001179d0(param_1);
  return uVar9;
}

