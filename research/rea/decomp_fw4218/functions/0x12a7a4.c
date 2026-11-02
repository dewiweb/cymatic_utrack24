// rea decompile_all
// name: FUN_0012a7a4
// address: 0x12a7a4
// body: available
// range: 0x12a7a4-0x12ab1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012a7a4(int param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  undefined1 auStack_48 [8];
  int *local_40;
  undefined1 auStack_38 [4];
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  int local_30;
  int local_2c;
  
  puVar2 = (undefined4 *)FUN_000b1210(auStack_48);
  *puVar2 = _DAT_0012ab1c;
  uVar3 = FUN_000b4964();
  iVar4 = FUN_000b4840(uVar3,s___AudioHWService_0012ab1e + 2,auStack_48);
  if ((iVar4 != 0) &&
     (iVar4 = (**(code **)(*local_40 + 0x50))(local_40,*(undefined4 *)(param_2 + 4)), iVar4 != 0)) {
    piVar5 = *(int **)(param_1 + 0x130);
    while( true ) {
      if (*(int **)(param_1 + 0x134) == piVar5) {
        local_30 = param_2;
        local_2c = iVar4;
        iVar6 = FUN_001f01c4(0x1c,1);
        puVar2 = (undefined4 *)0x0;
        if (iVar6 != 0) {
          uVar3 = *DAT_0012ab30;
          uVar14 = DAT_0012ab30[1];
          puVar2 = (undefined4 *)FUN_001ac2b8(iVar6,iVar4 + 0xc);
          *puVar2 = DAT_0012ab34;
          puVar2[2] = param_1;
          puVar2[3] = local_30;
          puVar2[4] = local_2c;
          puVar2[5] = uVar3;
          puVar2[6] = uVar14;
        }
        iVar6 = DAT_0012ab38;
        piVar5 = *(int **)(param_1 + 0x134);
        piVar15 = (int *)(param_1 + 0x130);
        if (piVar5 == *(int **)(param_1 + 0x138)) {
          iVar12 = (int)((ulonglong)
                         ((longlong)DAT_0012ab38 *
                         (longlong)((int)*(int **)(param_1 + 0x138) - *piVar15)) >> 0x20);
          iVar9 = (int)((ulonglong)((longlong)DAT_0012ab38 * (longlong)((int)piVar5 - *piVar15)) >>
                       0x20);
          uVar10 = (iVar9 >> 1) - (iVar9 >> 0x1f);
          if (uVar10 < (uint)((iVar12 >> 1) - (iVar12 >> 0x1f))) {
            *(int **)(param_1 + 0x134) = piVar5 + 3;
            if (piVar5 != (int *)0x0) {
              *piVar5 = piVar5[-3];
              piVar5[1] = piVar5[-2];
              piVar5[2] = piVar5[-1];
            }
            iVar17 = (int)(piVar5 + -3) - (int)piVar5;
            iVar12 = (int)((ulonglong)((longlong)iVar6 * (longlong)iVar17) >> 0x20);
            iVar9 = 1;
            if (1 < ((iVar12 >> 1) - (iVar12 >> 0x1f)) + 1) {
              iVar6 = (int)((ulonglong)((longlong)iVar6 * (longlong)iVar17) >> 0x20);
              piVar15 = piVar5 + -3;
              piVar11 = piVar5;
              do {
                iVar9 = iVar9 + 1;
                piVar11[-3] = piVar15[-3];
                piVar11[-2] = piVar15[-2];
                piVar11[-1] = piVar15[-1];
                piVar15 = piVar15 + -3;
                piVar11 = piVar11 + -3;
              } while (iVar9 < ((iVar6 >> 1) - (iVar6 >> 0x1f)) + 1);
            }
            *piVar5 = param_2;
            piVar5[1] = iVar4;
            piVar5[2] = (int)puVar2;
          }
          else {
            uVar16 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
            if (uVar16 < uVar10 + 1) {
              uVar16 = uVar10 + 1;
            }
            piVar7 = (int *)FUN_00173860(uVar16 * 0xc,0);
            piVar13 = piVar7;
            iVar6 = DAT_0012ab38;
            for (piVar11 = (int *)*piVar15; DAT_0012ab38 = iVar6, piVar11 != piVar5;
                piVar11 = piVar11 + 3) {
              if (piVar13 != (int *)0x0) {
                *piVar13 = *piVar11;
                piVar13[1] = piVar11[1];
                piVar13[2] = piVar11[2];
              }
              piVar13 = piVar13 + 3;
              iVar6 = DAT_0012ab38;
            }
            iVar9 = (int)((ulonglong)((longlong)iVar6 * (longlong)((int)piVar5 - *piVar15)) >> 0x20)
            ;
            piVar11 = piVar7 + ((iVar9 >> 1) - (iVar9 >> 0x1f)) * 3;
            if (piVar11 != (int *)0x0) {
              *piVar11 = param_2;
              piVar11[1] = iVar4;
              piVar11[2] = (int)puVar2;
            }
            piVar13 = *(int **)(param_1 + 0x134);
            iVar9 = (int)((ulonglong)((longlong)iVar6 * (longlong)((int)piVar5 - *piVar15)) >> 0x20)
            ;
            piVar11 = piVar7 + ((iVar9 >> 1) - (iVar9 >> 0x1f)) * 3;
            for (; piVar5 != piVar13; piVar5 = piVar5 + 3) {
              piVar8 = piVar11 + 3;
              if (piVar8 != (int *)0x0) {
                *piVar8 = *piVar5;
                piVar11[4] = piVar5[1];
                piVar11[5] = piVar5[2];
              }
              piVar11 = piVar8;
            }
            iVar9 = *piVar15;
            iVar12 = (int)((ulonglong)
                           ((longlong)iVar6 * (longlong)(*(int *)(param_1 + 0x134) - iVar9)) >> 0x20
                          );
            lVar1 = (longlong)iVar6 * (longlong)(*(int *)(param_1 + 0x138) - iVar9);
            iVar6 = (int)((ulonglong)lVar1 >> 0x20);
            FUN_00173a54(iVar9,(iVar6 >> 1) - (iVar6 >> 0x1f),0,(int)lVar1);
            *piVar15 = (int)piVar7;
            *(int **)(param_1 + 0x134) = piVar7 + ((iVar12 >> 1) - (iVar12 >> 0x1f)) * 3 + 3;
            *(int **)(param_1 + 0x138) = piVar7 + uVar16 * 3;
          }
        }
        else {
          *(int **)(param_1 + 0x134) = piVar5 + 3;
          if (piVar5 != (int *)0x0) {
            *piVar5 = param_2;
            piVar5[1] = iVar4;
            piVar5[2] = (int)puVar2;
          }
        }
        FUN_0007bce8(auStack_38);
        local_34 = *(undefined1 *)(iVar4 + 0x30);
        local_33 = *(undefined1 *)(iVar4 + 0x31);
        local_32 = *(undefined1 *)(iVar4 + 0x32);
        local_31 = *(undefined1 *)(iVar4 + 0x33);
        iVar4 = FUN_001b40a0(auStack_38);
        if (((iVar4 == 5 || iVar4 == 6) || (iVar4 == 7 || iVar4 == 0)) || (iVar4 == 2 || iVar4 == 1)
           ) {
          FUN_0012aba0(param_1,&local_30);
        }
        FUN_0007bd00(auStack_38);
        FUN_000b1228(auStack_48);
        return;
      }
      if (*piVar5 == param_2) break;
      piVar5 = piVar5 + 3;
    }
  }
  FUN_000b1228(auStack_48);
  return;
}

