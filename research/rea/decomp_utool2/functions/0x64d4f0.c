// rea decompile_all
// name: FUN_0064d4f0
// address: 0x64d4f0
// body: available
// range: 0x64d4f0-0x64d8aa inclusive
// range: 0x64d8b0-0x64d94b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64d935 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x64d93a to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x64d93f to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x64d947 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064d4f0(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  byte *in_EDX;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  byte *local_20;
  uint local_10;
  byte local_5;
  
  bVar2 = *(byte *)(in_ECX + 0x109);
  uVar4 = (uint)bVar2;
  uVar8 = *(uint *)(in_ECX + 0xb4);
  bVar3 = *(byte *)(in_ECX + 0x113);
  uVar7 = (uint)bVar3;
  iVar11 = *(int *)(in_ECX + 0xd8) + 1;
  local_20 = (byte *)0x0;
  local_5 = 0;
  if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if (*(int *)(in_ECX + 0xec) != 0) {
    if (uVar7 < 8) {
      uVar5 = uVar8 * uVar7 + 7 >> 3;
    }
    else {
      uVar5 = (bVar3 >> 3) * uVar8;
    }
    if (*(uint *)(in_ECX + 0xec) != uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
  }
  if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  uVar5 = uVar8 * uVar7 & 7;
  local_10._0_1_ = (byte)uVar5;
  if (uVar5 != 0) {
    if (uVar7 < 8) {
      uVar5 = uVar8 * uVar7 + 7 >> 3;
    }
    else {
      uVar5 = (bVar3 >> 3) * uVar8;
    }
    local_20 = in_EDX + (uVar5 - 1);
    local_5 = *local_20;
    if ((*(uint *)(in_ECX + 0x30) & 0x10000) == 0) {
      local_10._0_1_ = (byte)(0xff >> (byte)local_10);
    }
    else {
      local_10._0_1_ = (byte)(0xff << (byte)local_10);
    }
  }
  if ((((*(char *)(in_ECX + 0x108) == '\0') || ((*(uint *)(in_ECX + 0x30) & 2) == 0)) || (5 < uVar4)
      ) || ((param_1 != 0 && ((param_1 != 1 || ((bVar2 & 1) == 0)))))) {
    FUN_004c2c30();
  }
  else {
    uVar5 = (uVar4 & 1) << (3U - (char)(uVar4 + 1 >> 1) & 0x1f) & 7;
    if (uVar8 <= uVar5) {
      return;
    }
    if (7 < uVar7) {
      if ((bVar3 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00656590();
      }
      uVar7 = (uint)(bVar3 >> 3);
      iVar6 = uVar5 * uVar7;
      pbVar9 = in_EDX + iVar6;
      pbVar12 = (byte *)(iVar11 + iVar6);
      uVar8 = uVar8 * uVar7 - iVar6;
      local_10 = uVar7;
      if ((param_1 != 0) &&
         (uVar5 = uVar7 << ((byte)(6 - uVar4 >> 1) & 0x1f), local_10 = uVar8, uVar5 <= uVar8)) {
        local_10 = uVar5;
      }
      uVar7 = uVar7 << ((byte)(7 - uVar4 >> 1) & 0x1f);
      if (local_10 == 1) {
        *pbVar9 = *pbVar12;
        if (uVar8 <= uVar7) {
          return;
        }
        do {
          pbVar10 = pbVar12 + uVar7;
          pbVar12 = pbVar12 + uVar7;
          pbVar9 = pbVar9 + uVar7;
          uVar8 = uVar8 - uVar7;
          *pbVar9 = *pbVar10;
        } while (uVar7 < uVar8);
        return;
      }
      if (local_10 == 2) {
        do {
          *pbVar9 = *pbVar12;
          pbVar9[1] = pbVar12[1];
          if (uVar8 <= uVar7) {
            return;
          }
          uVar8 = uVar8 - uVar7;
          pbVar12 = pbVar12 + uVar7;
          pbVar9 = pbVar9 + uVar7;
        } while (1 < uVar8);
        *pbVar9 = *pbVar12;
        return;
      }
      if (local_10 != 3) {
        if ((local_10 < 0x10) &&
           (uVar4 = uVar7 | local_10 | (uint)pbVar12 | (uint)pbVar9, (uVar4 & 1) == 0)) {
          if ((uVar4 & 3) != 0) {
            uVar5 = uVar7 - local_10 >> 1;
            uVar4 = local_10;
            while( true ) {
              do {
                pbVar10 = pbVar9 + 2;
                *(undefined2 *)pbVar9 = *(undefined2 *)pbVar12;
                pbVar12 = pbVar12 + 2;
                uVar4 = uVar4 - 2;
                pbVar9 = pbVar10;
              } while (uVar4 != 0);
              if (uVar8 <= uVar7) break;
              uVar8 = uVar8 - uVar7;
              pbVar9 = pbVar10 + uVar5 * 2;
              pbVar12 = pbVar12 + uVar5 * 2;
              uVar4 = local_10;
              if (uVar8 < local_10) {
                pbVar10 = pbVar9;
                do {
                  *pbVar10 = pbVar10[(int)pbVar12 - (int)pbVar9];
                  uVar8 = uVar8 - 1;
                  pbVar10 = pbVar10 + 1;
                } while (uVar8 != 0);
                return;
              }
            }
            return;
          }
          uVar4 = local_10;
          while( true ) {
            do {
              uVar1 = *(undefined4 *)pbVar12;
              pbVar12 = pbVar12 + 4;
              *(undefined4 *)pbVar9 = uVar1;
              pbVar9 = pbVar9 + 4;
              uVar4 = uVar4 - 4;
            } while (uVar4 != 0);
            if (uVar8 <= uVar7) break;
            uVar8 = uVar8 - uVar7;
            uVar4 = uVar7 - local_10 & 0xfffffffc;
            pbVar9 = pbVar9 + uVar4;
            pbVar12 = pbVar12 + uVar4;
            uVar4 = local_10;
            if (uVar8 < local_10) {
              pbVar10 = pbVar9;
              do {
                *pbVar10 = pbVar10[(int)pbVar12 - (int)pbVar9];
                uVar8 = uVar8 - 1;
                pbVar10 = pbVar10 + 1;
              } while (uVar8 != 0);
              return;
            }
          }
          return;
        }
        FUN_004c2c30(pbVar9,pbVar12,local_10);
        if (uVar8 <= uVar7) {
          return;
        }
        do {
          pbVar12 = pbVar12 + uVar7;
          pbVar9 = pbVar9 + uVar7;
          uVar8 = uVar8 - uVar7;
          uVar4 = uVar8;
          if (local_10 <= uVar8) {
            uVar4 = local_10;
          }
          FUN_004c2c30(pbVar9,pbVar12,uVar4);
          local_10 = uVar4;
        } while (uVar7 < uVar8);
        return;
      }
      *pbVar9 = *pbVar12;
      pbVar9[1] = pbVar12[1];
      pbVar9[2] = pbVar12[2];
      if (uVar8 <= uVar7) {
        return;
      }
      do {
        pbVar10 = pbVar12 + uVar7;
        pbVar12 = pbVar12 + uVar7;
        pbVar9 = pbVar9 + uVar7;
        uVar8 = uVar8 - uVar7;
        *pbVar9 = *pbVar10;
        pbVar9[1] = pbVar12[1];
        pbVar9[2] = pbVar12[2];
      } while (uVar7 < uVar8);
      return;
    }
    uVar5 = (uint)(8 / (ulonglong)uVar7);
    iVar6 = 0;
    if ((*(uint *)(in_ECX + 0x30) & 0x10000) == 0) {
      if (param_1 == 0) {
        if (uVar7 != 1) {
          iVar6 = (uVar7 != 2) + 1;
        }
        uVar4 = *(uint *)(&DAT_00c17f68 + (uVar4 + iVar6 * 6) * 4);
      }
      else {
        if (uVar7 != 1) {
          iVar6 = (uVar7 != 2) + 1;
        }
        uVar4 = *(uint *)(&DAT_00c18604 + ((uint)(bVar2 >> 1) + iVar6 * 3) * 4);
      }
    }
    else if (param_1 == 0) {
      if (uVar7 != 1) {
        iVar6 = (uVar7 != 2) + 1;
      }
      uVar4 = *(uint *)(&DAT_00c17f20 + (uVar4 + iVar6 * 6) * 4);
    }
    else {
      if (uVar7 != 1) {
        iVar6 = (uVar7 != 2) + 1;
      }
      uVar4 = *(uint *)(&DAT_00c185e0 + ((uint)(bVar2 >> 1) + iVar6 * 3) * 4);
    }
    iVar11 = iVar11 - (int)in_EDX;
    while( true ) {
      bVar2 = (byte)uVar4;
      if (bVar2 != 0) {
        bVar3 = in_EDX[iVar11];
        if ((uVar4 & 0xff) != 0xff) {
          bVar3 = bVar3 & bVar2 | ~bVar2 & *in_EDX;
        }
        *in_EDX = bVar3;
      }
      if (uVar8 <= uVar5) break;
      uVar8 = uVar8 - uVar5;
      in_EDX = in_EDX + 1;
      uVar4 = uVar4 >> 8 | uVar4 << 0x18;
    }
  }
  if (local_20 != (byte *)0x0) {
    *local_20 = ~(byte)local_10 & *local_20 | (byte)local_10 & local_5;
  }
  return;
}

