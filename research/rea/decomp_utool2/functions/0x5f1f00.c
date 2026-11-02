// rea decompile_all
// name: FUN_005f1f00
// address: 0x5f1f00
// body: available
// range: 0x5f1f00-0x5f2cea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f1f00(void)

{
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  int *in_ECX;
  int iVar12;
  byte *pbVar13;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint uVar14;
  char *pcVar15;
  bool bVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined4 in_stack_00000014;
  int iVar19;
  uint uVar20;
  int iVar21;
  int local_c0;
  
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  piVar6 = (int *)*in_ECX;
  if (*piVar6 != 1) {
    __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar20 = piVar6[6];
  if ((uVar20 == 0) || (8 < uVar20)) {
    __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (uVar20 == 2) {
    if (piVar6[4] == 0) goto LAB_005f1f5f;
  }
  else {
    piVar6[4] = 0;
    piVar6 = (int *)*in_ECX;
LAB_005f1f5f:
    piVar6[5] = 0;
  }
  if (0x1f < *(uint *)(*in_ECX + 0x1c)) {
    *(undefined4 *)(*in_ECX + 0x10) = 0;
  }
  if ((*(uint *)(*in_ECX + 0x1c) < 4) || (0x18 < *(uint *)(*in_ECX + 0x1c))) {
    __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar17 = FUN_005fca00();
  iVar9 = (int)((ulonglong)uVar17 >> 0x20);
  if ((int)uVar17 == 0) {
    __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (*(int *)(iVar9 + 0x24) == 0) {
    uVar7 = 0x1000;
    if (*(int *)(iVar9 + 0x22c) == 0) {
      uVar7 = 0x480;
    }
    *(undefined4 *)(iVar9 + 0x24) = uVar7;
  }
  iVar9 = *in_ECX;
  uVar20 = *(uint *)(iVar9 + 0x24);
  if ((uVar20 < 0x10) || (0xffff < uVar20)) {
    __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (0x20 < *(uint *)(iVar9 + 0x22c)) {
    __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (uVar20 < *(uint *)(iVar9 + 0x22c)) {
    __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar14 = *(uint *)(iVar9 + 0x230);
  if (uVar14 == 0) {
    uVar14 = *(uint *)(iVar9 + 0x1c);
    if (uVar14 < 0x10) {
      uVar14 = (uVar14 >> 1) + 2;
      uVar20 = 5;
      if (5 < uVar14) {
        uVar20 = uVar14;
      }
      *(uint *)(iVar9 + 0x230) = uVar20;
    }
    else if (uVar14 == 0x10) {
      if (uVar20 < 0xc1) {
        *(undefined4 *)(iVar9 + 0x230) = 7;
      }
      else if (uVar20 < 0x181) {
        *(undefined4 *)(iVar9 + 0x230) = 8;
      }
      else if (uVar20 < 0x241) {
        *(undefined4 *)(iVar9 + 0x230) = 9;
      }
      else if (uVar20 < 0x481) {
        *(undefined4 *)(iVar9 + 0x230) = 10;
      }
      else if (uVar20 < 0x901) {
        *(undefined4 *)(iVar9 + 0x230) = 0xb;
      }
      else {
        *(uint *)(iVar9 + 0x230) = (0x1200 < uVar20) + 0xc;
      }
    }
    else if (uVar20 < 0x181) {
      *(undefined4 *)(iVar9 + 0x230) = 0xd;
    }
    else {
      *(uint *)(iVar9 + 0x230) = (0x480 < uVar20) + 0xe;
    }
  }
  else if ((uVar14 < 5) || (0xf < uVar14)) {
    __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar9 = *in_ECX;
  if (*(int *)(iVar9 + 8) != 0) {
    uVar20 = *(uint *)(iVar9 + 0x20);
    iVar8 = FUN_005fc9d0();
    if (((((iVar8 == 0) || (iVar8 = FUN_005fc980(), iVar8 == 0)) ||
         ((iVar8 = *(int *)(iVar9 + 0x1c), iVar8 != 8 &&
          ((((iVar8 != 0xc && (iVar8 != 0x10)) && (iVar8 != 0x14)) && (iVar8 != 0x18)))))) ||
        (8 < *(uint *)(iVar9 + 0x244))) ||
       ((uVar20 < 0xbb81 && ((0x1200 < *(uint *)(iVar9 + 0x24) || (0xc < *(uint *)(iVar9 + 0x22c))))
        ))) {
      __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  if (0xf < *(uint *)(iVar9 + 0x244)) {
    *(undefined4 *)(iVar9 + 0x244) = 0xf;
  }
  iVar9 = *in_ECX;
  if (*(uint *)(iVar9 + 0x244) <= *(uint *)(iVar9 + 0x240)) {
    *(uint *)(iVar9 + 0x240) = *(uint *)(iVar9 + 0x244);
  }
  iVar9 = *(int *)(*in_ECX + 600);
  if (((iVar9 != 0) && (uVar20 = *(uint *)(*in_ECX + 0x25c), uVar20 != 0)) &&
     (uVar14 = 0, uVar20 != 0)) {
    do {
      piVar6 = *(int **)(iVar9 + uVar14 * 4);
      if ((piVar6 != (int *)0x0) && (*piVar6 == 3)) {
        *(int **)(in_ECX[1] + 0x1b88) = piVar6 + 4;
        break;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar20);
  }
  iVar9 = *in_ECX;
  if ((*(int *)(iVar9 + 600) == 0) && (*(int *)(iVar9 + 0x25c) != 0)) {
LAB_005f21f3:
    __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar12 = 0;
  bVar3 = false;
  bVar4 = false;
  local_c0 = 0;
  iVar8 = 0;
  iVar21 = 0;
  uVar20 = 0;
  if (*(int *)(iVar9 + 0x25c) != 0) {
    do {
      piVar6 = *(int **)(*(int *)(iVar9 + 600) + uVar20 * 4);
      iVar9 = *piVar6;
      if (iVar9 == 0) goto LAB_005f21f3;
      if (iVar9 == 3) {
        if (bVar3) goto LAB_005f21f3;
        bVar3 = true;
        bVar4 = true;
        iVar9 = FUN_005fc8f0();
joined_r0x005f22aa:
        iVar12 = local_c0;
        if (iVar9 == 0) goto LAB_005f21f3;
      }
      else if (iVar9 == 4) {
        if (iVar12 != 0) goto LAB_005f21f3;
        local_c0 = 1;
        iVar12 = 1;
      }
      else {
        if (iVar9 == 5) {
          iVar9 = FUN_005fc4a0(iVar12);
          goto joined_r0x005f22aa;
        }
        if (iVar9 == 6) {
          iVar9 = FUN_005fc300();
          if (iVar9 == 0) goto LAB_005f21f3;
          bVar3 = bVar4;
          if (piVar6[4] == 1) {
            if (iVar8 != 0) goto LAB_005f21f3;
            pcVar15 = "image/png";
            pbVar10 = (byte *)piVar6[5];
            pbVar13 = pbVar10;
            do {
              bVar2 = *pbVar13;
              bVar16 = bVar2 < (byte)*pcVar15;
              if (bVar2 != *pcVar15) {
LAB_005f2318:
                uVar14 = -(uint)bVar16 | 1;
                goto LAB_005f231d;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar13[1];
              bVar16 = bVar2 < (byte)pcVar15[1];
              if (bVar2 != pcVar15[1]) goto LAB_005f2318;
              pbVar13 = pbVar13 + 2;
              pcVar15 = pcVar15 + 2;
            } while (bVar2 != 0);
            uVar14 = 0;
LAB_005f231d:
            if (uVar14 != 0) {
              pbVar13 = &DAT_00a93000;
              do {
                bVar2 = *pbVar10;
                bVar16 = bVar2 < *pbVar13;
                if (bVar2 != *pbVar13) {
LAB_005f2346:
                  uVar14 = -(uint)bVar16 | 1;
                  goto LAB_005f234b;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar10[1];
                bVar16 = bVar2 < pbVar13[1];
                if (bVar2 != pbVar13[1]) goto LAB_005f2346;
                pbVar10 = pbVar10 + 2;
                pbVar13 = pbVar13 + 2;
              } while (bVar2 != 0);
              uVar14 = 0;
LAB_005f234b:
              if (uVar14 != 0) goto LAB_005f21f3;
            }
            if ((piVar6[7] != 0x20) || (piVar6[8] != 0x20)) goto LAB_005f21f3;
            iVar8 = 1;
            iVar12 = local_c0;
          }
          else {
            iVar12 = local_c0;
            if (piVar6[4] == 2) {
              if (iVar21 != 0) goto LAB_005f21f3;
              iVar21 = 1;
            }
          }
        }
      }
      iVar9 = *in_ECX;
      uVar20 = uVar20 + 1;
    } while (uVar20 < *(uint *)(iVar9 + 0x25c));
  }
  uVar20 = 0;
  *(undefined4 *)in_ECX[1] = 0;
  if (*(int *)(*in_ECX + 0x18) != 0) {
    iVar9 = 0x2c;
    do {
      iVar21 = iVar9 + 4;
      uVar20 = uVar20 + 1;
      *(undefined4 *)(in_ECX[1] + -0x2c + iVar21) = 0;
      *(undefined4 *)(in_ECX[1] + 0x1c68 + iVar21) = 0;
      *(undefined4 *)(iVar9 + in_ECX[1]) = 0;
      *(undefined4 *)(in_ECX[1] + 0x1c90 + iVar21) = 0;
      iVar9 = iVar21;
    } while (uVar20 < *(uint *)(*in_ECX + 0x18));
  }
  uVar20 = 0;
  *(undefined4 *)(in_ECX[1] + 0x24) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1cb8) = 0;
  *(undefined4 *)(in_ECX[1] + 0x4c) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1ce0) = 0;
  *(undefined4 *)(in_ECX[1] + 0x28) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1cbc) = 0;
  *(undefined4 *)(in_ECX[1] + 0x50) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1ce4) = 0;
  if (*(int *)(*in_ECX + 0x28) != 0) {
    iVar9 = 0x1ce8;
    do {
      uVar20 = uVar20 + 1;
      *(undefined4 *)(iVar9 + -0x1c94 + in_ECX[1]) = 0;
      *(undefined4 *)(iVar9 + in_ECX[1]) = 0;
      iVar9 = iVar9 + 4;
    } while (uVar20 < *(uint *)(*in_ECX + 0x28));
  }
  uVar20 = 0;
  *(undefined4 *)(in_ECX[1] + 0xd4) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1d68) = 0;
  if (*(int *)(*in_ECX + 0x18) != 0) {
    iVar9 = 0x1a70;
    do {
      *(undefined4 *)(in_ECX[1] + 0x100 + uVar20 * 8) = 0;
      *(undefined4 *)(in_ECX[1] + 0x1d6c + uVar20 * 8) = 0;
      *(undefined4 *)(in_ECX[1] + 0x104 + uVar20 * 8) = 0;
      *(undefined4 *)(in_ECX[1] + 0x1d70 + uVar20 * 8) = 0;
      uVar20 = uVar20 + 1;
      *(undefined4 *)(iVar9 + in_ECX[1]) = 0;
      iVar9 = iVar9 + 4;
    } while (uVar20 < *(uint *)(*in_ECX + 0x18));
  }
  *(undefined4 *)(in_ECX[1] + 0x140) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1dac) = 0;
  *(undefined4 *)(in_ECX[1] + 0x144) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1db0) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1a90) = 0;
  *(undefined4 *)(in_ECX[1] + 0x148) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1db4) = 0;
  *(undefined4 *)(in_ECX[1] + 0x14c) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1db8) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1a94) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1ac0) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1dbc) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1ac4) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1dc0) = 0;
  uVar7 = FUN_006f55c1();
  *(undefined4 *)(in_ECX[1] + 0x1acc) = uVar7;
  if (*(int *)(in_ECX[1] + 0x1acc) == 0) {
    *(undefined4 *)(in_ECX[1] + 0x1acc) = 1;
  }
  *(undefined4 *)(in_ECX[1] + 0x1ad0) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1b8c) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1b90) = 0;
  puVar1 = (uint *)(*in_ECX + 0x24);
  iVar9 = 0x1f;
  if (*puVar1 != 0) {
    for (; *puVar1 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  *(uint *)(in_ECX[1] + 0x1c44) = (uint)(0x1e < (uint)(iVar9 + 1 + *(int *)(*in_ECX + 0x1c)));
  uVar20 = *(uint *)(*in_ECX + 0x22c);
  if (uVar20 < 4) {
    uVar20 = 4;
  }
  iVar21 = 0x1f;
  if (uVar20 != 0) {
    for (; uVar20 >> iVar21 == 0; iVar21 = iVar21 + -1) {
    }
  }
  *(uint *)(in_ECX[1] + 0x1c4c) = (uint)(0x1e < (uint)(iVar21 + 1 + *(int *)(*in_ECX + 0x1c)));
  *(undefined4 *)(in_ECX[1] + 0x1c48) = 0;
  FUN_005fd830();
  *(code **)(in_ECX[1] + 0x1c34) = FUN_005fbd10;
  *(code **)(in_ECX[1] + 0x1c28) = FUN_005ee730;
  *(code **)(in_ECX[1] + 0x1c2c) = FUN_005fd3c0;
  *(code **)(in_ECX[1] + 0x1c30) = FUN_005fcf40;
  *(code **)(in_ECX[1] + 0x1c38) = FUN_005fb0e0;
  *(code **)(in_ECX[1] + 0x1c3c) = FUN_005fa030;
  *(code **)(in_ECX[1] + 0x1c40) = FUN_005fb0e0;
  iVar12 = in_ECX[1];
  if (*(int *)(iVar12 + 0x1c44) != 0) {
    *(undefined4 *)(iVar12 + 0x1c2c) = *(undefined4 *)(iVar12 + 0x1c30);
  }
  *(undefined4 *)*in_ECX = 0;
  *(undefined4 *)(in_ECX[1] + 0x1c5c) = 0;
  *(code **)(in_ECX[1] + 0x1c68) = FUN_0043a3d0;
  *(code **)(in_ECX[1] + 0x1c60) = FUN_0043a400;
  *(code **)(in_ECX[1] + 0x1c64) = FUN_0043a410;
  *(code **)(in_ECX[1] + 0x1c6c) = FUN_0043a440;
  *(undefined4 *)(in_ECX[1] + 0x1c74) = in_stack_00000014;
  uVar17 = FUN_005f0580();
  uVar7 = (undefined4)((ulonglong)uVar17 >> 0x20);
  if ((int)uVar17 != 0) {
    piVar6 = *(int **)(in_ECX[1] + 0x1ac8);
    piVar6[4] = 0;
    piVar6[3] = 0;
    piVar6[2] = 0x2000;
    uVar17 = FUN_004c554b(0x8000);
    uVar7 = (undefined4)((ulonglong)uVar17 >> 0x20);
    *piVar6 = (int)uVar17;
    if ((int)uVar17 == 0) {
      puVar11 = (undefined4 *)*in_ECX;
LAB_005f27cf:
      *puVar11 = 8;
      goto LAB_005f27d5;
    }
    if (*(int *)(*in_ECX + 4) != 0) {
      uVar20 = 0;
      *(int *)(in_ECX[1] + 0x2e0c) = *(int *)(*in_ECX + 0x24) + 1;
      if (*(int *)(*in_ECX + 0x18) != 0) {
        iVar12 = 0x2dec;
        do {
          uVar14 = *(uint *)(in_ECX[1] + 0x2e0c);
          if (uVar14 == 0) {
            iVar19 = 1;
LAB_005f283b:
            lVar18 = FUN_004c554b(iVar19);
          }
          else {
            if (3 < (uint)(0xffffffff / (ulonglong)uVar14)) {
              iVar19 = uVar14 * 4;
              goto LAB_005f283b;
            }
            lVar18 = 0xffffffffU % (ulonglong)uVar14 << 0x20;
          }
          uVar7 = (undefined4)((ulonglong)lVar18 >> 0x20);
          *(int *)(iVar12 + in_ECX[1]) = (int)lVar18;
          puVar11 = (undefined4 *)*in_ECX;
          if ((int)lVar18 == 0) goto LAB_005f27cf;
          uVar20 = uVar20 + 1;
          iVar12 = iVar12 + 4;
        } while (uVar20 < (uint)puVar11[6]);
      }
      *(undefined4 *)(in_ECX[1] + 0x2e10) = 0;
      if (*(int *)(in_ECX[1] + 0x2de0) == 0) {
        uVar7 = FUN_005f71e0();
        *(undefined4 *)(in_ECX[1] + 0x2de0) = uVar7;
        if (*(int *)(in_ECX[1] + 0x2de0) == 0) goto LAB_005f2891;
      }
      iVar12 = FUN_005f6fb0(0,0,0,0,FUN_005ee010,&DAT_005ee000,FUN_005edff0);
      if (iVar12 != 0) {
LAB_005f2891:
        *(undefined4 *)*in_ECX = 3;
        __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    iVar12 = in_ECX[1];
    *(undefined4 *)(iVar12 + 0x2e20) = 0;
    *(undefined4 *)(iVar12 + 0x2e24) = 0;
    *(undefined4 *)(in_ECX[1] + 0x2e28) = 0;
    *(undefined4 *)(in_ECX[1] + 0x2e2c) = 0;
    *(undefined4 *)(in_ECX[1] + 0x2e30) = 0;
    *(undefined4 *)(in_ECX[1] + 0x2e34) = 0;
    *(undefined4 *)(in_ECX[1] + 0x2e38) = 0;
    *(undefined4 *)(in_ECX[1] + 0x1c78) = 0;
    iVar12 = in_ECX[1];
    *(undefined4 *)(iVar12 + 0x1c88) = 0;
    *(undefined4 *)(iVar12 + 0x1c8c) = 0;
    iVar12 = *in_ECX;
    *(undefined4 *)(iVar12 + 0x260) = 0;
    *(undefined4 *)(iVar12 + 0x264) = 0;
    iVar12 = *in_ECX;
    *(undefined4 *)(iVar12 + 0x268) = 0;
    *(undefined4 *)(iVar12 + 0x26c) = 0;
    iVar12 = *in_ECX;
    *(undefined4 *)(iVar12 + 0x270) = 0;
    *(undefined4 *)(iVar12 + 0x274) = 0;
    if (*(int *)(*in_ECX + 4) != 0) {
      *(undefined4 *)(in_ECX[1] + 0x2de4) = 0;
    }
    iVar12 = FUN_00439660(0x20);
    if (iVar12 == 0) {
LAB_005f29d1:
      *(undefined4 *)*in_ECX = 7;
      __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
      return;
    }
    uVar17 = FUN_005f0450(extraout_ECX);
    uVar7 = (undefined4)((ulonglong)uVar17 >> 0x20);
    if ((int)uVar17 != 0) {
      if (*(int *)(*in_ECX + 4) != 0) {
        *(undefined4 *)(in_ECX[1] + 0x2de4) = 1;
      }
      *(undefined4 *)(in_ECX[1] + 0x1ad8) = 0;
      *(undefined4 *)(in_ECX[1] + 0x1adc) = 0;
      *(undefined4 *)(in_ECX[1] + 0x1ae0) = 0x22;
      *(undefined4 *)(in_ECX[1] + 0x1ae8) = *(undefined4 *)(*in_ECX + 0x24);
      *(undefined4 *)(in_ECX[1] + 0x1aec) = *(undefined4 *)(*in_ECX + 0x24);
      *(undefined4 *)(in_ECX[1] + 0x1af0) = 0;
      *(undefined4 *)(in_ECX[1] + 0x1af4) = 0;
      *(undefined4 *)(in_ECX[1] + 0x1af8) = *(undefined4 *)(*in_ECX + 0x20);
      *(undefined4 *)(in_ECX[1] + 0x1afc) = *(undefined4 *)(*in_ECX + 0x18);
      *(undefined4 *)(in_ECX[1] + 0x1b00) = *(undefined4 *)(*in_ECX + 0x1c);
      iVar12 = *in_ECX;
      iVar19 = in_ECX[1];
      *(undefined4 *)(iVar19 + 0x1b08) = *(undefined4 *)(iVar12 + 0x250);
      *(undefined4 *)(iVar19 + 0x1b0c) = *(undefined4 *)(iVar12 + 0x254);
      iVar12 = in_ECX[1];
      *(undefined4 *)(iVar12 + 0x1b10) = 0;
      *(undefined4 *)(iVar12 + 0x1b14) = 0;
      *(undefined4 *)(iVar12 + 0x1b18) = 0;
      *(undefined4 *)(iVar12 + 0x1b1c) = 0;
      if (*(int *)(*in_ECX + 0xc) != 0) {
        FUN_005f7f20();
      }
      iVar12 = FUN_005ed9e0();
      if (iVar12 == 0) goto LAB_005f29d1;
      uVar17 = FUN_005f0450(extraout_ECX_00);
      uVar7 = (undefined4)((ulonglong)uVar17 >> 0x20);
      if ((int)uVar17 != 0) {
        *(undefined4 *)(in_ECX[1] + 0x1af0) = 0xffffff;
        iVar12 = in_ECX[1];
        *(undefined4 *)(iVar12 + 0x1b08) = 0;
        *(undefined4 *)(iVar12 + 0x1b0c) = 0;
        if (local_c0 == 0) {
          iVar12 = FUN_005ed9e0();
          if (iVar12 == 0) goto LAB_005f29d1;
          uVar17 = FUN_005f0450(extraout_ECX_01);
          uVar7 = (undefined4)((ulonglong)uVar17 >> 0x20);
          if ((int)uVar17 == 0) goto LAB_005f27d5;
        }
        iVar12 = *in_ECX;
        uVar14 = 0;
        uVar20 = *(uint *)(iVar12 + 0x25c);
        if (uVar20 != 0) {
          do {
            *(uint *)(*(int *)(*(int *)(iVar12 + 600) + uVar14 * 4) + 4) =
                 (uint)(uVar14 == uVar20 - 1);
            iVar12 = FUN_005ed9e0();
            if (iVar12 == 0) goto LAB_005f29d1;
            uVar17 = FUN_005f0450(extraout_ECX_02);
            uVar7 = (undefined4)((ulonglong)uVar17 >> 0x20);
            if ((int)uVar17 == 0) goto LAB_005f27d5;
            iVar12 = *in_ECX;
            uVar14 = uVar14 + 1;
            uVar20 = *(uint *)(iVar12 + 0x25c);
          } while (uVar14 < uVar20);
        }
        if ((*(code **)(in_ECX[1] + 0x1c64) != (code *)0x0) &&
           (iVar9 = (**(code **)(in_ECX[1] + 0x1c64))(), iVar9 == 1)) {
          *(undefined4 *)*in_ECX = 5;
          __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (*(int *)(*in_ECX + 4) != 0) {
          *(undefined4 *)(in_ECX[1] + 0x2de4) = 2;
        }
        __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
LAB_005f27d5:
  __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc,uVar7,iVar8,iVar9,iVar21);
  return;
}

