// rea decompile_all
// name: FUN_0014549c
// address: 0x14549c
// body: available
// range: 0x14549c-0x1458b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0014549c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [24];
  int iStack_78;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [28];
  
  uVar1 = DAT_001458b4;
  if (*(char *)(param_1 + 0xbe) == '\0') {
    return;
  }
  iStack_68 = param_1 + 0x174;
  iStack_64 = param_1 + 0xae0;
  iStack_60 = param_1 + 0xa00;
  iStack_5c = param_1 + 0xb00;
  do {
    iVar2 = thunk_EXT_FUN_004002f0(param_1 + 0xd0,&iStack_6c,0xffffffff);
    if (iVar2 == 0) {
      if (((iStack_6c != 0) &&
          (iVar2 = FUN_001c7218(iStack_6c,DAT_001458bc,DAT_001458b8,0xffffffff), iVar2 != 0)) ||
         ((uVar6 = DAT_001458e4, iStack_6c != 0 &&
          (iVar2 = FUN_001c7218(iStack_6c,DAT_001458bc,DAT_001458c0,0xffffffff),
          uVar6 = DAT_001458e4, iVar2 != 0)))) {
        uVar12 = *(undefined4 *)(iVar2 + 8);
        uVar11 = *(uint *)(iVar2 + 0x14);
        uVar6 = DAT_001458e4;
        if (uVar11 != 0xffffffff) {
          iVar2 = (int)((ulonglong)
                        ((longlong)DAT_001458c4 *
                        (longlong)(*(int *)(param_1 + 0x16c) - *(int *)(param_1 + 0x168))) >> 0x20);
          uVar10 = 0;
          uVar3 = (iVar2 >> 7) - (iVar2 >> 0x1f);
          do {
            uVar8 = *(uint *)(*(int *)(param_1 + 0x168) + uVar10 * 0x1b0);
            bVar14 = uVar11 <= uVar8;
            if (uVar8 != uVar11) {
              uVar10 = uVar10 + 1;
              bVar14 = uVar10 <= uVar3;
            }
          } while (bVar14 && (uVar8 != uVar11 && uVar3 != uVar10));
          uVar6 = DAT_001458c8;
          if (uVar3 != uVar10) {
            uVar3 = 1;
            FUN_0012378c(auStack_90,param_1 + 0x114,uVar12,uVar11);
            piVar4 = (int *)FUN_000cbaf0();
            iVar2 = (**(code **)(*piVar4 + 8))(piVar4,auStack_90,0xffffffff);
            if (iVar2 == 0) {
              uStack_c8 = iStack_78;
              uVar8 = *(uint *)(*(int *)(param_1 + 0x168) + uVar10 * 0x1b0 + 0x1c);
              if (uVar8 == 0) {
                uStack_c0 = 0;
              }
              else {
                *(undefined4 *)(param_1 + 0x174) = DAT_001458d0;
                *(uint *)(param_1 + 0x178) = uVar8 * 0x18 + 4;
                *(uint *)(param_1 + 0x17c) = uVar8;
                uVar5 = 0;
                if (uVar8 != 0) {
                  do {
                    iVar7 = param_1 + uVar5 * 0x18;
                    *(undefined4 *)(iVar7 + 0x184) = 0;
                    *(undefined4 *)(iVar7 + 0x18c) = 0;
                    *(uint *)(iVar7 + 0x180) = uVar5;
                    *(undefined4 *)(iVar7 + 400) = 0;
                    *(undefined4 *)(iVar7 + 0x188) = uVar1;
                    iVar2 = uVar5 * 4;
                    uVar5 = uVar5 + 1;
                    *(undefined4 *)(iVar7 + 0x194) =
                         *(undefined4 *)(*(int *)(param_1 + 0x168) + uVar10 * 0x1b0 + iVar2 + 0x20);
                  } while (uVar5 < uVar8);
                }
                uStack_c0 = *(int *)(param_1 + 0x178) + 8;
                FUN_0012c838(auStack_b8,param_1 + 0x114,uVar12,uVar11);
                piVar4 = (int *)FUN_000cbaf0();
                iVar2 = (**(code **)(*piVar4 + 8))(piVar4,auStack_b8,0xffffffff);
                if (iVar2 != 0) {
                  FUN_00002898(DAT_001458d4);
                  uVar3 = 0;
                  goto LAB_001457c8;
                }
              }
              FUN_00123634(auStack_40,param_1 + 0x114,uVar12,uVar11);
              piVar4 = (int *)FUN_000cbaf0();
              iVar2 = (**(code **)(*piVar4 + 8))(piVar4,auStack_40,0xffffffff);
              if (iVar2 == 0) {
                *(uint *)(param_1 + 0xae4) = uStack_c8 + uStack_c0 + -8;
                iVar2 = *(int *)(param_1 + 0x168) + uVar10 * 0x1b0;
                uVar6 = *(undefined4 *)(iVar2 + 8);
                uVar9 = *(undefined4 *)(iVar2 + 0xc);
                uVar13 = *(undefined4 *)(iVar2 + 0x10);
                *(undefined4 *)(param_1 + 0xaec) = *(undefined4 *)(iVar2 + 4);
                *(undefined4 *)(param_1 + 0xaf0) = uVar6;
                *(undefined4 *)(param_1 + 0xaf4) = uVar9;
                *(undefined4 *)(param_1 + 0xaf8) = uVar13;
                uVar6 = *(undefined4 *)(iVar2 + 0x14);
                uVar9 = *(undefined4 *)(iVar2 + 0x18);
                *(int *)(param_1 + 0xb08) = uStack_c8 + -0x2c;
                *(undefined4 *)(param_1 + 0xafc) = uVar6;
                *(undefined4 *)(param_1 + 0xb00) = uVar9;
                FUN_0012c838(auStack_b8,param_1 + 0x114,uVar12,uVar11);
                piVar4 = (int *)FUN_000cbaf0();
                iVar2 = (**(code **)(*piVar4 + 8))(piVar4,auStack_b8,0xffffffff);
                if (iVar2 != 0) {
                  FUN_00002898(DAT_001458dc);
                  uVar3 = 0;
                }
              }
              else {
                FUN_00002898(DAT_001458d8);
                uVar3 = 0;
              }
            }
            else {
              FUN_00002898(DAT_001458cc);
              uVar3 = 0;
            }
LAB_001457c8:
            FUN_0012c504(auStack_58,param_1 + 0x114,uVar12,uVar11);
            piVar4 = (int *)FUN_000cbaf0();
            iVar2 = (**(code **)(*piVar4 + 8))(piVar4,auStack_58,0xffffffff);
            if (iVar2 != 0) {
              FUN_00002898(DAT_001458e0);
              uVar3 = 0;
            }
            *(undefined4 *)(*(int *)(param_1 + 0x168) + uVar10 * 0x1b0) = 0xffffffff;
            iVar2 = FUN_000d97d4();
            if (iVar2 != 0) {
              uVar6 = 0;
              if (uVar3 != 0) {
                uVar6 = FUN_00006604(*(undefined4 *)(param_1 + 0xb08),
                                     (uint)(*(ushort *)(iStack_5c + 2) >> 3) *
                                     (uint)*(ushort *)(iStack_60 + 0xf6));
              }
              uStack_c8 = CONCAT13(5,CONCAT12((char)uVar10,0x101));
              uStack_bc = 0;
              uStack_c0 = uVar3 ^ 1;
              uStack_c4 = uVar6;
              FUN_001b2acc(iVar2,&uStack_c8,0xffffffff);
            }
            goto LAB_00145898;
          }
        }
      }
      FUN_00002898(uVar6);
    }
LAB_00145898:
    if (*(char *)(param_1 + 0xbe) == '\0') {
      return;
    }
  } while( true );
}

