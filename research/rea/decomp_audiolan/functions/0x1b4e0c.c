// rea decompile_all
// name: FUN_001b4e0c
// address: 0x1b4e0c
// body: available
// range: 0x1b4e0c-0x1b516d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b4e58 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b4e6a to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b4e7a to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b503e to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b505a to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b5108 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b5132 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1b5154 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001b4e0c(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  uint extraout_r1;
  uint extraout_r1_00;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  
  pcVar5 = DAT_001b5170;
  *(int *)(DAT_001b5170 + 0xc) = *(int *)(DAT_001b5170 + 0xc) + 1;
  pcVar5[2] = pcVar5[2] + '\x01';
  iVar2 = DAT_001b5174;
LAB_001b4e22:
  do {
    iVar3 = 0;
    iVar14 = *(int *)(DAT_001b5170 + 0x18);
    pcVar5 = DAT_001b5170;
joined_r0x001b4e2a:
    while( true ) {
      iVar4 = iVar14;
      DAT_001b5170 = pcVar5;
      if (iVar4 == 0) {
        iVar2 = 0;
        iVar3 = *(int *)(pcVar5 + 0x1c);
        while( true ) {
          if (iVar3 == 0) {
            return;
          }
          if (*(char *)(iVar3 + 0x18) != '\n') break;
          if ((uint)(*(int *)(pcVar5 + 0xc) - *(int *)(iVar3 + 0x24)) < 0xf1) {
            iVar2 = iVar3;
            iVar3 = *(int *)(iVar3 + 0xc);
          }
          else {
            FUN_001b33e8(iVar3);
            if (iVar2 == 0) {
              if (*(int *)(pcVar5 + 0x1c) != iVar3) {
                FUN_00015210(s_Assertion___s__failed_at_line__d_001b51ac,
                             s_tcp_slowtmr__first_pcb____tcp_tw_001b530c,0x408,DAT_001b5178);
                    /* WARNING: Subroutine does not return */
                FUN_000032f8();
              }
              *(undefined4 *)(pcVar5 + 0x1c) = *(undefined4 *)(iVar3 + 0xc);
            }
            else {
              if (iVar3 == *(int *)(pcVar5 + 0x1c)) {
                FUN_00015210(s_Assertion___s__failed_at_line__d_001b51ac,
                             s_tcp_slowtmr__middle_tcp____tcp_t_001b52e4,DAT_001b52e0,DAT_001b5178);
                    /* WARNING: Subroutine does not return */
                FUN_000032f8();
              }
              *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
            }
            iVar14 = *(int *)(iVar3 + 0xc);
            FUN_0019cae4(2,iVar3);
            iVar3 = iVar14;
          }
        }
        FUN_00015210(s_Assertion___s__failed_at_line__d_001b51ac,
                     s_tcp_slowtmr__TIME_WAIT_pcb_>stat_001b52b0,DAT_001b52ac,DAT_001b5178);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      cVar1 = *(char *)(iVar4 + 0x18);
      if (cVar1 == '\0') {
        FUN_00015210(s_Assertion___s__failed_at_line__d_001b51ac,
                     s_tcp_slowtmr__active_pcb_>state___001b5180,DAT_001b517c,DAT_001b5178);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      if (cVar1 == '\x01') {
        FUN_00015210(s_Assertion___s__failed_at_line__d_001b51ac,
                     s_tcp_slowtmr__active_pcb_>state___001b51e0,0x330,DAT_001b5178);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      if (cVar1 == '\n') {
        FUN_00015210(s_Assertion___s__failed_at_line__d_001b51ac,
                     s_tcp_slowtmr__active_pcb_>state___001b5210,DAT_001b520c,DAT_001b5178);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      if (*(char *)(iVar4 + 0x21) != pcVar5[2]) break;
      iVar14 = *(int *)(iVar4 + 0xc);
    }
    *(char *)(iVar4 + 0x21) = pcVar5[2];
    uVar16 = 0;
    iVar14 = 0;
    if ((cVar1 == '\x02') && (*(char *)(iVar4 + 0x46) == '\x06')) {
      uVar16 = 1;
    }
    else {
      if (*(byte *)(iVar4 + 0x46) == 0xc) {
        uVar16 = 1;
      }
      else {
        uVar11 = (uint)*(byte *)(iVar4 + 0x95);
        if (uVar11 == 0) {
          if (-1 < *(short *)(iVar4 + 0x34)) {
            *(short *)(iVar4 + 0x34) = *(short *)(iVar4 + 0x34) + 1;
          }
          if ((*(int *)(iVar4 + 0x70) != 0) &&
             (*(short *)(iVar4 + 0x44) <= *(short *)(iVar4 + 0x34))) {
            if (cVar1 != '\x02') {
              *(short *)(iVar4 + 0x44) =
                   (short)(((int)*(short *)(iVar4 + 0x40) >> 3) + (uint)*(ushort *)(iVar4 + 0x42) <<
                          *(sbyte *)(DAT_001b5240 + (uint)*(byte *)(iVar4 + 0x46)));
            }
            *(undefined2 *)(iVar4 + 0x34) = 0;
            uVar11 = (uint)*(ushort *)(iVar4 + 0x60);
            if ((uint)*(ushort *)(iVar4 + 0x4c) < (uint)*(ushort *)(iVar4 + 0x60)) {
              uVar11 = (uint)*(ushort *)(iVar4 + 0x4c);
            }
            *(short *)(iVar4 + 0x4e) = (short)(uVar11 >> 1);
            uVar8 = (uint)*(ushort *)(iVar4 + 0x36) << 1;
            if (uVar11 >> 1 < uVar8) {
              *(short *)(iVar4 + 0x4e) = (short)uVar8;
            }
            *(ushort *)(iVar4 + 0x4c) = *(ushort *)(iVar4 + 0x36);
            FUN_001b4a7e(iVar4);
          }
        }
        else {
          bVar7 = *(char *)(iVar4 + 0x94) + 1;
          *(byte *)(iVar4 + 0x94) = bVar7;
          if (*(byte *)(uVar11 + iVar2) <= bVar7) {
            *(undefined1 *)(iVar4 + 0x94) = 0;
            if (uVar11 < 7) {
              *(byte *)(iVar4 + 0x95) = *(byte *)(iVar4 + 0x95) + 1;
            }
            FUN_001b6cc8(iVar4);
          }
        }
      }
      if (((*(char *)(iVar4 + 0x18) == '\x06') && ((int)((uint)*(byte *)(iVar4 + 0x1e) << 0x1b) < 0)
          ) && (0x28 < (uint)(*(int *)(DAT_001b5170 + 0xc) - *(int *)(iVar4 + 0x24)))) {
        uVar16 = uVar16 + 1 & 0xff;
      }
    }
    if (((int)((uint)*(byte *)(iVar4 + 8) << 0x1c) < 0) &&
       ((*(char *)(iVar4 + 0x18) == '\x04' || (*(char *)(iVar4 + 0x18) == '\a')))) {
      iVar15 = *(int *)(iVar4 + 0x90);
      FUN_0016dcd0(iVar15 + DAT_001b5244);
      uVar11 = *(int *)(DAT_001b5170 + 0xc) - *(int *)(iVar4 + 0x24);
      if (extraout_r1 < uVar11) {
        uVar16 = uVar16 + 1 & 0xff;
        iVar14 = 1;
      }
      else {
        FUN_0016dcd0(iVar15 + DAT_001b5248 * (uint)*(byte *)(iVar4 + 0x96));
        if (extraout_r1_00 < uVar11) {
          FUN_001b2aa4(iVar4);
          *(char *)(iVar4 + 0x96) = *(char *)(iVar4 + 0x96) + '\x01';
        }
      }
    }
    if ((*(int **)(iVar4 + 0x74) != (int *)0x0) &&
       (piVar10 = *(int **)(iVar4 + 0x74),
       (uint)(*(short *)(iVar4 + 0x44) * 6) <=
       (uint)(*(int *)(DAT_001b5170 + 0xc) - *(int *)(iVar4 + 0x24)))) {
      do {
        piVar12 = (int *)*piVar10;
        if (piVar10 != (int *)0x0) {
          if (piVar10[1] != 0) {
            FUN_001aa008();
          }
          FUN_0019cae4(4,piVar10);
        }
        piVar10 = piVar12;
      } while (piVar12 != (int *)0x0);
      *(undefined4 *)(iVar4 + 0x74) = 0;
    }
    if (*(char *)(iVar4 + 0x18) == '\x03') {
      if (0x28 < (uint)(*(int *)(DAT_001b5170 + 0xc) - *(int *)(iVar4 + 0x24))) goto LAB_001b5002;
    }
    else if ((*(char *)(iVar4 + 0x18) == '\t') &&
            (0xf0 < (uint)(*(int *)(DAT_001b5170 + 0xc) - *(int *)(iVar4 + 0x24)))) {
LAB_001b5002:
      uVar16 = uVar16 + 1 & 0xff;
    }
    if (uVar16 == 0) {
      iVar14 = *(int *)(iVar4 + 0xc);
      bVar7 = *(char *)(iVar4 + 0x1f) + 1;
      *(byte *)(iVar4 + 0x1f) = bVar7;
      pcVar5 = DAT_001b5170;
      iVar3 = iVar4;
      if (bVar7 < *(byte *)(iVar4 + 0x20)) goto joined_r0x001b4e2a;
      *(undefined1 *)(iVar4 + 0x1f) = 0;
      *pcVar5 = '\0';
      if (*(code **)(iVar4 + 0x88) != entry) {
        iVar15 = (**(code **)(iVar4 + 0x88))(*(undefined4 *)(iVar4 + 0x10),iVar4);
        if (*pcVar5 != '\0') goto LAB_001b4e22;
        pcVar5 = DAT_001b5170;
        if (iVar15 != 0) goto joined_r0x001b4e2a;
      }
      FUN_001b2d18(iVar4);
      pcVar5 = DAT_001b5170;
      goto joined_r0x001b4e2a;
    }
    FUN_001b33e8(iVar4);
    if (iVar3 == 0) {
      if (*(int *)(DAT_001b5170 + 0x18) != iVar4) {
        FUN_00015210(s_Assertion___s__failed_at_line__d_001b51ac,
                     s_tcp_slowtmr__first_pcb____tcp_ac_001b5280,DAT_001b527c,DAT_001b5178);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      *(undefined4 *)(DAT_001b5170 + 0x18) = *(undefined4 *)(iVar4 + 0xc);
    }
    else {
      if (iVar4 == *(int *)(DAT_001b5170 + 0x18)) {
        FUN_00015210(s_Assertion___s__failed_at_line__d_001b51ac,
                     s_tcp_slowtmr__middle_tcp____tcp_a_001b5250,DAT_001b524c,DAT_001b5178);
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
    }
    if (iVar14 != 0) {
      FUN_001b4ab4(*(undefined4 *)(iVar4 + 0x50),*(undefined4 *)(iVar4 + 0x28),iVar4,iVar4 + 4,
                   *(undefined2 *)(iVar4 + 0x1a),*(undefined2 *)(iVar4 + 0x1c));
    }
    pcVar13 = *(code **)(iVar4 + 0x8c);
    uVar9 = *(undefined4 *)(iVar4 + 0x10);
    iVar14 = *(int *)(iVar4 + 0xc);
    FUN_0019cae4(2,iVar4);
    pcVar6 = DAT_001b5170;
    *DAT_001b5170 = '\0';
    pcVar5 = DAT_001b5170;
    if ((pcVar13 == entry) || ((*pcVar13)(uVar9,0xfffffff5), pcVar5 = DAT_001b5170, *pcVar6 == '\0')
       ) goto joined_r0x001b4e2a;
  } while( true );
}

