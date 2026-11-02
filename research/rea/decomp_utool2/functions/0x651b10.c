// rea decompile_all
// name: FUN_00651b10
// address: 0x651b10
// body: available
// range: 0x651b10-0x652c1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00651b10(int param_1)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined2 uVar7;
  ushort uVar8;
  int *in_ECX;
  uint uVar9;
  ushort uVar10;
  byte *in_EDX;
  int iVar11;
  byte bVar12;
  byte *pbVar13;
  int iVar14;
  int local_10;
  int local_c;
  
  iVar14 = param_1;
  iVar11 = *(int *)(param_1 + 0x148);
  uVar4 = *(uint *)(param_1 + 0x2c) >> 0xd & 1;
  local_c = *in_ECX;
  switch((char)in_ECX[2]) {
  case '\0':
    iVar14 = *(int *)(param_1 + 0x144);
    switch(*(undefined1 *)((int)in_ECX + 9)) {
    case 1:
      local_10 = 7;
      if (local_c != 0) {
        uVar8 = *(ushort *)(param_1 + 0x174);
        do {
          bVar6 = (byte)local_10;
          if ((*in_EDX >> (bVar6 & 0x1f) & 1) == uVar8) {
            *in_EDX = (byte)(0x7f7f >> (7 - bVar6 & 0x1f)) & *in_EDX |
                      *(char *)(param_1 + 0x124) << (bVar6 & 0x1f);
          }
          if (local_10 == 0) {
            local_10 = 7;
            in_EDX = in_EDX + 1;
          }
          else {
            local_10 = local_10 + -1;
          }
          local_c = local_c + -1;
        } while (local_c != 0);
        return;
      }
      break;
    case 2:
      local_10 = 6;
      if (iVar14 == 0) {
        if (local_c != 0) {
          uVar8 = *(ushort *)(param_1 + 0x174);
          do {
            bVar6 = (byte)local_10;
            if ((*in_EDX >> (bVar6 & 0x1f) & 3) == uVar8) {
              *in_EDX = (byte)(0x3f3f >> (6 - bVar6 & 0x1f)) & *in_EDX |
                        *(char *)(param_1 + 0x124) << (bVar6 & 0x1f);
            }
            if (local_10 == 0) {
              local_10 = 6;
              in_EDX = in_EDX + 1;
            }
            else {
              local_10 = local_10 + -2;
            }
            local_c = local_c + -1;
          } while (local_c != 0);
          return;
        }
      }
      else if (local_c != 0) {
        uVar8 = *(ushort *)(param_1 + 0x174);
        do {
          bVar6 = *in_EDX;
          bVar12 = (byte)local_10;
          if ((bVar6 >> (bVar12 & 0x1f) & 3) == uVar8) {
            bVar2 = *(byte *)(param_1 + 0x124);
          }
          else {
            uVar4 = bVar6 >> (bVar12 & 0x1f) & 3;
            uVar8 = *(ushort *)(param_1 + 0x174);
            bVar2 = *(byte *)((((uVar4 * 4 | uVar4) << 2 | uVar4) << 2 | uVar4) +
                             *(int *)(param_1 + 0x144)) >> 6;
          }
          *in_EDX = (byte)(0x3f3f >> (6 - bVar12 & 0x1f)) & bVar6 | bVar2 << (bVar12 & 0x1f);
          if (local_10 == 0) {
            local_10 = 6;
            in_EDX = in_EDX + 1;
          }
          else {
            local_10 = local_10 + -2;
          }
          local_c = local_c + -1;
        } while (local_c != 0);
        return;
      }
      break;
    case 4:
      local_10 = 4;
      if (iVar14 == 0) {
        if (local_c != 0) {
          uVar8 = *(ushort *)(param_1 + 0x174);
          do {
            bVar6 = (byte)local_10;
            if ((*in_EDX >> (bVar6 & 0x1f) & 0xf) == uVar8) {
              *in_EDX = (byte)(0xf0f >> (4 - bVar6 & 0x1f)) & *in_EDX |
                        *(char *)(param_1 + 0x124) << (bVar6 & 0x1f);
            }
            if (local_10 == 0) {
              local_10 = 4;
              in_EDX = in_EDX + 1;
            }
            else {
              local_10 = local_10 + -4;
            }
            local_c = local_c + -1;
          } while (local_c != 0);
          return;
        }
      }
      else if (local_c != 0) {
        uVar8 = *(ushort *)(param_1 + 0x174);
        do {
          bVar6 = *in_EDX;
          bVar12 = (byte)local_10;
          if ((bVar6 >> (bVar12 & 0x1f) & 0xf) == uVar8) {
            bVar2 = *(byte *)(param_1 + 0x124);
          }
          else {
            uVar4 = bVar6 >> (bVar12 & 0x1f) & 0xf;
            uVar8 = *(ushort *)(param_1 + 0x174);
            bVar2 = *(byte *)((uVar4 << 4 | uVar4) + *(int *)(param_1 + 0x144)) >> 4;
          }
          *in_EDX = (byte)(0xf0f >> (4 - bVar12 & 0x1f)) & bVar6 | bVar2 << (bVar12 & 0x1f);
          if (local_10 == 0) {
            local_10 = 4;
            in_EDX = in_EDX + 1;
          }
          else {
            local_10 = local_10 + -4;
          }
          local_c = local_c + -1;
        } while (local_c != 0);
        return;
      }
      break;
    case 8:
      if (iVar14 == 0) {
        if (local_c != 0) {
          uVar8 = *(ushort *)(param_1 + 0x174);
          do {
            if (*in_EDX == uVar8) {
              *in_EDX = *(byte *)(param_1 + 0x124);
            }
            in_EDX = in_EDX + 1;
            local_c = local_c + -1;
          } while (local_c != 0);
          return;
        }
      }
      else if (local_c != 0) {
        uVar8 = *(ushort *)(param_1 + 0x174);
        do {
          if (*in_EDX == uVar8) {
            bVar6 = *(byte *)(param_1 + 0x124);
          }
          else {
            bVar6 = *(byte *)((uint)*in_EDX + iVar14);
          }
          *in_EDX = bVar6;
          in_EDX = in_EDX + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
        return;
      }
      break;
    case 0x10:
      if (*(int *)(param_1 + 0x148) == 0) {
        if (local_c != 0) {
          do {
            if ((ushort)((ushort)*in_EDX * 0x100 + (ushort)in_EDX[1]) == *(short *)(param_1 + 0x174)
               ) {
              *in_EDX = *(byte *)(param_1 + 0x125);
              in_EDX[1] = *(byte *)(param_1 + 0x124);
            }
            in_EDX = in_EDX + 2;
            local_c = local_c + -1;
          } while (local_c != 0);
          return;
        }
      }
      else if (local_c != 0) {
        do {
          if ((ushort)((ushort)*in_EDX * 0x100 + (ushort)in_EDX[1]) == *(short *)(param_1 + 0x174))
          {
            *in_EDX = *(byte *)(param_1 + 0x125);
            in_EDX[1] = *(byte *)(param_1 + 0x124);
          }
          else {
            uVar7 = *(undefined2 *)
                     (*(int *)(iVar11 + (uint)(in_EDX[1] >> (*(byte *)(param_1 + 0x13c) & 0x1f)) * 4
                              ) + (uint)*in_EDX * 2);
            in_EDX[1] = (byte)uVar7;
            *in_EDX = (byte)((ushort)uVar7 >> 8);
          }
          in_EDX = in_EDX + 2;
          local_c = local_c + -1;
        } while (local_c != 0);
        return;
      }
    }
    break;
  case '\x02':
    iVar11 = *(int *)(param_1 + 0x144);
    if (*(char *)((int)in_ECX + 9) == '\b') {
      if (iVar11 == 0) {
        if (local_c != 0) {
          uVar8 = *(ushort *)(param_1 + 0x16e);
          pbVar13 = in_EDX + 2;
          do {
            if (((pbVar13[-2] == uVar8) && ((ushort)pbVar13[-1] == *(ushort *)(param_1 + 0x170))) &&
               ((ushort)*pbVar13 == *(ushort *)(param_1 + 0x172))) {
              pbVar13[-2] = *(byte *)(param_1 + 0x11e);
              pbVar13[-1] = *(byte *)(param_1 + 0x120);
              *pbVar13 = *(byte *)(param_1 + 0x122);
            }
            pbVar13 = pbVar13 + 3;
            local_c = local_c + -1;
          } while (local_c != 0);
          return;
        }
      }
      else if (local_c != 0) {
        uVar8 = *(ushort *)(param_1 + 0x16e);
        pbVar13 = in_EDX + 2;
        do {
          if (((pbVar13[-2] == uVar8) && ((ushort)pbVar13[-1] == *(ushort *)(param_1 + 0x170))) &&
             ((ushort)*pbVar13 == *(ushort *)(param_1 + 0x172))) {
            pbVar13[-2] = *(byte *)(param_1 + 0x11e);
            pbVar13[-1] = *(byte *)(param_1 + 0x120);
            bVar6 = *(byte *)(param_1 + 0x122);
          }
          else {
            pbVar13[-2] = *(byte *)((uint)pbVar13[-2] + iVar11);
            pbVar13[-1] = *(byte *)((uint)pbVar13[-1] + iVar11);
            bVar6 = *(byte *)((uint)*pbVar13 + iVar11);
          }
          *pbVar13 = bVar6;
          pbVar13 = pbVar13 + 3;
          local_c = local_c + -1;
        } while (local_c != 0);
        return;
      }
    }
    else if (*(int *)(param_1 + 0x148) == 0) {
      if (local_c != 0) {
        pbVar13 = in_EDX + 2;
        do {
          if ((((ushort)((ushort)pbVar13[-2] * 0x100 + (ushort)pbVar13[-1]) ==
                *(short *)(param_1 + 0x16e)) &&
              ((ushort)((ushort)*pbVar13 * 0x100 + (ushort)pbVar13[1]) ==
               *(short *)(param_1 + 0x170))) &&
             ((ushort)((ushort)pbVar13[2] * 0x100 + (ushort)pbVar13[3]) ==
              *(short *)(param_1 + 0x172))) {
            pbVar13[-2] = *(byte *)(param_1 + 0x11f);
            pbVar13[-1] = *(byte *)(param_1 + 0x11e);
            *pbVar13 = *(byte *)(param_1 + 0x121);
            pbVar13[1] = *(byte *)(param_1 + 0x120);
            pbVar13[2] = *(byte *)(param_1 + 0x123);
            pbVar13[3] = *(byte *)(param_1 + 0x122);
          }
          pbVar13 = pbVar13 + 6;
          local_c = local_c + -1;
        } while (local_c != 0);
        return;
      }
    }
    else if (local_c != 0) {
      pbVar13 = in_EDX + 2;
      do {
        if ((((ushort)((ushort)pbVar13[-2] * 0x100 + (ushort)pbVar13[-1]) ==
              *(short *)(param_1 + 0x16e)) &&
            ((ushort)((ushort)*pbVar13 * 0x100 + (ushort)pbVar13[1]) == *(short *)(param_1 + 0x170))
            ) && ((ushort)((ushort)pbVar13[2] * 0x100 + (ushort)pbVar13[3]) ==
                  *(short *)(param_1 + 0x172))) {
          pbVar13[-2] = *(byte *)(param_1 + 0x11f);
          pbVar13[-1] = *(byte *)(param_1 + 0x11e);
          *pbVar13 = *(byte *)(param_1 + 0x121);
          pbVar13[1] = *(byte *)(param_1 + 0x120);
          pbVar13[2] = *(byte *)(param_1 + 0x123);
          pbVar13[3] = *(byte *)(param_1 + 0x122);
        }
        else {
          bVar6 = (byte)*(undefined4 *)(param_1 + 0x13c);
          uVar7 = *(undefined2 *)
                   (*(int *)(*(int *)(param_1 + 0x148) + (uint)(pbVar13[-1] >> (bVar6 & 0x1f)) * 4)
                   + (uint)pbVar13[-2] * 2);
          pbVar13[-1] = (byte)uVar7;
          pbVar13[-2] = (byte)((ushort)uVar7 >> 8);
          uVar7 = *(undefined2 *)
                   (*(int *)(*(int *)(param_1 + 0x148) + (uint)(pbVar13[1] >> (bVar6 & 0x1f)) * 4) +
                   (uint)*pbVar13 * 2);
          pbVar13[1] = (byte)uVar7;
          iVar11 = *(int *)(param_1 + 0x148);
          *pbVar13 = (byte)((ushort)uVar7 >> 8);
          uVar7 = *(undefined2 *)
                   (*(int *)(iVar11 + (uint)(pbVar13[3] >> (bVar6 & 0x1f)) * 4) +
                   (uint)pbVar13[2] * 2);
          pbVar13[3] = (byte)uVar7;
          pbVar13[2] = (byte)((ushort)uVar7 >> 8);
        }
        pbVar13 = pbVar13 + 6;
        local_c = local_c + -1;
      } while (local_c != 0);
      return;
    }
    break;
  case '\x04':
    iVar14 = *(int *)(param_1 + 0x144);
    if (*(char *)((int)in_ECX + 9) == '\b') {
      if (((*(int *)(param_1 + 0x150) == 0) || (*(int *)(param_1 + 0x14c) == 0)) || (iVar14 == 0)) {
        if (local_c != 0) {
          do {
            bVar6 = in_EDX[1];
            if (bVar6 == 0) {
              *in_EDX = *(byte *)(param_1 + 0x124);
            }
            else if (bVar6 != 0xff) {
              uVar8 = (ushort)*in_EDX * (ushort)bVar6 +
                      (0xff - (ushort)bVar6) * *(short *)(param_1 + 0x124) + 0x80;
              *in_EDX = (byte)((uint)(uVar8 >> 8) + (uint)uVar8 >> 8);
            }
            in_EDX = in_EDX + 2;
            local_c = local_c + -1;
          } while (local_c != 0);
          return;
        }
      }
      else if (local_c != 0) {
        do {
          bVar6 = in_EDX[1];
          if (bVar6 == 0xff) {
            *in_EDX = *(byte *)((uint)*in_EDX + iVar14);
          }
          else if (bVar6 == 0) {
            *in_EDX = *(byte *)(param_1 + 0x124);
          }
          else {
            uVar8 = (ushort)*(byte *)((uint)*in_EDX + *(int *)(param_1 + 0x150)) * (ushort)bVar6 +
                    (0xff - (ushort)bVar6) * *(short *)(param_1 + 0x12e) + 0x80;
            uVar9 = (uint)(uVar8 >> 8) + (uint)uVar8;
            bVar6 = (byte)(uVar9 >> 8);
            if (uVar4 == 0) {
              bVar6 = *(byte *)((uVar9 >> 8 & 0xff) + *(int *)(param_1 + 0x14c));
            }
            *in_EDX = bVar6;
            iVar14 = *(int *)(param_1 + 0x144);
          }
          in_EDX = in_EDX + 2;
          local_c = local_c + -1;
        } while (local_c != 0);
        return;
      }
    }
    else if (((*(int *)(param_1 + 0x148) == 0) || (*(int *)(param_1 + 0x154) == 0)) ||
            (*(int *)(param_1 + 0x158) == 0)) {
      if (local_c != 0) {
        pbVar13 = in_EDX + 1;
        do {
          uVar8 = (ushort)pbVar13[1] * 0x100 + (ushort)pbVar13[2];
          if (uVar8 == 0) {
            pbVar13[-1] = *(byte *)(param_1 + 0x125);
            *pbVar13 = *(byte *)(param_1 + 0x124);
          }
          else if (uVar8 != 0xffff) {
            uVar4 = (uint)*(ushort *)(param_1 + 0x124) * (0xffff - (uint)uVar8) +
                    (uint)CONCAT11(pbVar13[-1],*pbVar13) * (uint)uVar8 + 0x8000;
            iVar11 = (uVar4 >> 0x10) + uVar4;
            *pbVar13 = (byte)((uint)iVar11 >> 0x10);
            pbVar13[-1] = (byte)((uint)iVar11 >> 0x18);
          }
          pbVar13 = pbVar13 + 4;
          local_c = local_c + -1;
        } while (local_c != 0);
        return;
      }
    }
    else if (local_c != 0) {
      pbVar13 = in_EDX + 1;
      do {
        uVar8 = (ushort)pbVar13[1] * 0x100 + (ushort)pbVar13[2];
        if (uVar8 == 0xffff) {
          uVar7 = *(undefined2 *)
                   (*(int *)(iVar11 + (uint)(*pbVar13 >>
                                            ((byte)*(undefined4 *)(param_1 + 0x13c) & 0x1f)) * 4) +
                   (uint)pbVar13[-1] * 2);
LAB_006524c2:
          *pbVar13 = (byte)uVar7;
          pbVar13[-1] = (byte)((ushort)uVar7 >> 8);
        }
        else {
          if (uVar8 != 0) {
            uVar9 = (uint)*(ushort *)(param_1 + 0x12e) * (0xffff - (uint)uVar8) + 0x8000 +
                    (uint)*(ushort *)
                           (*(int *)(*(int *)(param_1 + 0x158) +
                                    (uint)(*pbVar13 >>
                                          ((byte)*(undefined4 *)(param_1 + 0x13c) & 0x1f)) * 4) +
                           (uint)pbVar13[-1] * 2) * (uint)uVar8;
            uVar9 = (uVar9 >> 0x10) + uVar9;
            uVar7 = (undefined2)(uVar9 >> 0x10);
            if (uVar4 == 0) {
              uVar7 = *(undefined2 *)
                       (*(int *)(*(int *)(param_1 + 0x154) +
                                ((uVar9 >> 0x10 & 0xff) >>
                                ((byte)*(undefined4 *)(param_1 + 0x13c) & 0x1f)) * 4) +
                       (uVar9 >> 0x18) * 2);
            }
            goto LAB_006524c2;
          }
          pbVar13[-1] = *(byte *)(param_1 + 0x125);
          *pbVar13 = *(byte *)(param_1 + 0x124);
        }
        pbVar13 = pbVar13 + 4;
        local_c = local_c + -1;
        if (local_c == 0) {
          return;
        }
      } while( true );
    }
    break;
  case '\x06':
    iVar11 = *(int *)(param_1 + 0x144);
    if (*(char *)((int)in_ECX + 9) == '\b') {
      if (((*(int *)(param_1 + 0x150) == 0) || (*(int *)(param_1 + 0x14c) == 0)) || (iVar11 == 0)) {
        if (local_c != 0) {
          pbVar13 = in_EDX + 1;
          do {
            bVar6 = pbVar13[2];
            if (bVar6 == 0) {
              pbVar13[-1] = *(byte *)(param_1 + 0x11e);
              *pbVar13 = *(byte *)(param_1 + 0x120);
              pbVar13[1] = *(byte *)(param_1 + 0x122);
            }
            else if (bVar6 != 0xff) {
              sVar3 = 0xff - (ushort)bVar6;
              uVar8 = (ushort)pbVar13[-1] * (ushort)bVar6 + *(short *)(param_1 + 0x11e) * sVar3 +
                      0x80;
              pbVar13[-1] = (byte)((uint)(uVar8 >> 8) + (uint)uVar8 >> 8);
              uVar8 = (ushort)*pbVar13 * (ushort)bVar6 + *(short *)(param_1 + 0x120) * sVar3 + 0x80;
              *pbVar13 = (byte)((uint)(uVar8 >> 8) + (uint)uVar8 >> 8);
              uVar8 = (ushort)pbVar13[1] * (ushort)bVar6 + *(short *)(param_1 + 0x122) * sVar3 +
                      0x80;
              pbVar13[1] = (byte)((uint)(uVar8 >> 8) + (uint)uVar8 >> 8);
            }
            pbVar13 = pbVar13 + 4;
            local_c = local_c + -1;
          } while (local_c != 0);
          return;
        }
      }
      else if (local_c != 0) {
        pbVar13 = in_EDX + 1;
        do {
          bVar6 = pbVar13[2];
          if (bVar6 == 0xff) {
            pbVar13[-1] = *(byte *)((uint)pbVar13[-1] + iVar11);
            *pbVar13 = *(byte *)((uint)*pbVar13 + iVar11);
            pbVar13[1] = *(byte *)((uint)pbVar13[1] + iVar11);
          }
          else if (bVar6 == 0) {
            pbVar13[-1] = *(byte *)(param_1 + 0x11e);
            *pbVar13 = *(byte *)(param_1 + 0x120);
            pbVar13[1] = *(byte *)(param_1 + 0x122);
          }
          else {
            uVar8 = (ushort)bVar6;
            sVar3 = 0xff - uVar8;
            uVar10 = (ushort)*(byte *)((uint)pbVar13[-1] + *(int *)(param_1 + 0x150)) *
                     (ushort)bVar6 + *(short *)(param_1 + 0x128) * sVar3 + 0x80;
            uVar9 = (uint)(uVar10 >> 8) + (uint)uVar10;
            bVar6 = (byte)(uVar9 >> 8);
            if (uVar4 == 0) {
              bVar6 = *(byte *)((uVar9 >> 8 & 0xff) + *(int *)(param_1 + 0x14c));
            }
            pbVar13[-1] = bVar6;
            uVar10 = *(byte *)((uint)*pbVar13 + *(int *)(param_1 + 0x150)) * uVar8 +
                     *(short *)(param_1 + 0x12a) * sVar3 + 0x80;
            uVar9 = (uint)(uVar10 >> 8) + (uint)uVar10;
            bVar6 = (byte)(uVar9 >> 8);
            if (uVar4 == 0) {
              bVar6 = *(byte *)((uVar9 >> 8 & 0xff) + *(int *)(param_1 + 0x14c));
            }
            *pbVar13 = bVar6;
            uVar8 = *(byte *)((uint)pbVar13[1] + *(int *)(param_1 + 0x150)) * uVar8 +
                    *(short *)(param_1 + 300) * sVar3 + 0x80;
            uVar9 = (uint)(uVar8 >> 8) + (uint)uVar8;
            bVar6 = (byte)(uVar9 >> 8);
            if (uVar4 == 0) {
              bVar6 = *(byte *)((uVar9 >> 8 & 0xff) + *(int *)(param_1 + 0x14c));
            }
            pbVar13[1] = bVar6;
            iVar11 = *(int *)(param_1 + 0x144);
          }
          pbVar13 = pbVar13 + 4;
          local_c = local_c + -1;
        } while (local_c != 0);
        return;
      }
    }
    else if (((*(int *)(param_1 + 0x148) == 0) || (*(int *)(param_1 + 0x154) == 0)) ||
            (*(int *)(param_1 + 0x158) == 0)) {
      if (local_c != 0) {
        pbVar13 = in_EDX + 1;
        do {
          uVar8 = (ushort)pbVar13[5] * 0x100 + (ushort)pbVar13[6];
          uVar4 = (uint)uVar8;
          if (uVar8 == 0) {
            pbVar13[-1] = *(byte *)(param_1 + 0x11f);
            *pbVar13 = *(byte *)(param_1 + 0x11e);
            pbVar13[1] = *(byte *)(param_1 + 0x121);
            pbVar13[2] = *(byte *)(param_1 + 0x120);
            pbVar13[3] = *(byte *)(param_1 + 0x123);
            pbVar13[4] = *(byte *)(param_1 + 0x122);
          }
          else if (uVar8 != 0xffff) {
            iVar14 = 0xffff - uVar4;
            uVar9 = (uint)*(ushort *)(param_1 + 0x11e) * iVar14 +
                    CONCAT11(pbVar13[-1],*pbVar13) * uVar4 + 0x8000;
            iVar11 = (uVar9 >> 0x10) + uVar9;
            pbVar13[-1] = (byte)((uint)iVar11 >> 0x18);
            *pbVar13 = (byte)((uint)iVar11 >> 0x10);
            uVar9 = (uint)*(ushort *)(param_1 + 0x120) * iVar14 +
                    CONCAT11(pbVar13[1],pbVar13[2]) * uVar4 + 0x8000;
            iVar11 = (uVar9 >> 0x10) + uVar9;
            pbVar13[1] = (byte)((uint)iVar11 >> 0x18);
            pbVar13[2] = (byte)((uint)iVar11 >> 0x10);
            uVar4 = (uint)*(ushort *)(param_1 + 0x122) * iVar14 +
                    CONCAT11(pbVar13[3],pbVar13[4]) * uVar4 + 0x8000;
            iVar11 = (uVar4 >> 0x10) + uVar4;
            pbVar13[4] = (byte)((uint)iVar11 >> 0x10);
            pbVar13[3] = (byte)((uint)iVar11 >> 0x18);
          }
          pbVar13 = pbVar13 + 8;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
    }
    else if (local_c != 0) {
      pbVar13 = in_EDX + 1;
      do {
        uVar8 = (ushort)pbVar13[5] * 0x100 + (ushort)pbVar13[6];
        uVar9 = (uint)uVar8;
        if (uVar8 == 0xffff) {
          bVar6 = (byte)*(undefined4 *)(iVar14 + 0x13c);
          uVar7 = *(undefined2 *)
                   (*(int *)(*(int *)(iVar14 + 0x148) + (uint)(*pbVar13 >> (bVar6 & 0x1f)) * 4) +
                   (uint)pbVar13[-1] * 2);
          *pbVar13 = (byte)uVar7;
          pbVar13[-1] = (byte)((ushort)uVar7 >> 8);
          uVar7 = *(undefined2 *)
                   (*(int *)(*(int *)(iVar14 + 0x148) + (uint)(pbVar13[2] >> (bVar6 & 0x1f)) * 4) +
                   (uint)pbVar13[1] * 2);
          pbVar13[2] = (byte)uVar7;
          iVar11 = *(int *)(iVar14 + 0x148);
          pbVar13[1] = (byte)((ushort)uVar7 >> 8);
          uVar7 = *(undefined2 *)
                   (*(int *)(iVar11 + (uint)(pbVar13[4] >> (bVar6 & 0x1f)) * 4) +
                   (uint)pbVar13[3] * 2);
LAB_00652a9d:
          pbVar13[4] = (byte)uVar7;
          pbVar13[3] = (byte)((ushort)uVar7 >> 8);
        }
        else {
          if (uVar8 != 0) {
            param_1._0_1_ = (byte)*(undefined4 *)(iVar14 + 0x13c);
            iVar11 = 0xffff - uVar9;
            uVar5 = (uint)*(ushort *)(iVar14 + 0x128) * iVar11 +
                    *(ushort *)
                     (*(int *)(*(int *)(iVar14 + 0x158) +
                              (uint)(*pbVar13 >> ((byte)param_1 & 0x1f)) * 4) +
                     (uint)pbVar13[-1] * 2) * uVar9 + 0x8000;
            uVar5 = (uVar5 >> 0x10) + uVar5;
            uVar7 = (undefined2)(uVar5 >> 0x10);
            if (uVar4 == 0) {
              uVar7 = *(undefined2 *)
                       (*(int *)(*(int *)(iVar14 + 0x154) +
                                ((uVar5 >> 0x10 & 0xff) >>
                                ((byte)*(undefined4 *)(iVar14 + 0x13c) & 0x1f)) * 4) +
                       (uVar5 >> 0x18) * 2);
            }
            iVar1 = *(int *)(iVar14 + 0x158);
            *pbVar13 = (byte)uVar7;
            pbVar13[-1] = (byte)((ushort)uVar7 >> 8);
            uVar5 = (uint)*(ushort *)(iVar14 + 0x12a) * iVar11 +
                    *(ushort *)
                     (*(int *)(iVar1 + (uint)(pbVar13[2] >> ((byte)param_1 & 0x1f)) * 4) +
                     (uint)pbVar13[1] * 2) * uVar9 + 0x8000;
            uVar5 = (uVar5 >> 0x10) + uVar5;
            uVar7 = (undefined2)(uVar5 >> 0x10);
            if (uVar4 == 0) {
              uVar7 = *(undefined2 *)
                       (*(int *)(*(int *)(iVar14 + 0x154) +
                                ((uVar5 >> 0x10 & 0xff) >>
                                ((byte)*(undefined4 *)(iVar14 + 0x13c) & 0x1f)) * 4) +
                       (uVar5 >> 0x18) * 2);
            }
            iVar1 = *(int *)(iVar14 + 0x158);
            pbVar13[2] = (byte)uVar7;
            pbVar13[1] = (byte)((ushort)uVar7 >> 8);
            uVar9 = (uint)*(ushort *)(iVar14 + 300) * iVar11 +
                    *(ushort *)
                     (*(int *)(iVar1 + (uint)(pbVar13[4] >> ((byte)param_1 & 0x1f)) * 4) +
                     (uint)pbVar13[3] * 2) * uVar9 + 0x8000;
            uVar9 = (uVar9 >> 0x10) + uVar9;
            uVar7 = (undefined2)(uVar9 >> 0x10);
            if (uVar4 == 0) {
              uVar7 = *(undefined2 *)
                       (*(int *)(*(int *)(iVar14 + 0x154) +
                                ((uVar9 >> 0x10 & 0xff) >>
                                ((byte)*(undefined4 *)(iVar14 + 0x13c) & 0x1f)) * 4) +
                       (uVar9 >> 0x18) * 2);
            }
            goto LAB_00652a9d;
          }
          pbVar13[-1] = *(byte *)(iVar14 + 0x11f);
          *pbVar13 = *(byte *)(iVar14 + 0x11e);
          pbVar13[1] = *(byte *)(iVar14 + 0x121);
          pbVar13[2] = *(byte *)(iVar14 + 0x120);
          pbVar13[3] = *(byte *)(iVar14 + 0x123);
          pbVar13[4] = *(byte *)(iVar14 + 0x122);
        }
        pbVar13 = pbVar13 + 8;
        local_c = local_c + -1;
        if (local_c == 0) {
          return;
        }
      } while( true );
    }
  }
  return;
}

