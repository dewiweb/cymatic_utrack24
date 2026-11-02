// rea decompile_all
// name: FUN_00493d6f
// address: 0x493d6f
// body: available
// range: 0x493d6f-0x494cfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00493d6f(void)

{
  char cVar1;
  byte bVar2;
  byte *in_EAX;
  byte *pbVar3;
  byte bVar4;
  undefined2 uVar5;
  int *in_ECX;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  short sVar14;
  int unaff_ESI;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar1 = (char)in_ECX[2];
  local_1c = *in_ECX;
  uVar11 = *(uint *)(unaff_ESI + 0x2c) >> 0xd & 1;
  if (cVar1 == '\0') {
    cVar1 = *(char *)((int)in_ECX + 9);
    if (cVar1 == '\x01') {
      iVar12 = 7;
      for (; local_1c != 0; local_1c = local_1c + -1) {
        bVar13 = (byte)iVar12;
        if ((ushort)(*in_EAX >> (bVar13 & 0x1f) & 1) == *(ushort *)(unaff_ESI + 0x174)) {
          *in_EAX = (byte)(0x7f7f >> (7 - bVar13 & 0x1f)) & *in_EAX |
                    *(char *)(unaff_ESI + 0x124) << (bVar13 & 0x1f);
        }
        if (iVar12 == 0) {
          iVar12 = 7;
          in_EAX = in_EAX + 1;
        }
        else {
          iVar12 = iVar12 + -1;
        }
      }
    }
    else if (cVar1 == '\x02') {
      iVar12 = 6;
      if (*(int *)(unaff_ESI + 0x144) == 0) {
        for (; local_1c != 0; local_1c = local_1c + -1) {
          bVar13 = (byte)iVar12;
          if ((ushort)(*in_EAX >> (bVar13 & 0x1f) & 3) == *(ushort *)(unaff_ESI + 0x174)) {
            *in_EAX = (byte)(0x3f3f >> (6 - bVar13 & 0x1f)) & *in_EAX |
                      *(char *)(unaff_ESI + 0x124) << (bVar13 & 0x1f);
          }
          if (iVar12 == 0) {
            iVar12 = 6;
            in_EAX = in_EAX + 1;
          }
          else {
            iVar12 = iVar12 + -2;
          }
        }
      }
      else {
        for (; local_1c != 0; local_1c = local_1c + -1) {
          bVar13 = *in_EAX;
          bVar4 = (byte)iVar12;
          if ((ushort)(bVar13 >> (bVar4 & 0x1f) & 3) == *(ushort *)(unaff_ESI + 0x174)) {
            bVar13 = (byte)(0x3f3f >> (6 - bVar4 & 0x1f)) & bVar13;
            bVar2 = *(byte *)(unaff_ESI + 0x124);
          }
          else {
            uVar11 = bVar13 >> (bVar4 & 0x1f) & 3;
            bVar13 = (byte)(0x3f3f >> (6 - bVar4 & 0x1f)) & *in_EAX;
            bVar2 = *(byte *)((((uVar11 << 2 | uVar11) << 2 | uVar11) << 2 | uVar11) +
                             *(int *)(unaff_ESI + 0x144)) >> 6;
          }
          *in_EAX = bVar13 | bVar2 << (bVar4 & 0x1f);
          if (iVar12 == 0) {
            iVar12 = 6;
            in_EAX = in_EAX + 1;
          }
          else {
            iVar12 = iVar12 + -2;
          }
        }
      }
    }
    else if (cVar1 == '\x04') {
      if (*(int *)(unaff_ESI + 0x144) == 0) {
        iVar12 = 4;
        for (; local_1c != 0; local_1c = local_1c + -1) {
          bVar13 = (byte)iVar12;
          if ((ushort)(*in_EAX >> (bVar13 & 0x1f) & 0xf) == *(ushort *)(unaff_ESI + 0x174)) {
            *in_EAX = (byte)(0xf0f >> (4 - bVar13 & 0x1f)) & *in_EAX |
                      *(char *)(unaff_ESI + 0x124) << (bVar13 & 0x1f);
          }
          if (iVar12 == 0) {
            iVar12 = 4;
            in_EAX = in_EAX + 1;
          }
          else {
            iVar12 = iVar12 + -4;
          }
        }
      }
      else {
        iVar12 = 4;
        for (; local_1c != 0; local_1c = local_1c + -1) {
          bVar13 = *in_EAX;
          bVar4 = (byte)iVar12;
          if ((ushort)(bVar13 >> (bVar4 & 0x1f) & 0xf) == *(ushort *)(unaff_ESI + 0x174)) {
            *in_EAX = (byte)(0xf0f >> (4 - bVar4 & 0x1f)) & bVar13 |
                      *(char *)(unaff_ESI + 0x124) << (bVar4 & 0x1f);
          }
          else {
            uVar11 = bVar13 >> (bVar4 & 0x1f) & 0xf;
            *in_EAX = (byte)(0xf0f >> (4 - bVar4 & 0x1f)) & *in_EAX |
                      (*(byte *)((uVar11 << 4 | uVar11) + *(int *)(unaff_ESI + 0x144)) >> 4) <<
                      (bVar4 & 0x1f);
          }
          if (iVar12 == 0) {
            iVar12 = 4;
            in_EAX = in_EAX + 1;
          }
          else {
            iVar12 = iVar12 + -4;
          }
        }
      }
    }
    else if (cVar1 == '\b') {
      if (*(int *)(unaff_ESI + 0x144) == 0) {
        if (local_1c != 0) {
          uVar10 = *(ushort *)(unaff_ESI + 0x174);
          do {
            if (*in_EAX == uVar10) {
              *in_EAX = *(byte *)(unaff_ESI + 0x124);
            }
            in_EAX = in_EAX + 1;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
      }
      else if (local_1c != 0) {
        uVar10 = *(ushort *)(unaff_ESI + 0x174);
        do {
          if (*in_EAX == uVar10) {
            bVar13 = *(byte *)(unaff_ESI + 0x124);
          }
          else {
            bVar13 = *(byte *)((uint)*in_EAX + *(int *)(unaff_ESI + 0x144));
          }
          *in_EAX = bVar13;
          in_EAX = in_EAX + 1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
    }
    else if (cVar1 == '\x10') {
      if (*(int *)(unaff_ESI + 0x148) == 0) {
        if (local_1c != 0) {
          sVar14 = *(short *)(unaff_ESI + 0x174);
          do {
            if ((ushort)((ushort)*in_EAX * 0x100 + (ushort)in_EAX[1]) == sVar14) {
              bVar13 = *(byte *)(unaff_ESI + 0x124);
              *in_EAX = *(byte *)(unaff_ESI + 0x125);
              in_EAX[1] = bVar13;
            }
            in_EAX = in_EAX + 2;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
      }
      else {
        for (; local_1c != 0; local_1c = local_1c + -1) {
          if ((ushort)((ushort)*in_EAX * 0x100 + (ushort)in_EAX[1]) == *(short *)(unaff_ESI + 0x174)
             ) {
            bVar13 = *(byte *)(unaff_ESI + 0x125);
            uVar10 = (ushort)*(byte *)(unaff_ESI + 0x124);
          }
          else {
            uVar10 = *(ushort *)
                      (*(int *)(*(int *)(unaff_ESI + 0x148) +
                               (uint)(in_EAX[1] >> (*(byte *)(unaff_ESI + 0x13c) & 0x1f)) * 4) +
                      (uint)*in_EAX * 2);
            bVar13 = (byte)(uVar10 >> 8);
          }
          in_EAX[1] = (byte)uVar10;
          *in_EAX = bVar13;
          in_EAX = in_EAX + 2;
        }
      }
    }
  }
  else if (cVar1 == '\x02') {
    if (*(char *)((int)in_ECX + 9) == '\b') {
      if (*(int *)(unaff_ESI + 0x144) == 0) {
        if (local_1c != 0) {
          uVar10 = *(ushort *)(unaff_ESI + 0x16e);
          pbVar3 = in_EAX + 2;
          do {
            if (((pbVar3[-2] == uVar10) && ((ushort)pbVar3[-1] == *(ushort *)(unaff_ESI + 0x170)))
               && ((ushort)*pbVar3 == *(ushort *)(unaff_ESI + 0x172))) {
              pbVar3[-2] = *(byte *)(unaff_ESI + 0x11e);
              pbVar3[-1] = *(byte *)(unaff_ESI + 0x120);
              *pbVar3 = *(byte *)(unaff_ESI + 0x122);
            }
            pbVar3 = pbVar3 + 3;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
      }
      else if (local_1c != 0) {
        uVar10 = *(ushort *)(unaff_ESI + 0x16e);
        pbVar3 = in_EAX + 2;
        do {
          if (((pbVar3[-2] == uVar10) && ((ushort)pbVar3[-1] == *(ushort *)(unaff_ESI + 0x170))) &&
             ((ushort)*pbVar3 == *(ushort *)(unaff_ESI + 0x172))) {
            pbVar3[-2] = *(byte *)(unaff_ESI + 0x11e);
            pbVar3[-1] = *(byte *)(unaff_ESI + 0x120);
            bVar13 = *(byte *)(unaff_ESI + 0x122);
          }
          else {
            iVar12 = *(int *)(unaff_ESI + 0x144);
            pbVar3[-2] = *(byte *)((uint)pbVar3[-2] + iVar12);
            pbVar3[-1] = *(byte *)((uint)pbVar3[-1] + iVar12);
            bVar13 = *(byte *)((uint)*pbVar3 + iVar12);
          }
          *pbVar3 = bVar13;
          pbVar3 = pbVar3 + 3;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
    }
    else if (*(int *)(unaff_ESI + 0x148) == 0) {
      if (local_1c != 0) {
        sVar14 = *(short *)(unaff_ESI + 0x16e);
        pbVar3 = in_EAX + 2;
        do {
          if ((((ushort)((ushort)pbVar3[-2] * 0x100 + (ushort)pbVar3[-1]) == sVar14) &&
              ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) ==
               *(short *)(unaff_ESI + 0x170))) &&
             ((ushort)((ushort)pbVar3[2] * 0x100 + (ushort)pbVar3[3]) ==
              *(short *)(unaff_ESI + 0x172))) {
            pbVar3[-2] = *(byte *)(unaff_ESI + 0x11f);
            pbVar3[-1] = *(byte *)(unaff_ESI + 0x11e);
            *pbVar3 = *(byte *)(unaff_ESI + 0x121);
            pbVar3[1] = *(byte *)(unaff_ESI + 0x120);
            pbVar3[2] = *(byte *)(unaff_ESI + 0x123);
            pbVar3[3] = *(byte *)(unaff_ESI + 0x122);
          }
          pbVar3 = pbVar3 + 6;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
    }
    else if (local_1c != 0) {
      pbVar3 = in_EAX + 2;
      do {
        if ((((ushort)((ushort)pbVar3[-2] * 0x100 + (ushort)pbVar3[-1]) ==
              *(short *)(unaff_ESI + 0x16e)) &&
            ((ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) == *(short *)(unaff_ESI + 0x170))
            ) && ((ushort)((ushort)pbVar3[2] * 0x100 + (ushort)pbVar3[3]) ==
                  *(short *)(unaff_ESI + 0x172))) {
          bVar13 = *(byte *)(unaff_ESI + 0x11f);
          pbVar3[-1] = *(byte *)(unaff_ESI + 0x11e);
          pbVar3[-2] = bVar13;
          bVar13 = *(byte *)(unaff_ESI + 0x121);
          pbVar3[1] = *(byte *)(unaff_ESI + 0x120);
          *pbVar3 = bVar13;
          bVar13 = *(byte *)(unaff_ESI + 0x123);
          uVar10 = (ushort)*(byte *)(unaff_ESI + 0x122);
        }
        else {
          iVar12 = *(int *)(unaff_ESI + 0x148);
          uVar5 = *(undefined2 *)
                   (*(int *)(iVar12 + (uint)(pbVar3[-1] >> (*(byte *)(unaff_ESI + 0x13c) & 0x1f)) *
                                      4) + (uint)pbVar3[-2] * 2);
          pbVar3[-1] = (byte)uVar5;
          bVar13 = *(byte *)(unaff_ESI + 0x13c);
          pbVar3[-2] = (byte)((ushort)uVar5 >> 8);
          uVar5 = *(undefined2 *)
                   (*(int *)(iVar12 + (uint)(pbVar3[1] >> (bVar13 & 0x1f)) * 4) + (uint)*pbVar3 * 2)
          ;
          pbVar3[1] = (byte)uVar5;
          bVar13 = *(byte *)(unaff_ESI + 0x13c);
          *pbVar3 = (byte)((ushort)uVar5 >> 8);
          uVar10 = *(ushort *)
                    (*(int *)(iVar12 + (uint)(pbVar3[3] >> (bVar13 & 0x1f)) * 4) +
                    (uint)pbVar3[2] * 2);
          bVar13 = (byte)(uVar10 >> 8);
        }
        pbVar3[3] = (byte)uVar10;
        pbVar3[2] = bVar13;
        pbVar3 = pbVar3 + 6;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
  }
  else if (cVar1 == '\x04') {
    if (*(char *)((int)in_ECX + 9) == '\b') {
      if (((*(int *)(unaff_ESI + 0x150) == 0) || (*(int *)(unaff_ESI + 0x14c) == 0)) ||
         (*(int *)(unaff_ESI + 0x144) == 0)) {
        for (; local_1c != 0; local_1c = local_1c + -1) {
          bVar13 = in_EAX[1];
          if (bVar13 == 0) {
            bVar13 = *(byte *)(unaff_ESI + 0x124);
LAB_004944db:
            *in_EAX = bVar13;
          }
          else if (bVar13 != 0xff) {
            uVar10 = (0xff - (ushort)bVar13) * *(short *)(unaff_ESI + 0x124) +
                     (ushort)*in_EAX * (ushort)bVar13 + 0x80;
            bVar13 = (byte)((uint)(uVar10 >> 8) + (uint)uVar10 >> 8);
            goto LAB_004944db;
          }
          in_EAX = in_EAX + 2;
        }
      }
      else {
        for (; local_1c != 0; local_1c = local_1c + -1) {
          bVar13 = in_EAX[1];
          if (bVar13 == 0xff) {
            bVar13 = *(byte *)((uint)*in_EAX + *(int *)(unaff_ESI + 0x144));
LAB_00494426:
            *in_EAX = bVar13;
          }
          else {
            if (bVar13 == 0) {
              bVar13 = *(byte *)(unaff_ESI + 0x124);
              goto LAB_00494426;
            }
            local_14._0_2_ = (ushort)bVar13;
            uVar10 = (0xff - (ushort)bVar13) * *(short *)(unaff_ESI + 0x12e) +
                     *(byte *)((uint)*in_EAX + *(int *)(unaff_ESI + 0x150)) * (ushort)local_14 +
                     0x80;
            iVar12 = (uint)(uVar10 >> 8) + (uint)uVar10;
            bVar13 = (byte)((uint)iVar12 >> 8);
            if (uVar11 == 0) {
              bVar13 = *(byte *)((iVar12 >> 8 & 0xffU) + *(int *)(unaff_ESI + 0x14c));
            }
            *in_EAX = bVar13;
          }
          in_EAX = in_EAX + 2;
        }
      }
    }
    else if (((*(int *)(unaff_ESI + 0x148) == 0) || (*(int *)(unaff_ESI + 0x154) == 0)) ||
            (*(int *)(unaff_ESI + 0x158) == 0)) {
      if (local_1c != 0) {
        pbVar3 = in_EAX + 1;
        do {
          uVar10 = (ushort)pbVar3[1] * 0x100 + (ushort)pbVar3[2];
          if (uVar10 == 0) {
            bVar13 = *(byte *)(unaff_ESI + 0x124);
            pbVar3[-1] = *(byte *)(unaff_ESI + 0x125);
            *pbVar3 = bVar13;
          }
          else if (uVar10 != 0xffff) {
            uVar11 = (uint)*(ushort *)(unaff_ESI + 0x124) * (0xffff - (uint)uVar10) + 0x8000 +
                     (uint)(ushort)((ushort)pbVar3[-1] * 0x100 + (ushort)*pbVar3) * (uint)uVar10;
            iVar12 = (uVar11 >> 0x10) + uVar11;
            pbVar3[-1] = (byte)((uint)iVar12 >> 0x18);
            *pbVar3 = (byte)((uint)iVar12 >> 0x10);
          }
          pbVar3 = pbVar3 + 4;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
    }
    else if (local_1c != 0) {
      pbVar3 = in_EAX + 1;
      do {
        uVar10 = (ushort)pbVar3[1] * 0x100 + (ushort)pbVar3[2];
        if (uVar10 == 0xffff) {
          uVar6 = (uint)*(ushort *)
                         (*(int *)(*(int *)(unaff_ESI + 0x148) +
                                  (uint)(*pbVar3 >> (*(byte *)(unaff_ESI + 0x13c) & 0x1f)) * 4) +
                         (uint)pbVar3[-1] * 2);
LAB_004945dd:
          bVar13 = (byte)(uVar6 >> 8);
        }
        else {
          if (uVar10 != 0) {
            uVar7 = (uint)*(ushort *)
                           (*(int *)(*(int *)(unaff_ESI + 0x158) +
                                    (uint)(*pbVar3 >> (*(byte *)(unaff_ESI + 0x13c) & 0x1f)) * 4) +
                           (uint)pbVar3[-1] * 2) * (uint)uVar10 + 0x8000 +
                    (uint)*(ushort *)(unaff_ESI + 0x12e) * (0xffff - (uint)uVar10);
            uVar7 = (uVar7 >> 0x10) + uVar7;
            uVar6 = uVar7 >> 0x10;
            if (uVar11 == 0) {
              uVar6 = (uint)*(ushort *)
                             (*(int *)(*(int *)(unaff_ESI + 0x154) +
                                      ((uVar6 & 0xff) >> (*(byte *)(unaff_ESI + 0x13c) & 0x1f)) * 4)
                             + (uVar7 >> 0x18) * 2);
            }
            goto LAB_004945dd;
          }
          bVar13 = *(byte *)(unaff_ESI + 0x125);
          uVar6 = (uint)*(byte *)(unaff_ESI + 0x124);
        }
        pbVar3[-1] = bVar13;
        *pbVar3 = (byte)uVar6;
        pbVar3 = pbVar3 + 4;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
  }
  else if (cVar1 == '\x06') {
    if (*(char *)((int)in_ECX + 9) == '\b') {
      if (((*(int *)(unaff_ESI + 0x150) == 0) || (*(int *)(unaff_ESI + 0x14c) == 0)) ||
         (*(int *)(unaff_ESI + 0x144) == 0)) {
        if (local_1c != 0) {
          pbVar3 = in_EAX + 1;
          local_10 = local_1c;
          do {
            bVar13 = pbVar3[2];
            if (bVar13 == 0) {
              pbVar3[-1] = *(byte *)(unaff_ESI + 0x11e);
              *pbVar3 = *(byte *)(unaff_ESI + 0x120);
              bVar13 = *(byte *)(unaff_ESI + 0x122);
LAB_0049400a:
              pbVar3[1] = bVar13;
            }
            else if (bVar13 != 0xff) {
              uVar10 = (ushort)bVar13;
              sVar14 = 0xff - (ushort)bVar13;
              uVar9 = pbVar3[-1] * uVar10 + *(short *)(unaff_ESI + 0x11e) * sVar14 + 0x80;
              pbVar3[-1] = (byte)((uint)(uVar9 >> 8) + (uint)uVar9 >> 8);
              uVar9 = *pbVar3 * uVar10 + *(short *)(unaff_ESI + 0x120) * sVar14 + 0x80;
              *pbVar3 = (byte)((uint)(uVar9 >> 8) + (uint)uVar9 >> 8);
              uVar10 = pbVar3[1] * uVar10 + *(short *)(unaff_ESI + 0x122) * sVar14 + 0x80;
              bVar13 = (byte)((uint)(uVar10 >> 8) + (uint)uVar10 >> 8);
              goto LAB_0049400a;
            }
            pbVar3 = pbVar3 + 4;
            local_10 = local_10 + -1;
          } while (local_10 != 0);
        }
      }
      else if (local_1c != 0) {
        pbVar3 = in_EAX + 1;
        local_14 = local_1c;
        do {
          bVar13 = pbVar3[2];
          if (bVar13 == 0xff) {
            iVar12 = *(int *)(unaff_ESI + 0x144);
            pbVar3[-1] = *(byte *)((uint)pbVar3[-1] + iVar12);
            *pbVar3 = *(byte *)((uint)*pbVar3 + iVar12);
            bVar13 = *(byte *)((uint)pbVar3[1] + iVar12);
          }
          else if (bVar13 == 0) {
            pbVar3[-1] = *(byte *)(unaff_ESI + 0x11e);
            *pbVar3 = *(byte *)(unaff_ESI + 0x120);
            bVar13 = *(byte *)(unaff_ESI + 0x122);
          }
          else {
            uVar10 = (ushort)bVar13;
            sVar14 = 0xff - (ushort)bVar13;
            uVar9 = *(byte *)((uint)pbVar3[-1] + *(int *)(unaff_ESI + 0x150)) * uVar10 +
                    *(short *)(unaff_ESI + 0x128) * sVar14 + 0x80;
            iVar12 = (uint)(uVar9 >> 8) + (uint)uVar9;
            bVar13 = (byte)((uint)iVar12 >> 8);
            if (uVar11 == 0) {
              bVar13 = *(byte *)((iVar12 >> 8 & 0xffU) + *(int *)(unaff_ESI + 0x14c));
            }
            pbVar3[-1] = bVar13;
            uVar9 = *(byte *)((uint)*pbVar3 + *(int *)(unaff_ESI + 0x150)) * uVar10 +
                    *(short *)(unaff_ESI + 0x12a) * sVar14 + 0x80;
            iVar12 = (uint)(uVar9 >> 8) + (uint)uVar9;
            bVar13 = (byte)((uint)iVar12 >> 8);
            if (uVar11 == 0) {
              bVar13 = *(byte *)((iVar12 >> 8 & 0xffU) + *(int *)(unaff_ESI + 0x14c));
            }
            *pbVar3 = bVar13;
            uVar10 = *(byte *)((uint)pbVar3[1] + *(int *)(unaff_ESI + 0x150)) * uVar10 +
                     *(short *)(unaff_ESI + 300) * sVar14 + 0x80;
            iVar12 = (uint)(uVar10 >> 8) + (uint)uVar10;
            bVar13 = (byte)((uint)iVar12 >> 8);
            if (uVar11 == 0) {
              bVar13 = *(byte *)((iVar12 >> 8 & 0xffU) + *(int *)(unaff_ESI + 0x14c));
            }
          }
          pbVar3[1] = bVar13;
          pbVar3 = pbVar3 + 4;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
    }
    else if (((*(int *)(unaff_ESI + 0x148) == 0) || (*(int *)(unaff_ESI + 0x154) == 0)) ||
            (*(int *)(unaff_ESI + 0x158) == 0)) {
      if (local_1c != 0) {
        pbVar3 = in_EAX + 1;
        local_18 = local_1c;
        do {
          uVar10 = (ushort)pbVar3[5] * 0x100 + (ushort)pbVar3[6];
          if (uVar10 == 0) {
            bVar13 = *(byte *)(unaff_ESI + 0x11f);
            *pbVar3 = *(byte *)(unaff_ESI + 0x11e);
            pbVar3[-1] = bVar13;
            bVar13 = *(byte *)(unaff_ESI + 0x121);
            pbVar3[2] = *(byte *)(unaff_ESI + 0x120);
            pbVar3[1] = bVar13;
            bVar13 = *(byte *)(unaff_ESI + 0x123);
            bVar4 = *(byte *)(unaff_ESI + 0x122);
LAB_0049439a:
            pbVar3[4] = bVar4;
            pbVar3[3] = bVar13;
          }
          else if (uVar10 != 0xffff) {
            uVar7 = (uint)uVar10;
            iVar12 = 0xffff - uVar7;
            uVar11 = (ushort)((ushort)pbVar3[-1] * 0x100 + (ushort)*pbVar3) * uVar7 + 0x8000 +
                     (uint)*(ushort *)(unaff_ESI + 0x11e) * iVar12;
            iVar8 = (uVar11 >> 0x10) + uVar11;
            *pbVar3 = (byte)((uint)iVar8 >> 0x10);
            pbVar3[-1] = (byte)((uint)iVar8 >> 0x18);
            uVar11 = (ushort)((ushort)pbVar3[1] * 0x100 + (ushort)pbVar3[2]) * uVar7 + 0x8000 +
                     (uint)*(ushort *)(unaff_ESI + 0x120) * iVar12;
            iVar8 = (uVar11 >> 0x10) + uVar11;
            pbVar3[2] = (byte)((uint)iVar8 >> 0x10);
            pbVar3[1] = (byte)((uint)iVar8 >> 0x18);
            uVar11 = (ushort)((ushort)pbVar3[3] * 0x100 + (ushort)pbVar3[4]) * uVar7 + 0x8000 +
                     (uint)*(ushort *)(unaff_ESI + 0x122) * iVar12;
            iVar12 = (uVar11 >> 0x10) + uVar11;
            bVar4 = (byte)((uint)iVar12 >> 0x10);
            bVar13 = (byte)((uint)iVar12 >> 0x18);
            goto LAB_0049439a;
          }
          pbVar3 = pbVar3 + 8;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
    }
    else if (local_1c != 0) {
      pbVar3 = in_EAX + 1;
      do {
        uVar10 = (ushort)pbVar3[5] * 0x100 + (ushort)pbVar3[6];
        if (uVar10 == 0xffff) {
          iVar12 = *(int *)(unaff_ESI + 0x148);
          uVar5 = *(undefined2 *)
                   (*(int *)(iVar12 + (uint)(*pbVar3 >> (*(byte *)(unaff_ESI + 0x13c) & 0x1f)) * 4)
                   + (uint)pbVar3[-1] * 2);
          *pbVar3 = (byte)uVar5;
          pbVar3[-1] = (byte)((ushort)uVar5 >> 8);
          bVar13 = *(byte *)(unaff_ESI + 0x13c);
          uVar5 = *(undefined2 *)
                   (*(int *)(iVar12 + (uint)(pbVar3[2] >> (bVar13 & 0x1f)) * 4) +
                   (uint)pbVar3[1] * 2);
          pbVar3[1] = (byte)((ushort)uVar5 >> 8);
          local_18._0_1_ = (byte)uVar5;
          pbVar3[2] = (byte)local_18;
          uVar6 = (uint)*(ushort *)
                         (*(int *)(iVar12 + (uint)(pbVar3[4] >> (bVar13 & 0x1f)) * 4) +
                         (uint)pbVar3[3] * 2);
LAB_0049424b:
          bVar13 = (byte)(uVar6 >> 8);
        }
        else {
          if (uVar10 != 0) {
            bVar13 = *(byte *)(unaff_ESI + 0x13c);
            iVar8 = *(int *)(unaff_ESI + 0x158);
            uVar6 = (uint)uVar10;
            iVar12 = 0xffff - uVar6;
            uVar7 = *(ushort *)
                     (*(int *)(iVar8 + (uint)(*pbVar3 >> (bVar13 & 0x1f)) * 4) +
                     (uint)pbVar3[-1] * 2) * uVar6 + 0x8000 +
                    (uint)*(ushort *)(unaff_ESI + 0x128) * iVar12;
            uVar7 = (uVar7 >> 0x10) + uVar7;
            uVar5 = (undefined2)(uVar7 >> 0x10);
            if (uVar11 == 0) {
              uVar5 = *(undefined2 *)
                       (*(int *)(*(int *)(unaff_ESI + 0x154) +
                                ((uVar7 >> 0x10 & 0xff) >> (*(byte *)(unaff_ESI + 0x13c) & 0x1f)) *
                                4) + (uVar7 >> 0x18) * 2);
            }
            pbVar3[-1] = (byte)((ushort)uVar5 >> 8);
            *pbVar3 = (byte)uVar5;
            uVar7 = *(ushort *)
                     (*(int *)(iVar8 + (uint)(pbVar3[2] >> (bVar13 & 0x1f)) * 4) +
                     (uint)pbVar3[1] * 2) * uVar6 + 0x8000 +
                    (uint)*(ushort *)(unaff_ESI + 0x12a) * iVar12;
            uVar7 = (uVar7 >> 0x10) + uVar7;
            uVar5 = (undefined2)(uVar7 >> 0x10);
            if (uVar11 == 0) {
              uVar5 = *(undefined2 *)
                       (*(int *)(*(int *)(unaff_ESI + 0x154) +
                                ((uVar7 >> 0x10 & 0xff) >> (*(byte *)(unaff_ESI + 0x13c) & 0x1f)) *
                                4) + (uVar7 >> 0x18) * 2);
            }
            pbVar3[1] = (byte)((ushort)uVar5 >> 8);
            pbVar3[2] = (byte)uVar5;
            uVar7 = *(ushort *)
                     (*(int *)(iVar8 + (uint)(pbVar3[4] >> (bVar13 & 0x1f)) * 4) +
                     (uint)pbVar3[3] * 2) * uVar6 + 0x8000 +
                    (uint)*(ushort *)(unaff_ESI + 300) * iVar12;
            uVar7 = (uVar7 >> 0x10) + uVar7;
            uVar6 = uVar7 >> 0x10;
            if (uVar11 == 0) {
              uVar6 = (uint)*(ushort *)
                             (*(int *)(*(int *)(unaff_ESI + 0x154) +
                                      ((uVar6 & 0xff) >> (*(byte *)(unaff_ESI + 0x13c) & 0x1f)) * 4)
                             + (uVar7 >> 0x18) * 2);
            }
            goto LAB_0049424b;
          }
          bVar13 = *(byte *)(unaff_ESI + 0x11f);
          *pbVar3 = *(byte *)(unaff_ESI + 0x11e);
          pbVar3[-1] = bVar13;
          bVar13 = *(byte *)(unaff_ESI + 0x121);
          pbVar3[2] = *(byte *)(unaff_ESI + 0x120);
          pbVar3[1] = bVar13;
          bVar13 = *(byte *)(unaff_ESI + 0x123);
          uVar6 = (uint)*(byte *)(unaff_ESI + 0x122);
        }
        pbVar3[3] = bVar13;
        pbVar3[4] = (byte)uVar6;
        pbVar3 = pbVar3 + 8;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
  }
  return;
}

