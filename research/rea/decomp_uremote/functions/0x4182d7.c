// rea decompile_all
// name: FUN_004182d7
// address: 0x4182d7
// body: available
// range: 0x4182d7-0x4184fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_004182d7(uint *param_1,byte *param_2,uint param_3,uint *param_4,uint *param_5,uint *param_6,
            uint *param_7,uint *param_8,uint *param_9)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint local_14;
  uint local_10;
  uint local_c;
  
  pbVar2 = (byte *)*param_1;
  uVar6 = 0;
  pbVar4 = pbVar2 + 1;
  if (param_2 < pbVar4) {
    return 8;
  }
  bVar1 = *pbVar2;
  bVar5 = bVar1 & 3;
  uVar7 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  if ((bVar1 & 3) == 0) {
    pbVar3 = pbVar2 + 2;
    if (param_2 < pbVar3) {
      return 8;
    }
    uVar6 = (int)(char)*pbVar4 >> 4;
    uVar7 = (int)(char)(*pbVar4 << 4) >> 4;
  }
  else if (bVar5 == 1) {
    if (param_2 < pbVar2 + 3) {
      return 8;
    }
    uVar6 = (uint)(char)*pbVar4;
    uVar7 = (uint)(char)pbVar2[2];
    pbVar3 = pbVar2 + 3;
  }
  else {
    if (bVar5 == 2) {
      if (param_2 < pbVar2 + 5) {
        return 8;
      }
      uVar6 = (int)(short)((short)(char)*pbVar4 << 8) | (uint)pbVar2[2];
      pbVar3 = pbVar2 + 5;
      uVar7 = (uint)(short)((short)(char)pbVar2[3] << 8);
    }
    else {
      pbVar3 = pbVar4;
      if (bVar5 != 3) goto LAB_004183c3;
      if (param_2 < pbVar2 + 7) {
        return 8;
      }
      pbVar3 = pbVar2 + 7;
      uVar6 = (uint)CONCAT21(CONCAT11(*pbVar4,pbVar2[2]),pbVar2[3]);
      uVar7 = (int)CONCAT11(pbVar2[4],pbVar2[5]) << 8;
    }
    uVar7 = uVar7 | pbVar3[-1];
  }
LAB_004183c3:
  bVar5 = bVar1 >> 2 & 3;
  if ((bVar1 >> 2 & 3) == 0) {
    local_c = 0;
    local_10 = 0;
  }
  else if (bVar5 == 1) {
    if (param_2 < pbVar3 + 1) {
      return 8;
    }
    local_c = (int)(char)*pbVar3 >> 4 & 0xf;
    local_10 = (int)(char)*pbVar3 & 0xf;
    pbVar3 = pbVar3 + 1;
  }
  else if (bVar5 == 2) {
    if (param_2 < pbVar3 + 2) {
      return 8;
    }
    local_c = (uint)*pbVar3;
    local_10 = (uint)pbVar3[1];
    pbVar3 = pbVar3 + 2;
  }
  else if (bVar5 == 3) {
    if (param_2 < pbVar3 + 4) {
      return 8;
    }
    local_c = (uint)CONCAT11(*pbVar3,pbVar3[1]);
    local_10 = (uint)CONCAT11(pbVar3[2],pbVar3[3]);
    pbVar3 = pbVar3 + 4;
  }
  bVar5 = bVar1 >> 4 & 3;
  pbVar4 = pbVar3;
  if ((bVar1 >> 4 & 3) == 0) {
    local_14 = param_3;
  }
  else if (bVar5 == 1) {
    pbVar4 = pbVar3 + 1;
    if (param_2 < pbVar4) {
      return 8;
    }
    local_14 = (int)(char)*pbVar3 << 8;
  }
  else {
    if (bVar5 == 2) {
      pbVar4 = pbVar3 + 2;
      if (param_2 < pbVar4) {
        return 8;
      }
      local_14 = (uint)(short)((short)(char)*pbVar3 << 8);
    }
    else {
      if (bVar5 != 3) goto LAB_004184ca;
      pbVar4 = pbVar3 + 3;
      if (param_2 < pbVar4) {
        return 8;
      }
      local_14 = (int)CONCAT11(*pbVar3,pbVar3[1]) << 8;
    }
    local_14 = local_14 | pbVar4[-1];
  }
LAB_004184ca:
  *param_4 = uVar6;
  *param_5 = uVar7;
  *param_6 = local_c;
  *param_7 = local_10;
  *param_8 = local_14;
  *param_9 = (uint)(bVar1 >> 6);
  *param_1 = (uint)pbVar4;
  return 0;
}

