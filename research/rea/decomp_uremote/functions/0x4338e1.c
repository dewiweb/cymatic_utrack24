// rea decompile_all
// name: FUN_004338e1
// address: 0x4338e1
// body: available
// range: 0x4338e1-0x433bb2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004338e1(int param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined1 local_610 [16];
  int local_600;
  byte local_5cb;
  int local_5c8;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined2 *local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 4);
  local_34 = *(int *)(local_8 + 0x88);
  if (*(uint *)(local_8 + 0x10) <= param_3) {
    return 6;
  }
  if ((param_4 & 0x400) != 0) {
    param_4 = param_4 | 3;
  }
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x14);
  *(undefined2 *)(param_1 + 0x6e) = 0;
  local_18 = (undefined2 *)(param_1 + 0x6c);
  *local_18 = 0;
  if ((param_4 & 1) == 0) {
    local_14 = CONCAT31(local_14._1_3_,1);
    if ((param_4 & 2) == 0) goto LAB_0043395e;
  }
  local_14 = local_14 & 0xffffff00;
LAB_0043395e:
  *(undefined4 *)(param_1 + 0x48) = 0x6f75746c;
  local_10 = (*(code *)**(undefined4 **)(local_34 + 0xc))
                       (local_610,local_8,param_2,param_1,0,0,local_14,(int)param_4 >> 0x10 & 0xf,
                        FUN_004335f5);
  if (local_10 == 0) {
    local_5cb = (byte)(param_4 >> 10) & 1;
    local_10 = FUN_004335f5(local_610,param_3);
    if (local_10 == 0) {
      local_30 = local_b0;
      local_2c = iStack_ac;
      local_28 = iStack_a8;
      local_1c = local_9c;
      local_24 = iStack_a4;
      local_20 = local_a0;
      (**(code **)(*(int *)(local_34 + 0xc) + 4))(local_610);
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 1 | 4;
      if ((param_4 & 0x400) == 0) {
        iVar2 = FUN_0040d211();
        *(int *)(param_1 + 0x28) = iVar2 >> 0x10;
        *(int *)(param_1 + 0x38) = iVar2 >> 0x10;
        *(undefined1 *)(*(int *)(param_1 + 0x9c) + 8) = 0;
        iVar2 = *(int *)(local_8 + 0xd0) - *(int *)(local_8 + 200) >> 0x10;
        *(int *)(param_1 + 0x34) = iVar2;
        *(int *)(param_1 + 0x3c) = iVar2;
        *(undefined4 *)(param_1 + 0x48) = 0x6f75746c;
        if (*(ushort *)(param_2 + 0xe) < 0x18) {
          *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x100;
        }
        FUN_004107d0();
        FUN_00410751(local_a0,local_1c);
        local_c = *(int *)(param_1 + 0x28);
        local_8 = 0;
        FUN_00410783();
        iVar2 = local_c;
        local_c = 0;
        *(int *)(param_1 + 0x28) = local_20 + iVar2;
        local_8 = *(int *)(param_1 + 0x34);
        FUN_00410783();
        *(int *)(param_1 + 0x34) = local_8 + local_1c;
        if ((param_4 & 1) == 0) {
          uVar4 = *(undefined4 *)(param_1 + 0xa4);
          puVar5 = *(undefined4 **)(local_600 + 4);
          uVar1 = *(undefined4 *)(param_1 + 0xa8);
          if (((char)local_14 == '\0') || (local_5c8 == 0)) {
            for (iVar2 = (int)*(short *)(local_600 + 2); 0 < iVar2; iVar2 = iVar2 + -1) {
              uVar3 = thunk_FUN_00401000(*puVar5,uVar4);
              *puVar5 = uVar3;
              uVar3 = thunk_FUN_00401000(puVar5[1],uVar1);
              puVar5[1] = uVar3;
              puVar5 = puVar5 + 2;
            }
          }
          uVar4 = thunk_FUN_00401000(*(undefined4 *)(param_1 + 0x28),uVar4);
          *(undefined4 *)(param_1 + 0x28) = uVar4;
          uVar4 = thunk_FUN_00401000(*(undefined4 *)(param_1 + 0x34),uVar1);
          *(undefined4 *)(param_1 + 0x34) = uVar4;
        }
        FUN_004106d2();
        *(int *)(param_1 + 0x18) = local_28 - local_30;
        *(int *)(param_1 + 0x1c) = local_24 - local_2c;
        *(int *)(param_1 + 0x20) = local_30;
        *(int *)(param_1 + 0x24) = local_24;
        if ((param_4 & 0x10) != 0) {
          FUN_0040f2e7();
        }
      }
      else {
        iVar2 = FUN_0040d211();
        *(int *)(param_1 + 0x20) = iVar2 >> 0x10;
        uVar6 = FUN_0040d211();
        iVar2 = (int)((ulonglong)uVar6 >> 0x20);
        *(int *)(param_1 + 0x28) = (int)uVar6 >> 0x10;
        *(int *)(iVar2 + 0xc) = local_30;
        *(int *)(iVar2 + 0x10) = local_2c;
        *(int *)(iVar2 + 0x14) = local_28;
        *(int *)(iVar2 + 0x1c) = local_20;
        *(int *)(iVar2 + 0x18) = local_24;
        *(int *)(iVar2 + 0x20) = local_1c;
        *(undefined1 *)(iVar2 + 8) = 1;
      }
    }
  }
  return local_10;
}

