// rea decompile_all
// name: FUN_00431c79
// address: 0x431c79
// body: available
// range: 0x431c79-0x43202a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00431c79(int param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 local_61c [16];
  int local_60c;
  byte local_5d7;
  int local_5d4;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int local_ac;
  int local_a8;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined2 *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  uint local_8;
  
  iVar2 = *(int *)(param_1 + 4);
  puVar5 = *(undefined4 **)(*(int *)(iVar2 + 0x1e8) + 0xc);
  if ((*(uint *)(iVar2 + 0x10) <= param_3) && (*(int *)(*(int *)(iVar2 + 0x80) + 0x34) == 0)) {
    return 6;
  }
  if ((param_4 & 0x400) != 0) {
    param_4 = param_4 | 3;
  }
  if (param_2 == 0) {
    uVar4 = 0x10000;
    *(undefined4 *)(param_1 + 0xac) = 0x10000;
  }
  else {
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0x10);
    uVar4 = *(undefined4 *)(param_2 + 0x14);
  }
  *(undefined4 *)(param_1 + 0xb0) = uVar4;
  *(undefined2 *)(param_1 + 0x6e) = 0;
  local_1c = (undefined2 *)(param_1 + 0x6c);
  *local_1c = 0;
  local_8 = param_4 & 1;
  if (local_8 == 0) {
    local_18 = CONCAT31(local_18._1_3_,1);
    if ((param_4 & 2) == 0) goto LAB_00431d17;
  }
  local_18 = local_18 & 0xffffff00;
LAB_00431d17:
  *(undefined4 *)(param_1 + 0x48) = 0x6f75746c;
  local_38 = iVar2;
  local_c = puVar5;
  local_14 = (*(code *)*puVar5)(local_61c,iVar2,param_2,param_1,*(undefined4 *)(iVar2 + 0x1a4),
                                *(undefined4 *)(iVar2 + 0x214),local_18,(int)param_4 >> 0x10 & 0xf,
                                FUN_00431a77);
  if (local_14 == 0) {
    local_5d7 = (byte)(param_4 >> 10) & 1;
    local_c8 = *(undefined4 *)(iVar2 + 0x194);
    local_c4 = *(undefined4 *)(iVar2 + 0x198);
    local_c0 = *(undefined4 *)(iVar2 + 0x19c);
    local_4c = *(undefined4 *)(iVar2 + 0x224);
    local_48 = *(undefined4 *)(iVar2 + 0x220);
    local_14 = FUN_0043197b(param_3,&local_40);
    if (local_14 == 0) {
      local_34 = local_bc;
      local_30 = iStack_b8;
      local_2c = iStack_b4;
      local_20 = local_a8;
      local_28 = iStack_b0;
      local_24 = local_ac;
      (*(code *)local_c[1])(local_61c);
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 1 | 4;
      if ((param_4 & 0x400) == 0) {
        uVar7 = FUN_0040d211();
        iVar2 = (int)uVar7 >> 0x10;
        *(int *)(param_1 + 0x28) = iVar2;
        *(int *)(param_1 + 0x38) = iVar2;
        *(undefined1 *)(*(int *)(param_1 + 0x9c) + 8) = 0;
        if ((uVar7 & 0x1000000000) == 0) {
          iVar2 = FUN_0040d211();
        }
        else {
          iVar2 = *(int *)(local_38 + 0x1d8) - *(int *)(local_38 + 0x1d0);
        }
        *(int *)(param_1 + 0x34) = iVar2 >> 0x10;
        *(int *)(param_1 + 0x3c) = iVar2 >> 0x10;
        *(undefined4 *)(param_1 + 0x48) = 0x6f75746c;
        if ((param_2 != 0) && (*(ushort *)(param_2 + 0xe) < 0x18)) {
          *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x100;
        }
        if ((((local_34 != 0x10000) || (local_28 != 0x10000)) || (local_30 != 0)) || (local_2c != 0)
           ) {
          FUN_004107d0();
        }
        if ((local_ac != 0) || (local_20 != 0)) {
          FUN_00410751(local_ac,local_20);
        }
        local_10 = *(int *)(param_1 + 0x28);
        local_c = (undefined4 *)0x0;
        FUN_00410783();
        iVar2 = local_10;
        local_10 = 0;
        *(int *)(param_1 + 0x28) = iVar2 + local_24;
        local_c = *(undefined4 **)(param_1 + 0x34);
        FUN_00410783();
        *(int *)(param_1 + 0x34) = (int)local_c + local_20;
        if (local_8 == 0) {
          local_8 = *(uint *)(param_1 + 0xb0);
          puVar5 = *(undefined4 **)(local_60c + 4);
          uVar4 = *(undefined4 *)(param_1 + 0xac);
          if (((char)local_18 == '\0') || (local_5d4 == 0)) {
            for (iVar2 = (int)*(short *)(local_60c + 2); 0 < iVar2; iVar2 = iVar2 + -1) {
              uVar3 = thunk_FUN_00401000(*puVar5,uVar4);
              *puVar5 = uVar3;
              uVar3 = thunk_FUN_00401000(puVar5[1],local_8);
              puVar5[1] = uVar3;
              puVar5 = puVar5 + 2;
            }
          }
          uVar4 = thunk_FUN_00401000(*(undefined4 *)(param_1 + 0x28),uVar4);
          *(undefined4 *)(param_1 + 0x28) = uVar4;
          uVar4 = thunk_FUN_00401000(*(undefined4 *)(param_1 + 0x34),local_8);
          *(undefined4 *)(param_1 + 0x34) = uVar4;
        }
        FUN_004106d2();
        *(int *)(param_1 + 0x18) = local_2c - local_34;
        *(int *)(param_1 + 0x1c) = local_28 - local_30;
        *(int *)(param_1 + 0x20) = local_34;
        *(int *)(param_1 + 0x24) = local_28;
        if ((uVar7 & 0x1000000000) != 0) {
          FUN_0040f2e7();
        }
      }
      else {
        iVar2 = FUN_0040d211();
        *(int *)(param_1 + 0x20) = iVar2 >> 0x10;
        uVar6 = FUN_0040d211();
        iVar2 = (int)((ulonglong)uVar6 >> 0x20);
        *(int *)(param_1 + 0x28) = (int)uVar6 >> 0x10;
        *(int *)(iVar2 + 0xc) = local_34;
        *(int *)(iVar2 + 0x10) = local_30;
        *(int *)(iVar2 + 0x14) = local_2c;
        *(int *)(iVar2 + 0x1c) = local_24;
        *(int *)(iVar2 + 0x18) = local_28;
        *(int *)(iVar2 + 0x20) = local_20;
        *(undefined1 *)(iVar2 + 8) = 1;
      }
      *(undefined4 *)(param_1 + 0x88) = local_40;
      *(undefined4 *)(param_1 + 0x8c) = local_3c;
      if (*(int *)(*(int *)(local_38 + 0x80) + 0x34) != 0) {
        piVar1 = *(int **)(*(int *)(local_38 + 0x80) + 0x34);
        (**(code **)(*piVar1 + 4))(piVar1[1],&local_40);
        *(undefined4 *)(param_1 + 0x88) = 0;
        *(undefined4 *)(param_1 + 0x8c) = 0;
      }
    }
    else {
      (*(code *)puVar5[1])(local_61c);
    }
  }
  return local_14;
}

