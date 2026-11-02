// rea decompile_all
// name: FUN_00436ad8
// address: 0x436ad8
// body: available
// range: 0x436ad8-0x4372b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00436ad8(uint *param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  int *in_EAX;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  byte *local_18;
  void *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_14 = (void *)param_1[0xd];
  local_10 = in_EAX[1];
  local_c = param_1[8];
  local_8 = param_1[7];
  if (local_14 < (void *)param_1[0xc]) {
    local_1c = (int)param_1[0xc] + (-1 - (int)local_14);
  }
  else {
    local_1c = param_1[0xb] - (int)local_14;
  }
  uVar9 = *param_1;
  pbVar8 = (byte *)*in_EAX;
joined_r0x00436b1c:
  local_18 = pbVar8;
  if (9 < uVar9) {
    iVar10 = -2;
LAB_00436b20:
    param_1[8] = local_c;
    uVar9 = local_8;
LAB_00436b29:
    param_1[7] = uVar9;
    uVar9 = local_10;
    param_2 = iVar10;
LAB_00436b2f:
    in_EAX[1] = uVar9;
    iVar10 = param_2;
LAB_00436b32:
    iVar3 = *in_EAX;
    *in_EAX = (int)local_18;
    in_EAX[2] = (int)(local_18 + (in_EAX[2] - iVar3));
    param_1[0xd] = (uint)local_14;
LAB_00436b46:
    FUN_00436454(iVar10);
    return;
  }
  switch((&switchD_00436b54::switchdataD_004372bc)[uVar9]) {
  case (undefined *)0x436b5b:
    for (; local_8 < 3; local_8 = local_8 + 8) {
      if (local_10 == 0) goto LAB_0043712a;
      param_2 = 0;
      local_10 = local_10 - 1;
      local_c = local_c | (uint)*local_18 << ((byte)local_8 & 0x1f);
      local_18 = local_18 + 1;
    }
    uVar9 = 1;
    uVar6 = (local_c & 7) >> 1;
    param_1[6] = local_c & 1;
    if (uVar6 == 0) {
      uVar6 = local_8 - 3 & 7;
      local_c = (local_c >> 3) >> (sbyte)uVar6;
      local_8 = (local_8 - 3) - uVar6;
      goto LAB_00437118;
    }
    if (uVar6 == 1) {
      FUN_0043642d(&local_2c,&local_28,&local_24);
      uVar9 = FUN_00436537(local_30,local_2c,local_28,local_24);
      param_1[1] = uVar9;
      if (uVar9 == 0) goto LAB_00437142;
      local_c = local_c >> 3;
      local_8 = local_8 - 3;
      *param_1 = 6;
    }
    else {
      if (uVar6 == 2) {
        local_c = local_c >> 3;
        local_8 = local_8 - 3;
        *param_1 = 3;
        goto LAB_0043711a;
      }
      if (uVar6 == 3) {
        *param_1 = 9;
        in_EAX[6] = (int)"invalid block type";
        param_1[8] = local_c >> 3;
        uVar9 = local_8 - 3;
        iVar10 = -3;
        goto LAB_00436b29;
      }
    }
LAB_0043711a:
    uVar9 = *param_1;
    pbVar8 = local_18;
    goto joined_r0x00436b1c;
  case (undefined *)0x436c49:
    for (; local_8 < 0x20; local_8 = local_8 + 8) {
      uVar9 = 0;
      if (local_10 == 0) {
        param_1[8] = local_c;
        param_1[7] = local_8;
        goto LAB_00436b2f;
      }
      local_10 = local_10 - 1;
      param_2 = 0;
      local_c = local_c | (uint)*local_18 << ((byte)local_8 & 0x1f);
      local_18 = local_18 + 1;
    }
    if (~local_c >> 0x10 == (local_c & 0xffff)) {
      param_1[1] = local_c & 0xffff;
      local_8 = 0;
      local_c = 0;
      if (param_1[1] == 0) {
LAB_00436ca3:
        uVar9 = -(uint)(param_1[6] != 0) & 7;
      }
      else {
        uVar9 = 2;
      }
      *param_1 = uVar9;
      goto LAB_0043711a;
    }
    *param_1 = 9;
    in_EAX[6] = (int)"invalid stored block lengths";
    break;
  case (undefined *)0x436cb4:
    if (local_10 != 0) {
      if (local_1c != 0) {
LAB_00436d4c:
        param_2 = 0;
        uVar9 = param_1[1];
        if (local_10 < param_1[1]) {
          uVar9 = local_10;
        }
        if (local_1c < uVar9) {
          uVar9 = local_1c;
        }
        _memcpy(local_14,local_18,uVar9);
        local_18 = local_18 + uVar9;
        local_10 = local_10 - uVar9;
        local_14 = (void *)((int)local_14 + uVar9);
        local_1c = local_1c - uVar9;
        puVar1 = param_1 + 1;
        *puVar1 = *puVar1 - uVar9;
        if (*puVar1 == 0) goto LAB_00436ca3;
        goto LAB_0043711a;
      }
      local_1c = 0;
      if (local_14 == (void *)param_1[0xb]) {
        pvVar4 = (void *)param_1[0xc];
        pvVar5 = (void *)param_1[10];
        if (pvVar5 != pvVar4) {
          if (pvVar5 < pvVar4) {
            local_1c = (int)pvVar4 + (-1 - (int)pvVar5);
          }
          else {
            local_1c = (int)param_1[0xb] - (int)pvVar5;
          }
          local_14 = pvVar5;
          if (local_1c != 0) goto LAB_00436d4c;
        }
      }
      param_1[0xd] = (uint)local_14;
      iVar10 = FUN_00436454(param_2);
      local_14 = (void *)param_1[0xd];
      pvVar4 = (void *)param_1[0xc];
      if (local_14 < pvVar4) {
        local_1c = (int)pvVar4 + (-1 - (int)local_14);
      }
      else {
        local_1c = param_1[0xb] - (int)local_14;
      }
      if (local_14 == (void *)param_1[0xb]) {
        pvVar5 = (void *)param_1[10];
        if (pvVar5 != pvVar4) {
          local_14 = pvVar5;
          if (pvVar5 < pvVar4) {
            local_1c = (int)pvVar4 + (-1 - (int)pvVar5);
          }
          else {
            local_1c = (int)param_1[0xb] - (int)pvVar5;
          }
        }
      }
      if (local_1c != 0) goto LAB_00436d4c;
      goto LAB_00437171;
    }
LAB_0043712a:
    param_1[8] = local_c;
    param_1[7] = local_8;
    in_EAX[1] = 0;
    iVar10 = param_2;
    goto LAB_00436b32;
  case (undefined *)0x436d8c:
    for (; pbVar8 = local_18, local_8 < 0xe; local_8 = local_8 + 8) {
      if (local_10 == 0) goto LAB_0043712a;
      param_2 = 0;
      local_10 = local_10 - 1;
      local_c = local_c | (uint)*local_18 << ((byte)local_8 & 0x1f);
      local_18 = local_18 + 1;
    }
    param_1[1] = local_c & 0x3fff;
    if (((local_c & 0x1f) < 0x1e) && (uVar9 = (local_c & 0x3fff) >> 5 & 0x1f, uVar9 < 0x1e)) {
      uVar9 = (*(code *)in_EAX[8])(in_EAX[10],uVar9 + 0x102 + (local_c & 0x1f),4);
      param_1[3] = uVar9;
      if (uVar9 != 0) {
        local_c = local_c >> 0xe;
        local_8 = local_8 - 0xe;
        param_1[2] = 0;
        *param_1 = 4;
        goto switchD_00436b54_caseD_436e61;
      }
LAB_00437142:
      iVar10 = -4;
      goto LAB_00436b20;
    }
    *param_1 = 9;
    in_EAX[6] = (int)"too many length or distance symbols";
    break;
  case (undefined *)0x436e61:
switchD_00436b54_caseD_436e61:
    while (param_1[2] < (param_1[1] >> 10) + 4) {
      for (; local_8 < 3; local_8 = local_8 + 8) {
        if (local_10 == 0) goto LAB_0043712a;
        param_2 = 0;
        local_10 = local_10 - 1;
        local_c = local_c | (uint)*pbVar8 << ((byte)local_8 & 0x1f);
        pbVar8 = pbVar8 + 1;
        local_18 = pbVar8;
      }
      *(uint *)(param_1[3] + *(int *)(&DAT_0090e610 + param_1[2] * 4) * 4) = local_c & 7;
      param_1[2] = param_1[2] + 1;
      local_8 = local_8 - 3;
      local_c = local_c >> 3;
    }
    while (param_1[2] < 0x13) {
      *(undefined4 *)(param_1[3] + *(int *)(&DAT_0090e610 + param_1[2] * 4) * 4) = 0;
      param_1[2] = param_1[2] + 1;
    }
    param_1[4] = 7;
    iVar10 = FUN_00436291(param_1[3],param_1 + 4,param_1 + 5,param_1[9]);
    if (iVar10 == 0) {
      param_1[2] = 0;
      *param_1 = 5;
      pbVar8 = local_18;
      goto switchD_00436b54_caseD_436fe8;
    }
    if (iVar10 == -3) {
      (*(code *)in_EAX[9])(in_EAX[10],param_1[3]);
      *param_1 = 9;
    }
    goto LAB_00436b20;
  case (undefined *)0x436fe8:
switchD_00436b54_caseD_436fe8:
    while (param_1[2] < (param_1[1] >> 5 & 0x1f) + 0x102 + (param_1[1] & 0x1f)) {
      for (; local_8 < param_1[4]; local_8 = local_8 + 8) {
        if (local_10 == 0) goto LAB_0043712a;
        param_2 = 0;
        local_10 = local_10 - 1;
        local_c = local_c | (uint)*pbVar8 << ((byte)local_8 & 0x1f);
        pbVar8 = pbVar8 + 1;
        local_18 = pbVar8;
      }
      iVar10 = param_1[5] + (*(uint *)(&DAT_0090e5c8 + param_1[4] * 4) & local_c) * 8;
      bVar2 = *(byte *)(iVar10 + 1);
      local_20 = (uint)bVar2;
      local_34 = *(uint *)(iVar10 + 4);
      if (local_34 < 0x10) {
        local_c = local_c >> (bVar2 & 0x1f);
        local_8 = local_8 - local_20;
        *(uint *)(param_1[3] + param_1[2] * 4) = local_34;
        param_1[2] = param_1[2] + 1;
      }
      else {
        if (local_34 == 0x12) {
          iVar10 = 7;
        }
        else {
          iVar10 = local_34 - 0xe;
        }
        local_1c = (uint)(local_34 == 0x12) * 8 + 3;
        for (; local_8 < iVar10 + local_20; local_8 = local_8 + 8) {
          if (local_10 == 0) goto LAB_0043712a;
          param_2 = 0;
          local_10 = local_10 - 1;
          local_c = local_c | (uint)*pbVar8 << ((byte)local_8 & 0x1f);
          pbVar8 = pbVar8 + 1;
          local_18 = pbVar8;
        }
        local_c = local_c >> (bVar2 & 0x1f);
        local_1c = local_1c + (*(uint *)(&DAT_0090e5c8 + iVar10 * 4) & local_c);
        local_c = local_c >> ((byte)iVar10 & 0x1f);
        local_8 = local_8 - (iVar10 + local_20);
        uVar9 = param_1[2];
        if ((param_1[1] >> 5 & 0x1f) + 0x102 + (param_1[1] & 0x1f) < local_1c + uVar9) {
LAB_004371c6:
          (*(code *)in_EAX[9])(in_EAX[10],param_1[3]);
          *param_1 = 9;
          in_EAX[6] = (int)"invalid bit length repeat";
          param_1[8] = local_c;
          param_1[7] = local_8;
          in_EAX[1] = local_10;
          iVar10 = *in_EAX;
          *in_EAX = (int)local_18;
          in_EAX[2] = (int)(local_18 + (in_EAX[2] - iVar10));
          param_1[0xd] = (uint)local_14;
          FUN_00436454(0xfffffffd);
          return;
        }
        if (local_34 == 0x10) {
          if (uVar9 == 0) goto LAB_004371c6;
          uVar7 = *(undefined4 *)((param_1[3] - 4) + uVar9 * 4);
        }
        else {
          uVar7 = 0;
        }
        do {
          *(undefined4 *)(param_1[3] + uVar9 * 4) = uVar7;
          uVar9 = uVar9 + 1;
          local_1c = local_1c - 1;
        } while (local_1c != 0);
        param_1[2] = uVar9;
        local_1c = 0;
      }
    }
    param_1[5] = 0;
    local_1c = 9;
    local_20 = 6;
    iVar10 = FUN_0043630d((param_1[1] >> 5 & 0x1f) + 1,&local_1c,&local_20,&local_3c,&local_38,
                          param_1[9]);
    if (iVar10 != 0) {
      if (iVar10 == -3) {
        (*(code *)in_EAX[9])(in_EAX[10],param_1[3]);
        *param_1 = 9;
      }
      param_1[8] = local_c;
      param_1[7] = local_8;
      in_EAX[1] = local_10;
      iVar3 = *in_EAX;
      *in_EAX = (int)local_18;
      in_EAX[2] = (int)(local_18 + (in_EAX[2] - iVar3));
      param_1[0xd] = (uint)local_14;
      goto LAB_00436b46;
    }
    uVar9 = FUN_00436537(local_1c,local_20,local_3c,local_38);
    if (uVar9 == 0) {
      param_1[8] = local_c;
      param_1[7] = local_8;
      in_EAX[1] = local_10;
      iVar10 = *in_EAX;
      *in_EAX = (int)local_18;
      in_EAX[2] = (int)(local_18 + (in_EAX[2] - iVar10));
      param_1[0xd] = (uint)local_14;
      iVar10 = -4;
      goto LAB_00436b46;
    }
    param_1[1] = uVar9;
    (*(code *)in_EAX[9])(in_EAX[10],param_1[3]);
    *param_1 = 6;
switchD_00436b54_caseD_437097:
    param_1[8] = local_c;
    param_1[7] = local_8;
    in_EAX[1] = local_10;
    iVar10 = *in_EAX;
    *in_EAX = (int)local_18;
    in_EAX[2] = (int)(local_18 + (in_EAX[2] - iVar10));
    param_1[0xd] = (uint)local_14;
    iVar10 = FUN_00436568(param_2);
    if (iVar10 != 1) goto LAB_00436b46;
    uVar9 = 0;
    param_2 = 0;
    FUN_004369f0(param_1[1]);
    local_18 = (byte *)*in_EAX;
    local_10 = in_EAX[1];
    local_c = param_1[8];
    local_8 = param_1[7];
    local_14 = (void *)param_1[0xd];
    if (local_14 < (void *)param_1[0xc]) {
      local_1c = (int)param_1[0xc] + (-1 - (int)local_14);
    }
    else {
      local_1c = param_1[0xb] - (int)local_14;
    }
    if (param_1[6] == 0) {
LAB_00437118:
      *param_1 = uVar9;
      goto LAB_0043711a;
    }
    *param_1 = 7;
switchD_00436b54_caseD_43728d:
    param_1[0xd] = (uint)local_14;
    iVar10 = FUN_00436454(param_2);
    local_14 = (void *)param_1[0xd];
    if ((void *)param_1[0xc] != local_14) {
LAB_00437171:
      param_1[8] = local_c;
      param_1[7] = local_8;
      in_EAX[1] = local_10;
      iVar3 = *in_EAX;
      *in_EAX = (int)local_18;
      in_EAX[2] = (int)(local_18 + (in_EAX[2] - iVar3));
      param_1[0xd] = (uint)local_14;
      goto LAB_00436b46;
    }
    *param_1 = 8;
switchD_00436b54_caseD_4372b3:
    iVar10 = 1;
    goto LAB_00436b20;
  case (undefined *)0x437097:
    goto switchD_00436b54_caseD_437097;
  case (undefined *)0x43728d:
    goto switchD_00436b54_caseD_43728d;
  case (undefined *)0x4372b3:
    goto switchD_00436b54_caseD_4372b3;
  }
  iVar10 = -3;
  goto LAB_00436b20;
}

