// rea decompile_all
// name: FUN_00427a63
// address: 0x427a63
// body: available
// range: 0x427a63-0x4280ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00427a63(int *param_1,uint param_2,uint param_3,char param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 local_8c [44];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  char local_9;
  int local_8;
  
  piVar2 = param_1;
  local_8 = 0;
  local_10 = (int *)0x0;
  iVar6 = param_1[3];
  iVar7 = *param_1;
  bVar3 = false;
  local_9 = '\0';
  if ((1 < param_3) && (*(ushort *)(iVar7 + 0x122) < param_3)) {
    return 0x15;
  }
  if (*(uint *)(iVar7 + 0x10) <= param_2) {
    return 0x10;
  }
  param_1[5] = param_2;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    local_14 = *(uint *)(param_1[1] + 0x30);
    local_18 = *(uint *)(param_1[1] + 0x34);
  }
  else {
    local_18 = 0x10000;
    local_14 = 0x10000;
  }
  local_28 = iVar7;
  FUN_00426aa7(param_2);
  if (*(int *)(*(int *)(iVar7 + 0x80) + 0x34) == 0) {
    local_1c = FUN_0042660a(iVar7,param_2,param_1 + 7);
  }
  else {
    puVar1 = *(undefined4 **)(*(int *)(iVar7 + 0x80) + 0x34);
    local_8 = (**(code **)*puVar1)(puVar1[1],param_2,local_30);
    if (local_8 != 0) {
      return local_8;
    }
    local_1c = 0;
    param_1[7] = local_2c;
    local_9 = '\x01';
    _memset(local_8c,0,0x28);
    iVar4 = FUN_00411045(local_2c);
    param_1[6] = iVar4;
  }
  if (param_1[7] < 1) {
LAB_00427bc4:
    if ((param_1[7] == 0) || ((short)param_1[8] == 0)) {
      param_1[9] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      param_1[0xc] = 0;
      if (param_4 == '\0') {
        param_1[0x11] = -param_1[0xd];
        param_1[0x2f] = param_1[0x2c];
        param_1[0x12] = 0;
        param_1[0x13] = param_1[0xe] + -param_1[0xd];
        param_1[0x14] = 0;
        param_1[0x2e] = 0;
        param_1[0x30] = 0;
        param_1[0x31] = param_1[0x2c] - param_1[0x2d];
        FUN_00426b16(param_2);
        if (*(char *)(*param_1 + 0x2c4) != '\0') {
          local_8 = FUN_0042dff2(param_2,&local_10,4);
          if (local_8 != 0) goto LAB_00428074;
          param_1[0x11] = param_1[0x11] + *local_10;
          param_1[0x12] = param_1[0x12] + local_10[1];
          param_1[0x13] = param_1[0x13] + local_10[2];
          param_1[0x14] = param_1[0x14] + local_10[3];
          param_1[0x2e] = param_1[0x2e] + local_10[4];
          param_1[0x2f] = param_1[0x2f] + local_10[5];
          param_1[0x30] = param_1[0x30] + local_10[6];
          param_1[0x31] = param_1[0x31] + local_10[7];
          FUN_00411a5c(local_10);
        }
        if ((*(byte *)(param_1 + 4) & 1) == 0) {
          iVar6 = thunk_FUN_00401000(param_1[0x11],local_14);
          param_1[0x11] = iVar6;
          iVar6 = thunk_FUN_00401000(param_1[0x13],local_14);
          param_1[0x13] = iVar6;
          iVar6 = thunk_FUN_00401000(param_1[0x2f],local_18);
          param_1[0x2f] = iVar6;
          iVar6 = thunk_FUN_00401000(param_1[0x31],local_18);
          param_1[0x31] = iVar6;
        }
        local_8 = 0;
      }
    }
    else {
      param_1[0x11] = param_1[9] - param_1[0xd];
      param_1[0x13] = param_1[0xe] + (param_1[9] - param_1[0xd]);
      param_1[0x2f] = param_1[0x2c] + param_1[0xc];
      param_1[0x12] = 0;
      param_1[0x14] = 0;
      param_1[0x2e] = 0;
      param_1[0x30] = 0;
      param_1[0x31] = (param_1[0x2c] + param_1[0xc]) - param_1[0x2d];
      FUN_00426b16(param_2);
      if ((short)param_1[8] < 1) {
        if ((short)param_1[8] == -1) {
          local_1c = (uint)*(short *)(iVar6 + 0x16);
          local_38 = (int)*(short *)(iVar6 + 0x14);
          local_8 = (**(code **)(iVar7 + 0x210))(param_1);
          if (local_8 == 0) {
            local_34 = param_1[0x2a];
            (**(code **)(iVar7 + 0x204))(param_1);
            if (*(char *)(iVar7 + 0x2c4) != '\0') {
              local_24 = *(int *)(iVar7 + 100);
              local_8 = FUN_0042dff2(param_2,&local_10,*(int *)(iVar6 + 0x54) + 4);
              if (local_8 != 0) goto LAB_00428089;
              local_20 = *(uint *)(iVar6 + 0x54);
              iVar4 = 0;
              if (0 < (int)local_20) {
                piVar5 = (int *)(*(int *)(iVar6 + 0x30) * 0x20 + *(int *)(iVar6 + 0x58) + 8);
                do {
                  if ((*(byte *)(piVar5 + -1) & 2) != 0) {
                    *piVar5 = *piVar5 + (int)(short)local_10[iVar4 * 2];
                    piVar5[1] = piVar5[1] + (int)(short)local_10[iVar4 * 2 + 1];
                  }
                  iVar4 = iVar4 + 1;
                  piVar5 = piVar5 + 8;
                } while (iVar4 < (int)local_20);
              }
              piVar5 = local_10 + iVar4 * 2;
              param_1[0x11] = param_1[0x11] + *piVar5;
              param_1[0x12] = param_1[0x12] + piVar5[1];
              param_1[0x13] = param_1[0x13] + piVar5[2];
              param_1[0x14] = param_1[0x14] + piVar5[3];
              param_1[0x2e] = param_1[0x2e] + local_10[iVar4 * 2 + 4];
              param_1[0x2f] = param_1[0x2f] + piVar5[5];
              param_1[0x30] = param_1[0x30] + local_10[iVar4 * 2 + 6];
              param_1[0x31] = param_1[0x31] + piVar5[7];
              FUN_00411a5c(local_10);
            }
            if ((*(byte *)(param_1 + 4) & 1) == 0) {
              iVar4 = thunk_FUN_00401000(param_1[0x11],local_14);
              param_1[0x11] = iVar4;
              iVar4 = thunk_FUN_00401000(param_1[0x13],local_14);
              param_1[0x13] = iVar4;
              iVar4 = thunk_FUN_00401000(param_1[0x2f],local_18);
              param_1[0x2f] = iVar4;
              iVar4 = thunk_FUN_00401000(param_1[0x31],local_18);
              param_1[0x31] = iVar4;
            }
            if ((param_1[4] & 0x400U) == 0) {
              local_10 = (int *)0x0;
              local_20 = local_1c;
              local_14 = *(uint *)(iVar6 + 0x54);
              local_24 = *(int *)(iVar6 + 0x30);
              local_3c = param_1[6];
              local_44 = param_1[7];
              FUN_0040d89f();
              param_1 = (int *)0x0;
              if (local_14 != 0) {
                local_40 = param_3 + 1;
                param_3 = local_24 << 5;
                do {
                  local_60 = piVar2[0x12];
                  iVar4 = piVar2[0x11];
                  local_5c = piVar2[0x13];
                  local_58 = piVar2[0x14];
                  local_54 = piVar2[0x2e];
                  local_50 = piVar2[0x2f];
                  local_4c = piVar2[0x30];
                  local_48 = piVar2[0x31];
                  local_18 = (uint)*(short *)(iVar6 + 0x16);
                  local_8 = FUN_00427a63(piVar2,*(undefined4 *)(*(int *)(iVar6 + 0x34) + param_3),
                                         local_40,0);
                  iVar7 = local_28;
                  if (local_8 != 0) goto LAB_00428089;
                  local_10 = (int *)(*(int *)(iVar6 + 0x34) + param_3);
                  if ((*(ushort *)(local_10 + 1) & 0x200) == 0) {
                    piVar2[0x12] = local_60;
                    piVar2[0x13] = local_5c;
                    piVar2[0x14] = local_58;
                    piVar2[0x2e] = local_54;
                    piVar2[0x2f] = local_50;
                    piVar2[0x30] = local_4c;
                    piVar2[0x11] = iVar4;
                    piVar2[0x31] = local_48;
                  }
                  local_20 = (uint)*(short *)(iVar6 + 0x16);
                  if (local_20 != local_18) {
                    FUN_004276f5(piVar2,local_1c,local_18);
                  }
                  param_1 = (int *)((int)param_1 + 1);
                  param_3 = param_3 + 0x20;
                  iVar7 = local_28;
                } while (param_1 < local_14);
              }
              piVar2[6] = local_3c;
              piVar2[7] = local_44;
              piVar2[0x2a] = local_34;
              if ((((*(byte *)(piVar2 + 4) & 2) == 0) && ((*(ushort *)(local_10 + 1) & 0x100) != 0))
                 && (local_1c < local_20)) {
                FUN_0042786b(local_1c,local_38);
              }
            }
            else {
              FUN_0040d89f();
              *(undefined4 *)(param_1[2] + 0x48) = 0x636f6d70;
            }
            goto LAB_00428089;
          }
        }
        else {
          local_8 = 0x14;
        }
      }
      else {
        local_8 = (**(code **)(iVar7 + 0x20c))(param_1);
        if (local_8 == 0) {
          (**(code **)(iVar7 + 0x204))(param_1);
          local_8 = FUN_004274e3();
          if (local_8 == 0) {
            FUN_0040d89f();
          }
          goto LAB_00428089;
        }
      }
    }
LAB_00428074:
    if (!bVar3) goto LAB_00428089;
  }
  else {
    if ((param_1[0x15] == 0) && (*(int *)(*(int *)(iVar7 + 0x80) + 0x34) == 0)) {
      local_8 = 8;
      goto LAB_00428089;
    }
    local_8 = (**(code **)(iVar7 + 0x200))(param_1,param_2,param_1[0x15] + local_1c,param_1[7]);
    if (local_8 != 0) goto LAB_00428089;
    bVar3 = true;
    local_8 = (**(code **)(iVar7 + 0x208))(param_1);
    if ((local_8 == 0) && (param_4 == '\0')) goto LAB_00427bc4;
  }
  (**(code **)(iVar7 + 0x204))(param_1);
LAB_00428089:
  if (local_9 != '\0') {
    piVar2 = *(int **)(*(int *)(iVar7 + 0x80) + 0x34);
    (**(code **)(*piVar2 + 4))(piVar2[1],local_30);
  }
  return local_8;
}

