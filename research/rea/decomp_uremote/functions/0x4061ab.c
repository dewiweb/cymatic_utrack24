// rea decompile_all
// name: FUN_004061ab
// address: 0x4061ab
// body: available
// range: 0x4061ab-0x4069ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004061ab(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                uint *param_5)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  void *_Dst;
  uint *puVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  short sVar12;
  uint uVar13;
  size_t _Size;
  uint local_10;
  void *local_c;
  int local_8;
  
  local_8 = 0;
  uVar11 = param_5[8];
  local_10 = uVar11;
  iVar4 = _memcmp(param_1,"COMMENT",7);
  if (iVar4 == 0) {
    pcVar5 = (char *)((int)param_1 + 7);
    if (*pcVar5 != '\0') {
      pcVar5 = (char *)((int)param_1 + 8);
    }
    local_8 = FUN_00405d14(pcVar5);
    goto LAB_004069ac;
  }
  if ((*param_5 & 0x20) == 0) {
    iVar4 = _memcmp(param_1,"CHARS",5);
    if (iVar4 == 0) {
      local_8 = FUN_00405639(param_1,param_2);
      if (local_8 == 0) {
        uVar6 = FUN_004059ff();
        *(uint *)(uVar11 + 0x30) = uVar6;
        param_5[1] = uVar6;
        if (uVar6 == 0) {
          *(undefined4 *)(uVar11 + 0x30) = 0x40;
        }
        if (param_5[1] < 0x110000) {
          uVar7 = FUN_00411976(0x24,0,&local_8);
          *(undefined4 *)(uVar11 + 0x38) = uVar7;
          if (local_8 == 0) {
            *param_5 = *param_5 | 0x20;
            return 0;
          }
        }
        else {
          local_8 = 6;
        }
      }
    }
    else {
      local_8 = 0xb4;
    }
    goto LAB_004069b2;
  }
  iVar4 = _memcmp(param_1,"ENDFONT",7);
  if (iVar4 == 0) {
    _qsort(*(void **)(uVar11 + 0x38),*(size_t *)(uVar11 + 0x34),0x24,(_PtFuncCompare *)&LAB_00405bcb
          );
    *param_5 = *param_5 & 0xfffffffe;
    return local_8;
  }
  iVar4 = _memcmp(param_1,"ENDCHAR",7);
  if (iVar4 == 0) {
    param_5[7] = 0;
    *param_5 = *param_5 & 0xfffff03f;
    return local_8;
  }
  if ((((*param_5 & 0x40) != 0) && (param_5[7] == 0xffffffff)) && (*(int *)(param_5[9] + 4) == 0)) {
    return local_8;
  }
  iVar4 = _memcmp(param_1,"STARTCHAR",9);
  if (iVar4 == 0) {
    FUN_00411a5c(param_5[6]);
    param_5[6] = 0;
    local_8 = FUN_00405639(param_1,param_2);
    if (local_8 != 0) goto LAB_004069b2;
    FUN_004055b2();
    local_c = (void *)FUN_004055de(&local_10);
    if (local_c != (void *)0x0) {
      _Size = local_10 + 1;
      _Dst = (void *)FUN_00411976(1,0,&local_8);
      param_5[6] = (uint)_Dst;
      if (local_8 == 0) {
        _memcpy(_Dst,local_c,_Size);
        *param_5 = *param_5 | 0x40;
        return local_8;
      }
      goto LAB_004069b2;
    }
  }
  else {
    iVar4 = _memcmp(param_1,"ENCODING",8);
    if (iVar4 != 0) {
      if (param_5[7] == 0xffffffff) {
        iVar10 = *(int *)(uVar11 + 0x40);
        iVar4 = *(int *)(uVar11 + 0x44);
      }
      else {
        iVar10 = *(int *)(uVar11 + 0x34);
        iVar4 = *(int *)(uVar11 + 0x38);
      }
      iVar4 = iVar10 * 0x24 + -0x24 + iVar4;
      uVar11 = *param_5;
      if ((uVar11 & 0x800) != 0) {
        if ((uint)*(ushort *)(iVar4 + 0xe) <= param_5[2]) {
          if ((uVar11 & 0x80000000) != 0) {
            return local_8;
          }
          *param_5 = uVar11 | 0x80000000;
          *(undefined2 *)(local_10 + 0x44084) = 1;
          return local_8;
        }
        local_c = (void *)0x0;
        pbVar9 = (byte *)(param_5[2] * *(int *)(iVar4 + 0x1c) + *(int *)(iVar4 + 0x18));
        uVar11 = *(int *)(iVar4 + 0x1c) * 2;
        if (uVar11 != 0) {
          do {
            bVar1 = *(byte *)((int)param_1 + (int)local_c);
            uVar6 = (int)local_c + 1;
            if (((&DAT_008fa408)[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) == 0) break;
            *pbVar9 = *pbVar9 * '\x10' + (&DAT_008fa348)[(char)bVar1];
            if ((uVar6 < uVar11) && (((uint)local_c & 1) != 0)) {
              pbVar9 = pbVar9 + 1;
              *pbVar9 = 0;
            }
            local_c = (void *)uVar6;
          } while (uVar6 < uVar11);
          if ((local_c < uVar11) && ((*param_5 & 0x40000000) == 0)) {
            *param_5 = *param_5 | 0x40000000;
            *(undefined2 *)(local_10 + 0x44084) = 1;
          }
        }
        if (*(ushort *)(iVar4 + 0xc) != 0) {
          *pbVar9 = *pbVar9 & (&DAT_008fa428)
                              [(uint)*(ushort *)(param_5[8] + 0x44086) *
                               (uint)*(ushort *)(iVar4 + 0xc) & 7];
        }
        if (((local_c == (void *)uVar11) &&
            (((&DAT_008fa408)[*(byte *)(uVar11 + (int)param_1) >> 3] &
             (byte)(1 << (*(byte *)(uVar11 + (int)param_1) & 7))) != 0)) &&
           ((*param_5 & 0x40000000) == 0)) {
          *param_5 = *param_5 | 0x40000000;
          *(undefined2 *)(local_10 + 0x44084) = 1;
        }
        param_5[2] = param_5[2] + 1;
        return local_8;
      }
      iVar10 = _memcmp(param_1,"SWIDTH",6);
      if (iVar10 == 0) {
        if ((*param_5 & 0x80) == 0) {
LAB_00406798:
          local_8 = 0xb6;
          goto LAB_004069b2;
        }
        local_8 = FUN_00405639(param_1,param_2);
        if (local_8 != 0) goto LAB_004069b2;
        uVar2 = FUN_004059ff();
        *(undefined2 *)(iVar4 + 8) = uVar2;
        *param_5 = *param_5 | 0x100;
      }
      else {
        iVar10 = _memcmp(param_1,"DWIDTH",6);
        if (iVar10 == 0) {
          if ((*param_5 & 0x80) == 0) goto LAB_00406798;
          local_8 = FUN_00405639(param_1,param_2);
          if (local_8 != 0) goto LAB_004069b2;
          uVar2 = FUN_004059ff();
          *(undefined2 *)(iVar4 + 10) = uVar2;
          if ((*param_5 & 0x100) == 0) {
            uVar2 = FUN_0040d230(72000);
            *(undefined2 *)(iVar4 + 8) = uVar2;
          }
          *param_5 = *param_5 | 0x200;
        }
        else {
          iVar10 = _memcmp(param_1,&DAT_0090ec98,3);
          if (iVar10 == 0) {
            if ((*param_5 & 0x80) == 0) goto LAB_00406798;
            local_8 = FUN_00405639(param_1,param_2);
            if (local_8 != 0) goto LAB_004069b2;
            uVar2 = FUN_00405b17();
            *(undefined2 *)(iVar4 + 0xc) = uVar2;
            uVar2 = FUN_00405b17();
            *(undefined2 *)(iVar4 + 0xe) = uVar2;
            uVar2 = FUN_00405b17();
            *(undefined2 *)(iVar4 + 0x10) = uVar2;
            sVar3 = FUN_00405b17();
            uVar11 = local_10;
            sVar12 = *(short *)(iVar4 + 0xe) + sVar3;
            *(short *)(iVar4 + 0x12) = sVar3;
            *(short *)(iVar4 + 0x14) = sVar12;
            *(short *)(iVar4 + 0x16) = -sVar3;
            sVar3 = *(short *)((int)param_5 + 0x12);
            if (sVar3 < sVar12) {
              sVar3 = sVar12;
            }
            *(short *)((int)param_5 + 0x12) = sVar3;
            sVar3 = *(short *)(iVar4 + 0x16);
            if (*(short *)(iVar4 + 0x16) <= (short)param_5[5]) {
              sVar3 = (short)param_5[5];
            }
            *(short *)(param_5 + 5) = sVar3;
            sVar3 = *(short *)(iVar4 + 0xc) + *(short *)(iVar4 + 0x10);
            *(short *)((int)param_5 + 0x16) = sVar3;
            if (sVar3 <= (short)param_5[4]) {
              sVar3 = (short)param_5[4];
            }
            *(short *)(param_5 + 4) = sVar3;
            sVar3 = *(short *)(iVar4 + 0x10);
            if ((short)param_5[3] <= *(short *)(iVar4 + 0x10)) {
              sVar3 = (short)param_5[3];
            }
            *(short *)(param_5 + 3) = sVar3;
            sVar3 = *(short *)(iVar4 + 0x10);
            if (*(short *)(iVar4 + 0x10) <= *(short *)((int)param_5 + 0xe)) {
              sVar3 = *(short *)((int)param_5 + 0xe);
            }
            *(short *)((int)param_5 + 0xe) = sVar3;
            if ((*param_5 & 0x200) == 0) {
              *(undefined2 *)(iVar4 + 10) = *(undefined2 *)(iVar4 + 0xc);
            }
            if ((*(int *)param_5[9] != 0) &&
               (sVar3 = FUN_0040d230(72000), sVar3 != *(short *)(iVar4 + 8))) {
              *(short *)(iVar4 + 8) = sVar3;
              if (param_5[7] == 0xffffffff) {
                puVar8 = (uint *)(uVar11 + 0x22084 + (*(int *)(uVar11 + 0x40) - 1U >> 5) * 4);
                *puVar8 = *puVar8 | 1 << ((char)*(int *)(uVar11 + 0x40) - 1U & 0x1f);
              }
              else {
                puVar8 = (uint *)(uVar11 + 0x84 + (*(int *)(iVar4 + 4) >> 5) * 4);
                *puVar8 = *puVar8 | 1 << ((byte)*(int *)(iVar4 + 4) & 0x1f);
              }
              *param_5 = *param_5 | 0x1000;
              *(undefined2 *)(uVar11 + 0x44084) = 1;
            }
            *param_5 = *param_5 | 0x400;
          }
          else {
            iVar10 = _memcmp(param_1,"BITMAP",6);
            if (iVar10 == 0) {
              if ((*param_5 & 0x400) == 0) {
                local_8 = 0xb7;
              }
              else {
                uVar11 = (int)((uint)*(ushort *)(param_5[8] + 0x44086) *
                               (uint)*(ushort *)(iVar4 + 0xc) + 7) >> 3;
                uVar6 = *(ushort *)(iVar4 + 0xe) * uVar11;
                *(uint *)(iVar4 + 0x1c) = uVar11;
                if ((uVar11 < 0x10000) && (uVar6 < 0x10000)) {
                  *(short *)(iVar4 + 0x20) = (short)uVar6;
                  uVar7 = FUN_00411976(1,0,&local_8);
                  *(undefined4 *)(iVar4 + 0x18) = uVar7;
                  if (local_8 == 0) {
                    param_5[2] = 0;
                    *param_5 = *param_5 | 0x800;
                    return 0;
                  }
                }
                else {
                  local_8 = 0xb8;
                }
              }
              goto LAB_004069b2;
            }
            local_8 = 3;
          }
        }
      }
LAB_004069ac:
      if (local_8 == 0) {
        return 0;
      }
      goto LAB_004069b2;
    }
    if ((*param_5 & 0x40) == 0) {
      local_8 = 0xb5;
      goto LAB_004069b2;
    }
    local_8 = FUN_00405639(param_1,param_2);
    if (local_8 != 0) goto LAB_004069b2;
    uVar6 = FUN_00405a76();
    param_5[7] = uVar6;
    if ((int)uVar6 < -1) {
      param_5[7] = 0xffffffff;
    }
    if ((param_5[7] == 0xffffffff) && (2 < param_5[0x880c])) {
      uVar6 = FUN_00405a76();
      param_5[7] = uVar6;
    }
    uVar6 = param_5[7];
    if (((int)uVar6 < 1) || (uVar6 < 0x110000)) {
      if (-1 < (int)uVar6) {
        uVar13 = 1 << ((byte)uVar6 & 0x1f);
        puVar8 = param_5 + ((int)uVar6 >> 5) + 10;
        if ((*puVar8 & uVar13) == 0) {
          *puVar8 = *puVar8 | uVar13;
        }
        else {
          param_5[7] = 0xffffffff;
          *(undefined2 *)(uVar11 + 0x44084) = 1;
        }
      }
      if ((int)param_5[7] < 0) {
        if (*(int *)(param_5[9] + 4) == 0) {
          FUN_00411a5c(param_5[6]);
          param_5[6] = 0;
        }
        else {
          if (*(int *)(uVar11 + 0x40) == *(int *)(uVar11 + 0x3c)) {
            uVar7 = FUN_00411976(0x24,*(undefined4 *)(uVar11 + 0x44),&local_8);
            *(undefined4 *)(uVar11 + 0x44) = uVar7;
            if (local_8 != 0) goto LAB_004069b2;
            *(int *)(uVar11 + 0x3c) = *(int *)(uVar11 + 0x3c) + 4;
          }
          puVar8 = (uint *)(*(int *)(uVar11 + 0x40) * 0x24 + *(int *)(uVar11 + 0x44));
          *puVar8 = param_5[6];
          puVar8[1] = *(uint *)(uVar11 + 0x40);
          *(int *)(uVar11 + 0x40) = *(int *)(uVar11 + 0x40) + 1;
        }
      }
      else {
        if (*(int *)(uVar11 + 0x34) == *(int *)(uVar11 + 0x30)) {
          uVar7 = FUN_00411976(0x24,*(undefined4 *)(uVar11 + 0x38),&local_8);
          *(undefined4 *)(uVar11 + 0x38) = uVar7;
          if (local_8 != 0) goto LAB_004069b2;
          *(int *)(uVar11 + 0x30) = *(int *)(uVar11 + 0x30) + 0x40;
        }
        puVar8 = (uint *)(*(int *)(uVar11 + 0x34) * 0x24 + *(int *)(uVar11 + 0x38));
        *(int *)(uVar11 + 0x34) = *(int *)(uVar11 + 0x34) + 1;
        *puVar8 = param_5[6];
        puVar8[1] = param_5[7];
      }
      param_5[6] = 0;
      *param_5 = *param_5 & 0x3fffff7f | 0x80;
      return local_8;
    }
  }
  local_8 = 3;
LAB_004069b2:
  if ((*param_5 & 0x40) != 0) {
    FUN_00411a5c(param_5[6]);
    param_5[6] = 0;
  }
  return local_8;
}

