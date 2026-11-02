// rea decompile_all
// name: FUN_000d61e0
// address: 0xd61e0
// body: available
// range: 0xd61e0-0xd6557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d61e0(int param_1,int param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  undefined1 auStack_48 [8];
  int *local_40;
  undefined1 auStack_38 [4];
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  int local_30;
  int local_2c;
  
  pcVar2 = (char *)FUN_0008b800(auStack_48);
  *(undefined4 *)pcVar2 = s_l0__AudioHWService_000d6558._0_4_;
  uVar3 = FUN_0008cf78();
  iVar4 = FUN_0008ce54(uVar3,s_l0__AudioHWService_000d6558 + 4,auStack_48);
  if ((iVar4 != 0) &&
     (iVar4 = (**(code **)(*local_40 + 0x50))(local_40,*(undefined4 *)(param_2 + 4)), iVar4 != 0)) {
    piVar5 = *(int **)(param_1 + 0x130);
    while( true ) {
      if (*(int **)(param_1 + 0x134) == piVar5) {
        local_30 = param_2;
        local_2c = iVar4;
        iVar6 = FUN_001a0808(0x1c,1);
        puVar7 = (undefined4 *)0x0;
        if (iVar6 != 0) {
          uVar3 = *DAT_000d656c;
          uVar15 = DAT_000d656c[1];
          puVar7 = (undefined4 *)FUN_0014fb44(iVar6,iVar4 + 0xc);
          *puVar7 = DAT_000d6570;
          puVar7[2] = param_1;
          puVar7[3] = local_30;
          puVar7[4] = local_2c;
          puVar7[5] = uVar3;
          puVar7[6] = uVar15;
        }
        iVar6 = DAT_000d6574;
        piVar5 = *(int **)(param_1 + 0x134);
        piVar16 = (int *)(param_1 + 0x130);
        if (piVar5 == *(int **)(param_1 + 0x138)) {
          iVar13 = (int)((ulonglong)
                         ((longlong)DAT_000d6574 *
                         (longlong)((int)*(int **)(param_1 + 0x138) - *piVar16)) >> 0x20);
          iVar10 = (int)((ulonglong)((longlong)DAT_000d6574 * (longlong)((int)piVar5 - *piVar16)) >>
                        0x20);
          uVar11 = (iVar10 >> 1) - (iVar10 >> 0x1f);
          if (uVar11 < (uint)((iVar13 >> 1) - (iVar13 >> 0x1f))) {
            *(int **)(param_1 + 0x134) = piVar5 + 3;
            if (piVar5 != (int *)0x0) {
              *piVar5 = piVar5[-3];
              piVar5[1] = piVar5[-2];
              piVar5[2] = piVar5[-1];
            }
            iVar18 = (int)(piVar5 + -3) - (int)piVar5;
            iVar13 = (int)((ulonglong)((longlong)iVar6 * (longlong)iVar18) >> 0x20);
            iVar10 = 1;
            if (1 < ((iVar13 >> 1) - (iVar13 >> 0x1f)) + 1) {
              iVar6 = (int)((ulonglong)((longlong)iVar6 * (longlong)iVar18) >> 0x20);
              piVar16 = piVar5 + -3;
              piVar12 = piVar5;
              do {
                iVar10 = iVar10 + 1;
                piVar12[-3] = piVar16[-3];
                piVar12[-2] = piVar16[-2];
                piVar12[-1] = piVar16[-1];
                piVar16 = piVar16 + -3;
                piVar12 = piVar12 + -3;
              } while (iVar10 < ((iVar6 >> 1) - (iVar6 >> 0x1f)) + 1);
            }
            *piVar5 = param_2;
            piVar5[1] = iVar4;
            piVar5[2] = (int)puVar7;
          }
          else {
            uVar17 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
            if (uVar17 < uVar11 + 1) {
              uVar17 = uVar11 + 1;
            }
            piVar8 = (int *)FUN_0010f82c(uVar17 * 0xc,0);
            piVar14 = piVar8;
            iVar6 = DAT_000d6574;
            for (piVar12 = (int *)*piVar16; DAT_000d6574 = iVar6, piVar12 != piVar5;
                piVar12 = piVar12 + 3) {
              if (piVar14 != (int *)0x0) {
                *piVar14 = *piVar12;
                piVar14[1] = piVar12[1];
                piVar14[2] = piVar12[2];
              }
              piVar14 = piVar14 + 3;
              iVar6 = DAT_000d6574;
            }
            iVar10 = (int)((ulonglong)((longlong)iVar6 * (longlong)((int)piVar5 - *piVar16)) >> 0x20
                          );
            piVar12 = piVar8 + ((iVar10 >> 1) - (iVar10 >> 0x1f)) * 3;
            if (piVar12 != (int *)0x0) {
              *piVar12 = param_2;
              piVar12[1] = iVar4;
              piVar12[2] = (int)puVar7;
            }
            piVar14 = *(int **)(param_1 + 0x134);
            iVar10 = (int)((ulonglong)((longlong)iVar6 * (longlong)((int)piVar5 - *piVar16)) >> 0x20
                          );
            piVar12 = piVar8 + ((iVar10 >> 1) - (iVar10 >> 0x1f)) * 3;
            for (; piVar5 != piVar14; piVar5 = piVar5 + 3) {
              piVar9 = piVar12 + 3;
              if (piVar9 != (int *)0x0) {
                *piVar9 = *piVar5;
                piVar12[4] = piVar5[1];
                piVar12[5] = piVar5[2];
              }
              piVar12 = piVar9;
            }
            iVar10 = *piVar16;
            iVar13 = (int)((ulonglong)
                           ((longlong)iVar6 * (longlong)(*(int *)(param_1 + 0x134) - iVar10)) >>
                          0x20);
            lVar1 = (longlong)iVar6 * (longlong)(*(int *)(param_1 + 0x138) - iVar10);
            iVar6 = (int)((ulonglong)lVar1 >> 0x20);
            FUN_0010fa20(iVar10,(iVar6 >> 1) - (iVar6 >> 0x1f),0,(int)lVar1);
            *piVar16 = (int)piVar8;
            *(int **)(param_1 + 0x134) = piVar8 + ((iVar13 >> 1) - (iVar13 >> 0x1f)) * 3 + 3;
            *(int **)(param_1 + 0x138) = piVar8 + uVar17 * 3;
          }
        }
        else {
          *(int **)(param_1 + 0x134) = piVar5 + 3;
          if (piVar5 != (int *)0x0) {
            *piVar5 = param_2;
            piVar5[1] = iVar4;
            piVar5[2] = (int)puVar7;
          }
        }
        FUN_0007b98c(auStack_38);
        local_34 = *(undefined1 *)(iVar4 + 0x30);
        local_33 = *(undefined1 *)(iVar4 + 0x31);
        local_32 = *(undefined1 *)(iVar4 + 0x32);
        local_31 = *(undefined1 *)(iVar4 + 0x33);
        iVar4 = FUN_00156078(auStack_38);
        if (((iVar4 == 5 || iVar4 == 6) || (iVar4 == 7 || iVar4 == 0)) || (iVar4 == 2 || iVar4 == 1)
           ) {
          FUN_000d65dc(param_1,&local_30);
        }
        FUN_0007b9a4(auStack_38);
        FUN_0008b818(auStack_48);
        return;
      }
      if (*piVar5 == param_2) break;
      piVar5 = piVar5 + 3;
    }
  }
  FUN_0008b818(auStack_48);
  return;
}

