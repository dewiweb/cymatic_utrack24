// rea decompile_all
// name: FUN_00416739
// address: 0x416739
// body: available
// range: 0x416739-0x416bef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00416739(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  short sVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  byte *pbVar13;
  uint local_10;
  int local_8;
  
  uVar8 = *(undefined4 *)(param_2 + 0x1c);
  *param_1 = uVar8;
  param_1[0x22] = 0;
  param_1[1] = param_3;
  param_1[0x23] = param_1 + 0x22;
  local_8 = FUN_0041106d();
  if (local_8 != 0) {
    return local_8;
  }
  local_8 = FUN_004111b5();
  if (local_8 != 0) {
    return local_8;
  }
  param_1[0x25] = *(undefined4 *)(param_2 + 0x20);
  puVar3 = *(undefined1 **)(param_2 + 0x20);
  pbVar13 = puVar3 + param_4;
  if (puVar3 + 0xf <= pbVar13) {
    param_1[2] = (uint)CONCAT11(*puVar3,puVar3[1]);
    param_1[3] = (uint)CONCAT11(puVar3[2],puVar3[3]);
    param_1[4] = (uint)CONCAT11(puVar3[4],puVar3[5]);
    param_1[5] = (int)(short)((short)(char)puVar3[6] << 8) | (uint)(byte)puVar3[7];
    param_1[6] = (int)(short)((short)(char)puVar3[8] << 8) | (uint)(byte)puVar3[9];
    param_1[7] = (int)(short)((short)(char)puVar3[10] << 8) | (uint)(byte)puVar3[0xb];
    param_1[8] = (int)(short)((short)(char)puVar3[0xc] << 8) | (uint)(byte)puVar3[0xd];
    bVar1 = puVar3[0xe];
    pbVar5 = puVar3 + 0xf;
    param_1[9] = (uint)bVar1;
    if ((bVar1 & 4) == 0) {
      pbVar5 = puVar3 + 0x11;
      if (pbVar13 < pbVar5) goto LAB_00416b00;
      param_1[10] = (int)(short)((short)(char)puVar3[0xf] << 8) | (uint)(byte)puVar3[0x10];
    }
    iVar9 = 0;
    if (((char)bVar1 < '\0') &&
       (local_8 = FUN_00415e7f(pbVar13,&DAT_008fc2a4,param_1), iVar9 = local_8, local_8 != 0))
    goto LAB_00416bcc;
    local_8 = iVar9;
    pbVar6 = pbVar5 + 3;
    if (pbVar6 <= pbVar13) {
      uVar7 = (uint)CONCAT21(CONCAT11(*pbVar5,pbVar5[1]),pbVar5[2]);
      pbVar5 = pbVar6;
      if (uVar7 != 0) {
        pbVar5 = pbVar6 + uVar7;
        if (pbVar13 < pbVar5) goto LAB_00416b00;
        do {
          if (((pbVar5 < pbVar6 + 4) || (uVar12 = (uint)CONCAT11(*pbVar6,pbVar6[1]), uVar12 < 4)) ||
             (uVar7 < uVar12)) break;
          sVar4 = CONCAT11(pbVar6[2],pbVar6[3]);
          if (sVar4 == 1) {
            puVar11 = param_1 + 0x15;
LAB_0041698e:
            local_8 = FUN_0041660c(uVar8,puVar11);
            if (local_8 != 0) {
              return local_8;
            }
          }
          else if (sVar4 == 2) {
            if (pbVar6 + 0x24 <= pbVar6 + uVar12) {
              param_1[0xb] = (int)(short)((short)(char)pbVar6[0xe] << 8) | (uint)pbVar6[0xf];
              param_1[0xc] = (int)(short)((short)(char)pbVar6[0x10] << 8) | (uint)pbVar6[0x11];
              param_1[0xd] = (int)(short)((short)(char)pbVar6[0x12] << 8) | (uint)pbVar6[0x13];
            }
          }
          else if (sVar4 == 3) {
            puVar11 = param_1 + 0x16;
            goto LAB_0041698e;
          }
          uVar7 = uVar7 - uVar12;
          pbVar6 = pbVar6 + uVar12;
        } while (uVar7 != 0);
      }
      pbVar6 = pbVar5 + 1;
      if (pbVar6 <= pbVar13) {
        uVar7 = (uint)*pbVar5;
        param_1[0x1a] = uVar7;
        if (pbVar6 + uVar7 * 2 <= pbVar13) {
          uVar8 = FUN_00411976(4,0,&local_8);
          param_1[0x1b] = uVar8;
          if (local_8 != 0) goto LAB_00416bcc;
          uVar12 = 0;
          if (uVar7 != 0) {
            do {
              pbVar5 = pbVar6 + 1;
              bVar2 = *pbVar6;
              pbVar6 = pbVar6 + 2;
              *(uint *)(param_1[0x1b] + uVar12 * 4) =
                   (int)(short)((short)(char)bVar2 << 8) | (uint)*pbVar5;
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar7);
          }
          if (pbVar6 + 8 <= pbVar13) {
            param_1[0x1c] = (uint)*pbVar6;
            param_1[0x1d] = (uint)pbVar6[1];
            param_1[0x11] = (uint)CONCAT11(pbVar6[2],pbVar6[3]);
            param_1[0xe] = (uint)CONCAT11(pbVar6[4],pbVar6[5]);
            pbVar5 = pbVar6 + 8;
            local_10 = (uint)CONCAT11(pbVar6[6],pbVar6[7]);
            param_1[0x1e] = local_10;
            param_1[0x1f] = pbVar5 + (param_3 - *(int *)(param_2 + 0x20));
            uVar8 = FUN_00411976(0x10,0,&local_8);
            param_1[0x20] = uVar8;
            if (local_8 != 0) goto LAB_00416bcc;
            iVar9 = 4;
            if ((bVar1 & 2) != 0) {
              iVar9 = 5;
            }
            if ((bVar1 & 4) != 0) {
              iVar9 = iVar9 + 2;
            }
            if ((bVar1 & 8) != 0) {
              iVar9 = iVar9 + 1;
            }
            if ((bVar1 & 0x10) != 0) {
              iVar9 = iVar9 + 1;
            }
            if ((bVar1 & 0x20) != 0) {
              iVar9 = iVar9 + 1;
            }
            if (pbVar5 + iVar9 * local_10 <= pbVar13) {
              if (local_10 != 0) {
                iVar9 = 0;
                do {
                  puVar10 = (uint *)(param_1[0x20] + iVar9);
                  if ((bVar1 & 2) == 0) {
                    uVar7 = (uint)*pbVar5;
                    pbVar13 = pbVar5 + 1;
                  }
                  else {
                    pbVar13 = pbVar5 + 2;
                    uVar7 = (uint)CONCAT11(*pbVar5,pbVar5[1]);
                  }
                  *puVar10 = uVar7;
                  if ((bVar1 & 4) == 0) {
                    uVar7 = param_1[10];
                  }
                  else {
                    pbVar5 = pbVar13 + 1;
                    bVar2 = *pbVar13;
                    pbVar13 = pbVar13 + 2;
                    uVar7 = (int)(short)((short)(char)bVar2 << 8) | (uint)*pbVar5;
                  }
                  puVar10[1] = uVar7;
                  if ((bVar1 & 8) != 0) {
                    pbVar13 = pbVar13 + 1;
                  }
                  if ((bVar1 & 0x10) == 0) {
                    uVar7 = (uint)*pbVar13;
                    pbVar6 = pbVar13 + 1;
                  }
                  else {
                    pbVar6 = pbVar13 + 2;
                    uVar7 = (uint)CONCAT11(*pbVar13,pbVar13[1]);
                  }
                  puVar10[2] = uVar7;
                  if ((bVar1 & 0x20) == 0) {
                    pbVar5 = pbVar6 + 2;
                    uVar7 = (uint)*pbVar6;
                  }
                  else {
                    pbVar5 = pbVar6 + 3;
                    uVar7 = (uint)CONCAT11(*pbVar6,pbVar6[1]);
                  }
                  iVar9 = iVar9 + 0x10;
                  local_10 = local_10 - 1;
                  puVar10[3] = uVar7 << 8 | (uint)pbVar5[-1];
                } while (local_10 != 0);
              }
              goto LAB_00416bcc;
            }
          }
        }
      }
    }
  }
LAB_00416b00:
  local_8 = 8;
LAB_00416bcc:
  FUN_00411249();
  uVar8 = FUN_004d021d();
  param_1[0x25] = 0;
  param_1[0x24] = uVar8;
  return local_8;
}

