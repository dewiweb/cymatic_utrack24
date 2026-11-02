// rea decompile_all
// name: FUN_00497da3
// address: 0x497da3
// body: available
// range: 0x497da3-0x4981c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x497ddd to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00497da3(byte *param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int in_EAX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  size_t _Size;
  uint uVar10;
  byte *local_1c;
  byte local_14;
  byte *local_10;
  uint local_c;
  byte local_5;
  
  local_1c = (byte *)0x0;
  bVar4 = *(byte *)(in_EAX + 0x113);
  uVar9 = (uint)bVar4;
  bVar1 = *(byte *)(in_EAX + 0x109);
  uVar5 = (uint)bVar1;
  local_10 = (byte *)(*(int *)(in_EAX + 0xd8) + 1);
  uVar10 = *(uint *)(in_EAX + 0xb4);
  local_5 = 0;
  if (uVar9 != 0) {
    if (*(uint *)(in_EAX + 0xec) != 0) {
      if (uVar9 < 8) {
        uVar7 = uVar10 * uVar9 + 7 >> 3;
      }
      else {
        uVar7 = (bVar4 >> 3) * uVar10;
      }
      if (*(uint *)(in_EAX + 0xec) != uVar7) goto LAB_00497ddb;
    }
    if (uVar10 != 0) {
      uVar7 = uVar10 * uVar9;
      local_14 = (byte)(uVar7 & 7);
      if ((uVar7 & 7) != 0) {
        if (uVar9 < 8) {
          uVar8 = uVar7 + 7 >> 3;
        }
        else {
          uVar8 = (bVar4 >> 3) * uVar10;
        }
        local_1c = param_1 + (uVar8 - 1);
        local_5 = *local_1c;
        if ((*(uint *)(in_EAX + 0x30) & 0x10000) == 0) {
          local_14 = (byte)(0xff >> local_14);
        }
        else {
          local_14 = (byte)(0xff << local_14);
        }
      }
      if ((((*(char *)(in_EAX + 0x108) == '\0') || ((*(uint *)(in_EAX + 0x30) & 2) == 0)) ||
          (5 < uVar5)) || ((param_2 != 0 && ((param_2 != 1 || ((bVar1 & 1) == 0)))))) {
        if (uVar9 < 8) {
          _Size = uVar7 + 7 >> 3;
        }
        else {
          _Size = (bVar4 >> 3) * uVar10;
        }
        _memcpy(param_1,local_10,_Size);
      }
      else {
        uVar7 = (uVar5 & 1) << (3U - (char)(uVar5 + 1 >> 1) & 0x1f) & 7;
        if (uVar10 <= uVar7) {
          return;
        }
        if (7 < uVar9) {
          if ((bVar4 & 7) == 0) {
            uVar9 = (uint)(bVar4 >> 3);
            iVar6 = uVar7 * uVar9;
            param_1 = param_1 + iVar6;
            uVar10 = uVar10 * uVar9 - iVar6;
            local_10 = local_10 + iVar6;
            local_c = uVar9;
            if ((param_2 != 0) &&
               (local_c = (1 << ((byte)(6 - uVar5 >> 1) & 0x1f)) * uVar9,
               uVar10 <= local_c && local_c - uVar10 != 0)) {
              local_c = uVar10;
            }
            uVar9 = (1 << ((byte)(7 - uVar5 >> 1) & 0x1f)) * uVar9;
            if (local_c == 1) {
              for (; *param_1 = *local_10, uVar9 < uVar10; uVar10 = uVar10 - uVar9) {
                param_1 = param_1 + uVar9;
                local_10 = local_10 + uVar9;
              }
              return;
            }
            if (local_c == 2) {
              do {
                *param_1 = *local_10;
                param_1[1] = local_10[1];
                if (uVar10 <= uVar9) {
                  return;
                }
                param_1 = param_1 + uVar9;
                uVar10 = uVar10 - uVar9;
                local_10 = local_10 + uVar9;
              } while (1 < uVar10);
              *param_1 = *local_10;
              return;
            }
            if (local_c != 3) {
              if ((((0xf < local_c) || (((uint)param_1 & 1) != 0)) || (((uint)local_10 & 1) != 0))
                 || (((local_c & 1) != 0 || ((uVar9 & 1) != 0)))) {
                while (_memcpy(param_1,local_10,local_c), uVar9 < uVar10) {
                  param_1 = param_1 + uVar9;
                  uVar10 = uVar10 - uVar9;
                  local_10 = local_10 + uVar9;
                  if (uVar10 < local_c) {
                    local_c = uVar10;
                  }
                }
                return;
              }
              if (((((uint)param_1 & 3) == 0) && (((uint)local_10 & 3) == 0)) &&
                 (((local_c & 3) == 0 && ((uVar9 & 3) == 0)))) {
                uVar5 = local_c;
                while( true ) {
                  do {
                    uVar3 = *(undefined4 *)local_10;
                    local_10 = local_10 + 4;
                    *(undefined4 *)param_1 = uVar3;
                    param_1 = param_1 + 4;
                    uVar5 = uVar5 - 4;
                  } while (uVar5 != 0);
                  if (uVar10 <= uVar9) break;
                  uVar5 = uVar9 - local_c & 0xfffffffc;
                  local_10 = local_10 + uVar5;
                  uVar10 = uVar10 - uVar9;
                  param_1 = param_1 + uVar5;
                  uVar5 = local_c;
                  if (uVar10 < local_c) {
                    iVar6 = (int)local_10 - (int)param_1;
                    do {
                      *param_1 = param_1[iVar6];
                      param_1 = param_1 + 1;
                      uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                    return;
                  }
                }
                return;
              }
              uVar5 = local_c;
              while( true ) {
                do {
                  uVar2 = *(undefined2 *)local_10;
                  local_10 = local_10 + 2;
                  *(undefined2 *)param_1 = uVar2;
                  param_1 = param_1 + 2;
                  uVar5 = uVar5 - 2;
                } while (uVar5 != 0);
                if (uVar10 <= uVar9) break;
                uVar5 = uVar9 - local_c & 0xfffffffe;
                local_10 = local_10 + uVar5;
                uVar10 = uVar10 - uVar9;
                param_1 = param_1 + uVar5;
                uVar5 = local_c;
                if (uVar10 < local_c) {
                  iVar6 = (int)local_10 - (int)param_1;
                  do {
                    *param_1 = param_1[iVar6];
                    param_1 = param_1 + 1;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                  return;
                }
              }
              return;
            }
            while( true ) {
              *param_1 = *local_10;
              param_1[1] = local_10[1];
              param_1[2] = local_10[2];
              if (uVar10 <= uVar9) break;
              param_1 = param_1 + uVar9;
              local_10 = local_10 + uVar9;
              uVar10 = uVar10 - uVar9;
            }
            return;
          }
          goto LAB_00497ddb;
        }
        if ((*(uint *)(in_EAX + 0x30) & 0x10000) == 0) {
          if (param_2 == 0) {
            uVar5 = *(uint *)(&DAT_00919f10 +
                             ((-(uint)(uVar9 != 1) & (uVar9 != 2) + 1) * 6 + uVar5) * 4);
          }
          else {
            uVar5 = *(uint *)(&DAT_00919f7c +
                             ((-(uint)(uVar9 != 1) & (uVar9 != 2) + 1) * 3 + (uint)(bVar1 >> 1)) * 4
                             );
          }
        }
        else if (param_2 == 0) {
          uVar5 = *(uint *)(&DAT_00919ec8 +
                           ((-(uint)(uVar9 != 1) & (uVar9 != 2) + 1) * 6 + uVar5) * 4);
        }
        else {
          uVar5 = *(uint *)(&DAT_00919f58 +
                           ((-(uint)(uVar9 != 1) & (uVar9 != 2) + 1) * 3 + (uint)(bVar1 >> 1)) * 4);
        }
        while( true ) {
          if ((uVar5 & 0xff) != 0) {
            if ((uVar5 & 0xff) == 0xff) {
              bVar4 = *local_10;
            }
            else {
              bVar4 = ~(byte)uVar5 & *param_1 | *local_10 & (byte)uVar5;
            }
            *param_1 = bVar4;
          }
          if (uVar10 <= 8 / uVar9) break;
          uVar10 = uVar10 - 8 / uVar9;
          param_1 = param_1 + 1;
          local_10 = local_10 + 1;
          uVar5 = uVar5 >> 8 | uVar5 << 0x18;
        }
      }
      if (local_1c != (byte *)0x0) {
        *local_1c = ~local_14 & *local_1c | local_14 & local_5;
      }
      return;
    }
  }
LAB_00497ddb:
                    /* WARNING: Subroutine does not return */
  FUN_00491122();
}

