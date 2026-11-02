// rea decompile_all
// name: FUN_00021e6c
// address: 0x21e6c
// body: available
// range: 0x21e6c-0x21fc3 inclusive
// range: 0x21fd8-0x2226f inclusive
// range: 0x222f0-0x22529 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_00021e6c(int param_1,int param_2,undefined4 param_3,byte *param_4,int param_5,
                   uint param_6,undefined4 *param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  byte *pbVar20;
  undefined1 auStack_128 [260];
  int iStack_24;
  int local_20;
  undefined4 uStack_1c;
  byte *local_18;
  
  pbVar13 = (byte *)(param_7 + 0x15);
  iStack_24 = param_1;
  local_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  if ((param_7 == (undefined4 *)(param_1 + DAT_00022270)) &&
     (*(char *)(param_1 + DAT_00022274 + 0x10) != '\0')) {
    uVar9 = FUN_0002272c(param_1 + DAT_0002227c,*(int *)(param_1 + DAT_00022278 + 0x10) + 4,
                         param_1 + 0x37);
    FUN_00024642(0,DAT_00022280,uVar9);
  }
  iVar15 = (int)param_7 + DAT_00022284;
  *param_7 = 0;
  param_7[8] = iVar15;
  param_7[0xb] = 0;
  if (param_1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined4 *)(param_1 + 0xdc);
  }
  param_7[0xd] = 0;
  param_7[0xc] = uVar9;
  if (param_1 == 0) {
    uVar9 = 0;
    param_7[0xe] = 0;
  }
  else {
    param_7[0xe] = *(undefined4 *)(param_1 + 0xdc);
    uVar9 = *(undefined4 *)(param_1 + 0xdc);
  }
  param_7[0xf] = uVar9;
  param_7[0x10] = 0;
  param_7[0x11] = 0;
  param_7[0x12] = 0;
  param_7[0x13] = 0;
  param_7[7] = param_5;
  param_7[10] = 0;
  puVar10 = (undefined1 *)FUN_0018a600(local_20,param_3,local_18);
  if (puVar10 == (undefined1 *)0x0) {
    return (byte *)0x0;
  }
  uVar9 = FUN_000209c2(param_7[8]);
  param_7[5] = uVar9;
  pbVar11 = puVar10 + 10;
  if (local_18 < pbVar11) {
    return (byte *)0x0;
  }
  *(ushort *)((int)param_7 + 6) = CONCAT11(*puVar10,puVar10[1]);
  *(ushort *)(param_7 + 2) = CONCAT11(puVar10[2],puVar10[3]) & 0x7fff;
  puVar16 = _DAT_00022288;
  uVar19 = (uint)(byte)puVar10[7] | (uint)(byte)puVar10[4] << 0x18 |
           (uint)(byte)puVar10[5] << 0x10 | (uint)(byte)puVar10[6] << 8;
  param_7[3] = uVar19;
  uVar12 = FUN_00006158(0x70000000,*puVar16);
  if ((uVar12 < uVar19) && (uVar19 != 0xffffffff)) {
    param_7[3] = uVar12;
  }
  uVar1 = puVar10[8];
  uVar2 = puVar10[9];
  uVar12 = (uint)CONCAT11(uVar1,uVar2);
  if (((int)((uint)(byte)puVar10[2] << 0x18) < 0) ||
     ((param_5 == 0 && (-1 < (int)((uint)*(byte *)(local_20 + 2) << 0x1e))))) {
    param_6 = param_6 | 0x10;
  }
  pbVar20 = pbVar11 + uVar12;
  if (local_18 < pbVar20) {
    return (byte *)0x0;
  }
  param_7[9] = param_7 + 0x14;
  *(undefined2 *)(param_7 + 0x14) = 0x2000;
  if (param_6 == 0) {
    FUN_00024642(0,s___GetLargeResourceRecord__No_Rec_0002228a + 2,param_7[8]);
  }
  if ((*(short *)(param_7 + 2) == 0xff) && (uVar12 == 0)) {
    *(undefined2 *)(param_7 + 4) = 0;
    goto LAB_0002202c;
  }
  uVar6 = *(ushort *)((int)param_7 + 6);
  if (uVar6 == 0x14) {
switchD_00021fc2_caseD_a:
    uVar6 = *(ushort *)param_7[9];
joined_r0x0002215c:
    if (uVar12 <= uVar6) {
      *(ushort *)(param_7 + 4) = CONCAT11(uVar1,uVar2);
      FUN_001952f0(pbVar13,pbVar11,uVar12);
      goto LAB_0002202c;
    }
    goto LAB_000224f8;
  }
  if (0x14 < uVar6) {
    if (uVar6 == 0x24) goto switchD_00021fc2_caseD_f;
    if (uVar6 < 0x25) {
      if (uVar6 == 0x1c) {
        if (uVar12 == 0x10) {
          FUN_001952f0(pbVar13,pbVar11,0x10);
          goto LAB_0002202c;
        }
        goto LAB_000224f8;
      }
      if (0x1c < uVar6) {
        if (uVar6 == 0x1d) goto switchD_00021fc2_caseD_a;
        if (uVar6 == 0x21) {
          if (uVar12 < 7) goto LAB_000224f8;
          *(ushort *)pbVar13 = CONCAT11(*pbVar11,puVar10[0xb]);
          *(ushort *)((int)param_7 + 0x56) = CONCAT11(puVar10[0xc],puVar10[0xd]);
          *(undefined1 *)(param_7 + 0x16) = puVar10[0xe];
          *(undefined1 *)((int)param_7 + 0x59) = puVar10[0xf];
          pbVar11 = (byte *)FUN_0018a600(local_20,puVar10 + 0x10,pbVar20,(int)param_7 + 0x5a);
          goto joined_r0x0002221a;
        }
        goto switchD_00021fc2_caseD_0;
      }
      if (uVar6 == 0x15) goto switchD_00021fc2_caseD_f;
      if (uVar6 != 0x1a) goto switchD_00021fc2_caseD_0;
      if (uVar12 < 4) goto LAB_000224f8;
      *(ushort *)pbVar13 = CONCAT11(*pbVar11,puVar10[0xb]);
      iVar15 = FUN_0018a600(local_20,pbVar11,pbVar20,(int)param_7 + 0x56);
      if (iVar15 == 0) goto LAB_000224f8;
      pbVar11 = (byte *)FUN_0018a600(local_20,iVar15,pbVar20,(int)param_7 + 0x156);
      goto joined_r0x0002221a;
    }
    if (uVar6 == 0x2f) {
      pbVar14 = (byte *)FUN_0018a600(local_20,pbVar11,pbVar20,auStack_128);
      if (pbVar14 == (byte *)0x0) {
        if (*_DAT_00022564 != 0) {
          FUN_00024642(3,s___GetLargeResourceRecord__Malfor_00022596 + 2);
        }
        goto LAB_000224f8;
      }
      FUN_001953c4(pbVar13,0x20);
      pbVar11 = pbVar14;
      if (pbVar14 < pbVar20) {
        if (*pbVar14 != 0) goto LAB_000224f8;
        bVar3 = pbVar14[1];
        pbVar11 = pbVar14 + 2;
        if (0x20 < bVar3) goto LAB_000224f8;
        if (bVar3 != 0) {
          pbVar17 = (byte *)((int)param_7 + 0x53);
          if ((bVar3 & 1) != 0) {
            bVar4 = *pbVar11;
            pbVar11 = pbVar14 + 3;
            *pbVar13 = bVar4;
            pbVar17 = pbVar13;
          }
          for (uVar12 = (uint)(bVar3 >> 1); uVar12 != 0; uVar12 = uVar12 - 1) {
            pbVar13 = pbVar11 + 1;
            pbVar17[1] = *pbVar11;
            pbVar17 = pbVar17 + 2;
            pbVar11 = pbVar11 + 2;
            *pbVar17 = *pbVar13;
          }
        }
      }
      goto joined_r0x0002221a;
    }
    if (uVar6 < 0x30) {
      if (uVar6 == 0x27) goto switchD_00021fc2_caseD_2;
      if (uVar6 == 0x29) {
        *(undefined2 *)(param_7 + 4) = 0;
        pbVar13 = (byte *)(param_7[9] + 4);
        while ((pbVar11 < pbVar20 &&
               (pbVar14 = pbVar13 + 0x18, pbVar14 < (byte *)(param_7[9] + DAT_00022560)))) {
          if (pbVar20 < pbVar11 + 4) {
            if (*_DAT_000222bc != 0) {
              FUN_00024642(3,s____GetLargeResourceRecord__OPT_R_000222bd + 3);
            }
            goto LAB_000224f8;
          }
          bVar3 = *pbVar11;
          sVar7 = CONCAT11(bVar3,pbVar11[1]);
          *pbVar13 = pbVar11[1];
          pbVar13[1] = bVar3;
          bVar3 = pbVar11[2];
          pbVar17 = pbVar11 + 4;
          uVar12 = (uint)CONCAT11(bVar3,pbVar11[3]);
          pbVar13[2] = pbVar11[3];
          pbVar13[3] = bVar3;
          if (pbVar20 < pbVar17 + uVar12) {
            if (*_DAT_000222bc != 0) {
              FUN_00024642(3,s_GetLargeResourceRecord__ptr___op_0002252c);
            }
            goto LAB_000224f8;
          }
          pbVar18 = pbVar13;
          if (sVar7 == 1) {
            if (uVar12 == 0x12) {
              bVar3 = *pbVar17;
              pbVar13[4] = pbVar11[5];
              pbVar13[5] = bVar3;
              bVar3 = pbVar11[6];
              pbVar13[6] = pbVar11[7];
              pbVar13[7] = bVar3;
              bVar3 = pbVar11[8];
              pbVar13[8] = pbVar11[9];
              pbVar13[9] = bVar3;
              FUN_001952f0(pbVar13 + 0xc,pbVar11 + 10,8);
              bVar3 = pbVar11[0x12];
              bVar4 = pbVar11[0x14];
              bVar5 = pbVar11[0x13];
              uVar19 = (uint)pbVar11[0x15] | (uint)bVar3 << 0x18 |
                       (uint)bVar5 << 0x10 | (uint)bVar4 << 8;
              pbVar13[0x14] = pbVar11[0x15];
              pbVar13[0x15] = bVar4;
              pbVar13[0x16] = bVar5;
              pbVar13[0x17] = bVar3;
              uVar12 = FUN_00006158(0x70000000,*DAT_0002255c);
              if (uVar19 <= uVar12) {
                uVar12 = uVar19;
              }
              pbVar13[0x14] = (byte)uVar12;
              pbVar13[0x15] = (byte)(uVar12 >> 8);
              pbVar13[0x16] = (byte)(uVar12 >> 0x10);
              pbVar13[0x17] = (byte)(uVar12 >> 0x18);
              pbVar18 = pbVar14;
            }
          }
          else if (sVar7 == 2) {
            if (uVar12 == 4) {
              bVar3 = *pbVar17;
              bVar4 = pbVar11[6];
              bVar5 = pbVar11[5];
              uVar19 = (uint)pbVar11[7] | (uint)bVar3 << 0x18 |
                       (uint)bVar5 << 0x10 | (uint)bVar4 << 8;
              pbVar13[4] = pbVar11[7];
              pbVar13[5] = bVar4;
              pbVar13[6] = bVar5;
              pbVar13[7] = bVar3;
              uVar12 = FUN_00006158(0x70000000,*DAT_0002255c);
              if (uVar19 <= uVar12) {
                uVar12 = uVar19;
              }
              pbVar13[4] = (byte)uVar12;
              pbVar13[5] = (byte)(uVar12 >> 8);
              pbVar13[6] = (byte)(uVar12 >> 0x10);
              pbVar13[7] = (byte)(uVar12 >> 0x18);
              pbVar18 = pbVar14;
            }
          }
          else if ((sVar7 == 4) &&
                  ((((uVar12 == 8 || (uVar12 == 0xe)) || (uVar12 == 0x12)) || (uVar12 == 0x14)))) {
            pbVar13[4] = *pbVar17;
            pbVar13[5] = pbVar11[5];
            FUN_001952f0(pbVar13 + 6,pbVar11 + 6,6);
            FUN_001952f0(pbVar13 + 0xc,pbVar11 + 6,6);
            FUN_0016d964(pbVar13 + 0x12,_DAT_00022594);
            pbVar18 = pbVar14;
            if (0xd < *(ushort *)(pbVar13 + 2)) {
              FUN_001952f0(pbVar13 + 0xc,pbVar11 + 0xc,6);
              if (0xe < *(ushort *)(pbVar13 + 2)) {
                FUN_001952f0(pbVar13 + 0x12,pbVar11 + 0x12,*(ushort *)(pbVar13 + 2) - 0xe);
              }
            }
          }
          pbVar11 = pbVar17 + *(ushort *)(pbVar13 + 2);
          pbVar13 = pbVar18;
        }
        *(short *)(param_7 + 4) = ((short)pbVar13 - (short)param_7[9]) + -4;
        if (pbVar11 == pbVar20) goto LAB_0002202c;
        if (*_DAT_00022564 != 0) {
          FUN_00024642(3,s____GetLargeResourceRecord__Malfo_00022565 + 3);
        }
        goto LAB_000224f8;
      }
    }
    else if ((uVar6 == 0x31) || (uVar6 == 0xfa)) goto switchD_00021fc2_caseD_a;
switchD_00021fc2_caseD_0:
    uVar6 = *(ushort *)param_7[9];
    goto joined_r0x0002215c;
  }
  switch(uVar6) {
  default:
    goto switchD_00021fc2_caseD_0;
  case 1:
    if (uVar12 != 4) goto LAB_000224f8;
    *pbVar13 = *pbVar11;
    *(undefined1 *)((int)param_7 + 0x55) = puVar10[0xb];
    *(undefined1 *)((int)param_7 + 0x56) = puVar10[0xc];
    *(undefined1 *)((int)param_7 + 0x57) = puVar10[0xd];
    goto LAB_0002202c;
  case 2:
  case 5:
  case 0xc:
switchD_00021fc2_caseD_2:
    pbVar13 = (byte *)FUN_0018a600(local_20,pbVar11,pbVar20,pbVar13);
    break;
  case 6:
    iVar15 = FUN_0018a600(local_20,pbVar11,pbVar20,pbVar13);
    if (((iVar15 == 0) ||
        (pbVar13 = (byte *)FUN_0018a600(local_20,iVar15,pbVar20,param_7 + 0x55),
        pbVar13 == (byte *)0x0)) || (pbVar13 + 0x14 != pbVar20)) goto LAB_000224f8;
    param_7[0x95] =
         (uint)pbVar13[3] | (uint)*pbVar13 << 0x18 |
         (uint)pbVar13[1] << 0x10 | (uint)pbVar13[2] << 8;
    param_7[0x96] =
         (uint)pbVar13[7] | (uint)pbVar13[4] << 0x18 |
         (uint)pbVar13[5] << 0x10 | (uint)pbVar13[6] << 8;
    param_7[0x97] =
         (uint)pbVar13[0xb] | (uint)pbVar13[8] << 0x18 |
         (uint)pbVar13[9] << 0x10 | (uint)pbVar13[10] << 8;
    param_7[0x98] =
         (uint)pbVar13[0xf] | (uint)pbVar13[0xc] << 0x18 |
         (uint)pbVar13[0xd] << 0x10 | (uint)pbVar13[0xe] << 8;
    param_7[0x99] =
         (uint)pbVar13[0x13] | (uint)pbVar13[0x10] << 0x18 |
         (uint)pbVar13[0x11] << 0x10 | (uint)pbVar13[0x12] << 8;
    goto LAB_0002202c;
  case 10:
  case 0xd:
  case 0x10:
  case 0x13:
    goto switchD_00021fc2_caseD_a;
  case 0xf:
  case 0x12:
switchD_00021fc2_caseD_f:
    if (uVar12 < 3) goto LAB_000224f8;
    *(ushort *)pbVar13 = CONCAT11(*pbVar11,puVar10[0xb]);
    pbVar11 = (byte *)FUN_0018a600(local_20,puVar10 + 0xc,pbVar20,(int)param_7 + 0x56);
joined_r0x0002221a:
    if (pbVar11 == pbVar20) goto LAB_0002202c;
    goto LAB_000224f8;
  case 0x11:
    iVar15 = FUN_0018a600(local_20,pbVar11,pbVar20,pbVar13);
    if (iVar15 == 0) goto LAB_000224f8;
    pbVar13 = (byte *)FUN_0018a600(local_20,iVar15,pbVar20,param_7 + 0x55);
  }
  if (pbVar13 != pbVar20) {
LAB_000224f8:
    *(undefined1 *)(param_7 + 1) = 0xf0;
    *(undefined2 *)(param_7 + 4) = 0;
    *(undefined2 *)((int)param_7 + 0x12) = 0;
    param_7[6] = 0;
    return pbVar20;
  }
LAB_0002202c:
  sVar7 = *(short *)((int)param_7 + 6);
  puVar16 = param_7 + 1;
  if (((sVar7 == 2) || (sVar7 == 5)) || ((sVar7 == 0xc || (sVar7 == 0x27)))) {
    iVar15 = param_7[9] + 4;
  }
  else if ((((sVar7 == 0xf) || (sVar7 == 0x12)) || (sVar7 == 0x15)) || (sVar7 == 0x24)) {
    iVar15 = param_7[9] + 6;
  }
  else if (sVar7 == 0x21) {
    iVar15 = param_7[9] + 10;
  }
  else {
    iVar15 = 0;
  }
  uVar8 = FUN_000225de(puVar16,0);
  *(undefined2 *)(param_7 + 4) = uVar8;
  uVar8 = FUN_000225de(puVar16,1);
  *(undefined2 *)((int)param_7 + 0x12) = uVar8;
  if (iVar15 == 0) {
    uVar9 = FUN_000393b4(puVar16);
  }
  else {
    uVar9 = FUN_000209c2(iVar15);
  }
  param_7[6] = uVar9;
  *(char *)(param_7 + 1) = (char)param_6;
  return pbVar20;
}

