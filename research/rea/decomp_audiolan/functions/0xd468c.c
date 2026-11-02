// rea decompile_all
// name: FUN_000d468c
// address: 0xd468c
// body: available
// range: 0xd468c-0xd4b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000d468c(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  short sVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  bool bVar13;
  bool bVar14;
  undefined4 *local_b0;
  undefined1 *puStack_ac;
  int local_a8;
  int local_a4;
  undefined4 *local_a0;
  int *local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int local_8c;
  undefined1 auStack_88 [10];
  ushort local_7e;
  undefined4 local_7c;
  ushort local_72;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_50;
  ushort local_4e;
  undefined1 auStack_4c [4];
  undefined4 local_48;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  local_a0 = (undefined4 *)0x0;
  local_9c = (int *)0x0;
  local_98 = (int *)0x0;
  local_94 = (int *)0x0;
  local_90 = (int *)0x0;
  local_8c = 0;
  iStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  puVar2 = (undefined4 *)FUN_0010f82c(0xc,0);
  uVar3 = FUN_0010f82c(0xc,0);
  puVar2[2] = uVar3;
  *puVar2 = local_a0;
  puVar2[1] = 1;
  local_90 = (int *)puVar2[2];
  local_98 = local_90 + 3;
  *local_90 = (int)local_90;
  local_90[1] = (int)local_90;
  piVar9 = (int *)**(int **)(param_2 + 0x10);
  local_a0 = puVar2;
  local_94 = local_98;
  if (piVar9 != *(int **)(param_2 + 0x10)) {
    do {
      piVar10 = piVar9 + 2;
      piVar6 = (int *)*local_90;
      if (piVar6 != local_90) {
        do {
          uVar4 = *(uint *)(*piVar10 + -4);
          uVar5 = *(uint *)(piVar6[2] + -4);
          if (uVar4 <= uVar5) {
            uVar5 = uVar4;
          }
          uVar5 = FUN_0000351e(*piVar10,piVar6[2],uVar5);
          if (uVar5 == 0) {
            uVar5 = *(uint *)(*piVar10 + -4);
            uVar4 = *(uint *)(piVar6[2] + -4);
            bVar14 = uVar5 < uVar4;
            bVar13 = uVar5 == uVar4;
            if (bVar13) {
              uVar5 = 0;
            }
            if (!bVar14 && !bVar13) {
              uVar5 = 0;
            }
            if (bVar14) {
              uVar5 = 0xffffffff;
            }
          }
          if ((int)uVar5 < 0) {
            if (local_9c == (int *)0x0) {
              if (local_98 == local_94) {
                uVar5 = 1;
                if (local_a0 != (undefined4 *)0x0) {
                  uVar4 = local_a0[1];
                  uVar5 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
                  if (uVar5 < uVar4 + 1) {
                    uVar5 = uVar4 + 1;
                  }
                }
                puVar2 = (undefined4 *)FUN_0010f82c(0xc,0);
                uVar3 = FUN_0010f82c(uVar5 * 0xc,0);
                puVar2[2] = uVar3;
                *puVar2 = local_a0;
                puVar2[1] = uVar5;
                local_98 = (int *)puVar2[2];
                local_94 = local_98 + uVar5 * 3;
                local_a0 = puVar2;
              }
              piVar7 = local_98;
              local_98 = local_98 + 3;
            }
            else {
              piVar7 = local_9c;
              local_9c = (int *)*local_9c;
            }
            if (piVar7 + 2 != (int *)0x0) {
              FUN_001d9c54(piVar7 + 2,piVar10);
            }
            *piVar7 = (int)piVar6;
            piVar7[1] = piVar6[1];
            *(int **)piVar6[1] = piVar7;
            piVar6[1] = (int)piVar7;
            goto LAB_000d4958;
          }
          piVar6 = (int *)*piVar6;
        } while (piVar6 != local_90);
      }
      piVar6 = local_90;
      if (local_9c == (int *)0x0) {
        if (local_98 == local_94) {
          uVar5 = 1;
          if (local_a0 != (undefined4 *)0x0) {
            uVar4 = local_a0[1];
            uVar5 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
            if (uVar5 < uVar4 + 1) {
              uVar5 = uVar4 + 1;
            }
          }
          puVar2 = (undefined4 *)FUN_0010f82c(0xc,0);
          uVar3 = FUN_0010f82c(uVar5 * 0xc,0);
          puVar2[2] = uVar3;
          *puVar2 = local_a0;
          puVar2[1] = uVar5;
          local_98 = (int *)puVar2[2];
          local_94 = local_98 + uVar5 * 3;
          local_a0 = puVar2;
        }
        piVar7 = local_98;
        local_98 = local_98 + 3;
      }
      else {
        piVar7 = local_9c;
        local_9c = (int *)*local_9c;
      }
      if (piVar7 + 2 != (int *)0x0) {
        FUN_001d9c54(piVar7 + 2,piVar10);
      }
      *piVar7 = (int)piVar6;
      piVar7[1] = piVar6[1];
      *(int **)piVar6[1] = piVar7;
      piVar6[1] = (int)piVar7;
LAB_000d4958:
      local_8c = local_8c + 1;
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)*(int *)(param_2 + 0x10));
  }
  sVar8 = 0;
  piVar9 = (int *)*local_90;
  if (piVar9 != local_90) {
    do {
      piVar6 = piVar9 + 2;
      FUN_001d9c54(&local_a4,param_1 + 0x340);
      puVar2 = *(undefined4 **)(local_a4 + -4);
      iVar11 = *(int *)(*piVar6 + -4);
      if ((*(uint *)(local_a4 + -8) < (uint)((int)puVar2 + iVar11)) ||
         (1 < *(int *)(local_a4 + -0xc) + 1U)) {
        local_b0 = (undefined4 *)(-iVar11 - 0xf);
        if (local_b0 < puVar2) {
          FUN_0010f7cc(8,DAT_000d4b68);
        }
        local_b0 = *(undefined4 **)(*piVar6 + -4);
        puStack_ac = (undefined1 *)0x0;
        local_a8 = iVar11;
        FUN_001d982c(&local_a4,*(undefined4 *)(local_a4 + -4),0);
      }
      else {
        FUN_00003628(local_a4 + (int)puVar2 * 2,*piVar6,(iVar11 + 1) * 2);
        *(int *)(local_a4 + -4) = (int)puVar2 + iVar11;
      }
      puStack_ac = auStack_38;
      local_b0 = &local_48;
      iVar11 = FUN_000c38fc(&local_a4,auStack_88,auStack_40,auStack_44);
      if (iVar11 == 0) {
        FUN_000028a4(DAT_000d4b6c,*piVar6);
        FUN_001d9b00(&local_a4);
        FUN_001dccb0(&local_a0);
        return 4;
      }
      local_b0 = (undefined4 *)CONCAT31(local_b0._1_3_,(char)sVar8);
      puVar2 = (undefined4 *)FUN_001db4e0(local_28,&local_b0);
      uVar3 = local_48;
      uVar1 = local_72;
      uVar5 = (uint)local_7e;
      local_50 = local_7e;
      local_58 = 0;
      uStack_54 = local_7c;
      local_4e = local_72;
      iVar11 = FUN_001d9c54(auStack_4c,&local_a4);
      puVar12 = (undefined4 *)(iVar11 + -0xc);
      if (uVar1 < 0x11) {
        uVar3 = FUN_00006158(uVar3,uVar5 << 1);
        *puVar12 = uVar3;
      }
      else if (uVar1 < 0x19) {
        uVar3 = FUN_00006158(uVar3,uVar5 * 3);
        *puVar12 = uVar3;
      }
      if (puVar2 != puVar12) {
        *puVar2 = *puVar12;
        puVar2[1] = *(undefined4 *)(iVar11 + -8);
        *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(iVar11 + -4);
        *(undefined2 *)((int)puVar2 + 10) = *(undefined2 *)(iVar11 + -2);
        FUN_001d9d2c(puVar2 + 3,iVar11);
      }
      FUN_001d9b00(auStack_4c);
      sVar8 = sVar8 + local_7e;
      FUN_001d9b00(&local_a4);
      piVar9 = (int *)*piVar9;
    } while (piVar9 != local_90);
  }
  FUN_001dccb0(&local_a0);
  return 0;
}

