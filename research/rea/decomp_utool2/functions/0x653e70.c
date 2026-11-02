// rea decompile_all
// name: FUN_00653e70
// address: 0x653e70
// body: available
// range: 0x653e70-0x654a8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x654a87 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00653e70(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  byte bVar10;
  undefined2 uVar11;
  int iVar12;
  int in_ECX;
  uint uVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  byte *pbVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  float10 fVar21;
  byte local_60;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  undefined2 local_5c;
  int local_58;
  
  bVar19 = false;
  iVar18 = *(int *)(in_ECX + 0x284);
  if (iVar18 == 0) {
    if (*(int *)(in_ECX + 0x140) == 0) {
      *(undefined4 *)(in_ECX + 0x284) = 100000;
      *(undefined4 *)(in_ECX + 0x140) = 100000;
    }
    else {
      fVar21 = (float10)FUN_006f9790(10000000000.0 / (double)*(int *)(in_ECX + 0x140) + 0.5);
      if ((2147483647.0 < (double)fVar21) || ((double)fVar21 < -2147483648.0)) {
        *(undefined4 *)(in_ECX + 0x284) = 0;
      }
      else {
        *(int *)(in_ECX + 0x284) = (int)fVar21;
      }
    }
  }
  else if (*(int *)(in_ECX + 0x140) == 0) {
    fVar21 = (float10)FUN_006f9790(10000000000.0 / (double)iVar18 + 0.5);
    if ((2147483647.0 < (double)fVar21) || ((double)fVar21 < -2147483648.0)) {
      *(undefined4 *)(in_ECX + 0x140) = 0;
    }
    else {
      *(int *)(in_ECX + 0x140) = (int)fVar21;
    }
  }
  else {
    fVar21 = (float10)FUN_006f9790(((double)iVar18 * (double)*(int *)(in_ECX + 0x140)) / 100000.0 +
                                   0.5);
    if (((2147483647.0 < (double)fVar21) || ((double)fVar21 < -2147483648.0)) ||
       (10000 < (int)fVar21 - 95000U)) {
      bVar19 = true;
    }
  }
  *(ushort *)(in_ECX + 0x2ce) = *(ushort *)(in_ECX + 0x2ce) | 1;
  if (bVar19) {
    *(uint *)(in_ECX + 0x30) = *(uint *)(in_ECX + 0x30) | 0x2000;
  }
  else {
    *(uint *)(in_ECX + 0x30) = *(uint *)(in_ECX + 0x30) & 0xffffdfff;
  }
  if ((*(uint *)(in_ECX + 0x30) & 0x40080) == 0x40000) {
    *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) & 0xffffdfff;
    *(uint *)(in_ECX + 0x30) = *(uint *)(in_ECX + 0x30) & 0xfd7ffeff;
    *(undefined2 *)(in_ECX + 0x104) = 0;
  }
  if (*(int *)(in_ECX + 0x140) - 95000U < 0x2711) {
    *(uint *)(in_ECX + 0x30) = *(uint *)(in_ECX + 0x30) & 0xff7fffff;
    *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) & 0xffffdfff;
  }
  if ((*(uint *)(in_ECX + 0x30) & 0x600000) != 0) {
    FUN_00657650();
  }
  if ((*(uint *)(in_ECX + 0x30) & 0x100) == 0) {
    if ((((*(uint *)(in_ECX + 0x30) & 0x4080) == 0x4080) &&
        (sVar5 = *(short *)(in_ECX + 0x11e), sVar5 == *(short *)(in_ECX + 0x120))) &&
       (sVar5 == *(short *)(in_ECX + 0x122))) {
      *(short *)(in_ECX + 0x124) = sVar5;
      goto LAB_006540c8;
    }
  }
  else if ((*(byte *)(in_ECX + 0x10b) & 2) == 0) {
LAB_006540c8:
    *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 0x800;
  }
  if (*(char *)(in_ECX + 0x10b) == '\x03') {
    FUN_00654b50();
  }
  else {
    FUN_00654a90();
  }
  uVar13 = *(uint *)(in_ECX + 0x30);
  if (((uVar13 & 0x380) == 0x280) && (*(char *)(in_ECX + 0x10c) != '\x10')) {
    *(short *)(in_ECX + 0x11e) = (short)((*(ushort *)(in_ECX + 0x11e) + 0x81) * 0xff >> 0x10);
    *(short *)(in_ECX + 0x120) = (short)((*(ushort *)(in_ECX + 0x120) + 0x81) * 0xff >> 0x10);
    *(short *)(in_ECX + 0x122) = (short)((*(ushort *)(in_ECX + 0x122) + 0x81) * 0xff >> 0x10);
    *(short *)(in_ECX + 0x124) = (short)((*(ushort *)(in_ECX + 0x124) + 0x81) * 0xff >> 0x10);
  }
  if ((((uVar13 & 0x80) != 0 && (uVar13 & 0x4000400) != 0) && ((uVar13 & 0x100) == 0)) &&
     (*(char *)(in_ECX + 0x10c) == '\x10')) {
    *(short *)(in_ECX + 0x11e) = *(short *)(in_ECX + 0x11e) * 0x101;
    *(short *)(in_ECX + 0x120) = *(short *)(in_ECX + 0x120) * 0x101;
    *(short *)(in_ECX + 0x122) = *(short *)(in_ECX + 0x122) * 0x101;
    *(short *)(in_ECX + 0x124) = *(short *)(in_ECX + 0x124) * 0x101;
  }
  *(undefined8 *)(in_ECX + 0x126) = *(undefined8 *)(in_ECX + 0x11c);
  *(undefined2 *)(in_ECX + 0x12e) = *(undefined2 *)(in_ECX + 0x124);
  if (((((uVar13 & 0x2000) == 0) &&
       (((uVar13 & 0x600000) == 0 ||
        ((*(int *)(in_ECX + 0x284) - 95000U < 0x2711 && (*(int *)(in_ECX + 0x140) - 95000U < 0x2711)
         ))))) &&
      (((uVar13 & 0x80) == 0 ||
       (((*(int *)(in_ECX + 0x284) - 95000U < 0x2711 && (*(int *)(in_ECX + 0x140) - 95000U < 0x2711)
         ) && ((*(char *)(in_ECX + 0x116) != '\x03' || (*(int *)(in_ECX + 0x118) - 95000U < 0x2711))
              )))))) && (((uVar13 & 0x800000) == 0 || (*(int *)(in_ECX + 0x140) - 95000U < 0x2711)))
     ) {
    if (((uVar13 & 0x80) == 0) || (*(char *)(in_ECX + 0x10b) != '\x03')) goto LAB_00654999;
    bVar10 = *(byte *)(in_ECX + 0x11e);
    uVar15 = *(ushort *)(in_ECX + 0x104);
    bVar1 = *(byte *)(in_ECX + 0x120);
    local_5c = CONCAT11(bVar1,bVar10);
    bVar2 = *(byte *)(in_ECX + 0x122);
    local_58 = 0;
    if (uVar15 != 0) {
      iVar18 = *(int *)(in_ECX + 0x168);
      pbVar17 = (byte *)(*(int *)(in_ECX + 0xf8) + 2);
      do {
        bVar3 = *(byte *)(iVar18 + local_58);
        if (bVar3 == 0) {
          *(undefined2 *)(pbVar17 + -2) = local_5c;
          *pbVar17 = bVar2;
        }
        else if (bVar3 != 0xff) {
          uVar14 = (0xff - (ushort)bVar3) * (ushort)bVar10 + (ushort)pbVar17[-2] * (ushort)bVar3 +
                   0x80;
          pbVar17[-2] = (byte)((uint)(uVar14 >> 8) + (uint)uVar14 >> 8);
          uVar14 = (0xff - (ushort)*(byte *)(iVar18 + local_58)) * (ushort)bVar1 +
                   (ushort)pbVar17[-1] * (ushort)*(byte *)(iVar18 + local_58) + 0x80;
          pbVar17[-1] = (byte)((uint)(uVar14 >> 8) + (uint)uVar14 >> 8);
          uVar14 = (0xff - (ushort)*(byte *)(iVar18 + local_58)) * (ushort)bVar2 +
                   (ushort)*pbVar17 * (ushort)*(byte *)(iVar18 + local_58) + 0x80;
          *pbVar17 = (byte)((uint)(uVar14 >> 8) + (uint)uVar14 >> 8);
        }
        local_58 = local_58 + 1;
        pbVar17 = pbVar17 + 3;
      } while (local_58 < (int)(uint)uVar15);
    }
    uVar13 = uVar13 & 0xffffff7f;
  }
  else {
    FUN_006565b0();
    uVar13 = *(uint *)(in_ECX + 0x30);
    if ((char)uVar13 < '\0') {
      if ((uVar13 & 0x600000) != 0) {
        FUN_006563b0();
      }
      if (*(char *)(in_ECX + 0x10b) != '\x03') {
        cVar4 = *(char *)(in_ECX + 0x116);
        iVar18 = 100000;
        if (cVar4 == '\x01') {
          iVar12 = *(int *)(in_ECX + 0x140);
        }
        else {
          if ((cVar4 != '\x02') && (cVar4 != '\x03')) {
                    /* WARNING: Subroutine does not return */
            FUN_00656590();
          }
          iVar12 = FUN_00657170();
          iVar18 = FUN_00657060();
        }
        bVar19 = 10000 < iVar12 - 95000U;
        bVar20 = 10000 < iVar18 - 95000U;
        if (bVar19) {
          uVar11 = FUN_00656ec0();
          *(undefined2 *)(in_ECX + 0x12e) = uVar11;
        }
        if (bVar20) {
          uVar11 = FUN_00656ec0();
          *(undefined2 *)(in_ECX + 0x124) = uVar11;
        }
        sVar5 = *(short *)(in_ECX + 0x11e);
        if (((sVar5 == *(short *)(in_ECX + 0x120)) && (sVar5 == *(short *)(in_ECX + 0x122))) &&
           (sVar6 = *(short *)(in_ECX + 0x124), sVar5 == sVar6)) {
          uVar11 = *(undefined2 *)(in_ECX + 0x12e);
          *(undefined2 *)(in_ECX + 300) = uVar11;
          *(undefined2 *)(in_ECX + 0x12a) = uVar11;
          *(undefined2 *)(in_ECX + 0x128) = uVar11;
          *(short *)(in_ECX + 0x122) = sVar6;
          *(short *)(in_ECX + 0x120) = sVar6;
          *(short *)(in_ECX + 0x11e) = sVar6;
          *(undefined1 *)(in_ECX + 0x116) = 1;
        }
        else {
          if (bVar19) {
            uVar11 = FUN_00656ec0();
            *(undefined2 *)(in_ECX + 0x128) = uVar11;
            uVar11 = FUN_00656ec0();
            *(undefined2 *)(in_ECX + 0x12a) = uVar11;
            uVar11 = FUN_00656ec0();
            *(undefined2 *)(in_ECX + 300) = uVar11;
          }
          if (bVar20) {
            uVar11 = FUN_00656ec0();
            *(undefined2 *)(in_ECX + 0x11e) = uVar11;
            uVar11 = FUN_00656ec0();
            *(undefined2 *)(in_ECX + 0x120) = uVar11;
            uVar11 = FUN_00656ec0();
            *(undefined2 *)(in_ECX + 0x122) = uVar11;
          }
          *(undefined1 *)(in_ECX + 0x116) = 1;
        }
        goto LAB_00654999;
      }
      cVar4 = *(char *)(in_ECX + 0x116);
      if (cVar4 == '\x02') {
        iVar18 = *(int *)(in_ECX + 0x144);
        local_5c = CONCAT11(*(undefined1 *)(iVar18 + (uint)*(ushort *)(in_ECX + 0x120)),
                            *(undefined1 *)(iVar18 + (uint)*(ushort *)(in_ECX + 0x11e)));
        local_60 = *(byte *)(iVar18 + (uint)*(ushort *)(in_ECX + 0x122));
        iVar18 = *(int *)(in_ECX + 0x150);
        local_5f = *(byte *)(iVar18 + (uint)*(ushort *)(in_ECX + 0x11e));
        local_5d = *(byte *)(iVar18 + (uint)*(ushort *)(in_ECX + 0x122));
        local_5e = *(byte *)(iVar18 + (uint)*(ushort *)(in_ECX + 0x120));
      }
      else {
        if (cVar4 == '\x01') {
          iVar18 = *(int *)(in_ECX + 0x140);
LAB_00654541:
          local_5c = CONCAT11(*(undefined1 *)(in_ECX + 0x120),*(undefined1 *)(in_ECX + 0x11e));
          local_60 = *(byte *)(in_ECX + 0x122);
        }
        else {
          if ((cVar4 != '\x02') && (cVar4 != '\x03')) {
            iVar18 = 100000;
            goto LAB_00654541;
          }
          iVar18 = FUN_00657170();
          iVar12 = FUN_00657060();
          if ((94999 < iVar12) && (iVar12 < 0x19a29)) goto LAB_00654541;
          uVar8 = FUN_00656fe0();
          uVar9 = FUN_00656fe0();
          local_5c = CONCAT11(uVar9,uVar8);
          local_60 = FUN_00656fe0();
        }
        if (iVar18 - 95000U < 0x2711) {
          local_5f = *(byte *)(in_ECX + 0x11e);
          local_5e = *(byte *)(in_ECX + 0x120);
          local_5d = *(byte *)(in_ECX + 0x122);
        }
        else {
          local_5f = FUN_00656fe0();
          local_5e = FUN_00656fe0();
          local_5d = FUN_00656fe0();
        }
      }
      local_58 = 0;
      if (*(short *)(in_ECX + 0xfc) != 0) {
        uVar15 = *(ushort *)(in_ECX + 0x104);
        pbVar17 = (byte *)(*(int *)(in_ECX + 0xf8) + 2);
        do {
          if (local_58 < (int)(uint)uVar15) {
            iVar18 = *(int *)(in_ECX + 0x168);
            bVar10 = *(byte *)(iVar18 + local_58);
            if (bVar10 == 0xff) goto LAB_0065471f;
            if (bVar10 == 0) {
              *(undefined2 *)(pbVar17 + -2) = local_5c;
              bVar10 = local_60;
            }
            else {
              iVar12 = *(int *)(in_ECX + 0x150);
              iVar7 = *(int *)(in_ECX + 0x14c);
              uVar15 = (ushort)*(byte *)((uint)pbVar17[-2] + iVar12) * (ushort)bVar10 +
                       (0xff - (ushort)bVar10) * (ushort)local_5f + 0x80;
              pbVar17[-2] = *(byte *)(((uint)(uVar15 >> 8) + (uint)uVar15 >> 8 & 0xff) + iVar7);
              uVar15 = (ushort)*(byte *)((uint)pbVar17[-1] + iVar12) *
                       (ushort)*(byte *)(iVar18 + local_58) +
                       (0xff - (ushort)*(byte *)(iVar18 + local_58)) * (ushort)local_5e + 0x80;
              pbVar17[-1] = *(byte *)(((uint)(uVar15 >> 8) + (uint)uVar15 >> 8 & 0xff) + iVar7);
              uVar15 = (ushort)*(byte *)((uint)*pbVar17 + iVar12) *
                       (ushort)*(byte *)(iVar18 + local_58) +
                       (0xff - (ushort)*(byte *)(iVar18 + local_58)) * (ushort)local_5d + 0x80;
              bVar10 = *(byte *)(((uint)(uVar15 >> 8) + (uint)uVar15 >> 8 & 0xff) + iVar7);
            }
          }
          else {
LAB_0065471f:
            iVar18 = *(int *)(in_ECX + 0x144);
            pbVar17[-2] = *(byte *)((uint)pbVar17[-2] + iVar18);
            pbVar17[-1] = *(byte *)((uint)pbVar17[-1] + iVar18);
            bVar10 = *(byte *)((uint)*pbVar17 + iVar18);
          }
          *pbVar17 = bVar10;
          local_58 = local_58 + 1;
          pbVar17 = pbVar17 + 3;
          uVar15 = *(ushort *)(in_ECX + 0x104);
        } while (local_58 < (int)(uint)*(ushort *)(in_ECX + 0xfc));
      }
      *(uint *)(in_ECX + 0x30) = *(uint *)(in_ECX + 0x30) & 0xffffdf7f;
      goto LAB_00654999;
    }
    if ((*(char *)(in_ECX + 0x10b) != '\x03') ||
       ((uVar13 >> 0xc & 1) != 0 && (uVar13 & 0x600000) != 0)) goto LAB_00654999;
    uVar16 = (uint)*(ushort *)(in_ECX + 0xfc);
    if (uVar16 != 0) {
      iVar18 = *(int *)(in_ECX + 0x144);
      pbVar17 = (byte *)(*(int *)(in_ECX + 0xf8) + 2);
      do {
        pbVar17[-2] = *(byte *)((uint)pbVar17[-2] + iVar18);
        pbVar17[-1] = *(byte *)((uint)pbVar17[-1] + iVar18);
        *pbVar17 = *(byte *)((uint)*pbVar17 + iVar18);
        uVar16 = uVar16 - 1;
        pbVar17 = pbVar17 + 3;
      } while (uVar16 != 0);
    }
    uVar13 = uVar13 & 0xffffdfff;
  }
  *(uint *)(in_ECX + 0x30) = uVar13;
LAB_00654999:
  if (((*(uint *)(in_ECX + 0x30) & 0x1008) == 8) && (*(char *)(in_ECX + 0x10b) == '\x03')) {
    bVar10 = *(byte *)(in_ECX + 0x15c);
    uVar13 = (uint)*(ushort *)(in_ECX + 0xfc);
    *(uint *)(in_ECX + 0x30) = *(uint *)(in_ECX + 0x30) & 0xfffffff7;
    if ((-(uint)bVar10 + 7 < 7) && (uVar13 != 0)) {
      pbVar17 = *(byte **)(in_ECX + 0xf8);
      uVar16 = uVar13;
      do {
        *pbVar17 = *pbVar17 >> ((char)-(uint)bVar10 + 8U & 0x1f);
        uVar16 = uVar16 - 1;
        pbVar17 = pbVar17 + 3;
      } while (uVar16 != 0);
    }
    bVar10 = *(byte *)(in_ECX + 0x15d);
    if ((-(uint)bVar10 + 7 < 7) && (uVar13 != 0)) {
      pbVar17 = (byte *)(*(int *)(in_ECX + 0xf8) + 1);
      uVar16 = uVar13;
      do {
        *pbVar17 = *pbVar17 >> ((char)-(uint)bVar10 + 8U & 0x1f);
        uVar16 = uVar16 - 1;
        pbVar17 = pbVar17 + 3;
      } while (uVar16 != 0);
    }
    bVar10 = *(byte *)(in_ECX + 0x15e);
    if ((-(uint)bVar10 + 7 < 7) && (uVar13 != 0)) {
      pbVar17 = (byte *)(*(int *)(in_ECX + 0xf8) + 2);
      do {
        *pbVar17 = *pbVar17 >> ((char)-(uint)bVar10 + 8U & 0x1f);
        pbVar17 = pbVar17 + 3;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  return;
}

