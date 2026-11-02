// rea decompile_all
// name: FUN_0009e79c
// address: 0x9e79c
// body: available
// range: 0x9e79c-0x9ecef inclusive
// range: 0x9edcc-0x9ee4b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009e79c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  undefined1 *puVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  char local_d8;
  char local_d7;
  int local_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  uint local_c0 [4];
  int *local_b0;
  undefined4 local_a0;
  undefined1 local_9c;
  int local_98;
  undefined2 local_94;
  undefined4 local_8c;
  undefined4 local_88 [2];
  undefined4 local_80;
  ushort local_7c;
  undefined1 local_7a;
  int local_74;
  undefined1 auStack_70 [16];
  int *local_60;
  int local_58;
  uint local_54;
  int *piStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_8c = 0x194;
  piStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  FUN_00159f54(auStack_70,param_1[0x4d]);
  piVar16 = (int *)*local_60;
  if (piVar16 == local_60) goto LAB_0009ee2c;
LAB_0009e7d4:
  local_74 = piVar16[2];
  iVar3 = FUN_00159c48(param_1[0x4d]);
  FUN_00156b08(&local_58,iVar3);
  uVar14 = *(uint *)(*param_6 + -4);
  if (uVar14 == *(uint *)(local_58 + -4)) {
    local_cc = uVar14;
    puVar12 = local_c0;
    if (uVar14 <= *(uint *)(local_58 + -4)) {
      puVar12 = &local_cc;
    }
    local_c0[0] = *(uint *)(local_58 + -4);
    iVar4 = FUN_0000339c(*param_6,local_58,*puVar12);
    if ((iVar4 != 0) || (*(int *)(*param_6 + -4) != *(int *)(local_58 + -4))) goto LAB_0009e858;
    bVar1 = true;
  }
  else {
LAB_0009e858:
    bVar1 = false;
  }
  FUN_001da314(&local_58);
  if (bVar1) {
    FUN_00056158(&local_d8,param_8);
    iVar4 = local_d4;
    if (local_d8 != '\0') {
      if (*(uint *)(param_1[0x4d] + 0x218) != (local_cc & 0xff)) {
        FUN_000028a4(DAT_0009ecf0);
        FUN_00056e64(&local_d8);
        goto LAB_0009ee2c;
      }
      iVar5 = FUN_00159cd8();
      if (iVar4 != iVar5) {
        FUN_000028a4(_DAT_0009ecf4,local_d4);
        FUN_00056e64(&local_d8);
        goto LAB_0009ee2c;
      }
      iVar4 = param_1[0x4d];
      bVar1 = false;
      uVar19 = 0;
      piVar16 = (int *)*local_b0;
      if (piVar16 == local_b0) goto LAB_0009e9e4;
      do {
        iVar5 = FUN_001da408(&local_80,piVar16 + 2);
        *(short *)(iVar5 + 4) = (short)piVar16[3];
        *(undefined1 *)(iVar5 + 6) = *(undefined1 *)((int)piVar16 + 0xe);
        uVar14 = FUN_000394dc(local_80);
        if (uVar14 == 4) {
          FUN_000028a4(s__ERROR__RavennaController__doNot_0009ecf7 + 1,local_80);
          FUN_001da314(&local_80);
        }
        else {
          piVar9 = *(int **)(iVar4 + 0x144);
          piVar6 = (int *)*piVar9;
          if (piVar6 != piVar9) {
            do {
              uVar15 = (uint)*(byte *)(piVar6 + 2);
              bVar20 = uVar15 == uVar14;
              if (bVar20) {
                uVar15 = (uint)*(ushort *)(iVar3 + 0x4e);
              }
              if (bVar20 && uVar15 == local_7c) {
                bVar1 = true;
                FUN_001da314(&local_80);
                uVar19 = local_7a;
                goto LAB_0009e9b0;
              }
              piVar6 = (int *)*piVar6;
            } while (piVar6 != piVar9);
          }
          FUN_001da314(&local_80);
        }
        piVar16 = (int *)*piVar16;
      } while (piVar16 != local_b0);
LAB_0009e9b0:
      if (bVar1) {
        puVar17 = (undefined1 *)(iVar3 + 0x68);
        if (*(char *)(iVar3 + 0x68) == '\0') {
          uVar18 = 0;
          if (local_d7 == '\0') {
            iVar4 = (**(code **)(*param_1 + 0xdc))(param_1);
            if (iVar4 == 0) {
              FUN_000028a4(s____ERROR__RavennaController__doN_0009ed89 + 3);
              FUN_00056e64(&local_d8);
              goto LAB_0009ee2c;
            }
            uVar18 = 1;
          }
          FUN_0018e28c(local_c8,local_88);
          iVar4 = FUN_001db8f8(param_1 + 0x4f,&local_74);
          *(undefined1 *)(iVar4 + 0x14) = uVar19;
          *(char *)(iVar4 + 0xc) = (char)uVar14;
          uVar15 = DAT_0009ed80;
          *(undefined4 *)(iVar4 + 0x1c) = local_88[0];
          *(undefined2 *)(iVar4 + 0x20) = local_cc._2_2_;
          uVar13 = param_1[0x166];
          if (uVar13 < uVar15) {
            param_1[0x166] = uVar13 + 2;
          }
          else {
            param_1[0x166] = DAT_0009ed84;
          }
          *(short *)(iVar4 + 0x22) = (short)uVar13;
          *(undefined1 *)(iVar4 + 0x3a) = uVar18;
          *(undefined1 *)(iVar4 + 4) = 1;
          (**(code **)(*param_1 + 0xcc))(param_1);
          local_9c = 0;
          local_98 = local_74;
          local_a0 = _DAT_0009ed88;
          local_94 = 0;
          (**(code **)(*param_1 + 0xd0))(param_1,&local_a0);
          *(undefined4 *)(iVar3 + 0x70) = local_2c;
          *(undefined4 *)(iVar3 + 0x6c) = local_28;
          FUN_000c9080(puVar17,local_88);
          *(undefined2 *)(iVar3 + 0x78) = local_cc._2_2_;
          *(undefined2 *)(iVar3 + 0x7a) = local_94;
          *(char *)(iVar3 + 0x7c) = (char)uVar14;
          *(undefined1 *)(iVar3 + 0x7d) = uVar19;
          FUN_000c9034(puVar17,param_7);
          *(undefined1 *)(iVar3 + 0x6a) = uVar18;
          *puVar17 = 1;
          *(undefined1 *)(iVar3 + 0x69) = 0;
          uVar14 = FUN_0015a7fc(puVar17);
          uVar2 = local_2c;
          FUN_001a0700(param_1 + 0x167);
          local_54 = uVar14 & 0xffffff00 | 1;
          puVar7 = (undefined4 *)param_1[0x171];
          piVar16 = param_1 + 0x170;
          if (puVar7 == (undefined4 *)param_1[0x172]) {
            uVar14 = (int)puVar7 - *piVar16 >> 2;
            if (uVar14 < (uint)(param_1[0x172] - *piVar16 >> 2)) {
              param_1[0x171] = (int)(puVar7 + 1);
              if (puVar7 != (undefined4 *)0x0) {
                *puVar7 = puVar7[-1];
              }
              puVar10 = puVar7 + -1;
              iVar4 = (int)puVar10 - (int)puVar7;
              if (0 < iVar4 >> 2) {
                puVar11 = puVar7;
                if (iVar4 * 0x20000000 < 0) {
                  puVar10 = puVar7 + -2;
                  puVar11 = puVar7 + -1;
                  *puVar11 = *puVar10;
                }
                for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
                  puVar11[-1] = puVar10[-1];
                  puVar10 = puVar10 + -2;
                  puVar11 = puVar11 + -2;
                  *puVar11 = *puVar10;
                }
              }
              *puVar7 = uVar2;
            }
            else {
              uVar15 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
              if (uVar15 < uVar14 + 1) {
                uVar15 = uVar14 + 1;
              }
              puVar8 = (undefined4 *)FUN_0010f82c(uVar15 << 2,0);
              puVar11 = puVar8;
              for (puVar10 = (undefined4 *)*piVar16; puVar10 != puVar7; puVar10 = puVar10 + 1) {
                if (puVar11 != (undefined4 *)0x0) {
                  *puVar11 = *puVar10;
                }
                puVar11 = puVar11 + 1;
              }
              puVar10 = (undefined4 *)(((int)puVar7 - *piVar16 & 0xfffffffcU) + (int)puVar8);
              if (puVar10 != (undefined4 *)0x0) {
                *puVar10 = uVar2;
              }
              puVar11 = (undefined4 *)param_1[0x171];
              puVar10 = (undefined4 *)(((int)puVar7 - *piVar16 & 0xfffffffcU) + (int)puVar8);
              for (; puVar7 != puVar11; puVar7 = puVar7 + 1) {
                puVar10 = puVar10 + 1;
                if (puVar10 != (undefined4 *)0x0) {
                  *puVar10 = *puVar7;
                }
              }
              iVar4 = *piVar16;
              iVar5 = param_1[0x171];
              FUN_0010fa20(iVar4,param_1[0x172] - iVar4 >> 2,0);
              param_1[0x172] = (int)(puVar8 + uVar15);
              param_1[0x171] = (int)(puVar8 + (iVar5 - iVar4 >> 2) + 1);
              *piVar16 = (int)puVar8;
            }
          }
          else {
            param_1[0x171] = (int)(puVar7 + 1);
            if (puVar7 != (undefined4 *)0x0) {
              *puVar7 = uVar2;
            }
          }
          if ((local_54 & 0xff) != 0) {
            FUN_001a0d18(param_1 + 0x167);
          }
          FUN_0009d5d8(param_1,iVar3);
          FUN_00056fa0(local_30,param_5,200,iVar3 + 100);
          FUN_00056e64(&local_d8);
          FUN_001dd150(auStack_70);
          return;
        }
        FUN_000028a4(DAT_0009ed34);
        local_8c = DAT_0009ed38;
        FUN_00056e64(&local_d8);
      }
      else {
LAB_0009e9e4:
        FUN_000028a4(s_ERROR__RavennaController__doNoti_0009ed3c);
        local_8c = DAT_0009ed7c;
        FUN_00056e64(&local_d8);
      }
LAB_0009ee2c:
      FUN_00056f4c(local_30,param_5,local_8c);
      FUN_001dd150(auStack_70);
      return;
    }
    FUN_00056e64(&local_d8);
  }
  piVar16 = (int *)*piVar16;
  if (piVar16 == local_60) goto LAB_0009ee2c;
  goto LAB_0009e7d4;
}

