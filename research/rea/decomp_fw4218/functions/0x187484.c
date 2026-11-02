// rea decompile_all
// name: FUN_00187484
// address: 0x187484
// body: available
// range: 0x187484-0x1878cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00187484(int *param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined2 *param_9)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  uint local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 *local_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [36];
  int *piStack_34;
  int local_30;
  undefined4 uStack_2c;
  uint local_28;
  
  local_28 = param_4;
  uStack_2c = param_3;
  local_30 = param_2;
  iVar6 = param_2 - DAT_001878d0;
  bVar9 = false;
  piStack_34 = param_1;
  if (param_2 == DAT_001878d0) goto LAB_00187550;
  if (param_2 < DAT_001878d0) {
    iVar6 = param_2 - DAT_001878d4;
    if (param_2 == DAT_001878d4) {
      if ((param_1[0x18] & 0x80000000U) == 0) goto LAB_00187550;
      uVar7 = 1;
      uVar4 = *(undefined4 *)param_1[0x1f];
LAB_0018778c:
      FUN_001a0754(uVar4,uVar7);
      goto LAB_00187550;
    }
    if (DAT_001878d4 <= param_2) {
      if (iVar6 == 1) {
        if ((param_1[0x18] & 0x80000000U) == 0) goto LAB_00187550;
        uVar7 = 1;
        uVar4 = *(undefined4 *)param_1[0x1f];
      }
      else {
        if (iVar6 == 2) {
          if ((param_1[0x18] & 0x80000000U) == 0) goto LAB_00187550;
          uVar7 = 2;
          uVar4 = *(undefined4 *)param_1[0x1f];
          goto LAB_0018778c;
        }
        if (iVar6 != 3) goto LAB_0018754c;
        if ((param_1[0x18] & 0x80000000U) == 0) goto LAB_00187550;
        uVar7 = 2;
        uVar4 = *(undefined4 *)param_1[0x1f];
      }
      FUN_001a06fc(uVar4,uVar7);
      goto LAB_00187550;
    }
    bVar10 = param_2 == 0x1203;
    iVar6 = 0;
    if (!bVar10) {
      iVar6 = param_2 + -0x2020;
      bVar10 = iVar6 == 0;
    }
    if (bVar10) goto LAB_00187550;
    if (iVar6 == 0x11) {
      if (param_1[0x50] == 0) {
        return;
      }
      iVar6 = FUN_001d06b8();
      if ((uint)(iVar6 - param_1[0x51]) < 0x1f5) {
        return;
      }
      uVar3 = (**(code **)(*(int *)param_1[0x50] + 0xe8))();
      if ((uVar3 & 0xffff & param_5 << 0xc) == 0) {
        return;
      }
      uStack_6c = FUN_0017274c(&local_80,param_3,local_28);
      local_70._0_2_ = 0;
      uVar1 = *param_9;
      iVar6 = FUN_001727f0(auStack_58);
      FUN_00172810(iVar6,uStack_6c);
      *(short *)(iVar6 + 0x10) = (short)param_5;
      *(short *)(iVar6 + 0x12) = (short)param_6;
      *(short *)(iVar6 + 0x14) = (short)param_7;
      *(undefined2 *)(iVar6 + 0x16) = uVar1;
      *(undefined2 *)(iVar6 + 0x18) = local_70._0_2_;
      *(undefined2 *)(iVar6 + 0x1a) = 0;
      *(undefined2 *)(iVar6 + 0x1c) = 0;
      FUN_00180368(param_1[0x50],auStack_58,2);
LAB_00187724:
      (**(code **)(*param_1 + 400))(param_1);
      return;
    }
    if (iVar6 == 0x12) {
      uVar4 = FUN_0017277c(auStack_68,DAT_001878dc);
      FUN_001850b4(param_1[0x1f],0,0,uVar4);
      if (param_1[0x50] == 0) {
        return;
      }
      goto LAB_00187724;
    }
  }
  else {
    iVar2 = iVar6 - DAT_001878d8;
    if (iVar6 == DAT_001878d8) {
      local_80 = *(int *)param_1[0x1f] + 0x484;
      FUN_00199128(param_1,param_3,param_4 & 0xff);
      return;
    }
    if (iVar6 < DAT_001878d8) {
      if (iVar6 == 0xe2d) goto LAB_00187550;
      if (iVar6 == 0x100d) {
        FUN_00181708(*(int *)param_1[0x1f] + 0x658,param_1);
        return;
      }
      if (iVar6 == 0x2ffe) {
        uVar3 = 0;
        piVar5 = (int *)FUN_0018e874(param_1 + 0x20,param_4);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)FUN_0018e874(param_1 + 0x22,local_28);
          if (piVar5 == (int *)0x0) goto LAB_0018783c;
          if ((param_5 & 1) != 0) {
            uVar3 = FUN_0017e46c(piVar5);
          }
        }
        else if ((param_5 & 1) != 0) {
          uVar3 = (**(code **)(*piVar5 + 0x13c))(piVar5);
          uVar3 = uVar3 & 0xfffeffff;
        }
        if ((param_5 & 2) != 0) {
          iVar6 = (**(code **)(*piVar5 + 0x94))(piVar5);
          uVar3 = iVar6 + uVar3 & 0xfffeffff;
        }
LAB_0018783c:
        local_78 = 0;
        local_74 = 0;
        local_70 = (undefined2 *)DAT_001878dc;
        local_80 = param_5;
        local_7c = uVar3;
        (**(code **)(*param_1 + 0x1bc))(param_1,param_3,DAT_001878e0,local_28);
        return;
      }
    }
    else if ((iVar2 == 0x3ffa || iVar2 == 0x3ffc) || iVar2 == 0x4001) goto LAB_00187550;
  }
LAB_0018754c:
  bVar9 = true;
LAB_00187550:
  puVar8 = (undefined4 *)param_1[0x41];
  if (puVar8 != (undefined4 *)0x0) {
    local_74 = FUN_001beccc(param_8);
    local_78 = param_7;
    local_70 = param_9;
    local_80 = param_5;
    local_7c = param_6;
    uStack_6c = param_3;
    (**(code **)*puVar8)(puVar8,*(int *)(*param_1 + -0x14) + (int)param_1,local_30,local_28);
  }
  if (bVar9) {
    uVar3 = 0;
    while( true ) {
      if (*(ushort *)(param_1 + 0x3e) <= uVar3) {
        return;
      }
      puVar8 = *(undefined4 **)(param_1[0x3d] + uVar3 * 4);
      if (puVar8 == (undefined4 *)0x0) break;
      local_74 = FUN_001beccc(param_8);
      local_78 = param_7;
      local_70 = param_9;
      local_80 = param_5;
      local_7c = param_6;
      uStack_6c = param_3;
      (**(code **)*puVar8)(puVar8,*(int *)(*param_1 + -0x14) + (int)param_1,local_30,local_28);
      uVar3 = uVar3 + 1 & 0xfffeffff;
    }
    return;
  }
  return;
}

