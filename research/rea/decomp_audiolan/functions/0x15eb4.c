// rea decompile_all
// name: FUN_00015eb4
// address: 0x15eb4
// body: available
// range: 0x15eb4-0x163b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00015eb4(code *param_1)

{
  code cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  code *extraout_r1;
  uint extraout_r2;
  uint uVar7;
  uint extraout_r2_00;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  code *extraout_r12;
  code *pcVar13;
  uint uVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  undefined2 auStack_2c [2];
  char acStack_28 [4];
  
  if (param_1[0xf0] == (code)0x0) {
    return;
  }
  do {
    pcVar4 = DAT_000163b4;
    while (iVar3 = FUN_0019dd64(*(undefined4 *)(param_1 + 0xec),&piStack_30), *pcVar4 != '\0') {
      if (iVar3 == 0) {
        thunk_FUN_0019d1bc(piStack_30);
      }
      if ((param_1[0xfc] != (code)0x4) && (iVar3 = FUN_0007df30(param_1,4), iVar3 != 0)) {
        param_1[0xfc] = (code)0x4;
        *(undefined4 *)(param_1 + 0x11c) = 0xfffffff;
        *(undefined4 *)(param_1 + 0x100) = 0;
      }
      if (param_1[0xf0] == (code)0x0) {
        return;
      }
    }
    if (iVar3 == 0) {
      auStack_2c[0] = *(undefined2 *)(*piStack_30 + 8);
      iVar3 = *(int *)(*piStack_30 + 4);
      bVar16 = (*(uint *)(param_1 + 0xf8) & 1) == 0;
      pcVar13 = extraout_r12;
      if (bVar16) {
        pcVar13 = *(code **)(param_1 + 0xf4);
      }
      if (!bVar16) {
        pcVar13 = *(code **)(*(int *)(param_1 + ((int)*(uint *)(param_1 + 0xf8) >> 1)) +
                            *(int *)(param_1 + 0xf4));
      }
      uVar17 = (*pcVar13)(param_1 + ((int)*(uint *)(param_1 + 0xf8) >> 1),iVar3,auStack_2c,
                          &iStack_38);
      pcVar13 = (code *)((ulonglong)uVar17 >> 0x20);
      uVar7 = (uint)uVar17;
      if (uVar7 != 0) {
        if (param_1[0xc0] == (code)0x0) {
          uVar17 = FUN_0001253c(*(undefined4 *)(param_1 + 0xd8),param_1 + 0x118,iStack_38,acStack_28
                               );
          pcVar13 = (code *)((ulonglong)uVar17 >> 0x20);
          iVar5 = (int)uVar17;
          if (iVar5 != 0) {
            uVar17 = FUN_00006158(auStack_2c[0],(uint)*(ushort *)(param_1 + 0xc2) * 3);
            iVar11 = (int)uVar17;
            pcVar13 = (code *)((ulonglong)uVar17 >> 0x20);
            iStack_34 = iVar11;
            if (iVar11 != 0) {
              if (param_1[0xbf] != (code)0x0) {
                iVar3 = iVar3 + (uVar7 & 0xfffffffc);
                uVar10 = 0;
                uVar7 = extraout_r2;
                do {
                  iVar9 = 0;
                  while (pcVar13 = (code *)(*(int *)(param_1 + 0x224) + iVar9 * 0xc),
                        *pcVar13 != (code)0x0) {
                    iVar9 = iVar9 + 1;
                    puVar12 = *(uint **)(iVar5 + (uint)(byte)pcVar13[1] * 4);
                    if (puVar12 != (uint *)0x0) {
                      uVar14 = (uint)(byte)pcVar13[uVar10 + 4];
                      cVar1 = pcVar13[uVar10 + 8];
                      uVar6 = *(uint *)(iVar3 + uVar14 * 4);
                      if (cVar1 == (code)0x0) {
                        uVar7 = uVar6 & 0xffffff;
                      }
                      else if (cVar1 == (code)0x1) {
                        uVar7 = uVar6 >> 8;
                      }
                      else {
                        if (cVar1 == (code)0x2) {
                          uVar6 = uVar6 >> 0x10;
                          uVar7 = (*(uint *)(iVar3 + uVar14 * 4 + 4) & 0xff) << 0x10;
                        }
                        else {
                          if (cVar1 != (code)0x3) goto LAB_00016248;
                          uVar6 = uVar6 >> 0x18;
                          uVar7 = (*(uint *)(iVar3 + uVar14 * 4 + 4) & 0xffff) << 8;
                        }
                        uVar7 = uVar7 | uVar6;
                      }
LAB_00016248:
                      *puVar12 = uVar7;
                    }
                  }
                  iVar11 = iVar11 + -1;
                  if (iVar11 == 0) goto LAB_00016250;
                  uVar10 = uVar10 + 1;
                  if (3 < uVar10) {
                    uVar10 = 0;
                    iVar3 = iVar3 + (uint)*(ushort *)(param_1 + 0xc2) * 0xc;
                  }
                  iVar5 = FUN_0001261c(*(undefined4 *)(param_1 + 0xd8),param_1 + 0x118);
                  uVar7 = extraout_r2_00;
                } while( true );
              }
              iVar3 = iVar3 + (uVar7 & 0xfffffffc);
              uVar7 = 0;
              while( true ) {
                pcVar13 = (code *)((ulonglong)uVar17 >> 0x20);
                iVar11 = 0;
                while (pcVar4 = (char *)(*(int *)(param_1 + 0x224) + iVar11 * 0xc), *pcVar4 != '\0')
                {
                  iVar11 = iVar11 + 1;
                  puVar15 = *(undefined4 **)(iVar5 + (uint)(byte)pcVar4[1] * 4);
                  if (puVar15 != (undefined4 *)0x0) {
                    uVar6 = (uint)(byte)pcVar4[uVar7 + 4];
                    cVar2 = pcVar4[uVar7 + 8];
                    uVar10 = *(uint *)(iVar3 + uVar6 * 4);
                    if (cVar2 == '\0') {
                      pcVar13 = (code *)((uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                                        uVar10 << 0x18);
                    }
                    else if (cVar2 == '\x01') {
                      pcVar13 = (code *)(uVar10 & 0xff0000 | (uVar10 & 0xff000000) >> 0x10 |
                                        (uVar10 & 0xff00) << 0x10);
                    }
                    else if (cVar2 == '\x02') {
                      pcVar13 = (code *)((uVar10 >> 0x18) << 0x10 | (uVar10 & 0xff0000) << 8 |
                                        (*(uint *)(iVar3 + uVar6 * 4 + 4) & 0xff) << 8);
                    }
                    else if (cVar2 == '\x03') {
                      uVar6 = *(uint *)(iVar3 + uVar6 * 4 + 4);
                      pcVar13 = (code *)(uVar10 & 0xff000000 |
                                        uVar6 & 0xff00 | (uVar6 & 0xff) << 0x10);
                    }
                    *puVar15 = pcVar13;
                  }
                }
                iVar5 = (int)uVar17 + -1;
                if (iVar5 == 0) break;
                uVar7 = uVar7 + 1;
                if (3 < uVar7) {
                  uVar7 = 0;
                  iVar3 = iVar3 + (uint)*(ushort *)(param_1 + 0xc2) * 0xc;
                }
                uVar18 = FUN_0001261c(*(undefined4 *)(param_1 + 0xd8),param_1 + 0x118);
                uVar17 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),iVar5);
                iVar5 = (int)uVar18;
              }
LAB_00016250:
              iVar5 = iStack_34;
              iVar3 = iStack_38;
              if (acStack_28[0] == '\0') {
                if (param_1[0xfc] != (code)0x3) {
                  *(undefined4 *)(param_1 + 0x100) = DAT_000163b8;
                  uVar17 = FUN_0007df8c(param_1,3,iStack_38);
                  pcVar13 = (code *)((ulonglong)uVar17 >> 0x20);
                  if ((int)uVar17 != 0) {
                    pcVar13 = (code *)0x3;
                    param_1[0xfc] = (code)0x3;
                    *(undefined4 *)(param_1 + 0x11c) = 0xfffffff;
                  }
                }
              }
              else if (*(int *)(param_1 + 0x100) == 0) {
                if (param_1[0xfc] != param_1[0xfd]) {
                  iVar11 = FUN_0007df8c(param_1,param_1[0xfd],param_1[0xc0]);
                  if (iVar11 != 0) {
                    param_1[0xfc] = param_1[0xfd];
                  }
                  *(int *)(param_1 + 0x108) = iVar3;
                }
                if ((*(int *)(param_1 + 0x108) != iVar3) &&
                   (iVar11 = FUN_0007df8c(param_1,6,iVar3), uVar8 = DAT_000163b8, iVar11 != 0)) {
                  param_1[0xfc] = (code)0x6;
                  *(undefined4 *)(param_1 + 0x100) = uVar8;
                }
                *(int *)(param_1 + 0x108) = iVar3 + iVar5;
                pcVar13 = param_1;
                if (*(int *)(param_1 + 0x104) != 0) {
                  pcVar13 = (code *)(*(int *)(param_1 + 0x104) + -1);
                  *(code **)(param_1 + 0x104) = pcVar13;
                  if (pcVar13 == entry) {
                    uVar8 = *(undefined4 *)(param_1 + 0x11c);
                    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xd4);
                    *(undefined4 *)(param_1 + 0x11c) = 0xfffffff;
                    FUN_0007df8c(param_1,5,uVar8);
                    pcVar13 = extraout_r1;
                  }
                }
              }
              else {
                pcVar13 = (code *)(*(int *)(param_1 + 0x100) + -1);
                *(code **)(param_1 + 0x100) = pcVar13;
                *(int *)(param_1 + 0x108) = iStack_38 + iStack_34;
              }
            }
            goto LAB_000163a8;
          }
        }
        else {
          acStack_28[0] = '\0';
        }
        if (param_1[0xfc] != (code)0x3) {
          *(undefined4 *)(param_1 + 0x100) = DAT_000163b8;
          uVar17 = FUN_0007df8c(param_1,3,iStack_38);
          pcVar13 = (code *)((ulonglong)uVar17 >> 0x20);
          if ((int)uVar17 != 0) {
            pcVar13 = (code *)0xfffffff;
            param_1[0xfc] = (code)0x3;
            *(undefined4 *)(param_1 + 0x11c) = 0xfffffff;
          }
        }
      }
LAB_000163a8:
      FUN_0019d1bc(piStack_30,pcVar13);
    }
    else {
      if (iVar3 != -4) {
        return;
      }
      if (param_1[0xfc] != (code)0x2) {
        *(undefined4 *)(param_1 + 0x100) = 1000;
        iVar3 = FUN_0007df30(param_1,2);
        if (iVar3 != 0) {
          param_1[0xfc] = (code)0x2;
          *(undefined4 *)(param_1 + 0x11c) = 0xfffffff;
        }
      }
    }
    if (param_1[0xf0] == (code)0x0) {
      return;
    }
  } while( true );
}

