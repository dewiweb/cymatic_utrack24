// rea decompile_all
// name: FUN_000fce38
// address: 0xfce38
// body: available
// range: 0xfce38-0xfd12f inclusive
// range: 0xfd198-0xfd287 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000fce38(int param_1)

{
  char ******ppppppcVar1;
  undefined4 uVar2;
  int iVar3;
  char *****pppppcVar4;
  char ****ppppcVar5;
  char ******ppppppcVar6;
  char ******ppppppcVar7;
  char ******ppppppcVar8;
  undefined4 uVar9;
  char ******ppppppcVar10;
  bool bVar11;
  bool bVar12;
  undefined4 local_4c;
  char *****local_48;
  char *****local_44;
  undefined4 local_40;
  undefined4 local_3c;
  char *****local_38;
  char *****local_34;
  char *****local_30;
  char *****local_2c;
  char *****local_28;
  
  uVar9 = 1;
  iVar3 = FUN_0004eb44(*(undefined4 *)(param_1 + 0x114),s_OutputGroups_000fd130,&local_4c);
  if (iVar3 != 0) {
    FUN_000fd288(param_1);
    iVar3 = FUN_00048bd4(local_4c,s_User_SIPIdentity_000fd140,param_1 + 0x1bc);
    if (iVar3 == 0) {
      FUN_00002898(DAT_000fd154,s_User_SIPIdentity_000fd140);
    }
    FUN_00046be8(local_4c);
    local_40 = DAT_000fd158;
    iVar3 = FUN_0004ce00(local_4c,&local_40);
    while (iVar3 != 0) {
      iVar3 = FUN_000466b0(local_40,&local_3c);
      if (iVar3 != 0) {
        pppppcVar4 = (char *****)FUN_001f01c4(0x4c,1);
        uVar2 = _DAT_000fd15c;
        if (pppppcVar4 != (char *****)0x0) {
          pppppcVar4[1] = (char ****)0x0;
          FUN_001f0168(pppppcVar4,uVar2);
          pppppcVar4[9] = (char ****)0x0;
          pppppcVar4[10] = (char ****)0x0;
          pppppcVar4[0xe] = (char ****)0x0;
          pppppcVar4[0xf] = (char ****)0x0;
          *(undefined1 *)(pppppcVar4 + 0x10) = 0;
          *(char *)((int)pppppcVar4 + 0x41) = (char)(pppppcVar4 + 10);
          pppppcVar4[0xd] = (char ****)0x0;
          pppppcVar4[0xc] = (char ****)0x0;
          pppppcVar4[0xb] = (char ****)0x0;
          ppppcVar5 = (char ****)FUN_00220234(pppppcVar4 + 10);
          pppppcVar4[0xe] = ppppcVar5;
          ppppcVar5[1] = (char ***)0x0;
          pppppcVar4[0xe][2] = (char ***)pppppcVar4[0xe];
          pppppcVar4[0xe][3] = (char ***)pppppcVar4[0xe];
          pppppcVar4[0x11] = (char ****)0x0;
          *(undefined1 *)(pppppcVar4 + 0x12) = 0;
          *(undefined1 *)((int)pppppcVar4 + 0x49) = 0;
          *(undefined1 *)((int)pppppcVar4 + 0x4a) = 0;
        }
        iVar3 = FUN_00061108(pppppcVar4,param_1,local_3c);
        if (iVar3 == 0) {
joined_r0x000fd274:
          if (pppppcVar4 != (char *****)0x0) {
            FUN_00061728(pppppcVar4);
            FUN_001eecc8();
          }
          uVar9 = 0;
        }
        else {
          local_48 = (char *****)*(char *******)(param_1 + 0x1d0);
          ppppppcVar6 = (char ******)(*(char *******)(param_1 + 0x1d0))[1];
          while (ppppppcVar6 != (char ******)0x0) {
            if (ppppppcVar6[4] < pppppcVar4[0x11]) {
              ppppppcVar6 = (char ******)ppppppcVar6[3];
            }
            else {
              local_48 = (char *****)ppppppcVar6;
              ppppppcVar6 = (char ******)ppppppcVar6[2];
            }
          }
          local_44 = (char *****)*(char *******)(param_1 + 0x1d0);
          ppppppcVar6 = (char ******)(*(char *******)(param_1 + 0x1d0))[1];
          while (ppppppcVar6 != (char ******)0x0) {
            if (pppppcVar4[0x11] < ppppppcVar6[4]) {
              local_44 = (char *****)ppppppcVar6;
              ppppppcVar6 = (char ******)ppppppcVar6[2];
            }
            else {
              ppppppcVar6 = (char ******)ppppppcVar6[3];
            }
          }
          iVar3 = 0;
          ppppppcVar6 = (char ******)local_48;
          while (ppppppcVar6 != (char ******)local_44) {
            iVar3 = iVar3 + 1;
            ppppppcVar8 = (char ******)ppppppcVar6[3];
            if ((char ******)ppppppcVar6[3] == (char ******)0x0) {
              for (ppppppcVar8 = (char ******)ppppppcVar6[1];
                  ppppppcVar6 == (char ******)ppppppcVar8[3];
                  ppppppcVar8 = (char ******)ppppppcVar8[1]) {
                ppppppcVar6 = ppppppcVar8;
              }
              if ((char ******)ppppppcVar6[3] != ppppppcVar8) {
                ppppppcVar6 = ppppppcVar8;
              }
            }
            else {
              do {
                ppppppcVar6 = ppppppcVar8;
                ppppppcVar8 = (char ******)ppppppcVar6[2];
              } while ((char ******)ppppppcVar6[2] != (char ******)0x0);
            }
          }
          if (iVar3 != 0) {
            local_38 = local_48;
            local_34 = local_44;
            FUN_00002898(s___ERROR__RavennaConfiguration__R_000fd15e + 2);
            goto joined_r0x000fd274;
          }
          local_38 = (char *****)pppppcVar4[0x11];
          local_34 = (char *****)0x0;
          ppppppcVar8 = *(char *******)(param_1 + 0x1d0);
          bVar11 = (char ******)ppppppcVar8[1] != (char ******)0x0;
          ppppppcVar6 = &local_44;
          if (bVar11) {
            ppppppcVar6 = (char ******)local_38;
          }
          bVar12 = true;
          ppppppcVar10 = ppppppcVar8;
          ppppppcVar1 = (char ******)ppppppcVar8[1];
          while (bVar11) {
            bVar12 = ppppppcVar6 < ppppppcVar1[4];
            if (bVar12) {
              ppppppcVar7 = (char ******)ppppppcVar1[2];
            }
            else {
              ppppppcVar7 = (char ******)ppppppcVar1[3];
            }
            bVar11 = ppppppcVar7 != (char ******)0x0;
            ppppppcVar10 = ppppppcVar1;
            ppppppcVar1 = ppppppcVar7;
          }
          if (*(char *)(param_1 + 0x1d8) == '\0') {
            if (bVar12) {
              if (ppppppcVar10 == (char ******)ppppppcVar8[2]) {
                FUN_0021fe6c(&local_2c);
                local_48 = local_2c;
                local_44 = (char *****)CONCAT31(local_44._1_3_,1);
                goto LAB_000fd228;
              }
              if ((*(char *)ppppppcVar10 == '\0') &&
                 ((char ******)ppppppcVar10[1][1] == ppppppcVar10)) {
                ppppppcVar10 = (char ******)ppppppcVar10[3];
              }
              else {
                ppppppcVar6 = (char ******)ppppppcVar10[2];
                if ((char ******)ppppppcVar10[2] == (char ******)0x0) {
                  ppppppcVar6 = (char ******)ppppppcVar10[1];
                  ppppppcVar8 = ppppppcVar10;
                  while (ppppppcVar10 = ppppppcVar6, ppppppcVar8 == (char ******)ppppppcVar10[2]) {
                    ppppppcVar8 = ppppppcVar10;
                    ppppppcVar6 = (char ******)ppppppcVar10[1];
                  }
                }
                else {
                  do {
                    ppppppcVar10 = ppppppcVar6;
                    ppppppcVar6 = (char ******)ppppppcVar10[3];
                  } while ((char ******)ppppppcVar10[3] != (char ******)0x0);
                }
              }
            }
            if (ppppppcVar10[4] < local_38) {
              FUN_0021fe6c(&local_28);
              local_48 = local_28;
              local_44 = (char *****)CONCAT31(local_44._1_3_,1);
            }
            else {
              local_44 = (char *****)((uint)local_44 & 0xffffff00);
              local_48 = (char *****)ppppppcVar10;
            }
          }
          else {
            FUN_0021fe6c(&local_30);
            local_48 = local_30;
            local_44 = (char *****)CONCAT31(local_44._1_3_,1);
          }
LAB_000fd228:
          local_48[5] = (char ****)pppppcVar4;
        }
        FUN_00046b8c(local_3c);
      }
      iVar3 = FUN_0004ce00(local_4c,&local_40);
    }
    FUN_00046b8c(local_4c);
    FUN_00232920(&local_40);
  }
  return uVar9;
}

