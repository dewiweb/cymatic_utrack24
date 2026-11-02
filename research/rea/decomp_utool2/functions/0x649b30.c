// rea decompile_all
// name: FUN_00649b30
// address: 0x649b30
// body: available
// range: 0x649b30-0x649d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00649b30(byte *param_1)

{
  ushort uVar1;
  uint uVar2;
  int *in_ECX;
  byte *in_EDX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  undefined2 uVar7;
  uint local_30;
  uint local_2c;
  uint local_28 [4];
  int local_18 [4];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  bVar6 = *(byte *)(in_ECX + 2);
  if (bVar6 != 3) {
    if ((bVar6 & 2) == 0) {
      local_2c = 1;
      local_28[0] = (uint)param_1[3];
      local_18[0] = *(byte *)((int)in_ECX + 9) - local_28[0];
    }
    else {
      uVar3 = (uint)*(byte *)((int)in_ECX + 9);
      local_2c = 3;
      local_28[0] = (uint)*param_1;
      local_18[0] = uVar3 - local_28[0];
      local_28[1] = (uint)param_1[1];
      local_18[1] = uVar3 - param_1[1];
      local_28[2] = (uint)param_1[2];
      bVar6 = *(byte *)(in_ECX + 2);
      local_18[2] = uVar3 - param_1[2];
    }
    if ((bVar6 & 4) != 0) {
      bVar6 = param_1[4];
      local_18[local_2c] = (uint)*(byte *)((int)in_ECX + 9) - (uint)bVar6;
      local_28[local_2c] = (uint)bVar6;
      local_2c = local_2c + 1;
    }
    bVar6 = *(byte *)((int)in_ECX + 9);
    if (bVar6 < 8) {
      local_30 = in_ECX[1];
      if ((param_1[3] == 1) && (bVar6 == 2)) {
        local_2c = 0x55;
      }
      else if ((bVar6 != 4) || (local_2c = 0x11, param_1[3] != 3)) {
        local_2c = 0xff;
      }
      if (local_30 != 0) {
        do {
          uVar3 = 0;
          bVar6 = 0;
          for (iVar4 = local_18[0]; (int)-local_28[0] < iVar4; iVar4 = iVar4 - local_28[0]) {
            if (iVar4 < 1) {
              uVar2 = *in_EDX >> (-(byte)iVar4 & 0x1f) & local_2c;
            }
            else {
              uVar2 = (uint)*in_EDX << ((byte)iVar4 & 0x1f);
            }
            uVar3 = uVar3 | uVar2;
            bVar6 = (byte)uVar3;
          }
          *in_EDX = bVar6;
          in_EDX = in_EDX + 1;
          local_30 = local_30 + -1;
        } while (local_30 != 0);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    else if (bVar6 == 8) {
      uVar3 = *in_ECX * local_2c;
      local_30 = 0;
      if (uVar3 != 0) {
        do {
          uVar2 = 0;
          bVar6 = 0;
          for (iVar4 = local_18[local_30 % local_2c]; (int)-local_28[local_30 % local_2c] < iVar4;
              iVar4 = iVar4 - local_28[local_30 % local_2c]) {
            if (iVar4 < 1) {
              uVar5 = (uint)(*in_EDX >> (-(byte)iVar4 & 0x1f));
            }
            else {
              uVar5 = (uint)*in_EDX << ((byte)iVar4 & 0x1f);
            }
            uVar2 = uVar2 | uVar5;
            bVar6 = (byte)uVar2;
          }
          *in_EDX = bVar6;
          local_30 = local_30 + 1;
          in_EDX = in_EDX + 1;
        } while (local_30 < uVar3);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    else {
      uVar3 = *in_ECX * local_2c;
      local_30 = 0;
      if (uVar3 != 0) {
        do {
          uVar2 = 0;
          uVar7 = 0;
          uVar1 = CONCAT11(*in_EDX,in_EDX[1]);
          for (iVar4 = local_18[local_30 % local_2c]; (int)-local_28[local_30 % local_2c] < iVar4;
              iVar4 = iVar4 - local_28[local_30 % local_2c]) {
            if (iVar4 < 1) {
              uVar5 = (uint)(uVar1 >> (-(byte)iVar4 & 0x1f));
            }
            else {
              uVar5 = (uint)uVar1 << ((byte)iVar4 & 0x1f);
            }
            uVar2 = uVar2 | uVar5;
            uVar7 = (undefined2)uVar2;
          }
          *in_EDX = (byte)((ushort)uVar7 >> 8);
          local_30 = local_30 + 1;
          in_EDX[1] = (byte)uVar7;
          in_EDX = in_EDX + 2;
        } while (local_30 < uVar3);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

