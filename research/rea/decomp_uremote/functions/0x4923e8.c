// rea decompile_all
// name: FUN_004923e8
// address: 0x4923e8
// body: available
// range: 0x4923e8-0x492df4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x492b43 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004923e8(void)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  undefined2 uVar9;
  int in_EAX;
  int iVar10;
  byte *pbVar11;
  ushort uVar12;
  ushort uVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  undefined4 local_1c;
  undefined4 local_18;
  int local_10;
  
  iVar10 = *(int *)(in_EAX + 0x284);
  iVar14 = 0;
  if (iVar10 == 0) {
    if (*(int *)(in_EAX + 0x140) == 0) {
      *(undefined4 *)(in_EAX + 0x284) = 100000;
      *(undefined4 *)(in_EAX + 0x140) = 100000;
    }
    else {
      uVar19 = FUN_004909d1(*(int *)(in_EAX + 0x140));
      *(undefined4 *)(in_EAX + 0x284) = uVar19;
    }
  }
  else if (*(int *)(in_EAX + 0x140) == 0) {
    uVar19 = FUN_004909d1(iVar10);
    *(undefined4 *)(in_EAX + 0x140) = uVar19;
  }
  else {
    iVar14 = FUN_0049220f(iVar10,*(int *)(in_EAX + 0x140));
  }
  *(ushort *)(in_EAX + 0x2ce) = *(ushort *)(in_EAX + 0x2ce) | 1;
  if (iVar14 == 0) {
    *(uint *)(in_EAX + 0x30) = *(uint *)(in_EAX + 0x30) & 0xffffdfff;
  }
  else {
    *(uint *)(in_EAX + 0x30) = *(uint *)(in_EAX + 0x30) | 0x2000;
  }
  uVar20 = *(uint *)(in_EAX + 0x30);
  if (((uVar20 & 0x40000) != 0) && (-1 < (char)uVar20)) {
    *(uint *)(in_EAX + 0x2c) = *(uint *)(in_EAX + 0x2c) & 0xffffdfff;
    *(uint *)(in_EAX + 0x30) = uVar20 & 0xfd7ffeff;
    *(undefined2 *)(in_EAX + 0x104) = 0;
  }
  uVar21 = FUN_00490a15();
  if ((int)uVar21 == 0) {
    *(uint *)(in_EAX + 0x30) = *(uint *)(in_EAX + 0x30) & 0xff7fffff;
    *(uint *)(in_EAX + 0x2c) = *(uint *)(in_EAX + 0x2c) & (uint)((ulonglong)uVar21 >> 0x20);
  }
  if ((*(uint *)(in_EAX + 0x30) & 0x600000) != 0) {
    FUN_00490541();
  }
  uVar20 = *(uint *)(in_EAX + 0x30);
  if ((uVar20 & 0x100) == 0) {
    if (((((char)uVar20 < '\0') && ((uVar20 & 0x4000) != 0)) &&
        (sVar3 = *(short *)(in_EAX + 0x11e), sVar3 == *(short *)(in_EAX + 0x120))) &&
       (sVar3 == *(short *)(in_EAX + 0x122))) {
      *(short *)(in_EAX + 0x124) = sVar3;
      goto LAB_004924fc;
    }
  }
  else if ((*(byte *)(in_EAX + 0x10b) & 2) == 0) {
LAB_004924fc:
    *(uint *)(in_EAX + 0x28) = *(uint *)(in_EAX + 0x28) | 0x800;
  }
  if (*(char *)(in_EAX + 0x10b) == '\x03') {
    FUN_00492240();
  }
  else {
    FUN_0049232f();
  }
  uVar20 = *(uint *)(in_EAX + 0x30);
  if ((((uVar20 & 0x200) != 0) && ((char)uVar20 < '\0')) &&
     (((uVar20 & 0x100) == 0 && (*(char *)(in_EAX + 0x10c) != '\x10')))) {
    *(ushort *)(in_EAX + 0x11e) = (ushort)((*(ushort *)(in_EAX + 0x11e) + 0x81) * 0xff >> 0x10);
    *(ushort *)(in_EAX + 0x120) = (ushort)((*(ushort *)(in_EAX + 0x120) + 0x81) * 0xff >> 0x10);
    *(ushort *)(in_EAX + 0x122) = (ushort)((*(ushort *)(in_EAX + 0x122) + 0x81) * 0xff >> 0x10);
    *(ushort *)(in_EAX + 0x124) = (ushort)((*(ushort *)(in_EAX + 0x124) + 0x81) * 0xff >> 0x10);
  }
  if ((((uVar20 & 0x4000400) != 0) && ((char)uVar20 < '\0')) &&
     (((uVar20 & 0x100) == 0 && (*(char *)(in_EAX + 0x10c) == '\x10')))) {
    *(short *)(in_EAX + 0x11e) = *(short *)(in_EAX + 0x11e) * 0x101;
    *(short *)(in_EAX + 0x120) = *(short *)(in_EAX + 0x120) * 0x101;
    *(short *)(in_EAX + 0x122) = *(short *)(in_EAX + 0x122) * 0x101;
    *(short *)(in_EAX + 0x124) = *(short *)(in_EAX + 0x124) * 0x101;
  }
  *(undefined4 *)(in_EAX + 0x126) = *(undefined4 *)(in_EAX + 0x11c);
  *(undefined4 *)(in_EAX + 0x12a) = *(undefined4 *)(in_EAX + 0x120);
  *(undefined2 *)(in_EAX + 0x12e) = *(undefined2 *)(in_EAX + 0x124);
  if ((uVar20 & 0x2000) == 0) {
    uVar18 = uVar20;
    if ((uVar20 & 0x600000) == 0) {
LAB_0049263d:
      uVar15 = uVar18 & 0x80;
      if (uVar15 == 0) goto LAB_00492689;
      iVar10 = FUN_00490a15();
      if (iVar10 == 0) {
        uVar21 = FUN_00490a15();
        uVar18 = (uint)((ulonglong)uVar21 >> 0x20);
        if ((int)uVar21 == 0) {
          if (*(char *)(in_EAX + 0x116) == '\x03') {
            uVar21 = FUN_00490a15();
            uVar18 = (uint)((ulonglong)uVar21 >> 0x20);
            if ((int)uVar21 != 0) goto LAB_004927f0;
          }
LAB_00492689:
          if ((uVar18 & 0x800000) != 0) {
            uVar21 = FUN_00490a15();
            uVar18 = (uint)((ulonglong)uVar21 >> 0x20);
            if ((int)uVar21 != 0) goto LAB_004927f0;
          }
          if ((uVar15 != 0) && (*(char *)(in_EAX + 0x10b) == '\x03')) {
            bVar7 = *(byte *)(in_EAX + 0x11e);
            local_1c = 0;
            bVar8 = *(byte *)(in_EAX + 0x120);
            local_18._0_2_ = CONCAT11(bVar8,bVar7);
            bVar1 = *(byte *)(in_EAX + 0x122);
            if (*(short *)(in_EAX + 0x104) != 0) {
              pbVar11 = (byte *)(*(int *)(in_EAX + 0xf8) + 2);
              do {
                pbVar16 = (byte *)(local_1c + *(int *)(in_EAX + 0x168));
                if (*pbVar16 == 0) {
                  *(undefined2 *)(pbVar11 + -2) = (undefined2)local_18;
                  *pbVar11 = bVar1;
                }
                else if (*pbVar16 != 0xff) {
                  uVar12 = (0xff - (ushort)*pbVar16) * (ushort)bVar7 +
                           (ushort)pbVar11[-2] * (ushort)*pbVar16 + 0x80;
                  pbVar11[-2] = (byte)((uint)(uVar12 >> 8) + (uint)uVar12 >> 8);
                  uVar12 = (0xff - (ushort)*pbVar16) * (ushort)bVar8 +
                           (ushort)pbVar11[-1] * (ushort)*pbVar16 + 0x80;
                  pbVar11[-1] = (byte)((uint)(uVar12 >> 8) + (uint)uVar12 >> 8);
                  uVar12 = (0xff - (ushort)*pbVar16) * (ushort)bVar1 +
                           (ushort)*pbVar11 * (ushort)*pbVar16 + 0x80;
                  *pbVar11 = (byte)((uint)(uVar12 >> 8) + (uint)uVar12 >> 8);
                  uVar18 = uVar20;
                }
                local_1c = local_1c + 1;
                pbVar11 = pbVar11 + 3;
              } while (local_1c < (int)(uint)*(ushort *)(in_EAX + 0x104));
            }
            *(uint *)(in_EAX + 0x30) = uVar18 & 0xffffff7f;
          }
          goto LAB_00492d3f;
        }
      }
    }
    else {
      iVar10 = FUN_00490a15();
      if (iVar10 == 0) {
        uVar21 = FUN_00490a15();
        uVar18 = (uint)((ulonglong)uVar21 >> 0x20);
        if ((int)uVar21 == 0) goto LAB_0049263d;
      }
    }
  }
LAB_004927f0:
  FUN_00490f58(*(undefined1 *)(in_EAX + 0x10c));
  uVar20 = *(uint *)(in_EAX + 0x30);
  if (-1 < (char)uVar20) {
    if ((*(char *)(in_EAX + 0x10b) == '\x03') &&
       (((uVar20 & 0x1000) == 0 || ((uVar20 & 0x600000) == 0)))) {
      uVar18 = (uint)*(ushort *)(in_EAX + 0xfc);
      if (uVar18 != 0) {
        iVar10 = *(int *)(in_EAX + 0x144);
        pbVar11 = (byte *)(*(int *)(in_EAX + 0xf8) + 2);
        do {
          pbVar11[-2] = *(byte *)((uint)pbVar11[-2] + iVar10);
          pbVar11[-1] = *(byte *)((uint)pbVar11[-1] + iVar10);
          *pbVar11 = *(byte *)((uint)*pbVar11 + iVar10);
          pbVar11 = pbVar11 + 3;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      *(uint *)(in_EAX + 0x30) = uVar20 & 0xffffdfff;
    }
    goto LAB_00492d3f;
  }
  if ((uVar20 & 0x600000) != 0) {
    FUN_00491216();
  }
  if (*(char *)(in_EAX + 0x10b) != '\x03') {
    cVar2 = *(char *)(in_EAX + 0x116);
    local_18 = 100000;
    if (cVar2 == '\x01') {
      uVar19 = *(undefined4 *)(in_EAX + 0x140);
    }
    else {
      if (cVar2 == '\x02') {
        uVar19 = FUN_004909d1(*(undefined4 *)(in_EAX + 0x284));
        uVar17 = *(undefined4 *)(in_EAX + 0x140);
        uVar22 = *(undefined4 *)(in_EAX + 0x284);
      }
      else {
        if (cVar2 != '\x03') {
                    /* WARNING: Subroutine does not return */
          FUN_00491122();
        }
        uVar19 = FUN_004909d1(*(undefined4 *)(in_EAX + 0x118));
        uVar17 = *(undefined4 *)(in_EAX + 0x140);
        uVar22 = *(undefined4 *)(in_EAX + 0x118);
      }
      local_18 = FUN_00490a6e(uVar22,uVar17);
    }
    iVar10 = FUN_00490a15();
    iVar14 = FUN_00490a15();
    if (iVar10 != 0) {
      uVar9 = FUN_00490b72(uVar19);
      *(undefined2 *)(in_EAX + 0x12e) = uVar9;
    }
    if (iVar14 != 0) {
      uVar9 = FUN_00490b72(local_18);
      *(undefined2 *)(in_EAX + 0x124) = uVar9;
    }
    sVar3 = *(short *)(in_EAX + 0x11e);
    if (((sVar3 == *(short *)(in_EAX + 0x120)) && (sVar3 == *(short *)(in_EAX + 0x122))) &&
       (sVar4 = *(short *)(in_EAX + 0x124), sVar3 == sVar4)) {
      uVar9 = *(undefined2 *)(in_EAX + 0x12e);
      *(undefined2 *)(in_EAX + 300) = uVar9;
      *(undefined2 *)(in_EAX + 0x12a) = uVar9;
      *(undefined2 *)(in_EAX + 0x128) = uVar9;
      *(short *)(in_EAX + 0x122) = sVar4;
      *(short *)(in_EAX + 0x120) = sVar4;
      *(short *)(in_EAX + 0x11e) = sVar4;
    }
    else {
      if (iVar10 != 0) {
        uVar9 = FUN_00490b72(uVar19);
        *(undefined2 *)(in_EAX + 0x128) = uVar9;
        uVar9 = FUN_00490b72(uVar19);
        *(undefined2 *)(in_EAX + 0x12a) = uVar9;
        uVar9 = FUN_00490b72(uVar19);
        *(undefined2 *)(in_EAX + 300) = uVar9;
      }
      if (iVar14 != 0) {
        uVar9 = FUN_00490b72(local_18);
        *(undefined2 *)(in_EAX + 0x11e) = uVar9;
        uVar9 = FUN_00490b72(local_18);
        *(undefined2 *)(in_EAX + 0x120) = uVar9;
        uVar9 = FUN_00490b72(local_18);
        *(undefined2 *)(in_EAX + 0x122) = uVar9;
      }
    }
    *(undefined1 *)(in_EAX + 0x116) = 1;
    goto LAB_00492d3f;
  }
  iVar10 = *(int *)(in_EAX + 0xf8);
  uVar12 = *(ushort *)(in_EAX + 0xfc);
  cVar2 = *(char *)(in_EAX + 0x116);
  if (cVar2 == '\x02') {
    iVar14 = *(int *)(in_EAX + 0x144);
    local_18._0_2_ =
         CONCAT11(*(undefined1 *)(iVar14 + (uint)*(ushort *)(in_EAX + 0x120)),
                  *(undefined1 *)(iVar14 + (uint)*(ushort *)(in_EAX + 0x11e)));
    local_18._0_3_ =
         CONCAT12(*(undefined1 *)(iVar14 + (uint)*(ushort *)(in_EAX + 0x122)),(undefined2)local_18);
    local_18 = (uint)(uint3)local_18;
    iVar14 = *(int *)(in_EAX + 0x150);
    bVar7 = *(byte *)(iVar14 + (uint)*(ushort *)(in_EAX + 0x122));
    local_1c._0_2_ =
         CONCAT11(*(undefined1 *)(iVar14 + (uint)*(ushort *)(in_EAX + 0x120)),
                  *(undefined1 *)(iVar14 + (uint)*(ushort *)(in_EAX + 0x11e)));
  }
  else {
    if (cVar2 == '\x01') {
      uVar19 = *(undefined4 *)(in_EAX + 0x140);
      uVar17 = 100000;
    }
    else {
      if (cVar2 == '\x02') {
        uVar19 = FUN_004909d1(*(undefined4 *)(in_EAX + 0x284));
        uVar17 = *(undefined4 *)(in_EAX + 0x140);
        uVar22 = *(undefined4 *)(in_EAX + 0x284);
      }
      else {
        if (cVar2 != '\x03') {
          uVar17 = 100000;
          uVar19 = 100000;
          goto LAB_004928f4;
        }
        uVar19 = FUN_004909d1(*(undefined4 *)(in_EAX + 0x118));
        uVar17 = *(undefined4 *)(in_EAX + 0x140);
        uVar22 = *(undefined4 *)(in_EAX + 0x118);
      }
      uVar17 = FUN_00490a6e(uVar22,uVar17);
    }
LAB_004928f4:
    iVar14 = FUN_00490a15();
    if (iVar14 == 0) {
      local_18._0_2_ = CONCAT11(*(undefined1 *)(in_EAX + 0x120),*(undefined1 *)(in_EAX + 0x11e));
      uVar5 = *(undefined1 *)(in_EAX + 0x122);
    }
    else {
      uVar5 = FUN_00490ab6(uVar17);
      uVar6 = FUN_00490ab6(uVar17);
      local_18._0_2_ = CONCAT11(uVar6,uVar5);
      uVar5 = FUN_00490ab6(uVar17);
    }
    local_18._0_3_ = CONCAT12(uVar5,(undefined2)local_18);
    local_18 = (uint)(uint3)local_18;
    iVar14 = FUN_00490a15();
    if (iVar14 == 0) {
      local_1c._0_2_ = CONCAT11(*(undefined1 *)(in_EAX + 0x120),*(undefined1 *)(in_EAX + 0x11e));
      bVar7 = *(byte *)(in_EAX + 0x122);
    }
    else {
      uVar5 = FUN_00490ab6(uVar19);
      uVar6 = FUN_00490ab6(uVar19);
      local_1c._0_2_ = CONCAT11(uVar6,uVar5);
      bVar7 = FUN_00490ab6(uVar19);
    }
  }
  local_10 = 0;
  if (uVar12 != 0) {
    pbVar11 = (byte *)(iVar10 + 2);
    do {
      if (local_10 < (int)(uint)*(ushort *)(in_EAX + 0x104)) {
        pbVar16 = (byte *)(*(int *)(in_EAX + 0x168) + local_10);
        if (*pbVar16 == 0xff) goto LAB_00492ae5;
        if (*pbVar16 != 0) {
          iVar10 = *(int *)(in_EAX + 0x150);
          uVar13 = (ushort)*(byte *)((uint)pbVar11[-2] + iVar10) * (ushort)*pbVar16 +
                   (0xff - (ushort)*pbVar16) * ((ushort)local_1c & 0xff) + 0x80;
          pbVar11[-2] = *(byte *)(((int)((uint)(uVar13 >> 8) + (uint)uVar13) >> 8 & 0xffU) +
                                 *(int *)(in_EAX + 0x14c));
          uVar13 = (ushort)*(byte *)((uint)pbVar11[-1] + iVar10) * (ushort)*pbVar16 +
                   (0xff - (ushort)*pbVar16) * ((ushort)local_1c >> 8) + 0x80;
          iVar14 = *(int *)(in_EAX + 0x14c);
          pbVar11[-1] = *(byte *)(((int)((uint)(uVar13 >> 8) + (uint)uVar13) >> 8 & 0xffU) + iVar14)
          ;
          uVar13 = (ushort)*(byte *)((uint)*pbVar11 + iVar10) * (ushort)*pbVar16 +
                   (0xff - (ushort)*pbVar16) * (ushort)bVar7 + 0x80;
          bVar8 = *(byte *)(((int)((uint)(uVar13 >> 8) + (uint)uVar13) >> 8 & 0xffU) + iVar14);
          goto LAB_00492b05;
        }
        *(undefined2 *)(pbVar11 + -2) = (undefined2)local_18;
        *pbVar11 = local_18._2_1_;
      }
      else {
LAB_00492ae5:
        iVar10 = *(int *)(in_EAX + 0x144);
        pbVar11[-2] = *(byte *)((uint)pbVar11[-2] + iVar10);
        pbVar11[-1] = *(byte *)((uint)pbVar11[-1] + iVar10);
        bVar8 = *(byte *)((uint)*pbVar11 + iVar10);
LAB_00492b05:
        *pbVar11 = bVar8;
      }
      local_10 = local_10 + 1;
      pbVar11 = pbVar11 + 3;
    } while (local_10 < (int)(uint)uVar12);
  }
  *(uint *)(in_EAX + 0x30) = *(uint *)(in_EAX + 0x30) & 0xffffdf7f;
LAB_00492d3f:
  uVar20 = *(uint *)(in_EAX + 0x30);
  if ((((uVar20 & 8) != 0) && ((uVar20 & 0x1000) == 0)) && (*(char *)(in_EAX + 0x10b) == '\x03')) {
    bVar7 = *(byte *)(in_EAX + 0x15c);
    uVar18 = (uint)*(ushort *)(in_EAX + 0xfc);
    *(uint *)(in_EAX + 0x30) = uVar20 & 0xfffffff7;
    if ((-(uint)bVar7 + 7 < 7) && (uVar18 != 0)) {
      pbVar11 = *(byte **)(in_EAX + 0xf8);
      uVar20 = uVar18;
      do {
        *pbVar11 = *pbVar11 >> ((char)-(uint)bVar7 + 8U & 0x1f);
        pbVar11 = pbVar11 + 3;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    bVar7 = *(byte *)(in_EAX + 0x15d);
    if ((-(uint)bVar7 + 7 < 7) && (uVar18 != 0)) {
      pbVar11 = (byte *)(*(int *)(in_EAX + 0xf8) + 1);
      uVar20 = uVar18;
      do {
        *pbVar11 = *pbVar11 >> ((char)-(uint)bVar7 + 8U & 0x1f);
        pbVar11 = pbVar11 + 3;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    bVar7 = *(byte *)(in_EAX + 0x15e);
    if ((-(uint)bVar7 + 7 < 7) && (uVar18 != 0)) {
      pbVar11 = (byte *)(*(int *)(in_EAX + 0xf8) + 2);
      do {
        *pbVar11 = *pbVar11 >> ((char)-(uint)bVar7 + 8U & 0x1f);
        pbVar11 = pbVar11 + 3;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  return;
}

