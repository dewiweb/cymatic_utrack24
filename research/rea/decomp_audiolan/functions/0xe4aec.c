// rea decompile_all
// name: FUN_000e4aec
// address: 0xe4aec
// body: available
// range: 0xe4aec-0xe4f9f inclusive
// range: 0xe508c-0xe55c3 inclusive
// range: 0xe55f0-0xe5b17 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000e4aec(int *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int extraout_r2;
  int extraout_r2_00;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  char *local_c0;
  char *local_bc;
  char *local_b8;
  undefined1 auStack_b4 [4];
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  undefined1 auStack_a4 [8];
  undefined2 local_9c [2];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 *puStack_8c;
  int iStack_88;
  int local_7c;
  int local_78;
  int local_70;
  int *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int *local_60;
  int local_5c;
  undefined4 *local_54;
  char *local_4c;
  undefined4 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  char *local_38;
  char *local_34;
  undefined4 local_30;
  uint local_2c;
  
  iVar5 = FUN_000b9aac();
  FUN_00159dd0(&puStack_8c,iVar5);
  FUN_00159f54(&local_70,iVar5);
  (**(code **)(*(int *)param_1[0x24] + 500))();
  if (param_1[0x2c] != 0) {
    piVar6 = (int *)param_1[0x24];
    piVar6 = (int *)(*(code *)**(undefined4 **)((int)piVar6 + *(int *)(*piVar6 + -0x38)))
                              ((int)piVar6 + *(int *)(*piVar6 + -0x38));
    (**(code **)(*piVar6 + 0xa0))(piVar6,param_1[0x2c]);
    param_1[0x2c] = 0;
  }
  iVar14 = param_1[0x1f];
  iVar16 = param_1[0x1e];
  iVar10 = iVar16;
  if (iVar16 != iVar14) {
    do {
      iVar7 = FUN_0010e7f4(iVar10 + 0xc);
      FUN_0010e7f4(iVar7 + -8);
      iVar10 = iVar10 + 0x18;
    } while (iVar10 != iVar14);
    iVar10 = (int)((ulonglong)((longlong)_DAT_000e4fa0 * (longlong)(iVar14 - iVar16)) >> 0x20);
    param_1[0x1f] = param_1[0x1f] + ((iVar10 >> 2) - (iVar10 >> 0x1f)) * -0x18;
  }
  if (local_78 != 0) {
    FUN_00159fa0(&local_bc,iVar5);
    local_a8 = 0;
    iVar10 = FUN_0010e728(auStack_a4,s__Receivers_000e4fa3 + 1);
    iVar10 = FUN_0010e728(iVar10 + 8,local_bc);
    *(undefined1 *)(iVar10 + 8) = 1;
    FUN_001de50c(param_1 + 0x1e);
    iVar10 = FUN_0010e7f4(local_9c);
    FUN_0010e7f4(iVar10 + -8);
    FUN_001da44c(&local_bc);
  }
  piVar6 = (int *)*local_60;
  if (piVar6 != local_60) {
    do {
      iVar10 = FUN_00159c48(iVar5,piVar6[2]);
      uVar15 = *(undefined4 *)(iVar10 + 0x2c);
      FUN_001569a8(&local_94,iVar10);
      uVar3 = local_94;
      FUN_00156a04(&local_90,iVar10);
      uVar4 = local_90;
      local_b0 = uVar15;
      iVar10 = FUN_0010e728(&local_ac,uVar3);
      iVar10 = FUN_0010e728(iVar10 + 8,uVar4);
      *(undefined1 *)(iVar10 + 8) = 0;
      FUN_001de50c(param_1 + 0x1e,iVar10 + -0xc);
      iVar10 = FUN_0010e7f4(auStack_a4);
      FUN_0010e7f4(iVar10 + -8);
      FUN_001da44c(&local_90);
      FUN_001da44c(&local_94);
      piVar6 = (int *)*piVar6;
    } while (piVar6 != local_60);
  }
  piVar6 = (int *)param_1[0x24];
  piVar6 = (int *)(*(code *)**(undefined4 **)((int)piVar6 + *(int *)(*piVar6 + -0x38)))
                            ((int)piVar6 + *(int *)(*piVar6 + -0x38));
  iVar10 = _DAT_000e4fa0;
  iVar14 = (int)((ulonglong)((longlong)_DAT_000e4fa0 * (longlong)(param_1[0x1f] - param_1[0x1e])) >>
                0x20);
  iVar14 = (**(code **)(*piVar6 + 0x9c))
                     (piVar6,(iVar14 >> 2) - (iVar14 >> 0x1f) & 0xffff,param_1 + 4);
  local_c0 = _DAT_000e4fc0;
  param_1[0x2c] = iVar14;
  local_bc = s_Commit_changes_000e4fb0;
  (**(code **)(*(int *)param_1[0x24] + 0x1fc))
            ((int *)param_1[0x24],0,s___Network_Configuration_000e4fc2 + 2,4);
  local_c0 = _DAT_000e4fdc;
  local_bc = s_Commit_changes_000e4fb0;
  (**(code **)(*(int *)param_1[0x24] + 0x1fc))
            ((int *)param_1[0x24],2,s___Audio_Configuration_000e4fde + 2);
  if (1 < *(uint *)(iVar5 + 0x20c)) {
    local_c0 = _DAT_000e5004;
    local_bc = s_Commit_change_000e4ff4;
    (**(code **)(*(int *)param_1[0x24] + 0x1fc))((int *)param_1[0x24],1,s___Audio_mode_000e5006 + 2)
    ;
  }
  local_c0 = _DAT_000e5014;
  local_bc = s_Commit_change_000e4ff4;
  (**(code **)(*(int *)param_1[0x24] + 0x1fc))
            ((int *)param_1[0x24],3,s___Receiver_Configuration_000e5016 + 2,4);
  local_c0 = _DAT_000e5030;
  local_bc = s_Commit_change_000e4ff4;
  (**(code **)(*(int *)param_1[0x24] + 0x1fc))
            ((int *)param_1[0x24],5,s___PTP_Configuration_000e5032 + 2);
  local_c0 = _DAT_000e5048;
  local_bc = s_Commit_change_000e4ff4;
  (**(code **)(*(int *)param_1[0x24] + 0x1fc))
            ((int *)param_1[0x24],4,s___Receivers_SIP_Identity__need_r_000e504a + 2,1);
  (**(code **)(*(int *)param_1[0x24] + 0x200))((int *)param_1[0x24],0x1000,param_1[0x26]);
  (**(code **)(*(int *)param_1[0x24] + 0x200))((int *)param_1[0x24],DAT_000e5074,param_1[0x27]);
  if (1 < *(uint *)(iVar5 + 0x20c)) {
    (**(code **)(*(int *)param_1[0x24] + 0x200))((int *)param_1[0x24],DAT_000e5078,param_1[0x28]);
  }
  (**(code **)(*(int *)param_1[0x24] + 0x200))((int *)param_1[0x24],DAT_000e507c,param_1[0x2a]);
  (**(code **)(*(int *)param_1[0x24] + 0x200))((int *)param_1[0x24],DAT_000e5080,param_1[0x2b]);
  (**(code **)(*(int *)param_1[0x24] + 0x200))((int *)param_1[0x24],DAT_000e5084,param_1[0x2a]);
  iVar14 = DAT_000e5088;
  (**(code **)(*(int *)param_1[0x24] + 0x204))((int *)param_1[0x24],4,DAT_000e5088,param_1[0x2c]);
  (**(code **)(*param_1 + 0x18))
            (param_1,*(undefined4 *)(iVar5 + 0x214),*(undefined1 *)(iVar5 + 0x251));
  FUN_0015a22c(&local_34,iVar5);
  FUN_0015a1e0(&local_38,iVar5);
  FUN_00159ac8(&local_4c,iVar5);
  FUN_0015a278(&local_3c,iVar5);
  local_b0 = local_3c;
  FUN_00159a7c(&local_40,iVar5);
  local_c0 = local_4c;
  local_bc = local_38;
  local_b8 = local_34;
  (**(code **)(*param_1 + 0x1c))(param_1,*(undefined1 *)(iVar5 + 0x22e),local_40,local_b0);
  FUN_001da44c(&local_40);
  FUN_001da44c(&local_3c);
  FUN_001da44c(&local_4c);
  FUN_001da44c(&local_38);
  FUN_001da44c(&local_34);
  (**(code **)(*param_1 + 0x20))(param_1,*(undefined1 *)(iVar5 + 0x252));
  (**(code **)(*param_1 + 0x14))(param_1,*(undefined4 *)(iVar5 + 0x150));
  (**(code **)(*param_1 + 0x10))(param_1,*(undefined1 *)(iVar5 + 0x14c));
  (**(code **)(*param_1 + 0x40))(param_1,*(undefined4 *)(iVar5 + 0x218));
  (**(code **)(*param_1 + 0x48))(param_1,*(undefined4 *)(iVar5 + 0x220));
  FUN_000e5b54(param_1,2,0,iVar14 + 0x1e);
  FUN_000e5b54(param_1,4,0,iVar14 + 0x1e);
  FUN_000e5b54(param_1,4,0,iVar14 + 0x1f);
  FUN_000e5b54(param_1,2,0,iVar14 + 0x1f);
  uVar11 = 0;
  iVar16 = (int)((ulonglong)((longlong)iVar10 * (longlong)(param_1[0x1f] - param_1[0x1e])) >> 0x20);
  if (iVar16 >> 2 != iVar16 >> 0x1f) {
    do {
      FUN_000e5b54(param_1,4,uVar11 + 1 & 0xffff,iVar14);
      uVar11 = uVar11 + 1;
      iVar16 = (int)((ulonglong)((longlong)iVar10 * (longlong)(param_1[0x1f] - param_1[0x1e])) >>
                    0x20);
    } while (uVar11 < (uint)((iVar16 >> 2) - (iVar16 >> 0x1f)));
  }
  (**(code **)(*(int *)param_1[0x24] + 0x214))();
  local_c0 = (char *)param_1[0x18];
  local_b8 = *(char **)(local_c0 + 8);
  FUN_001cd23c(&local_ac,param_1 + 0x14,&local_b8,&local_c0);
  uVar3 = DAT_000e55c4;
  piVar6 = (int *)*local_60;
  if (piVar6 != local_60) {
    do {
      iVar14 = FUN_00159c48(iVar5,piVar6[2]);
      local_90 = *(undefined4 *)(iVar14 + 0x2c);
      puVar8 = (undefined4 *)FUN_001dbb14(param_1 + 0x14,&local_90);
      *puVar8 = local_90;
      piVar17 = (int *)param_1[0x24];
      uVar1 = *(undefined2 *)(iVar14 + 0x4e);
      FUN_001569a8(&local_94,iVar14);
      (**(code **)(*piVar17 + 0x218))(piVar17,*(undefined4 *)(iVar14 + 0x2c),local_94,uVar1);
      FUN_001da44c(&local_94);
      local_c0 = (char *)0x6;
      local_bc = DAT_000e55c8;
      local_b8 = s_Commit_changes_000e4fb0;
      (**(code **)(*(int *)param_1[0x24] + 0x224))
                ((int *)param_1[0x24],*(undefined4 *)(iVar14 + 0x2c),6,
                 s___Network_Configuration_000e4fc2 + 2);
      local_c0 = (char *)0x1;
      local_bc = _DAT_000e55cc;
      (**(code **)(*(int *)param_1[0x24] + 0x220))
                ((int *)param_1[0x24],*(undefined4 *)(iVar14 + 0x2c),7,
                 s___Channels_Configuration_000e55ce + 2);
      (**(code **)(*(int *)param_1[0x24] + 0x228))
                ((int *)param_1[0x24],*(undefined4 *)(iVar14 + 0x2c),DAT_000e55e8,param_1[0x29]);
      (**(code **)(*param_1 + 0x28))(param_1,iVar14,0);
      (**(code **)(*param_1 + 0x28))(param_1,iVar14,2);
      (**(code **)(*param_1 + 0x28))(param_1,iVar14,4);
      (**(code **)(*param_1 + 0x28))(param_1,iVar14,3);
      (**(code **)(*param_1 + 0x28))(param_1,iVar14,1);
      uVar11 = 0;
      iVar10 = extraout_r2;
      if (*(short *)(iVar14 + 0x4e) != 0) {
        do {
          if (uVar11 < *(ushort *)(iVar14 + 0x4e)) {
            iVar10 = *(int *)(iVar14 + 0x54);
          }
          if (uVar11 < *(ushort *)(iVar14 + 0x4e)) {
            local_c0 = *(char **)(iVar10 + uVar11 * 4);
          }
          else {
            local_c0 = s___Receivers_SIP_Identity__need_r_000e504a + 0x26;
          }
          local_bc = (char *)((uint)local_bc & 0xffff0000);
          (**(code **)(*(int *)param_1[0x24] + 0x238))
                    ((int *)param_1[0x24],*(undefined4 *)(iVar14 + 0x2c),uVar11 + 1 & 0xffff,uVar3);
          uVar11 = uVar11 + 1;
          iVar10 = extraout_r2_00;
        } while (uVar11 < *(ushort *)(iVar14 + 0x4e));
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != local_60);
  }
  (**(code **)(*(int *)param_1[0x24] + 0x23c))();
  iVar5 = DAT_000e55ec;
  iVar14 = param_1[0x1c];
  iVar16 = param_1[0x1b];
  iVar10 = iVar16;
  if (iVar16 != iVar14) {
    do {
      FUN_0010e7f4(iVar10 + 0xc);
      iVar10 = iVar10 + 0x1c;
    } while (iVar10 != iVar14);
    iVar5 = (int)((longlong)(iVar14 - iVar16) * (longlong)iVar5 +
                  ((ulonglong)(uint)(iVar14 - iVar16) << 0x20) >> 0x20);
    param_1[0x1c] = param_1[0x1c] + ((iVar5 >> 4) - (iVar5 >> 0x1f)) * -0x1c;
  }
  iVar10 = 0;
  iVar5 = *(int *)(local_7c + 8);
  if (iVar5 != local_7c) {
    do {
      piVar6 = *(int **)(iVar5 + 0x14);
      local_ac = piVar6[1];
      local_b0 = *(undefined4 *)(*piVar6 + 0x44);
      local_a8 = iVar10;
      FUN_0010e7e0(auStack_a4);
      puVar8 = (undefined4 *)param_1[0x1c];
      piVar17 = param_1 + 0x1b;
      if (puVar8 == (undefined4 *)param_1[0x1d]) {
        local_54 = &local_b0;
        uVar11 = param_1[0x1d] - *piVar17;
        iVar16 = (int)((longlong)(int)uVar11 * (longlong)DAT_000e55ec + ((ulonglong)uVar11 << 0x20)
                      >> 0x20);
        uVar11 = (int)puVar8 - *piVar17;
        iVar14 = (int)((longlong)(int)uVar11 * (longlong)DAT_000e55ec + ((ulonglong)uVar11 << 0x20)
                      >> 0x20);
        if ((uint)((iVar14 >> 4) - (iVar14 >> 0x1f)) < (uint)((iVar16 >> 4) - (iVar16 >> 0x1f))) {
          param_1[0x1c] = (int)(puVar8 + 7);
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = puVar8[-7];
            puVar8[1] = puVar8[-6];
            puVar8[2] = puVar8[-5];
            iVar14 = FUN_0010e770(puVar8 + 3,puVar8 + -4);
            *(undefined2 *)(iVar14 + 8) = *(undefined2 *)(puVar8 + -2);
            *(undefined4 *)(iVar14 + 0xc) = puVar8[-1];
          }
          puVar12 = puVar8;
          puVar9 = puVar8 + -7;
          puVar13 = local_54;
          while (local_54 = puVar13, puVar8 != puVar9) {
            puVar12[-7] = puVar9[-7];
            puVar12[-6] = puVar9[-6];
            puVar12[-5] = puVar9[-5];
            FUN_0010e820(puVar12 + -4,puVar9 + -4);
            *(undefined2 *)(puVar12 + -2) = *(undefined2 *)(puVar9 + -2);
            puVar12[-1] = puVar9[-1];
            puVar12 = puVar12 + -7;
            puVar9 = puVar9 + -7;
            puVar13 = local_54;
          }
          *puVar8 = local_b0;
          puVar8[1] = local_ac;
          puVar8[2] = local_a8;
          FUN_0010e820(puVar8 + 3,puVar13 + 3);
          *(undefined2 *)(puVar8 + 5) = *(undefined2 *)(puVar13 + 5);
          puVar8[6] = local_98;
        }
        else {
          iVar14 = (int)((longlong)(int)uVar11 * (longlong)DAT_000e55ec +
                         ((ulonglong)uVar11 << 0x20) >> 0x20);
          uVar11 = (iVar14 >> 4) - (iVar14 >> 0x1f);
          local_2c = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
          if (local_2c < uVar11 + 1) {
            local_2c = uVar11 + 1;
          }
          puVar9 = (undefined4 *)FUN_0010f82c(local_2c * 0x1c,0);
          local_48 = puVar9;
          puVar13 = local_54;
          for (puVar12 = (undefined4 *)*piVar17; local_54 = puVar13, puVar12 != puVar8;
              puVar12 = puVar12 + 7) {
            if (puVar9 != (undefined4 *)0x0) {
              *puVar9 = *puVar12;
              puVar9[1] = puVar12[1];
              puVar9[2] = puVar12[2];
              iVar14 = FUN_0010e770(puVar9 + 3,puVar12 + 3);
              *(undefined2 *)(iVar14 + 8) = *(undefined2 *)(puVar12 + 5);
              *(undefined4 *)(iVar14 + 0xc) = puVar12[6];
            }
            puVar9 = puVar9 + 7;
            puVar13 = local_54;
          }
          lVar2 = (longlong)((int)puVar8 - *piVar17) * (longlong)DAT_000e55ec +
                  ((ulonglong)(uint)((int)puVar8 - *piVar17) << 0x20);
          iVar14 = (int)((ulonglong)lVar2 >> 0x20);
          puVar12 = local_48 + ((iVar14 >> 4) - (iVar14 >> 0x1f)) * 7;
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = local_b0;
            puVar12[1] = local_ac;
            puVar12[2] = local_a8;
            iVar14 = FUN_0010e770(puVar12 + 3,puVar13 + 3,(int)lVar2);
            *(undefined2 *)(iVar14 + 8) = *(undefined2 *)(puVar13 + 5);
            *(undefined4 *)(iVar14 + 0xc) = local_98;
          }
          puVar9 = (undefined4 *)param_1[0x1c];
          iVar14 = (int)((longlong)((int)puVar8 - *piVar17) * (longlong)DAT_000e55ec +
                         ((ulonglong)(uint)((int)puVar8 - *piVar17) << 0x20) >> 0x20);
          puVar12 = local_48 + ((iVar14 >> 4) - (iVar14 >> 0x1f)) * 7;
          for (; puVar8 != puVar9; puVar8 = puVar8 + 7) {
            puVar13 = puVar12 + 7;
            if (puVar13 != (undefined4 *)0x0) {
              *puVar13 = *puVar8;
              puVar12[8] = puVar8[1];
              puVar12[9] = puVar8[2];
              iVar14 = FUN_0010e770(puVar12 + 10,puVar8 + 3);
              *(undefined2 *)(iVar14 + 8) = *(undefined2 *)(puVar8 + 5);
              *(undefined4 *)(iVar14 + 0xc) = puVar8[6];
            }
            puVar12 = puVar13;
          }
          iVar14 = *piVar17;
          iVar7 = param_1[0x1c];
          uVar11 = iVar7 - iVar14;
          iVar16 = (int)((longlong)(int)uVar11 * (longlong)DAT_000e55ec +
                         ((ulonglong)uVar11 << 0x20) >> 0x20);
          for (; iVar14 != iVar7; iVar14 = iVar14 + 0x1c) {
            FUN_0010e7f4(iVar14 + 0xc);
          }
          uVar11 = param_1[0x1d] - *piVar17;
          iVar14 = (int)((longlong)(int)uVar11 * (longlong)DAT_000e55ec +
                         ((ulonglong)uVar11 << 0x20) >> 0x20);
          FUN_0010fa20(*piVar17,(iVar14 >> 4) - (iVar14 >> 0x1f),0);
          *piVar17 = (int)local_48;
          param_1[0x1c] = (int)(local_48 + ((iVar16 >> 4) - (iVar16 >> 0x1f)) * 7 + 7);
          param_1[0x1d] = (int)(local_48 + local_2c * 7);
        }
      }
      else {
        param_1[0x1c] = (int)(puVar8 + 7);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = local_b0;
          puVar8[1] = local_ac;
          puVar8[2] = local_a8;
          iVar14 = FUN_0010e770(puVar8 + 3,auStack_a4);
          *(undefined2 *)(iVar14 + 8) = local_9c[0];
          *(undefined4 *)(iVar14 + 0xc) = local_98;
        }
      }
      piVar17 = (int *)param_1[0x24];
      FUN_00154f34(&local_30,piVar6);
      (**(code **)(*piVar17 + 0x240))(piVar17,iVar10,local_30);
      FUN_001da44c(&local_30);
      local_c0 = (char *)0x1;
      local_bc = _DAT_000e5b1c;
      local_b8 = DAT_000e5b18;
      (**(code **)(*(int *)param_1[0x24] + 0x24c))
                ((int *)param_1[0x24],iVar10,9,s___Config_000e5b1e + 2);
      local_c0 = (char *)0x2;
      local_bc = _DAT_000e5b2c;
      local_b8 = DAT_000e5b28;
      (**(code **)(*(int *)param_1[0x24] + 0x24c))
                ((int *)param_1[0x24],iVar10,10,s___Source_000e5b2e + 2);
      local_c0 = (char *)0x1;
      local_bc = _DAT_000e5b38;
      (**(code **)(*(int *)param_1[0x24] + 0x248))
                ((int *)param_1[0x24],iVar10,0xb,s___Source_path_000e5b3a + 2);
      local_c0 = (char *)0x2;
      local_bc = _DAT_000e5b48;
      (**(code **)(*(int *)param_1[0x24] + 0x248))
                ((int *)param_1[0x24],iVar10,0xc,s___Status_000e5b4a + 2);
      (**(code **)(*(int *)param_1[0x24] + 0x250))
                ((int *)param_1[0x24],iVar10,DAT_000e55e8,param_1[0x29]);
      (**(code **)(*param_1 + 0x30))(param_1,*piVar6,piVar6);
      (**(code **)(*param_1 + 0x34))(param_1,*piVar6,piVar6);
      FUN_0010e7f4(auStack_a4);
      iVar14 = *(int *)(iVar5 + 0xc);
      if (*(int *)(iVar5 + 0xc) == 0) {
        iVar14 = *(int *)(iVar5 + 4);
        while (iVar16 = iVar14, iVar5 == *(int *)(iVar16 + 0xc)) {
          iVar5 = iVar16;
          iVar14 = *(int *)(iVar16 + 4);
        }
        if (*(int *)(iVar5 + 0xc) != iVar16) {
          iVar5 = iVar16;
        }
      }
      else {
        do {
          iVar5 = iVar14;
          iVar14 = *(int *)(iVar5 + 8);
        } while (*(int *)(iVar5 + 8) != 0);
      }
      iVar10 = iVar10 + 1;
    } while (iVar5 != local_7c);
  }
  iVar5 = FUN_00084950();
  (**(code **)(**(int **)(iVar5 + 0x38) + 0xb0))();
  FUN_000e5b54(param_1,1,0,0x1000);
  if (local_60 != (int *)0x0) {
    piVar6 = (int *)*local_60;
    while (piVar17 = piVar6, piVar17 != local_60) {
      piVar6 = local_60;
      if (piVar17 != local_60) {
        piVar6 = (int *)*piVar17;
        *(int *)piVar17[1] = *piVar17;
        *(int *)(*piVar17 + 4) = piVar17[1];
        local_5c = local_5c + -1;
        *piVar17 = (int)local_6c;
        local_6c = piVar17;
      }
    }
    *local_60 = (int)local_6c;
    piVar6 = (int *)local_70;
    while (piVar6 != (int *)0x0) {
      local_70 = *piVar6;
      FUN_0010fa20(piVar6[2],piVar6[1],0);
      FUN_0010fa20(piVar6,1,0);
      piVar6 = (int *)local_70;
    }
    local_6c = (int *)0x0;
    local_68 = 0;
    local_64 = 0;
    local_70 = 0;
  }
  if (local_7c != 0) {
    local_bc = *(char **)(local_7c + 8);
    FUN_001ce9cc(auStack_b4,&puStack_8c,&local_bc,&local_b8);
    *(int *)(local_7c + 0xc) = iStack_88;
    iStack_88 = local_7c;
    puVar8 = puStack_8c;
    if (puStack_8c != (undefined4 *)0x0) {
      do {
        puStack_8c = (undefined4 *)*puVar8;
        FUN_0010fa20(puVar8[2],puVar8[1],0);
        FUN_0010fa20(puVar8,1,0);
        puVar8 = puStack_8c;
      } while (puStack_8c != (undefined4 *)0x0);
      return;
    }
    return;
  }
  return;
}

