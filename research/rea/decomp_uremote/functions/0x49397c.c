// rea decompile_all
// name: FUN_0049397c
// address: 0x49397c
// body: available
// range: 0x49397c-0x493d6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0049397c(int param_1,int *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  uint uVar8;
  byte bVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  undefined4 local_14;
  byte *local_c;
  
  local_14 = 0;
  bVar6 = *(byte *)(param_2 + 2);
  if (((bVar6 & 1) == 0) && ((bVar6 & 2) != 0)) {
    uVar14 = (uint)*(ushort *)(param_1 + 0x216);
    uVar15 = (uint)*(ushort *)(param_1 + 0x218);
    iVar13 = (0x8000 - uVar15) - uVar14;
    bVar6 = bVar6 >> 2;
    iVar1 = *param_2;
    if (*(char *)((int)param_2 + 9) == '\b') {
      iVar3 = iVar1;
      pbVar4 = param_3;
      if ((*(int *)(param_1 + 0x14c) == 0) || (iVar2 = *(int *)(param_1 + 0x150), iVar2 == 0)) {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          bVar5 = *param_3;
          pbVar7 = param_3 + 3;
          if ((bVar5 != param_3[1]) || (bVar5 != param_3[2])) {
            local_14 = 1;
            bVar5 = (byte)((uint)param_3[2] * iVar13 + param_3[1] * uVar15 + bVar5 * uVar14 >> 0xf);
          }
          *pbVar4 = bVar5;
          local_c = pbVar4 + 1;
          if ((bVar6 & 1) != 0) {
            local_c = pbVar4 + 2;
            pbVar4[1] = *pbVar7;
            pbVar7 = param_3 + 4;
          }
          pbVar4 = local_c;
          param_3 = pbVar7;
        }
      }
      else {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          bVar5 = *param_3;
          pbVar7 = param_3 + 3;
          if ((bVar5 == param_3[1]) && (bVar5 == param_3[2])) {
            if (*(int *)(param_1 + 0x144) != 0) {
              bVar5 = *(byte *)((uint)bVar5 + *(int *)(param_1 + 0x144));
            }
          }
          else {
            local_14 = 1;
            bVar5 = *(byte *)(((uint)*(byte *)((uint)param_3[2] + iVar2) * iVar13 +
                               *(byte *)((uint)param_3[1] + iVar2) * uVar15 + 0x4000 +
                               *(byte *)((uint)bVar5 + iVar2) * uVar14 >> 0xf) +
                             *(int *)(param_1 + 0x14c));
          }
          *pbVar4 = bVar5;
          pbVar16 = pbVar4 + 1;
          if ((bVar6 & 1) != 0) {
            *pbVar16 = *pbVar7;
            pbVar16 = pbVar4 + 2;
            pbVar7 = param_3 + 4;
          }
          param_3 = pbVar7;
          pbVar4 = pbVar16;
        }
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x158);
      iVar2 = iVar1;
      pbVar4 = param_3;
      if ((iVar3 == 0) || (*(int *)(param_1 + 0x154) == 0)) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          uVar10 = CONCAT11(*param_3,param_3[1]);
          pbVar7 = param_3 + 6;
          if ((uVar10 != CONCAT11(param_3[2],param_3[3])) ||
             (uVar10 != CONCAT11(param_3[4],param_3[5]))) {
            local_14 = 1;
          }
          uVar8 = (uint)CONCAT11(param_3[4],param_3[5]) * iVar13 +
                  CONCAT11(param_3[2],param_3[3]) * uVar15 + 0x4000 + uVar10 * uVar14 >> 0xf &
                  0xffff;
          *pbVar4 = (byte)(uVar8 >> 8);
          pbVar4[1] = (byte)uVar8;
          pbVar16 = pbVar4 + 2;
          if ((bVar6 & 1) != 0) {
            *pbVar16 = *pbVar7;
            pbVar4[3] = param_3[7];
            pbVar16 = pbVar4 + 4;
            pbVar7 = param_3 + 8;
          }
          param_3 = pbVar7;
          pbVar4 = pbVar16;
        }
      }
      else {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          bVar5 = *param_3;
          uVar10 = CONCAT11(bVar5,param_3[1]);
          uVar11 = CONCAT11(param_3[2],param_3[3]);
          uVar12 = CONCAT11(param_3[4],param_3[5]);
          pbVar7 = param_3 + 6;
          if ((uVar10 == uVar11) && (uVar10 == uVar12)) {
            if (*(int *)(param_1 + 0x148) != 0) {
              uVar10 = *(ushort *)
                        (*(int *)(*(int *)(param_1 + 0x148) +
                                 ((uVar10 & 0xff) >> (*(byte *)(param_1 + 0x13c) & 0x1f)) * 4) +
                        (uint)bVar5 * 2);
            }
          }
          else {
            bVar9 = (byte)*(undefined2 *)(param_1 + 0x13c);
            uVar8 = *(ushort *)
                     (*(int *)(iVar3 + ((uVar11 & 0xff) >>
                                       ((byte)*(undefined2 *)(param_1 + 0x13c) & 0x1f)) * 4) +
                     (uint)param_3[2] * 2) * uVar15 +
                    (uint)*(ushort *)
                           (*(int *)(iVar3 + ((uVar12 & 0xff) >>
                                             ((byte)*(undefined2 *)(param_1 + 0x13c) & 0x1f)) * 4) +
                           (uint)param_3[4] * 2) * iVar13 + 0x4000 +
                    *(ushort *)
                     (*(int *)(iVar3 + ((uVar10 & 0xff) >> (bVar9 & 0x1f)) * 4) + (uint)bVar5 * 2) *
                    uVar14 >> 0xf;
            local_14 = 1;
            uVar10 = *(ushort *)
                      (*(int *)(*(int *)(param_1 + 0x154) + ((uVar8 & 0xff) >> (bVar9 & 0x1f)) * 4)
                      + ((uVar8 & 0xffff) >> 8) * 2);
          }
          *pbVar4 = (byte)(uVar10 >> 8);
          pbVar4[1] = (byte)uVar10;
          local_c = pbVar4 + 2;
          if ((bVar6 & 1) != 0) {
            *local_c = *pbVar7;
            pbVar4[3] = param_3[7];
            local_c = pbVar4 + 4;
            pbVar7 = param_3 + 8;
          }
          pbVar4 = local_c;
          param_3 = pbVar7;
        }
      }
    }
    *(char *)((int)param_2 + 10) = *(char *)((int)param_2 + 10) + -2;
    bVar6 = *(char *)((int)param_2 + 10) * *(char *)((int)param_2 + 9);
    *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfd;
    *(byte *)((int)param_2 + 0xb) = bVar6;
    if (bVar6 < 8) {
      uVar14 = (uint)bVar6 * iVar1 + 7 >> 3;
    }
    else {
      uVar14 = (uint)(bVar6 >> 3) * iVar1;
    }
    param_2[1] = uVar14;
  }
  return local_14;
}

