// rea decompile_all
// name: FUN_00416e02
// address: 0x416e02
// body: available
// range: 0x416e02-0x417218 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00416e02(int param_1,byte *param_2,byte *param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  uint local_44 [2];
  undefined1 local_3c [16];
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  byte *local_10;
  uint local_c;
  
  local_20 = **(undefined4 **)(param_1 + 0x1c);
  pbVar7 = param_2 + 1;
  local_14 = 0;
  if (param_3 < pbVar7) {
    return 8;
  }
  bVar2 = *param_2;
  local_24 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    return 8;
  }
  local_18 = 0;
  local_1c = 0;
  if ((bVar2 & 4) == 0) {
    pbVar6 = pbVar7;
    if ((bVar2 & 2) != 0) {
      pbVar6 = param_2 + 2;
      if (param_3 < pbVar6) {
        return 8;
      }
      local_18 = (uint)*pbVar7;
    }
    param_2 = pbVar6;
    if ((bVar2 & 1) == 0) goto LAB_00416e9e;
    param_2 = pbVar6 + 1;
    if (param_3 < param_2) {
      return 8;
    }
    bVar2 = *pbVar6;
  }
  else {
    param_2 = param_2 + 2;
    if (param_3 < param_2) {
      return 8;
    }
    local_18 = *pbVar7 & 0xf;
    bVar2 = *pbVar7 >> 4;
  }
  local_1c = (uint)bVar2;
LAB_00416e9e:
  local_10 = (byte *)(local_1c + local_18);
  if (*(byte **)(param_1 + 4) < local_10) {
    pbVar7 = local_10 + 7;
    uVar3 = FUN_00411976(4,*(undefined4 *)(param_1 + 8),&local_14);
    *(undefined4 *)(param_1 + 8) = uVar3;
    if (local_14 != 0) {
      return local_14;
    }
    *(uint *)(param_1 + 4) = (uint)pbVar7 & 0xfffffff8;
  }
  pbVar7 = local_10;
  pbVar6 = (byte *)0x0;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 8) + local_18 * 4;
  uVar4 = 0;
  local_c = 0;
  if (local_10 != (byte *)0x0) {
    local_10 = param_2 + 2;
    pbVar9 = param_2 + 1;
    do {
      if (((uint)pbVar6 & 7) == 0) {
        if (param_3 < pbVar9) {
          return 8;
        }
        local_c = (uint)*param_2;
        param_2 = param_2 + 1;
        local_10 = local_10 + 1;
        pbVar9 = pbVar9 + 1;
      }
      if ((local_c & 1) == 0) {
        if (param_3 < pbVar9) {
          return 8;
        }
        uVar4 = uVar4 + *param_2;
        param_2 = param_2 + 1;
        local_10 = local_10 + 1;
        pbVar9 = pbVar9 + 1;
      }
      else {
        if (param_3 < local_10) {
          return 8;
        }
        local_10 = local_10 + 2;
        pbVar8 = param_2 + 1;
        bVar2 = *param_2;
        param_2 = param_2 + 2;
        pbVar9 = pbVar9 + 2;
        uVar4 = (int)(short)((short)(char)bVar2 << 8) | (uint)*pbVar8;
      }
      local_c = local_c >> 1;
      *(uint *)(*(int *)(param_1 + 8) + (int)pbVar6 * 4) = uVar4;
      pbVar6 = pbVar6 + 1;
    } while (pbVar6 < pbVar7);
  }
  if (((local_24 & 8) != 0) && (local_14 = FUN_00415e6e(param_3), local_14 != 0)) {
    return local_14;
  }
  FUN_00416cba();
  local_44[0] = 0;
  local_2c = 0;
  local_44[1] = 0;
  local_28 = 0;
  pbVar7 = param_2;
  do {
    pbVar6 = pbVar7 + 1;
    if (param_3 < pbVar6) {
      return 8;
    }
    local_10 = (byte *)0x0;
    local_24 = (uint)(*pbVar7 >> 4);
    uVar4 = *pbVar7 & 0xf;
    switch(local_24) {
    case 0:
      goto switchD_00416fd7_caseD_0;
    case 1:
    case 4:
    case 5:
      local_c = 1;
      local_10 = (byte *)uVar4;
      break;
    case 2:
      if (local_18 <= uVar4) {
        return 8;
      }
      local_44[0] = *(uint *)(*(int *)(param_1 + 8) + uVar4 * 4);
      local_44[1] = local_28;
      local_2c = local_44[0];
      goto switchD_00416fd7_caseD_0;
    case 3:
      if (local_1c <= uVar4) {
        return 8;
      }
      local_44[1] = *(uint *)(*(int *)(param_1 + 0xc) + uVar4 * 4);
      local_44[0] = local_2c;
      local_28 = local_44[1];
switchD_00416fd7_caseD_0:
      local_c = 0;
      break;
    case 6:
      local_10 = (byte *)0xb8e;
      goto LAB_00417035;
    case 7:
      local_10 = (byte *)0xe2b;
LAB_00417035:
      local_c = 3;
      break;
    default:
      local_c = 4;
      local_10 = (byte *)uVar4;
    }
    puVar5 = local_44;
    local_20 = 0;
    if (local_c != 0) {
      param_2 = pbVar7 + 3;
      pbVar7 = pbVar7 + 2;
      do {
        uVar4 = (uint)local_10 & 3;
        if (uVar4 == 0) {
          if (param_3 < pbVar7) {
            return 8;
          }
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          param_2 = param_2 + 1;
          pbVar7 = pbVar7 + 1;
          if (local_18 <= bVar2) {
            return 8;
          }
          local_2c = *(uint *)(*(int *)(param_1 + 8) + (uint)bVar2 * 4);
        }
        else if (uVar4 == 1) {
          if (param_3 < param_2) {
            return 8;
          }
          param_2 = param_2 + 2;
          pbVar9 = pbVar6 + 1;
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 2;
          pbVar7 = pbVar7 + 2;
          local_2c = (int)(short)((short)(char)bVar2 << 8) | (uint)*pbVar9;
        }
        else if (uVar4 == 2) {
          if (param_3 < pbVar7) {
            return 8;
          }
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          param_2 = param_2 + 1;
          pbVar7 = pbVar7 + 1;
          local_2c = (int)(char)bVar2 + local_2c;
        }
        *puVar5 = local_2c;
        uVar4 = (uint)local_10 >> 2 & 3;
        if (uVar4 == 0) {
          if (param_3 < pbVar7) {
            return 8;
          }
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          param_2 = param_2 + 1;
          pbVar7 = pbVar7 + 1;
          if (local_1c <= bVar2) {
            return 8;
          }
          local_28 = *(uint *)(*(int *)(param_1 + 0xc) + (uint)bVar2 * 4);
        }
        else if (uVar4 == 1) {
          if (param_3 < param_2) {
            return 8;
          }
          param_2 = param_2 + 2;
          pbVar9 = pbVar6 + 1;
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 2;
          pbVar7 = pbVar7 + 2;
          local_28 = (int)(short)((short)(char)bVar2 << 8) | (uint)*pbVar9;
        }
        else if (uVar4 == 2) {
          if (param_3 < pbVar7) {
            return 8;
          }
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          param_2 = param_2 + 1;
          pbVar7 = pbVar7 + 1;
          local_28 = (int)(char)bVar2 + local_28;
        }
        bVar10 = local_20 == 0;
        puVar5[1] = local_28;
        if ((bVar10) && (local_c == 4)) {
          if (param_3 < pbVar7) {
            return 8;
          }
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          param_2 = param_2 + 1;
          local_10 = (byte *)(uint)bVar2;
          pbVar7 = pbVar7 + 1;
          local_c = 3;
        }
        else {
          local_10 = (byte *)((uint)local_10 >> 4);
        }
        local_2c = *puVar5;
        puVar1 = puVar5 + 1;
        puVar5 = puVar5 + 2;
        local_20 = local_20 + 1;
        local_28 = *puVar1;
      } while (local_20 < local_c);
    }
    if (local_24 == 0) {
      FUN_00416df3();
      return local_14;
    }
    if (local_24 < 4) {
      local_14 = FUN_00416cbf();
    }
    else if (local_24 < 6) {
      local_14 = FUN_00416da5(local_44);
    }
    else {
      local_14 = FUN_00416d18(local_44,local_3c);
    }
    pbVar7 = pbVar6;
    if (local_14 != 0) {
      return local_14;
    }
  } while( true );
}

