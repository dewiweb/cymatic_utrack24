// rea decompile_all
// name: FUN_001fbf7c
// address: 0x1fbf7c
// body: available
// range: 0x1fbf7c-0x1fc323 inclusive
// range: 0x1fc3d8-0x1fc7e1 inclusive
// range: 0x1fc91c-0x1fcb87 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fbf96 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fc120 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fc17a to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fc270 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fc2c2 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fc40e to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fc41e to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fc43a to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fc472 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fc492 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fc586 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1fc6da to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Li
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001fbf7c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  byte *pbVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  ushort uVar12;
  int iVar13;
  undefined1 uVar14;
  int iVar15;
  short *psVar16;
  int *piVar17;
  int iVar18;
  ushort *puVar19;
  int *piVar20;
  int *piVar21;
  
  if (*(byte *)(param_1 + 0x18) < 4) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001fc344,
                 s___tcp_receive__wrong_state_001fc326 + 2,0x368,_DAT_001fc324);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  if ((int)((uint)*DAT_001fc378 << 0x1b) < 0) {
    puVar19 = (ushort *)(param_1 + 0x60);
    uVar12 = *puVar19;
    iVar15 = *(int *)(param_1 + 0x58);
    iVar18 = *(int *)(DAT_001fc378 + 0xc);
    iVar7 = *(int *)(DAT_001fc378 + 0x10);
    iVar13 = *(int *)(DAT_001fc378 + 4);
    if (((*(int *)(param_1 + 0x54) - iVar18 < 0) ||
        ((*(int *)(param_1 + 0x54) == iVar18 && (iVar15 - iVar7 < 0)))) ||
       ((iVar15 == iVar7 && ((uint)uVar12 < (uint)*(ushort *)(iVar13 + 0xe))))) {
      uVar2 = *(ushort *)(iVar13 + 0xe);
      *puVar19 = uVar2;
      if (*(ushort *)(param_1 + 0x62) < *(ushort *)(iVar13 + 0xe)) {
        *(ushort *)(param_1 + 0x62) = *(ushort *)(iVar13 + 0xe);
      }
      *(int *)(param_1 + 0x54) = iVar18;
      *(int *)(param_1 + 0x58) = iVar7;
      if (uVar2 == 0) {
        if (*(char *)(param_1 + 0x95) == '\0') {
          *(undefined1 *)(param_1 + 0x94) = 0;
          uVar14 = 1;
          goto LAB_001fc006;
        }
      }
      else if (*(char *)(param_1 + 0x95) != '\0') {
        uVar14 = 0;
LAB_001fc006:
        *(undefined1 *)(param_1 + 0x95) = uVar14;
      }
    }
    pbVar4 = DAT_001fc378;
    psVar16 = (short *)(param_1 + 0x40);
    iVar13 = iVar7 - *(int *)(param_1 + 0x48);
    if (iVar13 < 1) {
      *(undefined2 *)(param_1 + 100) = 0;
      if ((((*(short *)(pbVar4 + 2) == 0) &&
           (*(int *)(param_1 + 0x58) + (uint)*puVar19 == (uint)uVar12 + iVar15)) &&
          (-1 < *(short *)(param_1 + 0x34))) && (*(int *)(param_1 + 0x48) == iVar7)) {
        bVar1 = *(byte *)(param_1 + 0x47);
        if (bVar1 < (byte)(bVar1 + 1)) {
          *(byte *)(param_1 + 0x47) = bVar1 + 1;
        }
        if (*(byte *)(param_1 + 0x47) < 4) {
          if (*(byte *)(param_1 + 0x47) == 3) {
            FUN_001fcdc4(param_1);
          }
        }
        else {
          uVar12 = *(ushort *)(param_1 + 0x4c) + *(short *)(param_1 + 0x36);
          if (*(ushort *)(param_1 + 0x4c) < uVar12) {
            *(ushort *)(param_1 + 0x4c) = uVar12;
          }
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x47) = 0;
      }
    }
    else if ((iVar13 + -1 < 0) || (0 < iVar7 - *(int *)(param_1 + 0x50))) {
      *(undefined2 *)(param_1 + 100) = 0;
    }
    else {
      if ((int)((uint)*(byte *)(param_1 + 0x1e) << 0x1d) < 0) {
        *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) & 0xfb;
        *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(param_1 + 0x4e);
      }
      *(undefined1 *)(param_1 + 0x46) = 0;
      *(short *)(param_1 + 0x44) = (*psVar16 >> 3) + *(short *)(param_1 + 0x42);
      *(short *)(param_1 + 100) = (short)iVar13;
      *(short *)(param_1 + 0x66) = *(short *)(param_1 + 0x66) + (short)iVar13;
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(int *)(param_1 + 0x48) = iVar7;
      uVar12 = *(ushort *)(param_1 + 0x4c);
      if (uVar12 < *(ushort *)(param_1 + 0x4e)) {
        sVar6 = *(short *)(param_1 + 0x36);
      }
      else {
        sVar6 = FUN_00003e14((uint)*(ushort *)(param_1 + 0x36) * (uint)*(ushort *)(param_1 + 0x36),
                             uVar12);
      }
      if (uVar12 < (ushort)(sVar6 + uVar12)) {
        *(ushort *)(param_1 + 0x4c) = sVar6 + uVar12;
      }
      while (puVar8 = *(undefined4 **)(param_1 + 0x70), puVar8 != (undefined4 *)0x0) {
        while( true ) {
          iVar7 = puVar8[3];
          if (0 < (int)((((uint)CONCAT12(*(undefined1 *)(iVar7 + 5),
                                         CONCAT11(*(undefined1 *)(iVar7 + 6),
                                                  *(undefined1 *)(iVar7 + 7))) |
                         (uint)*(uint3 *)(iVar7 + 4) << 0x18) +
                         (uint)((*(ushort *)(iVar7 + 0xc) >> 8 & 3) != 0) +
                        (uint)*(ushort *)(puVar8 + 2)) - *(int *)(pbVar4 + 0x10))) {
            uVar5 = 0;
            goto LAB_001fc1dc;
          }
          *(undefined4 *)(param_1 + 0x70) = *puVar8;
          uVar9 = FUN_001f0c7c(puVar8[1]);
          if (*(ushort *)(param_1 + 0x68) < uVar9) {
            FUN_00013290(s_Assertion___s__failed_at_line__d_001fc344,
                         s_pcb_>snd_queuelen_>__pbuf_clen_n_001fc380,DAT_001fc37c,_DAT_001fc324);
                    /* WARNING: Subroutine does not return */
            FUN_00003538();
          }
          if ((*(short *)(param_1 + 100) != 0) && ((*(byte *)(puVar8[3] + 0xd) & 1) != 0)) {
            *(short *)(param_1 + 100) = *(short *)(param_1 + 100) + -1;
          }
          sVar6 = FUN_001f0c7c(puVar8[1]);
          *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) - sVar6;
          FUN_001fcfc2(puVar8);
          if (*(short *)(param_1 + 0x68) == 0) break;
          puVar8 = *(undefined4 **)(param_1 + 0x70);
          if (puVar8 == (undefined4 *)0x0) {
            if (*(int *)(param_1 + 0x6c) == 0) {
              FUN_00013290(s_Assertion___s__failed_at_line__d_001fc344,
                           s_tcp_receive__valid_queue_length_001fc3ac,DAT_001fc3a8,_DAT_001fc324);
                    /* WARNING: Subroutine does not return */
              FUN_00003538();
            }
            goto LAB_001fc1e4;
          }
        }
      }
LAB_001fc1e4:
      uVar5 = 0xffff;
LAB_001fc1dc:
      *(undefined2 *)(param_1 + 0x34) = uVar5;
      *(undefined1 *)(param_1 + 0x1f) = 0;
    }
    while (puVar8 = *(undefined4 **)(param_1 + 0x6c), puVar8 != (undefined4 *)0x0) {
      while( true ) {
        iVar7 = puVar8[3];
        if (((int)(*(int *)(DAT_001fc378 + 0x10) -
                  (((uint)CONCAT11(*(undefined1 *)(iVar7 + 6),*(undefined1 *)(iVar7 + 7)) |
                    (*(uint *)(iVar7 + 4) & 0xff00) << 8 | (uint)*(uint3 *)(iVar7 + 4) << 0x18) +
                   (uint)((*(ushort *)(iVar7 + 0xc) >> 8 & 3) != 0) + (uint)*(ushort *)(puVar8 + 2))
                  ) < 0) || (0 < *(int *)(DAT_001fc378 + 0x10) - *(int *)(param_1 + 0x50)))
        goto LAB_001fc2c6;
        *(undefined4 *)(param_1 + 0x6c) = *puVar8;
        uVar9 = FUN_001f0c7c(puVar8[1]);
        if (*(ushort *)(param_1 + 0x68) < uVar9) {
          FUN_00013290(s_Assertion___s__failed_at_line__d_001fc344,
                       s_pcb_>snd_queuelen_>__pbuf_clen_n_001fc380,DAT_001fc3cc,_DAT_001fc324);
                    /* WARNING: Subroutine does not return */
          FUN_00003538();
        }
        if ((*(short *)(param_1 + 100) != 0) && ((*(byte *)(puVar8[3] + 0xd) & 1) != 0)) {
          *(short *)(param_1 + 100) = *(short *)(param_1 + 100) + -1;
        }
        sVar6 = FUN_001f0c7c(puVar8[1]);
        *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) - sVar6;
        FUN_001fcfc2(puVar8);
        if ((*(short *)(param_1 + 0x68) == 0) || (*(int *)(param_1 + 0x70) != 0)) break;
        puVar8 = *(undefined4 **)(param_1 + 0x6c);
        if (puVar8 == (undefined4 *)0x0) {
          FUN_00013290(s_Assertion___s__failed_at_line__d_001fc344,
                       s_tcp_receive__valid_queue_length_001fc3ac,DAT_001fc3d0,_DAT_001fc324);
                    /* WARNING: Subroutine does not return */
          FUN_00003538();
        }
      }
    }
LAB_001fc2c6:
    if ((*(int *)(param_1 + 0x38) != 0) &&
       (*(int *)(param_1 + 0x3c) - *(int *)(DAT_001fc378 + 0x10) < 0)) {
      iVar7 = ((*DAT_001fc3d4 - *(int *)(param_1 + 0x38)) - ((int)*psVar16 >> 3)) * 0x10000;
      iVar13 = iVar7 >> 0x10;
      sVar6 = (short)((uint)((*psVar16 + iVar13) * 0x10000) >> 0x10);
      *psVar16 = sVar6;
      if (iVar13 < 0) {
        iVar13 = (int)(short)-(short)((uint)iVar7 >> 0x10);
      }
      sVar3 = *(short *)(param_1 + 0x42) + ((short)iVar13 - (*(short *)(param_1 + 0x42) >> 2));
      *(short *)(param_1 + 0x42) = sVar3;
      *(short *)(param_1 + 0x44) = (sVar6 >> 3) + sVar3;
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  iVar7 = DAT_001fc7e4;
  pbVar4 = DAT_001fc378;
  if ((*(ushort *)(DAT_001fc378 + 2) == 0) || (6 < *(byte *)(param_1 + 0x18))) {
    if ((-1 < *(int *)(DAT_001fc378 + 0xc) - *(int *)(param_1 + 0x28)) &&
       ((int)((*(int *)(DAT_001fc378 + 0xc) -
              (*(int *)(param_1 + 0x28) + (uint)*(ushort *)(param_1 + 0x2c))) + 1) < 1)) {
      return;
    }
    *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 2;
    return;
  }
  iVar15 = *(int *)(param_1 + 0x28);
  iVar18 = *(int *)(DAT_001fc378 + 0xc);
  iVar13 = iVar15 - iVar18;
  if ((iVar13 + -1 < 0) ||
     (0 < (int)((iVar15 - (iVar18 + (uint)*(ushort *)(DAT_001fc378 + 2))) + 1))) {
    if (iVar18 - iVar15 < 0) {
      *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 2;
      goto LAB_001fcb5e;
    }
  }
  else {
    piVar17 = *(int **)(DAT_001fc7e4 + 4);
    if (piVar17 == (int *)0x0) {
      FUN_00013290(DAT_001fc804,s_inseg_p____NULL_001fc80c,DAT_001fc808,DAT_001fc7ec);
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    if (DAT_001fc7e8 <= iVar13) {
      FUN_00013290(DAT_001fc804,s_insane_offset__001fc7f4,DAT_001fc7f0,DAT_001fc7ec);
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    sVar6 = (short)iVar13;
    if ((int)(uint)*(ushort *)((int)piVar17 + 10) < iVar13) {
      uVar12 = *(ushort *)(piVar17 + 2);
      if ((int)(uint)uVar12 < iVar13) {
        FUN_00013290(DAT_001fc804,s_pbuf_too_short__001fc820,DAT_001fc81c,DAT_001fc7ec);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      do {
        uVar2 = *(ushort *)((int)piVar17 + 10);
        *(ushort *)(piVar17 + 2) = uVar12 - sVar6;
        *(undefined2 *)((int)piVar17 + 10) = 0;
        piVar17 = (int *)*piVar17;
        iVar13 = iVar13 - (uint)uVar2;
      } while ((int)(uint)*(ushort *)((int)piVar17 + 10) < iVar13);
      iVar13 = FUN_001f10f8(piVar17,(int)(short)-(short)iVar13);
      if (iVar13 != 0) {
        FUN_00013290(DAT_001fc804,s_pbuf_header_failed_001fc834,DAT_001fc830,DAT_001fc7ec);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
    }
    else {
      iVar13 = FUN_001f10f8(piVar17,(int)-sVar6);
      if (iVar13 != 0) {
        FUN_00013290(DAT_001fc804,s_pbuf_header_failed_001fc834,DAT_001fc848,DAT_001fc7ec);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
    }
    iVar13 = *(int *)(param_1 + 0x28);
    *(short *)(iVar7 + 8) =
         *(short *)(iVar7 + 8) - ((short)iVar13 - (short)*(undefined4 *)(pbVar4 + 0xc));
    *(int *)(pbVar4 + 0xc) = iVar13;
    iVar7 = *(int *)(iVar7 + 0xc);
    *(char *)(iVar7 + 4) = (char)iVar13;
    *(char *)(iVar7 + 5) = (char)((uint)iVar13 >> 8);
    *(char *)(iVar7 + 6) = (char)((uint)iVar13 >> 0x10);
    *(char *)(iVar7 + 7) = (char)((uint)iVar13 >> 0x18);
    iVar15 = *(int *)(param_1 + 0x28);
    if (iVar13 - iVar15 < 0) goto LAB_001fcb5e;
  }
  uVar12 = *(ushort *)(param_1 + 0x2c);
  if ((int)((*(int *)(pbVar4 + 0xc) - (iVar15 + (uint)uVar12)) + 1) < 1) {
    if (iVar15 != *(int *)(pbVar4 + 0xc)) {
      FUN_001fd006(param_1);
      if (*(int **)(param_1 + 0x74) == (int *)0x0) {
        uVar11 = FUN_001fcf9c(DAT_001fcb8c);
        *(undefined4 *)(param_1 + 0x74) = uVar11;
        return;
      }
      iVar7 = *(int *)(DAT_001fcb88 + 0xc);
      piVar17 = *(int **)(param_1 + 0x74);
      piVar20 = (int *)0x0;
      do {
        piVar21 = piVar17;
        iVar13 = *(int *)(piVar21[3] + 4);
        if (iVar13 == iVar7) {
          if (*(ushort *)(DAT_001fcb8c + 8) <= *(ushort *)(piVar21 + 2)) {
            return;
          }
          iVar7 = FUN_001fcf9c(DAT_001fcb8c);
          if (iVar7 == 0) {
            return;
          }
          if (piVar20 == (int *)0x0) {
            *(int *)(param_1 + 0x74) = iVar7;
          }
          else {
            *piVar20 = iVar7;
          }
LAB_001fca36:
          FUN_001fafec(iVar7,piVar21);
          return;
        }
        if (piVar20 == (int *)0x0) {
          if (iVar7 - iVar13 < 0) {
            iVar7 = FUN_001fcf9c(DAT_001fcb8c);
            if (iVar7 != 0) {
              *(int *)(param_1 + 0x74) = iVar7;
              FUN_001fafec(iVar7,piVar21);
              return;
            }
            return;
          }
        }
        else if ((-1 < (iVar7 - *(int *)(piVar20[3] + 4)) + -1) && ((iVar7 - iVar13) + 1 < 1)) {
          iVar7 = FUN_001fcf9c(DAT_001fcb8c);
          if (iVar7 == 0) {
            return;
          }
          if (0 < (int)((*(int *)(piVar20[3] + 4) + (uint)*(ushort *)(piVar20 + 2)) -
                       *(int *)(DAT_001fcb88 + 0xc))) {
            *(short *)(piVar20 + 2) =
                 (short)*(int *)(DAT_001fcb88 + 0xc) - (short)*(int *)(piVar20[3] + 4);
            FUN_001f120c(piVar20[1]);
          }
          *piVar20 = iVar7;
          goto LAB_001fca36;
        }
        piVar17 = (int *)*piVar21;
        if ((piVar17 == (int *)0x0) && (0 < iVar7 - iVar13)) {
          if ((*(ushort *)(piVar21[3] + 0xc) >> 8 & 1) == 0) {
            iVar13 = FUN_001fcf9c(DAT_001fcb8c);
            *piVar21 = iVar13;
            iVar7 = DAT_001fcb88;
            if (iVar13 != 0) {
              if (0 < (int)((*(int *)(piVar21[3] + 4) + (uint)*(ushort *)(piVar21 + 2)) -
                           *(int *)(DAT_001fcb88 + 0xc))) {
                *(short *)(piVar21 + 2) =
                     (short)*(int *)(DAT_001fcb88 + 0xc) - (short)*(int *)(piVar21[3] + 4);
                FUN_001f120c(piVar21[1]);
              }
              iVar13 = *(int *)(iVar7 + 0xc);
              if (*(int *)(param_1 + 0x28) + (uint)*(ushort *)(param_1 + 0x2c) <
                  (uint)*(ushort *)(iVar7 + 2) + iVar13) {
                iVar15 = *(int *)(*piVar21 + 0xc);
                uVar12 = *(ushort *)(iVar15 + 0xc);
                if ((uVar12 >> 8 & 1) != 0) {
                  uVar9 = (uint)DAT_001fcb90 >> 8;
                  *(byte *)(iVar15 + 0xc) = (byte)DAT_001fcb90 & (byte)uVar12;
                  *(byte *)(iVar15 + 0xd) = (byte)(uVar12 >> 8) & ((byte)uVar9 | 0x3e);
                }
                *(short *)(*piVar21 + 8) =
                     ((short)*(undefined4 *)(param_1 + 0x28) + *(short *)(param_1 + 0x2c)) -
                     (short)iVar13;
                FUN_001f120c(*(undefined4 *)(*piVar21 + 4));
                uVar12 = (ushort)((*(byte *)(*(int *)(*piVar21 + 0xc) + 0xd) & 3) != 0) +
                         *(short *)(*piVar21 + 8);
                *(ushort *)(iVar7 + 2) = uVar12;
                if (*(int *)(iVar7 + 0xc) + (uint)uVar12 !=
                    *(int *)(param_1 + 0x28) + (uint)*(ushort *)(param_1 + 0x2c)) {
                  FUN_00013290(DAT_001fcba0,DAT_001fcb9c,DAT_001fcb98,DAT_001fcb94);
                    /* WARNING: Subroutine does not return */
                  FUN_00003538();
                }
              }
            }
          }
          return;
        }
        piVar20 = piVar21;
        if (piVar17 == (int *)0x0) {
          return;
        }
      } while( true );
    }
    iVar13 = *(int *)(DAT_001fc7e4 + 0xc);
    uVar2 = *(ushort *)(iVar13 + 0xc);
    uVar9 = (uint)((uVar2 >> 8 & 3) != 0) + (uint)*(ushort *)(DAT_001fc7e4 + 8);
    *(short *)(pbVar4 + 2) = (short)uVar9;
    iVar7 = DAT_001fc7e4;
    if ((uint)uVar12 < (uVar9 & 0xffff)) {
      if ((uVar2 >> 8 & 1) != 0) {
        uVar9 = (uint)DAT_001fc84c >> 8;
        *(byte *)(iVar13 + 0xc) = (byte)DAT_001fc84c & (byte)uVar2;
        *(byte *)(iVar13 + 0xd) = (byte)(uVar2 >> 8) & ((byte)uVar9 | 0x3e);
      }
      sVar6 = *(short *)(param_1 + 0x2c);
      *(short *)(iVar7 + 8) = sVar6;
      if ((int)((uint)(*(ushort *)(iVar13 + 0xc) >> 8) << 0x1e) < 0) {
        sVar6 = sVar6 + -1;
        *(short *)(iVar7 + 8) = sVar6;
      }
      FUN_001f120c(*(undefined4 *)(iVar7 + 4),sVar6);
      uVar12 = (ushort)((*(byte *)(*(int *)(iVar7 + 0xc) + 0xd) & 3) != 0) + *(short *)(iVar7 + 8);
      *(ushort *)(pbVar4 + 2) = uVar12;
      if (*(int *)(pbVar4 + 0xc) + (uint)uVar12 !=
          *(int *)(param_1 + 0x28) + (uint)*(ushort *)(param_1 + 0x2c)) {
        FUN_00013290(DAT_001fc804,s_tcp_receive__segment_not_trimmed_001fc854,DAT_001fc850,
                     DAT_001fc7ec);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
    }
    if (*(int **)(param_1 + 0x74) != (int *)0x0) {
      piVar17 = *(int **)(param_1 + 0x74);
      if ((*(byte *)(*(int *)(DAT_001fc7e4 + 0xc) + 0xd) & 1) == 0) {
        do {
          iVar7 = DAT_001fc7e4;
          if ((int)((*(int *)(pbVar4 + 0xc) + (uint)*(ushort *)(pbVar4 + 2)) -
                   (*(int *)(piVar17[3] + 4) + (uint)*(ushort *)(piVar17 + 2))) < 0) {
            piVar20 = piVar17;
            if (0 < (int)((*(int *)(pbVar4 + 0xc) + (uint)*(ushort *)(pbVar4 + 2)) -
                         *(int *)(piVar17[3] + 4))) {
              uVar9 = *(int *)(piVar17[3] + 4) - *(int *)(pbVar4 + 0xc);
              uVar10 = uVar9 & 0xffff;
              *(short *)(DAT_001fc7e4 + 8) = (short)uVar9;
              if ((int)((uint)(*(ushort *)(*(int *)(iVar7 + 0xc) + 0xc) >> 8) << 0x1e) < 0) {
                uVar10 = uVar10 - 1;
                *(short *)(iVar7 + 8) = (short)uVar10;
              }
              FUN_001f120c(*(undefined4 *)(iVar7 + 4),uVar10 & 0xffff);
              uVar12 = (ushort)((*(byte *)(*(int *)(iVar7 + 0xc) + 0xd) & 3) != 0) +
                       *(short *)(iVar7 + 8);
              *(ushort *)(pbVar4 + 2) = uVar12;
              if (*(int *)(pbVar4 + 0xc) + (uint)uVar12 != *(int *)(piVar17[3] + 4)) {
                FUN_00013290(DAT_001fc804,s_tcp_receive__segment_not_trimmed_001fc890,DAT_001fc88c,
                             DAT_001fc7ec);
                    /* WARNING: Subroutine does not return */
                FUN_00003538();
              }
            }
            break;
          }
          if ((*(ushort *)(piVar17[3] + 0xc) >> 8 & 1) != 0) {
            iVar13 = *(int *)(DAT_001fc7e4 + 0xc);
            uVar12 = *(ushort *)(iVar13 + 0xc);
            if (-1 < (int)((uint)(uVar12 >> 8) << 0x1e)) {
              *(char *)(iVar13 + 0xc) = (char)uVar12;
              *(byte *)(iVar13 + 0xd) = (byte)(uVar12 >> 8) | 1;
              *(ushort *)(pbVar4 + 2) =
                   (ushort)((uVar12 & 0x300 | 0x100) != 0) + *(short *)(iVar7 + 8);
            }
          }
          piVar20 = (int *)*piVar17;
          FUN_001fcfc2(piVar17);
          piVar17 = piVar20;
        } while (piVar20 != (int *)0x0);
        *(int **)(param_1 + 0x74) = piVar20;
      }
      else {
        do {
          *(undefined4 *)(param_1 + 0x74) = **(undefined4 **)(param_1 + 0x74);
          FUN_001fcfc2();
        } while (*(int *)(param_1 + 0x74) != 0);
      }
    }
    uVar12 = *(ushort *)(pbVar4 + 2);
    *(uint *)(param_1 + 0x28) = *(int *)(pbVar4 + 0xc) + (uint)uVar12;
    if ((uint)*(ushort *)(param_1 + 0x2c) < (uint)uVar12) {
      FUN_00013290(DAT_001fc804,s_tcp_receive__tcplen_>_rcv_wnd_001fc8d0,DAT_001fc8cc,DAT_001fc7ec);
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    *(ushort *)(param_1 + 0x2c) = *(ushort *)(param_1 + 0x2c) - uVar12;
    FUN_001fd71c(param_1);
    iVar7 = DAT_001fc7e4;
    if (*(short *)(*(int *)(DAT_001fc7e4 + 4) + 8) != 0) {
      *(int *)(pbVar4 + 0x14) = *(int *)(DAT_001fc7e4 + 4);
      *(undefined4 *)(iVar7 + 4) = 0;
    }
    if ((*(byte *)(*(int *)(iVar7 + 0xc) + 0xd) & 1) != 0) {
      pbVar4[1] = pbVar4[1] | 0x20;
    }
    while (puVar8 = *(undefined4 **)(param_1 + 0x74), puVar8 != (undefined4 *)0x0) {
      iVar13 = puVar8[3];
      iVar7 = *(int *)(iVar13 + 4);
      iVar15 = *(int *)(param_1 + 0x28);
      if (iVar7 != iVar15) break;
      *(int *)(pbVar4 + 0xc) = iVar7;
      *(uint *)(param_1 + 0x28) =
           (uint)((*(byte *)(iVar13 + 0xd) & 3) != 0) + iVar15 + (uint)*(ushort *)(puVar8 + 2);
      if ((uint)*(ushort *)(param_1 + 0x2c) <
          (uint)((*(byte *)(puVar8[3] + 0xd) & 3) != 0) + (uint)*(ushort *)(puVar8 + 2)) {
        FUN_00013290(DAT_001fc804,s_tcp_receive__ooseq_tcplen_>_rcv__001fc8f4,DAT_001fc8f0,
                     DAT_001fc7ec);
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      *(ushort *)(param_1 + 0x2c) =
           *(ushort *)(param_1 + 0x2c) -
           ((ushort)((*(byte *)(puVar8[3] + 0xd) & 3) != 0) + *(ushort *)(puVar8 + 2));
      FUN_001fd71c(param_1);
      if (*(short *)(puVar8[1] + 8) != 0) {
        if (*(int *)(pbVar4 + 0x14) == 0) {
          *(undefined4 *)(pbVar4 + 0x14) = puVar8[1];
        }
        else {
          FUN_001f0bf8();
        }
        puVar8[1] = 0;
      }
      if (((*(ushort *)(puVar8[3] + 0xc) >> 8 & 1) != 0) &&
         (pbVar4[1] = pbVar4[1] | 0x20, *(char *)(param_1 + 0x18) == '\x04')) {
        *(undefined1 *)(param_1 + 0x18) = 7;
      }
      *(undefined4 *)(param_1 + 0x74) = *puVar8;
      FUN_001fcfc2(puVar8);
    }
    bVar1 = *(byte *)(param_1 + 0x1e);
    if ((bVar1 & 1) == 0) {
      *(byte *)(param_1 + 0x1e) = bVar1 | 1;
      return;
    }
    *(byte *)(param_1 + 0x1e) = bVar1 & 0xfe | 2;
    return;
  }
LAB_001fcb5e:
  FUN_001fd006(param_1);
  return;
}

