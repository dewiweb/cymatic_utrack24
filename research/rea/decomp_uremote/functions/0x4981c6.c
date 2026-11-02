// rea decompile_all
// name: FUN_004981c6
// address: 0x4981c6
// body: available
// range: 0x4981c6-0x49856a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004981c6(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int in_ECX;
  uint *in_EDX;
  uint uVar5;
  void *_Dst;
  byte *pbVar6;
  uint uVar7;
  void *_Src;
  uint uVar8;
  byte *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  byte *local_18;
  undefined1 local_10 [4];
  byte *local_c;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if ((in_ECX != 0) && (in_EDX != (uint *)0x0)) {
    iVar2 = *(int *)(&DAT_00919fa0 + param_1 * 4);
    uVar3 = *in_EDX;
    bVar1 = *(byte *)((int)in_EDX + 0xb);
    uVar7 = uVar3 * iVar2;
    if (bVar1 == 1) {
      pbVar6 = (byte *)((uVar3 - 1 >> 3) + in_ECX);
      local_18 = (byte *)((uVar7 - 1 >> 3) + in_ECX);
      if ((param_2 & 0x10000) == 0) {
        uVar5 = 7 - (uVar3 - 1 & 7);
        uVar8 = 7 - (uVar7 - 1 & 7);
        local_24 = 0;
        local_20 = 7;
        local_28 = 1;
      }
      else {
        local_20 = 0;
        uVar5 = uVar3 - 1 & 7;
        uVar8 = uVar7 - 1 & 7;
        local_28 = -1;
        local_24 = 7;
      }
      local_1c = 0;
      local_2c = pbVar6;
      if (uVar3 != 0) {
        do {
          bVar1 = *pbVar6;
          pbVar4 = (byte *)iVar2;
          if (0 < iVar2) {
            do {
              local_c = pbVar4;
              *local_18 = (byte)(0x7f7f >> (7 - (byte)uVar8 & 0x1f)) & *local_18 |
                          (bVar1 >> ((byte)uVar5 & 0x1f) & 1) << ((byte)uVar8 & 0x1f);
              if (uVar8 == local_20) {
                local_18 = local_18 + -1;
                uVar8 = local_24;
              }
              else {
                uVar8 = uVar8 + local_28;
              }
              pbVar4 = (byte *)((int)local_c + -1);
            } while ((int)local_c + -1 != 0);
            local_c = (byte *)0x0;
            pbVar6 = local_2c;
          }
          if (uVar5 == local_20) {
            pbVar6 = pbVar6 + -1;
            uVar5 = local_24;
            local_2c = pbVar6;
          }
          else {
            uVar5 = uVar5 + local_28;
          }
          local_1c = local_1c + 1;
        } while (local_1c < *in_EDX);
      }
    }
    else if (bVar1 == 2) {
      pbVar6 = (byte *)((uVar3 - 1 >> 2) + in_ECX);
      local_18 = (byte *)((uVar7 - 1 >> 2) + in_ECX);
      if ((param_2 & 0x10000) == 0) {
        uVar5 = (3 - (uVar3 - 1 & 3)) * 2;
        uVar8 = (3 - (uVar7 - 1 & 3)) * 2;
        local_24 = 0;
        local_20 = 6;
        local_28 = 2;
      }
      else {
        uVar5 = uVar3 * 2 - 1 & 6;
        uVar8 = uVar7 * 2 - 1 & 6;
        local_20 = 0;
        local_24 = 6;
        local_28 = -2;
      }
      local_1c = 0;
      local_2c = pbVar6;
      if (uVar3 != 0) {
        do {
          bVar1 = *pbVar6;
          pbVar4 = (byte *)iVar2;
          if (0 < iVar2) {
            do {
              local_c = pbVar4;
              *local_18 = (byte)(0x3f3f >> (6 - (byte)uVar8 & 0x1f)) & *local_18 |
                          (bVar1 >> ((byte)uVar5 & 0x1f) & 3) << ((byte)uVar8 & 0x1f);
              if (uVar8 == local_20) {
                local_18 = local_18 + -1;
                uVar8 = local_24;
              }
              else {
                uVar8 = uVar8 + local_28;
              }
              pbVar4 = (byte *)((int)local_c + -1);
            } while ((int)local_c + -1 != 0);
            local_c = (byte *)0x0;
            pbVar6 = local_2c;
          }
          if (uVar5 == local_20) {
            pbVar6 = pbVar6 + -1;
            uVar5 = local_24;
            local_2c = pbVar6;
          }
          else {
            uVar5 = uVar5 + local_28;
          }
          local_1c = local_1c + 1;
        } while (local_1c < *in_EDX);
      }
    }
    else if (bVar1 == 4) {
      pbVar6 = (byte *)((uVar3 - 1 >> 1) + in_ECX);
      local_18 = (byte *)((uVar7 - 1 >> 1) + in_ECX);
      if ((param_2 & 0x10000) == 0) {
        uVar5 = (uVar3 - 1 & 1) * -4 + 4;
        uVar8 = (uVar7 - 1 & 1) * -4 + 4;
        local_28 = 0;
        local_1c = 4;
        local_24 = 4;
      }
      else {
        uVar5 = uVar3 * -4 - 1 & 4;
        uVar8 = uVar7 * -4 - 1 & 4;
        local_1c = 0;
        local_28 = 4;
        local_24 = -4;
      }
      local_20 = 0;
      local_c = pbVar6;
      if (uVar3 != 0) {
        do {
          bVar1 = *pbVar6;
          local_2c = (byte *)iVar2;
          if (0 < iVar2) {
            do {
              *local_18 = (byte)(0xf0f >> (4 - (byte)uVar8 & 0x1f)) & *local_18 |
                          (bVar1 >> ((byte)uVar5 & 0x1f) & 0xf) << ((byte)uVar8 & 0x1f);
              if (uVar8 == local_1c) {
                local_18 = local_18 + -1;
                uVar8 = local_28;
              }
              else {
                uVar8 = uVar8 + local_24;
              }
              local_2c = (byte *)((int)local_2c + -1);
              pbVar6 = local_c;
            } while (local_2c != (byte *)0x0);
          }
          if (uVar5 == local_1c) {
            pbVar6 = pbVar6 + -1;
            uVar5 = local_28;
            local_c = pbVar6;
          }
          else {
            uVar5 = uVar5 + local_24;
          }
          local_20 = local_20 + 1;
        } while (local_20 < *in_EDX);
      }
    }
    else {
      local_1c = 0;
      uVar5 = (uint)(bVar1 >> 3);
      _Src = (void *)((uVar3 - 1) * uVar5 + in_ECX);
      _Dst = (void *)((uVar7 - 1) * uVar5 + in_ECX);
      if (uVar3 != 0) {
        do {
          _memcpy(local_10,_Src,uVar5);
          local_20 = iVar2;
          if (0 < iVar2) {
            do {
              _memcpy(_Dst,local_10,uVar5);
              _Dst = (void *)((int)_Dst - uVar5);
              local_20 = local_20 + -1;
            } while (local_20 != 0);
          }
          _Src = (void *)((int)_Src - uVar5);
          local_1c = local_1c + 1;
        } while (local_1c < *in_EDX);
      }
    }
    bVar1 = *(byte *)((int)in_EDX + 0xb);
    *in_EDX = uVar7;
    if (bVar1 < 8) {
      uVar7 = bVar1 * uVar7 + 7 >> 3;
    }
    else {
      uVar7 = (bVar1 >> 3) * uVar7;
    }
    in_EDX[1] = uVar7;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

