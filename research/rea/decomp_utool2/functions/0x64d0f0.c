// rea decompile_all
// name: FUN_0064d0f0
// address: 0x64d0f0
// body: available
// range: 0x64d0f0-0x64d4eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064d0f0(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *in_ECX;
  int in_EDX;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined1 local_10 [4];
  byte *local_c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if ((in_EDX != 0) && (in_ECX != (uint *)0x0)) {
    iVar2 = *(int *)(&DAT_00c180f4 + param_1 * 4);
    uVar3 = *in_ECX;
    uVar7 = uVar3 * *(int *)(&DAT_00c180f4 + param_1 * 4);
    bVar1 = *(byte *)((int)in_ECX + 0xb);
    if (bVar1 == 1) {
      pbVar6 = (byte *)((uVar3 - 1 >> 3) + in_EDX);
      pbVar11 = (byte *)((uVar7 - 1 >> 3) + in_EDX);
      if ((param_2 & 0x10000) == 0) {
        local_18 = 0;
        local_1c = 7;
        local_20 = 1;
        uVar10 = 7 - (uVar3 - 1 & 7);
        uVar9 = 7 - (uVar7 - 1 & 7);
      }
      else {
        local_18 = 7;
        local_1c = 0;
        uVar10 = uVar3 - 1 & 7;
        local_20 = -1;
        uVar9 = uVar7 - 1 & 7;
      }
      local_24 = (byte *)0x0;
      local_c = pbVar6;
      if (uVar3 != 0) {
        do {
          bVar1 = *pbVar6;
          iVar4 = iVar2;
          if (0 < iVar2) {
            do {
              *pbVar11 = (byte)(0x7f7f >> (7 - (byte)uVar9 & 0x1f)) & *pbVar11 |
                         (bVar1 >> ((byte)uVar10 & 0x1f) & 1) << ((byte)uVar9 & 0x1f);
              if (uVar9 == local_1c) {
                pbVar11 = pbVar11 + -1;
                uVar9 = local_18;
              }
              else {
                uVar9 = uVar9 + local_20;
              }
              iVar4 = iVar4 + -1;
              pbVar6 = local_c;
            } while (iVar4 != 0);
          }
          if (uVar10 == local_1c) {
            pbVar6 = pbVar6 + -1;
            uVar10 = local_18;
            local_c = pbVar6;
          }
          else {
            uVar10 = uVar10 + local_20;
          }
          local_24 = (byte *)((int)local_24 + 1);
        } while (local_24 < *in_ECX);
      }
    }
    else if (bVar1 == 2) {
      pbVar6 = (byte *)((uVar3 - 1 >> 2) + in_EDX);
      pbVar11 = (byte *)((uVar7 - 1 >> 2) + in_EDX);
      if ((param_2 & 0x10000) == 0) {
        local_18 = 0;
        local_1c = 6;
        local_20 = 2;
        uVar10 = (3 - (uVar3 - 1 & 3)) * 2;
        uVar9 = (3 - (uVar7 - 1 & 3)) * 2;
      }
      else {
        local_18 = 6;
        local_1c = 0;
        uVar10 = uVar3 * 2 - 1 & 6;
        local_20 = -2;
        uVar9 = uVar7 * 2 - 1 & 6;
      }
      local_24 = (byte *)0x0;
      local_c = pbVar6;
      if (uVar3 != 0) {
        do {
          bVar1 = *pbVar6;
          iVar4 = iVar2;
          if (0 < iVar2) {
            do {
              *pbVar11 = (byte)(0x3f3f >> (6 - (byte)uVar9 & 0x1f)) & *pbVar11 |
                         (bVar1 >> ((byte)uVar10 & 0x1f) & 3) << ((byte)uVar9 & 0x1f);
              if (uVar9 == local_1c) {
                pbVar11 = pbVar11 + -1;
                uVar9 = local_18;
              }
              else {
                uVar9 = uVar9 + local_20;
              }
              iVar4 = iVar4 + -1;
              pbVar6 = local_c;
            } while (iVar4 != 0);
          }
          if (uVar10 == local_1c) {
            pbVar6 = pbVar6 + -1;
            uVar10 = local_18;
            local_c = pbVar6;
          }
          else {
            uVar10 = uVar10 + local_20;
          }
          local_24 = (byte *)((int)local_24 + 1);
        } while (local_24 < *in_ECX);
      }
    }
    else if (bVar1 == 4) {
      pbVar6 = (byte *)((uVar3 - 1 >> 1) + in_EDX);
      pbVar11 = (byte *)((uVar7 - 1 >> 1) + in_EDX);
      if ((param_2 & 0x10000) == 0) {
        local_18 = 0;
        local_20 = 4;
        uVar10 = (uVar3 - 1 & 1) * -4 + 4;
        local_1c = 4;
        uVar9 = (uVar7 - 1 & 1) * -4 + 4;
      }
      else {
        local_18 = 4;
        local_20 = 0;
        local_1c = -4;
        uVar10 = ~(uVar3 * -4) & 4;
        uVar9 = ~(uVar7 * -4) & 4;
      }
      local_c = (byte *)0x0;
      local_24 = pbVar6;
      if (uVar3 != 0) {
        do {
          bVar1 = *pbVar6;
          iVar4 = iVar2;
          if (0 < iVar2) {
            do {
              *pbVar11 = (byte)(0xf0f >> (4 - (byte)uVar9 & 0x1f)) & *pbVar11 |
                         (bVar1 >> ((byte)uVar10 & 0x1f) & 0xf) << ((byte)uVar9 & 0x1f);
              if (uVar9 == local_20) {
                pbVar11 = pbVar11 + -1;
                uVar9 = local_18;
              }
              else {
                uVar9 = uVar9 + local_1c;
              }
              iVar4 = iVar4 + -1;
              pbVar6 = local_24;
            } while (iVar4 != 0);
          }
          if (uVar10 == local_20) {
            pbVar6 = pbVar6 + -1;
            uVar10 = local_18;
            local_24 = pbVar6;
          }
          else {
            uVar10 = uVar10 + local_1c;
          }
          local_c = local_c + 1;
        } while (local_c < (byte *)*in_ECX);
      }
    }
    else {
      uVar10 = (uint)(bVar1 >> 3);
      local_18 = 0;
      iVar4 = (uVar3 - 1) * uVar10 + in_EDX;
      iVar8 = (uVar7 - 1) * uVar10 + in_EDX;
      if (uVar3 != 0) {
        do {
          FUN_004c2c30(local_10,iVar4,uVar10);
          iVar5 = iVar2;
          if (0 < iVar2) {
            do {
              FUN_004c2c30(iVar8,local_10,uVar10);
              iVar8 = iVar8 - uVar10;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          local_18 = local_18 + 1;
          iVar4 = iVar4 - uVar10;
        } while (local_18 < *in_ECX);
      }
    }
    bVar1 = *(byte *)((int)in_ECX + 0xb);
    *in_ECX = uVar7;
    if (7 < bVar1) {
      in_ECX[1] = (bVar1 >> 3) * uVar7;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    in_ECX[1] = bVar1 * uVar7 + 7 >> 3;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

