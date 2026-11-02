// rea decompile_all
// name: FUN_00402583
// address: 0x402583
// body: available
// range: 0x402583-0x402809 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00402583(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  undefined4 *in_EAX;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  byte *pbVar10;
  int *piVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  undefined4 local_60 [8];
  undefined4 local_40;
  undefined4 local_30;
  int local_2c;
  int *local_28;
  undefined4 *local_24;
  byte *local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  byte *local_10;
  int local_c;
  
  piVar11 = in_EAX + param_1 * 7 + 0xb;
  local_30 = *in_EAX;
  local_14 = (undefined4 *)in_EAX[10];
  local_24 = local_14 + in_EAX[9];
  pbVar12 = (byte *)0x0;
  local_2c = 0;
  local_10 = (byte *)0x0;
  local_28 = piVar11;
  _memset(local_60,0,0x30);
  local_1c = piVar11[6];
  local_40 = 32000;
  local_60[0]._0_1_ = 0;
  if (local_1c < 0) {
    local_1c = -local_1c;
  }
  *piVar11 = 0;
  uVar5 = in_EAX[7];
  uVar14 = in_EAX[6] * 0x28 + uVar5;
  if (param_1 == 0) {
    for (; uVar5 < uVar14; uVar5 = uVar5 + 0x28) {
      *(int *)(uVar5 + 0x18) = (int)*(short *)(uVar5 + 0xc);
      *(int *)(uVar5 + 0x1c) = (int)*(short *)(uVar5 + 0xe);
    }
  }
  else {
    for (; uVar5 < uVar14; uVar5 = uVar5 + 0x28) {
      *(int *)(uVar5 + 0x18) = (int)*(short *)(uVar5 + 0xe);
      *(int *)(uVar5 + 0x1c) = (int)*(short *)(uVar5 + 0xc);
    }
  }
  local_c = local_1c;
  if (local_14 < local_24) {
    do {
      pbVar2 = (byte *)*local_14;
      local_18 = 0;
      iVar15 = 32000;
      iVar8 = -32000;
      if (pbVar2 != *(byte **)(pbVar2 + 0x24)) {
        bVar1 = (*(byte **)(pbVar2 + 0x24))[3];
        iVar6 = (int)(char)bVar1;
        if ((char)bVar1 < '\0') {
          iVar6 = -iVar6;
        }
        pbVar10 = pbVar2;
        if (iVar6 == local_c) {
          iVar6 = (int)(char)pbVar2[3];
          if ((char)pbVar2[3] < '\0') {
            iVar6 = -iVar6;
          }
          if (iVar6 == local_c) {
            do {
              pbVar10 = *(byte **)(pbVar10 + 0x24);
              iVar6 = (int)(char)pbVar10[3];
              if ((char)pbVar10[3] < '\0') {
                iVar6 = -iVar6;
              }
              if (iVar6 != local_c) {
                pbVar10 = *(byte **)(pbVar10 + 0x20);
                break;
              }
            } while (pbVar10 != pbVar2);
          }
        }
        bVar4 = false;
        local_20 = pbVar10;
        do {
          if (local_18 == 0) {
LAB_00402703:
            if (pbVar10 == local_20) {
              if (bVar4) break;
              bVar4 = true;
            }
          }
          else {
            iVar6 = *(int *)(pbVar10 + 0x18);
            if (iVar6 < iVar15) {
              iVar15 = iVar6;
            }
            if (iVar8 < iVar6) {
              iVar8 = iVar6;
            }
            if (((char)pbVar10[3] != local_1c) || (pbVar10 == local_20)) {
              *(byte **)(pbVar12 + 0x2c) = pbVar10;
              *(short *)(pbVar12 + 2) = (short)(iVar8 + iVar15 >> 1);
              if (((**(byte **)(pbVar12 + 0x28) | *pbVar10) & 3) != 0) {
                *pbVar12 = *pbVar12 | 1;
              }
              iVar8 = *(int *)(pbVar10 + 0x1c);
              iVar6 = *(int *)(*(int *)(pbVar12 + 0x28) + 0x1c);
              iVar15 = iVar8;
              if (iVar6 < iVar8) {
                iVar15 = iVar6;
              }
              if (iVar8 < iVar6) {
                iVar8 = iVar6;
              }
              local_18 = 0;
              *(short *)(pbVar12 + 4) = (short)iVar15;
              *(short *)(pbVar12 + 6) = (short)iVar8;
              local_10 = (byte *)0x0;
              *(short *)(pbVar12 + 8) = (short)iVar8 - *(short *)(pbVar12 + 4);
              pbVar12 = (byte *)0x0;
              goto LAB_00402703;
            }
          }
          if (local_18 == 0) {
            iVar7 = (int)(char)pbVar10[3];
            iVar6 = iVar7;
            if ((char)pbVar10[3] < '\0') {
              iVar6 = -iVar7;
            }
            if (iVar6 == local_c) {
              local_1c = iVar7;
              local_2c = FUN_00401355(local_30,&local_10);
              if (local_2c != 0) {
                return local_2c;
              }
              puVar13 = local_60;
              pbVar12 = local_10;
              for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
                *(undefined4 *)pbVar12 = *puVar13;
                puVar13 = puVar13 + 1;
                pbVar12 = pbVar12 + 4;
              }
              local_10[1] = (byte)local_1c;
              iVar8 = *(int *)(pbVar10 + 0x18);
              *(byte **)(local_10 + 0x28) = pbVar10;
              *(byte **)(local_10 + 0x2c) = pbVar10;
              local_18 = 1;
              pbVar12 = local_10;
              iVar15 = iVar8;
            }
          }
          pbVar10 = *(byte **)(pbVar10 + 0x20);
        } while( true );
      }
      local_14 = local_14 + 1;
      piVar11 = local_28;
    } while (local_14 < local_24);
  }
  uVar5 = piVar11[2];
  uVar14 = *piVar11 * 0x30 + uVar5;
  if (uVar5 < uVar14) {
    psVar9 = (short *)(uVar5 + 8);
    iVar8 = ((uVar14 - uVar5) - 1) / 0x30 + 1;
    do {
      iVar15 = *(int *)(psVar9 + 0x10);
      iVar6 = *(int *)(psVar9 + 0x12);
      iVar7 = *(int *)(iVar15 + 0x1c);
      iVar3 = *(int *)(iVar6 + 0x1c);
      if (iVar15 != iVar6) {
        iVar15 = *(int *)(*(int *)(iVar15 + 0x24) + 0x1c);
        if (iVar7 < iVar3) {
          if (iVar15 < iVar7) {
            *psVar9 = *psVar9 + (short)(iVar7 - iVar15 >> 1);
          }
          iVar15 = *(int *)(*(int *)(iVar6 + 0x20) + 0x1c);
          if (iVar3 < iVar15) {
            *psVar9 = *psVar9 + (short)(iVar15 - iVar3 >> 1);
          }
        }
        else {
          if (iVar7 < iVar15) {
            *psVar9 = *psVar9 + (short)(iVar15 - iVar7 >> 1);
          }
          iVar15 = *(int *)(*(int *)(iVar6 + 0x20) + 0x1c);
          if (iVar15 < iVar3) {
            *psVar9 = *psVar9 + (short)(iVar3 - iVar15 >> 1);
          }
        }
      }
      psVar9 = psVar9 + 0x18;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return local_2c;
}

