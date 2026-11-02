// rea decompile_all
// name: FUN_000158e4
// address: 0x158e4
// body: available
// range: 0x158e4-0x15c9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000158e4(int param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int extraout_r1;
  undefined4 uVar9;
  uint *puVar10;
  int iVar11;
  code *extraout_r12;
  code *pcVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  undefined2 auStack_2c [2];
  char acStack_28 [4];
  
  pcVar1 = DAT_000163b4;
  if (*(char *)(param_1 + 0xf0) == '\0') {
    return;
  }
  do {
    while (iVar2 = FUN_0019dd64(*(undefined4 *)(param_1 + 0xec),&piStack_30), *pcVar1 != '\0') {
      if (iVar2 == 0) {
        thunk_FUN_0019d1bc(piStack_30);
      }
      if ((*(char *)(param_1 + 0xfc) != '\x04') && (iVar2 = FUN_0007df30(param_1,4), iVar2 != 0)) {
        *(undefined1 *)(param_1 + 0xfc) = 4;
        *(undefined4 *)(param_1 + 0x11c) = 0xfffffff;
        *(undefined4 *)(param_1 + 0x100) = 0;
      }
      if (*(char *)(param_1 + 0xf0) == '\0') {
        return;
      }
    }
    if (iVar2 == 0) {
      auStack_2c[0] = *(undefined2 *)(*piStack_30 + 8);
      iVar2 = *(int *)(*piStack_30 + 4);
      bVar13 = (*(uint *)(param_1 + 0xf8) & 1) == 0;
      pcVar12 = extraout_r12;
      if (bVar13) {
        pcVar12 = *(code **)(param_1 + 0xf4);
      }
      piVar3 = (int *)(param_1 + ((int)*(uint *)(param_1 + 0xf8) >> 1));
      if (!bVar13) {
        pcVar12 = *(code **)(*piVar3 + *(int *)(param_1 + 0xf4));
      }
      uVar14 = (*pcVar12)(piVar3,iVar2,auStack_2c,&iStack_38);
      iVar7 = (int)((ulonglong)uVar14 >> 0x20);
      if ((uint)uVar14 == 0) goto LAB_00015c90;
      if (*(char *)(param_1 + 0xc0) == '\0') {
        uVar15 = FUN_0001253c(*(undefined4 *)(param_1 + 0xd8),param_1 + 0x118,iStack_38,acStack_28);
        iVar7 = (int)((ulonglong)uVar15 >> 0x20);
        iVar6 = (int)uVar15;
        if (iVar6 == 0) goto LAB_00015c64;
        uVar15 = FUN_00006158(auStack_2c[0],(uint)*(ushort *)(param_1 + 0xc2) << 1);
        iVar11 = (int)uVar15;
        iVar7 = (int)((ulonglong)uVar15 >> 0x20);
        iStack_34 = iVar11;
        if (iVar11 != 0) {
          iVar2 = iVar2 + ((uint)uVar14 & 0xfffffffe);
          if (*(char *)(param_1 + 0xbf) == '\0') {
            while( true ) {
              iVar4 = 0;
              while( true ) {
                iVar7 = (int)*(char *)(*(int *)(param_1 + 0x224) + iVar4);
                iVar5 = iVar4 + 1;
                if (iVar7 < 0) break;
                iVar4 = iVar4 + 2;
                puVar10 = *(uint **)(iVar6 + *(char *)(*(int *)(param_1 + 0x224) + iVar5) * 4);
                if (puVar10 != (uint *)0x0) {
                  uVar8 = (uint)*(ushort *)(iVar2 + iVar7 * 2);
                  *puVar10 = (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
                }
              }
              iVar11 = iVar11 + -1;
              if (iVar11 == 0) break;
              iVar2 = iVar2 + (uint)*(ushort *)(param_1 + 0xc2) * 2;
              iVar6 = FUN_0001261c(*(undefined4 *)(param_1 + 0xd8),param_1 + 0x118);
            }
          }
          else {
            while( true ) {
              iVar4 = 0;
              while( true ) {
                iVar7 = (int)*(char *)(*(int *)(param_1 + 0x224) + iVar4);
                iVar5 = iVar4 + 1;
                if (iVar7 < 0) break;
                iVar4 = iVar4 + 2;
                puVar10 = *(uint **)(iVar6 + *(char *)(*(int *)(param_1 + 0x224) + iVar5) * 4);
                if (puVar10 != (uint *)0x0) {
                  *puVar10 = (uint)*(ushort *)(iVar2 + iVar7 * 2);
                }
              }
              iVar11 = iVar11 + -1;
              if (iVar11 == 0) break;
              iVar2 = iVar2 + (uint)*(ushort *)(param_1 + 0xc2) * 2;
              iVar6 = FUN_0001261c(*(undefined4 *)(param_1 + 0xd8),param_1 + 0x118);
            }
          }
          iVar6 = iStack_34;
          iVar2 = iStack_38;
          if (acStack_28[0] != '\0') {
            if (*(int *)(param_1 + 0x100) == 0) {
              if (*(char *)(param_1 + 0xfc) != *(char *)(param_1 + 0xfd)) {
                iVar7 = FUN_0007df8c(param_1,*(char *)(param_1 + 0xfd),
                                     *(undefined1 *)(param_1 + 0xc0));
                if (iVar7 != 0) {
                  *(undefined1 *)(param_1 + 0xfc) = *(undefined1 *)(param_1 + 0xfd);
                }
                *(int *)(param_1 + 0x108) = iVar2;
              }
              if ((*(int *)(param_1 + 0x108) != iVar2) &&
                 (iVar7 = FUN_0007df8c(param_1,6,iVar2), uVar9 = DAT_000163b8, iVar7 != 0)) {
                *(undefined1 *)(param_1 + 0xfc) = 6;
                *(undefined4 *)(param_1 + 0x100) = uVar9;
              }
              *(int *)(param_1 + 0x108) = iVar2 + iVar6;
              iVar7 = param_1;
              if (*(int *)(param_1 + 0x104) != 0) {
                iVar7 = *(int *)(param_1 + 0x104) + -1;
                *(int *)(param_1 + 0x104) = iVar7;
                if (iVar7 == 0) {
                  uVar9 = *(undefined4 *)(param_1 + 0x11c);
                  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xd4);
                  *(undefined4 *)(param_1 + 0x11c) = 0xfffffff;
                  FUN_0007df8c(param_1,5,uVar9);
                  iVar7 = extraout_r1;
                }
              }
            }
            else {
              iVar7 = *(int *)(param_1 + 0x100) + -1;
              *(int *)(param_1 + 0x100) = iVar7;
              *(int *)(param_1 + 0x108) = iStack_38 + iStack_34;
            }
            goto LAB_00015c90;
          }
          if (*(char *)(param_1 + 0xfc) == '\x03') goto LAB_00015c90;
          *(undefined4 *)(param_1 + 0x100) = DAT_000163b8;
          uVar14 = FUN_0007df8c(param_1,3,iStack_38);
          iVar7 = (int)((ulonglong)uVar14 >> 0x20);
          if ((int)uVar14 == 0) goto LAB_00015c90;
LAB_00015c54:
          *(undefined1 *)(param_1 + 0xfc) = 3;
          *(undefined4 *)(param_1 + 0x11c) = 0xfffffff;
        }
      }
      else {
        acStack_28[0] = '\0';
LAB_00015c64:
        if (*(char *)(param_1 + 0xfc) != '\x03') {
          *(undefined4 *)(param_1 + 0x100) = DAT_000163b8;
          uVar14 = FUN_0007df8c(param_1,3,iStack_38);
          iVar7 = (int)((ulonglong)uVar14 >> 0x20);
          if ((int)uVar14 != 0) goto LAB_00015c54;
        }
      }
LAB_00015c90:
      FUN_0019d1bc(piStack_30,iVar7);
    }
    else {
      if (iVar2 != -4) {
        return;
      }
      if (*(char *)(param_1 + 0xfc) != '\x02') {
        *(undefined4 *)(param_1 + 0x100) = 1000;
        iVar2 = FUN_0007df30(param_1,2);
        if (iVar2 != 0) {
          *(undefined1 *)(param_1 + 0xfc) = 2;
          *(undefined4 *)(param_1 + 0x11c) = 0xfffffff;
        }
      }
    }
    if (*(char *)(param_1 + 0xf0) == '\0') {
      return;
    }
  } while( true );
}

