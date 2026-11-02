// rea decompile_all
// name: FUN_00123290
// address: 0x123290
// body: available
// range: 0x123290-0x123603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_00123290(int param_1,byte param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined2 local_98 [4];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined2 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined2 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  short local_58;
  undefined1 auStack_50 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined2 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  short local_30;
  
  bVar6 = 1;
  *(byte *)(param_1 + 0x41) = param_2;
  if ((param_2 & 1) != 0) {
    local_a0 = 1;
    local_9c = 0x20000000;
    local_98[0] = 0xffff;
    (**(code **)(**(int **)(param_1 + 0x18) + 0x1ac))
              (*(int **)(param_1 + 0x18),&local_a0,s_Clock_00123604);
    local_a0 = 2;
    local_9c = 0x10000000;
    local_98[0] = 0xffff;
    (**(code **)(**(int **)(param_1 + 0x18) + 0x1ac))
              (*(int **)(param_1 + 0x18),&local_a0,s_Separate_streams_0012360c);
    uVar9 = 0;
    do {
      local_80 = 1;
      uStack_7c = 0x20000000;
      local_78 = 0;
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x18) + 0x130))
                                (*(int **)(param_1 + 0x18),&DAT_00088000,s_Clock_00123604,&local_80)
      ;
      if (piVar3 == (int *)0x0) {
        bVar6 = 0;
      }
      *(int **)(param_1 + 0x1c) = piVar3;
      if (piVar3 != (int *)0x0) {
        *(undefined1 *)(param_1 + 0x46) = 1;
        (**(code **)(*piVar3 + 0xa4))(piVar3,param_1 + 8);
      }
      while( true ) {
        uVar9 = uVar9 + 1 & 0xfffeffff;
        if (0x11 < uVar9) goto LAB_001233a8;
        if (uVar9 == 0) break;
        if (uVar9 == 1) {
          local_70 = 2;
          uStack_6c = 0x10000000;
          local_68 = 0;
          iVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x130))
                            (*(int **)(param_1 + 0x18),0x4000000c,&DAT_00123628,&local_70);
          bVar6 = bVar6 & iVar2 != 0;
        }
        else {
          FUN_0010e728(auStack_50,&DAT_00123620);
          FUN_0010e6f4(auStack_50,uVar9 - 1);
          piVar3 = *(int **)(param_1 + 0x18);
          local_58 = (short)uVar9 + -1;
          local_60 = 2;
          uStack_5c = 0x10000000;
          uVar1 = FUN_0015e6f4(auStack_50);
          iVar2 = (**(code **)(*piVar3 + 0x130))(piVar3,0x8000000d,uVar1,&local_60);
          bVar6 = bVar6 & iVar2 != 0;
          FUN_0010e7f4(auStack_50);
        }
      }
    } while( true );
  }
LAB_001233a8:
  if ((param_2 & 2) != 0) {
    local_48 = 2;
    uStack_44 = 0x10000000;
    local_40 = 0xffff;
    (**(code **)(**(int **)(param_1 + 0x18) + 0x1ac))
              (*(int **)(param_1 + 0x18),&local_48,s_Separate_streams_0012360c);
    uVar1 = DAT_00123624;
    piVar3 = (int *)0x0;
    uVar7 = 0;
    do {
      local_90 = 2;
      uStack_8c = 0x10000000;
      local_88 = 1;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x18) + 0x150))
                                (*(int **)(param_1 + 0x18),uVar1,s_Sys_Clock_0012362c,&local_90);
      if (piVar5 == (int *)0x0) {
        bVar6 = 0;
      }
      *(int **)(param_1 + 0x20) = piVar5;
      uVar8 = uVar7;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x44))(piVar5,param_1 + 0xc);
        piVar3 = *(int **)(param_1 + 0x20);
      }
      while( true ) {
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x34))(piVar3,param_1);
        }
        uVar7 = uVar8 + 1;
        if (0x10 < uVar7) goto LAB_00123580;
        if (uVar7 == 0) break;
        FUN_0010e728(local_98,&DAT_00123620);
        FUN_0010e6f4(local_98,uVar7);
        piVar3 = *(int **)(param_1 + 0x18);
        local_30 = uVar8 + 2;
        local_38 = 2;
        uStack_34 = 0x10000000;
        uVar4 = FUN_0015e6f4(local_98);
        piVar3 = (int *)(**(code **)(*piVar3 + 0x150))(piVar3,0x8000000d,uVar4,&local_38);
        bVar6 = bVar6 & piVar3 != (int *)0x0;
        FUN_0010e7f4(local_98);
        uVar8 = uVar7;
      }
    } while( true );
  }
LAB_00123580:
  *(int *)(*(int *)(param_1 + 0x18) + 0x104) = param_1 + 4;
  piVar3 = (int *)**(undefined4 **)(*(int *)(param_1 + 0x18) + 0x7c);
  (**(code **)(*piVar3 + 300))(piVar3,1,param_1 + 0x14);
  piVar3 = (int *)**(undefined4 **)(*(int *)(param_1 + 0x18) + 0x7c);
  piVar3 = (int *)(**(code **)(*piVar3 + 0x134))(piVar3,param_1 + 0x10);
  *(int **)(param_1 + 0x24) = piVar3;
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*(int *)((int)piVar3 + *(int *)(*piVar3 + -0x38)) + 0x24))
                              ((int)piVar3 + *(int *)(*piVar3 + -0x38));
    (**(code **)(*piVar3 + 0x38))();
  }
  return bVar6;
}

