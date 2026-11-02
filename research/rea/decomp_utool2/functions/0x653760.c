// rea decompile_all
// name: FUN_00653760
// address: 0x653760
// body: available
// range: 0x653760-0x653954 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00653760(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  int in_ECX;
  byte *in_EDX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_1c;
  int local_18 [4];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  bVar1 = *(byte *)(in_ECX + 8);
  if (bVar1 != 3) {
    uVar6 = (uint)*(byte *)(in_ECX + 9);
    if ((bVar1 & 2) == 0) {
      iVar8 = 1;
      local_18[0] = uVar6 - param_1[3];
    }
    else {
      iVar8 = 3;
      local_18[0] = uVar6 - *param_1;
      local_18[1] = uVar6 - param_1[1];
      local_18[2] = uVar6 - param_1[2];
    }
    if ((bVar1 & 4) != 0) {
      local_18[iVar8] = uVar6 - param_1[4];
      iVar8 = iVar8 + 1;
    }
    bVar2 = false;
    iVar3 = 0;
    if (iVar8 != 0) {
      do {
        if ((local_18[iVar3] < 1) || ((int)uVar6 <= local_18[iVar3])) {
          local_18[iVar3] = 0;
        }
        else {
          bVar2 = true;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar8);
      if (bVar2) {
        switch(uVar6) {
        case 2:
          uVar7 = 0;
          uVar6 = *(uint *)(in_ECX + 4);
          if (in_EDX + uVar6 < in_EDX) {
            uVar6 = 0;
          }
          if (uVar6 != 0) {
            do {
              uVar7 = uVar7 + 1;
              *in_EDX = *in_EDX >> 1 & 0x55;
              in_EDX = in_EDX + 1;
            } while (uVar7 < uVar6);
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          break;
        case 4:
          uVar7 = 0;
          iVar8 = 0xf >> ((byte)local_18[0] & 0x1f);
          uVar6 = *(uint *)(in_ECX + 4);
          if (in_EDX + uVar6 < in_EDX) {
            uVar6 = 0;
          }
          if (uVar6 != 0) {
            do {
              uVar7 = uVar7 + 1;
              *in_EDX = *in_EDX >> ((byte)local_18[0] & 0x1f) & ((byte)iVar8 | (byte)(iVar8 << 4));
              in_EDX = in_EDX + 1;
            } while (uVar7 < uVar6);
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          break;
        case 8:
          iVar3 = 0;
          uVar7 = 0;
          uVar6 = *(uint *)(in_ECX + 4);
          if (in_EDX + uVar6 < in_EDX) {
            uVar6 = 0;
          }
          if (uVar6 != 0) {
            do {
              iVar5 = iVar3 + 1;
              uVar7 = uVar7 + 1;
              *in_EDX = *in_EDX >> (*(byte *)(local_18 + iVar3) & 0x1f);
              iVar3 = 0;
              if (iVar5 < iVar8) {
                iVar3 = iVar5;
              }
              in_EDX = in_EDX + 1;
            } while (uVar7 < uVar6);
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          break;
        case 0x10:
          local_1c = 0;
          pbVar4 = in_EDX + *(int *)(in_ECX + 4);
          while (in_EDX < pbVar4) {
            iVar5 = (int)(uint)CONCAT11(*in_EDX,in_EDX[1]) >> ((byte)local_18[local_1c] & 0x1f);
            iVar3 = local_1c + 1;
            *in_EDX = (byte)((uint)iVar5 >> 8);
            in_EDX[1] = (byte)iVar5;
            in_EDX = in_EDX + 2;
            local_1c = 0;
            if (iVar3 < iVar8) {
              local_1c = iVar3;
            }
          }
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

