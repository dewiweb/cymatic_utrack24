// rea decompile_all
// name: FUN_00013004
// address: 0x13004
// body: available
// range: 0x13004-0x13403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00013004(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint unaff_r6;
  code *extraout_r12;
  code *pcVar12;
  bool bVar13;
  undefined4 uStack_68;
  undefined2 auStack_64 [2];
  int iStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_3c;
  int *apiStack_34 [4];
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    return;
  }
  iStack_60 = param_1 + 0xdc;
  do {
    iVar3 = FUN_00051ec0(param_1,apiStack_34);
    if (iVar3 == 0) {
      auStack_64[0] = *(undefined2 *)(*apiStack_34[0] + 8);
      iVar3 = *(int *)(*apiStack_34[0] + 4);
      bVar13 = (*(uint *)(param_1 + 0xf8) & 1) == 0;
      pcVar12 = extraout_r12;
      if (bVar13) {
        pcVar12 = *(code **)(param_1 + 0xf4);
      }
      piVar4 = (int *)(param_1 + ((int)*(uint *)(param_1 + 0xf8) >> 1));
      if (!bVar13) {
        unaff_r6 = *(uint *)(param_1 + 0xf4);
        pcVar12 = *(code **)(*piVar4 + unaff_r6);
      }
      uVar5 = (*pcVar12)(piVar4,iVar3,auStack_64,&uStack_68);
      if (uVar5 != 0) {
        if (*(char *)(param_1 + 0xc0) == '\0') {
          iVar6 = FUN_000123d8(*(undefined4 *)(param_1 + 0xd8),iStack_60,uStack_68);
        }
        else {
          iVar6 = FUN_00012468();
        }
        uVar2 = uStack_68;
        if (iVar6 == 0) {
          if (*(char *)(param_1 + 0xfc) != '\x03') {
            unaff_r6 = 3;
            *(undefined4 *)(param_1 + 0x100) = DAT_00013000;
            iVar3 = FUN_000a7b84();
            if (iVar3 != 0) {
              uStack_58._0_3_ = CONCAT12(*(undefined1 *)(param_1 + 0xbe),3);
              uStack_58 = CONCAT13(3,(undefined3)uStack_58);
              uStack_54 = uVar2;
              uStack_50 = 0;
              uStack_4c = 0;
              iVar3 = FUN_00154df8(iVar3,&uStack_58);
              if (iVar3 != 0) {
                *(undefined1 *)(param_1 + 0xfc) = 3;
                *(undefined4 *)(param_1 + 0xe4) = 0xfffffff;
              }
            }
          }
        }
        else {
          iVar7 = FUN_00006158(auStack_64[0],(uint)*(ushort *)(param_1 + 0xc2) * 3);
          uStack_58 = iVar7;
          if (iVar7 != 0) {
            if (*(char *)(param_1 + 0xbf) != '\0') {
              iVar3 = iVar3 + (uVar5 & 0xfffffffc);
              iStack_3c = param_1 + 0xdc;
              uVar5 = 0;
              do {
                for (iVar10 = 0; pcVar8 = (char *)(*(int *)(param_1 + 0x118) + iVar10 * 0xc),
                    *pcVar8 != '\0'; iVar10 = iVar10 + 1) {
                  cVar1 = pcVar8[uVar5 + 8];
                  uVar11 = (uint)(byte)pcVar8[uVar5 + 4];
                  uVar9 = *(uint *)(iVar3 + uVar11 * 4);
                  if (cVar1 == '\0') {
                    unaff_r6 = uVar9 & 0xffffff;
                  }
                  else if (cVar1 == '\x01') {
                    unaff_r6 = uVar9 >> 8;
                  }
                  else {
                    if (cVar1 == '\x02') {
                      uVar9 = uVar9 >> 0x10;
                      uVar11 = (*(uint *)(iVar3 + uVar11 * 4 + 4) & 0xff) << 0x10;
                    }
                    else {
                      if (cVar1 != '\x03') goto LAB_0001332c;
                      uVar9 = uVar9 >> 0x18;
                      uVar11 = (*(uint *)(iVar3 + uVar11 * 4 + 4) & 0xffff) << 8;
                    }
                    unaff_r6 = uVar11 | uVar9;
                  }
LAB_0001332c:
                  *(uint *)(iVar6 + (uint)(byte)pcVar8[1] * 4) = unaff_r6;
                }
                iVar7 = iVar7 + -1;
                if (iVar7 == 0) goto LAB_0001336c;
                uVar5 = uVar5 + 1;
                if (3 < uVar5) {
                  uVar5 = 0;
                  iVar3 = iVar3 + (uint)*(ushort *)(param_1 + 0xc2) * 0xc;
                }
                iVar6 = FUN_00012514(*(undefined4 *)(param_1 + 0xd8),iStack_3c);
              } while( true );
            }
            iVar3 = iVar3 + (uVar5 & 0xfffffffc);
            uVar5 = 0;
            while( true ) {
              for (iVar10 = 0; pcVar8 = (char *)(*(int *)(param_1 + 0x118) + iVar10 * 0xc),
                  *pcVar8 != '\0'; iVar10 = iVar10 + 1) {
                cVar1 = pcVar8[uVar5 + 8];
                uVar11 = (uint)(byte)pcVar8[uVar5 + 4];
                uVar9 = *(uint *)(iVar3 + uVar11 * 4);
                if (cVar1 == '\0') {
                  unaff_r6 = (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
                }
                else if (cVar1 == '\x01') {
                  unaff_r6 = uVar9 & 0xff0000 | (uVar9 & 0xff000000) >> 0x10 |
                             (uVar9 & 0xff00) << 0x10;
                }
                else if (cVar1 == '\x02') {
                  unaff_r6 = (uVar9 >> 0x18) << 0x10 | (uVar9 & 0xff0000) << 8 |
                             (*(uint *)(iVar3 + uVar11 * 4 + 4) & 0xff) << 8;
                }
                else if (cVar1 == '\x03') {
                  uVar11 = *(uint *)(iVar3 + uVar11 * 4 + 4);
                  unaff_r6 = uVar11 & 0xff00 | (uVar11 & 0xff) << 0x10 | uVar9 & 0xff000000;
                }
                *(uint *)(iVar6 + (uint)(byte)pcVar8[1] * 4) = unaff_r6;
              }
              iVar7 = iVar7 + -1;
              if (iVar7 == 0) break;
              uVar5 = uVar5 + 1;
              if (3 < uVar5) {
                uVar5 = 0;
                iVar3 = iVar3 + (uint)*(ushort *)(param_1 + 0xc2) * 0xc;
              }
              iVar6 = FUN_00012514(*(undefined4 *)(param_1 + 0xd8),param_1 + 0xdc);
            }
LAB_0001336c:
            FUN_000128d4(param_1,uStack_58,uStack_68);
          }
        }
      }
      FUN_0019d1bc(apiStack_34[0]);
    }
    else {
      if (iVar3 != -4) {
        return;
      }
      if (*(char *)(param_1 + 0xfc) != '\x02') {
        *(undefined4 *)(param_1 + 0x100) = 1000;
        iVar3 = FUN_000a7b84();
        if (iVar3 != 0) {
          uStack_58._0_3_ = CONCAT12(*(undefined1 *)(param_1 + 0xbe),3);
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_58 = CONCAT13(2,(undefined3)uStack_58);
          iVar3 = FUN_00154df8(iVar3,&uStack_58,0);
          if (iVar3 != 0) {
            *(undefined1 *)(param_1 + 0xfc) = 2;
            *(undefined4 *)(param_1 + 0xe4) = 0xfffffff;
          }
        }
      }
    }
    if (*(char *)(param_1 + 0xf0) == '\0') {
      return;
    }
  } while( true );
}

