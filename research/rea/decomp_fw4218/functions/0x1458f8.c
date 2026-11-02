// rea decompile_all
// name: FUN_001458f8
// address: 0x1458f8
// body: available
// range: 0x1458f8-0x145bf7 inclusive
// range: 0x145c38-0x145dff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001458f8(undefined4 param_1,char *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  char **ppcVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  char *local_1e8;
  char *local_1e4;
  char *local_1e0;
  char *local_1dc;
  undefined4 local_1d8 [7];
  undefined4 local_1bc;
  
  ppcVar9 = &local_1e8;
  local_1e8 = DAT_00145bf8;
  local_1e4 = DAT_00145bf8;
  local_1e0 = DAT_00145bf8;
  local_1dc = DAT_00145bf8;
  puVar3 = (undefined4 *)FUN_0006f700(param_1,s_WaveFileEncCleanUp_00145bfc,0);
  *puVar3 = DAT_00145c10;
  *(undefined1 *)((int)puVar3 + 0xbe) = 0;
  iVar4 = FUN_001ad814(puVar3 + 0x30);
  local_1e8 = s_ExtJobQueue_00145c14;
  FUN_001ad784(iVar4,1,param_3,1);
  iVar4 = FUN_001ad814(iVar4 + 0x54);
  local_1e8 = s_IntJobQueue_00145c20;
  FUN_001ad784(iVar4,1,2,1);
  piVar12 = (int *)(iVar4 + 0x54);
  *piVar12 = 0;
  pcVar15 = DAT_00145c2c;
  *(undefined4 *)(iVar4 + 0x58) = 0;
  *(undefined4 *)(iVar4 + 0x5c) = 0;
  local_1e4 = param_2;
  if (pcVar15 < param_2) {
    local_1e8 = pcVar15;
    FUN_00173800(8,&DAT_00145c30,&DAT_00145c30,param_2);
  }
  lVar1 = (longlong)DAT_00145c34 * (longlong)(*(int *)(iVar4 + 0x5c) - *piVar12);
  iVar11 = (int)((ulonglong)lVar1 >> 0x20);
  if ((char *)((iVar11 >> 7) - (iVar11 >> 0x1f)) < local_1e4) {
    iVar11 = (int)((ulonglong)
                   ((longlong)DAT_00145c34 * (longlong)(*(int *)(iVar4 + 0x58) - *piVar12)) >> 0x20)
    ;
    uVar8 = (iVar11 >> 7) - (iVar11 >> 0x1f);
    local_1e8 = (char *)(uVar8 + (uVar8 >> 1) + (uVar8 >> 3));
    if (local_1e8 < (char *)(uVar8 + 1)) {
      local_1e8 = (char *)(uVar8 + 1);
    }
    if (local_1e8 <= local_1e4) {
      ppcVar9 = &local_1e4;
    }
    pcVar15 = *ppcVar9;
    iVar5 = FUN_00173860((int)pcVar15 * 0x1b0,0,local_1e4,(int)lVar1);
    iVar14 = *(int *)(iVar4 + 0x58);
    iVar13 = iVar5;
    iVar6 = DAT_00145c34;
    for (iVar11 = *piVar12; DAT_00145c34 = iVar6, iVar11 != iVar14; iVar11 = iVar11 + 0x1b0) {
      if (iVar13 != 0) {
        FUN_00003b88(iVar13,iVar11,0x1b0);
      }
      iVar13 = iVar13 + 0x1b0;
      iVar6 = DAT_00145c34;
    }
    iVar11 = (int)((ulonglong)((longlong)iVar6 * (longlong)(*(int *)(iVar4 + 0x5c) - *piVar12)) >>
                  0x20);
    FUN_00173a54(*piVar12,(iVar11 >> 7) - (iVar11 >> 0x1f),0);
    iVar11 = *piVar12;
    *piVar12 = iVar5;
    iVar11 = (int)((ulonglong)((longlong)iVar6 * (longlong)(*(int *)(iVar4 + 0x58) - iVar11)) >>
                  0x20);
    *(int *)(iVar4 + 0x58) = iVar5 + ((iVar11 >> 7) - (iVar11 >> 0x1f)) * 0x1b0;
    *(int *)(iVar4 + 0x5c) = iVar5 + (int)pcVar15 * 0x1b0;
  }
  pcVar15 = (char *)0x0;
  local_1bc = 0;
  local_1d8[0] = 0xffffffff;
  if (param_2 != (char *)0x0) {
    do {
      iVar13 = DAT_00145c34;
      iVar11 = *(int *)(iVar4 + 0x58);
      if (iVar11 == *(int *)(iVar4 + 0x5c)) {
        local_1e8 = (char *)local_1d8;
        iVar5 = (int)((ulonglong)
                      ((longlong)DAT_00145c34 * (longlong)(*(int *)(iVar4 + 0x5c) - *piVar12)) >>
                     0x20);
        iVar6 = (int)((ulonglong)((longlong)DAT_00145c34 * (longlong)(iVar11 - *piVar12)) >> 0x20);
        uVar8 = (iVar6 >> 7) - (iVar6 >> 0x1f);
        if (uVar8 < (uint)((iVar5 >> 7) - (iVar5 >> 0x1f))) {
          *(int *)(iVar4 + 0x58) = iVar11 + 0x1b0;
          if (iVar11 != 0) {
            FUN_00003b88(iVar11,iVar11 + -0x1b0,0x1b0);
          }
          iVar6 = iVar11 + -0x1b0;
          pcVar10 = local_1e8;
          if (0x1af < iVar6 - iVar11) {
            iVar13 = (int)((ulonglong)((longlong)iVar13 * (longlong)(iVar6 - iVar11)) >> 0x20);
            uVar8 = (iVar13 >> 7) - (iVar13 >> 0x1f);
            iVar13 = iVar11;
            if ((uVar8 & 1) != 0) {
              iVar6 = iVar11 + -0x360;
              iVar13 = iVar11 + -0x1b0;
              FUN_00003b88(iVar13,iVar6,0x1b0);
            }
            pcVar10 = local_1e8;
            for (iVar5 = (int)uVar8 >> 1; local_1e8 = pcVar10, iVar5 != 0; iVar5 = iVar5 + -1) {
              FUN_00003b88(iVar13 + -0x1b0,iVar6 + -0x1b0,0x1b0);
              iVar6 = iVar6 + -0x360;
              iVar13 = iVar13 + -0x360;
              FUN_00003b88(iVar13,iVar6,0x1b0);
              pcVar10 = local_1e8;
            }
          }
          goto LAB_00145bf0;
        }
        local_1e4 = (char *)(uVar8 + (uVar8 >> 1) + (uVar8 >> 3));
        if (local_1e4 < (char *)(uVar8 + 1)) {
          local_1e4 = (char *)(uVar8 + 1);
        }
        iVar5 = FUN_00173860((int)local_1e4 * 0x1b0,0);
        iVar6 = iVar5;
        for (iVar13 = *piVar12; iVar13 != iVar11; iVar13 = iVar13 + 0x1b0) {
          if (iVar6 != 0) {
            FUN_00003b88(iVar6,iVar13,0x1b0);
          }
          iVar6 = iVar6 + 0x1b0;
        }
        iVar13 = (int)((ulonglong)((longlong)DAT_00145c34 * (longlong)(iVar11 - *piVar12)) >> 0x20);
        iVar13 = iVar5 + ((iVar13 >> 7) - (iVar13 >> 0x1f)) * 0x1b0;
        if (iVar13 != 0) {
          FUN_00003b88(iVar13,local_1e8,0x1b0);
        }
        iVar6 = *(int *)(iVar4 + 0x58);
        iVar13 = (int)((ulonglong)((longlong)DAT_00145c34 * (longlong)(iVar11 - *piVar12)) >> 0x20);
        iVar13 = iVar5 + ((iVar13 >> 7) - (iVar13 >> 0x1f)) * 0x1b0;
        for (; iVar11 != iVar6; iVar11 = iVar11 + 0x1b0) {
          iVar13 = iVar13 + 0x1b0;
          if (iVar13 != 0) {
            FUN_00003b88(iVar13,iVar11,0x1b0);
          }
        }
        iVar11 = *piVar12;
        iVar13 = (int)((ulonglong)
                       ((longlong)DAT_00145c34 * (longlong)(*(int *)(iVar4 + 0x58) - iVar11)) >>
                      0x20);
        lVar1 = (longlong)DAT_00145c34 * (longlong)(*(int *)(iVar4 + 0x5c) - iVar11);
        iVar6 = (int)((ulonglong)lVar1 >> 0x20);
        FUN_00173a54(iVar11,(iVar6 >> 7) - (iVar6 >> 0x1f),0,(int)lVar1);
        *piVar12 = iVar5;
        *(int *)(iVar4 + 0x58) = iVar5 + ((iVar13 >> 7) - (iVar13 >> 0x1f)) * 0x1b0 + 0x1b0;
        *(int *)(iVar4 + 0x5c) = iVar5 + (int)local_1e4 * 0x1b0;
      }
      else {
        *(int *)(iVar4 + 0x58) = iVar11 + 0x1b0;
        if (iVar11 != 0) {
          pcVar10 = (char *)local_1d8;
LAB_00145bf0:
          FUN_00003b88(iVar11,pcVar10,0x1b0);
        }
      }
      pcVar15 = pcVar15 + 1;
    } while (pcVar15 < param_2);
  }
  uVar2 = DAT_00145e04;
  uVar7 = DAT_00145e00;
  *(undefined4 *)(iVar4 + 0x9f0) = DAT_00145e08;
  *(undefined4 *)(iVar4 + 0x9d4) = uVar2;
  *(undefined4 *)(iVar4 + 0x9cc) = uVar7;
  if (*(char *)(iVar4 + -0x56) == '\0') {
    iVar11 = FUN_000cbaf0();
    uVar7 = DAT_00145e0c;
    if ((iVar11 == 0) ||
       (lVar1 = (longlong)DAT_00145c34 * (longlong)(*(int *)(iVar4 + 0x58) - *piVar12),
       iVar11 = (int)((ulonglong)lVar1 >> 0x20), uVar7 = DAT_00145e10, iVar11 >> 7 == iVar11 >> 0x1f
       )) {
      FUN_00002898(uVar7);
    }
    else {
      *(undefined1 *)(iVar4 + -0x56) = 1;
      FUN_0006f678(iVar4 + -0x114,1,(int)lVar1);
    }
  }
  return iVar4 + -0x114;
}

