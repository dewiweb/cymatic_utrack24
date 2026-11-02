// rea decompile_all
// name: FUN_000d8124
// address: 0xd8124
// body: available
// range: 0xd8124-0xd8463 inclusive
// range: 0xd8494-0xd8717 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_000d8124(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  uint local_c8;
  undefined4 *puStack_c4;
  uint local_c0;
  undefined4 local_bc;
  int iStack_b8;
  uint uStack_b4;
  int local_b0;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [2];
  char local_8e;
  undefined1 local_8d;
  ushort local_82;
  undefined4 local_80;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_4c;
  undefined4 local_48 [3];
  undefined4 local_3c;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (*(int *)(param_1 + 0x6c) != param_3) {
    FUN_000028a4(DAT_000d8724);
    return 0;
  }
  FUN_000028a4(s_xf__DEBUG________s______000d8464._0_4_,param_3,param_4);
  *(undefined4 *)(param_1 + 0x70) = local_28;
  FUN_000028a4(s_xf__DEBUG________s______000d8464 + 4,*param_5);
  FUN_00056158(auStack_90,param_5);
  iVar2 = FUN_0018e28c(local_80,local_48);
  if (iVar2 == 0) {
    FUN_000028a4(DAT_000d8720,local_80);
    goto LAB_000d86f8;
  }
  FUN_000028a4(DAT_000d8480,local_80);
  iVar4 = param_1 + 0x80;
  FUN_001a0700(iVar4);
  local_4c = (uint)param_5 & 0xffffff00 | 1;
  local_3c = FUN_001536ec(auStack_90);
  FUN_001536d0(auStack_90);
  iVar2 = FUN_000394dc();
  iVar6 = param_1 + 0x5c;
  iVar7 = param_1 + 0x24;
  *(undefined1 *)(param_1 + 0x39) = local_8d;
  uVar5 = (uint)local_82;
  iVar8 = param_1 + 0x18;
  local_38 = (uint)(local_8e == '\0');
  if (iVar2 == 0) {
    FUN_000028a4(DAT_000d848c);
    local_5c = FUN_001a0808(0x11c,1);
    piVar3 = (int *)0x0;
    if (local_5c != 0) {
      local_54 = (uint)*(ushort *)(param_1 + 0xe);
      local_d8 = *(undefined4 *)(param_1 + 0x10);
      local_a0 = *(undefined4 *)(param_1 + 0x4c);
      local_9c = *(undefined4 *)(param_1 + 0x50);
      uStack_98 = *(undefined4 *)(param_1 + 0x54);
      uStack_94 = *(undefined4 *)(param_1 + 0x58);
      local_a8 = *(undefined4 *)(param_1 + 0x44);
      uStack_a4 = *(undefined4 *)(param_1 + 0x48);
      uStack_ac = (uint)*(byte *)(param_1 + 0x3a);
      cVar1 = *(char *)(param_1 + 0x38);
      puStack_c4 = local_48;
      bVar9 = cVar1 == '\0';
      if (bVar9) {
        cVar1 = *(char *)(param_1 + 0x39);
      }
      local_bc = *(undefined4 *)(param_1 + 0x20);
      uStack_b4 = (uint)(!bVar9 || cVar1 != '\0');
      local_c8 = (uint)*(ushort *)(param_1 + 0x1c);
      local_d0 = *(undefined4 *)(param_1 + 0x14);
      local_d4 = 0;
      local_cc = iVar8;
      local_c0 = uVar5;
      iStack_b8 = iVar7;
      local_b0 = iVar6;
      piVar3 = (int *)FUN_000708d0(local_5c,*(undefined1 *)(param_1 + 8),
                                   *(undefined2 *)(param_1 + 0xc),local_54);
    }
LAB_000d86b8:
    *(int **)(param_1 + 0x74) = piVar3;
  }
  else {
    if (iVar2 == 1) {
      FUN_000028a4(DAT_000d8490);
      local_5c = FUN_001a0808(0x11c,1);
      piVar3 = (int *)0x0;
      if (local_5c != 0) {
        local_54 = (uint)*(ushort *)(param_1 + 0xe);
        local_d8 = *(undefined4 *)(param_1 + 0x10);
        local_a0 = *(undefined4 *)(param_1 + 0x4c);
        local_9c = *(undefined4 *)(param_1 + 0x50);
        uStack_98 = *(undefined4 *)(param_1 + 0x54);
        uStack_94 = *(undefined4 *)(param_1 + 0x58);
        local_a8 = *(undefined4 *)(param_1 + 0x44);
        uStack_a4 = *(undefined4 *)(param_1 + 0x48);
        uStack_ac = (uint)*(byte *)(param_1 + 0x3a);
        cVar1 = *(char *)(param_1 + 0x38);
        puStack_c4 = local_48;
        bVar9 = cVar1 == '\0';
        if (bVar9) {
          cVar1 = *(char *)(param_1 + 0x39);
        }
        local_bc = *(undefined4 *)(param_1 + 0x20);
        uStack_b4 = (uint)(!bVar9 || cVar1 != '\0');
        local_c8 = (uint)*(ushort *)(param_1 + 0x1c);
        local_d0 = *(undefined4 *)(param_1 + 0x14);
        local_d4 = 0;
        local_cc = iVar8;
        local_c0 = uVar5;
        iStack_b8 = iVar7;
        local_b0 = iVar6;
        piVar3 = (int *)FUN_00070b28(local_5c,*(undefined1 *)(param_1 + 8),
                                     *(undefined2 *)(param_1 + 0xc),local_54);
      }
      goto LAB_000d86b8;
    }
    if (iVar2 == 2) {
      FUN_000028a4(DAT_000d8718);
      local_5c = FUN_001a0808(0x11c,1);
      piVar3 = (int *)0x0;
      if (local_5c != 0) {
        local_54 = (uint)*(ushort *)(param_1 + 0xe);
        local_d8 = *(undefined4 *)(param_1 + 0x10);
        local_a0 = *(undefined4 *)(param_1 + 0x4c);
        local_9c = *(undefined4 *)(param_1 + 0x50);
        uStack_98 = *(undefined4 *)(param_1 + 0x54);
        uStack_94 = *(undefined4 *)(param_1 + 0x58);
        local_a8 = *(undefined4 *)(param_1 + 0x44);
        uStack_a4 = *(undefined4 *)(param_1 + 0x48);
        uStack_ac = (uint)*(byte *)(param_1 + 0x3a);
        cVar1 = *(char *)(param_1 + 0x38);
        puStack_c4 = local_48;
        bVar9 = cVar1 == '\0';
        if (bVar9) {
          cVar1 = *(char *)(param_1 + 0x39);
        }
        local_bc = *(undefined4 *)(param_1 + 0x20);
        uStack_b4 = (uint)(!bVar9 || cVar1 != '\0');
        local_c8 = (uint)*(ushort *)(param_1 + 0x1c);
        local_d0 = *(undefined4 *)(param_1 + 0x14);
        local_d4 = 0;
        local_cc = iVar8;
        local_c0 = uVar5;
        iStack_b8 = iVar7;
        local_b0 = iVar6;
        piVar3 = (int *)FUN_00070cb8(local_5c,*(undefined1 *)(param_1 + 8),
                                     *(undefined2 *)(param_1 + 0xc),local_54);
      }
      goto LAB_000d86b8;
    }
    if (iVar2 == 3) {
      FUN_000028a4(DAT_000d871c);
      if (*(char *)(param_1 + 0x3b) == '\0') {
        local_5c = FUN_001a0808(0x11c,1);
        piVar3 = (int *)0x0;
        if (local_5c != 0) {
          local_54 = (uint)*(ushort *)(param_1 + 0xe);
          local_d8 = *(undefined4 *)(param_1 + 0x10);
          local_a0 = *(undefined4 *)(param_1 + 0x4c);
          local_9c = *(undefined4 *)(param_1 + 0x50);
          uStack_98 = *(undefined4 *)(param_1 + 0x54);
          uStack_94 = *(undefined4 *)(param_1 + 0x58);
          local_a8 = *(undefined4 *)(param_1 + 0x44);
          uStack_a4 = *(undefined4 *)(param_1 + 0x48);
          uStack_ac = (uint)*(byte *)(param_1 + 0x3a);
          cVar1 = *(char *)(param_1 + 0x38);
          puStack_c4 = local_48;
          bVar9 = cVar1 == '\0';
          if (bVar9) {
            cVar1 = *(char *)(param_1 + 0x39);
          }
          local_bc = *(undefined4 *)(param_1 + 0x20);
          uStack_b4 = (uint)(!bVar9 || cVar1 != '\0');
          local_c8 = (uint)*(ushort *)(param_1 + 0x1c);
          local_d0 = *(undefined4 *)(param_1 + 0x14);
          local_d4 = 0;
          local_cc = iVar8;
          local_c0 = uVar5;
          iStack_b8 = iVar7;
          local_b0 = iVar6;
          piVar3 = (int *)FUN_00089400(local_5c,*(undefined1 *)(param_1 + 8),
                                       *(undefined2 *)(param_1 + 0xc),local_54);
        }
      }
      else {
        local_5c = FUN_001a0808(0x128,1);
        piVar3 = (int *)0x0;
        if (local_5c != 0) {
          local_58 = (uint)*(ushort *)(param_1 + 0xe);
          local_d8 = *(undefined4 *)(param_1 + 0x10);
          local_a0 = *(undefined4 *)(param_1 + 0x4c);
          local_9c = *(undefined4 *)(param_1 + 0x50);
          uStack_98 = *(undefined4 *)(param_1 + 0x54);
          uStack_94 = *(undefined4 *)(param_1 + 0x58);
          local_a8 = *(undefined4 *)(param_1 + 0x44);
          uStack_a4 = *(undefined4 *)(param_1 + 0x48);
          uStack_ac = (uint)*(byte *)(param_1 + 0x3a);
          cVar1 = *(char *)(param_1 + 0x38);
          puStack_c4 = local_48;
          bVar9 = cVar1 == '\0';
          if (bVar9) {
            cVar1 = *(char *)(param_1 + 0x39);
          }
          local_bc = *(undefined4 *)(param_1 + 0x20);
          uStack_b4 = (uint)(!bVar9 || cVar1 != '\0');
          local_c8 = (uint)*(ushort *)(param_1 + 0x1c);
          local_d0 = *(undefined4 *)(param_1 + 0x14);
          local_d4 = 0;
          local_cc = iVar8;
          local_c0 = uVar5;
          iStack_b8 = iVar7;
          local_b0 = iVar6;
          piVar3 = (int *)FUN_0009cf20(local_5c,*(undefined1 *)(param_1 + 8),
                                       *(undefined2 *)(param_1 + 0xc),local_58);
        }
      }
      goto LAB_000d86b8;
    }
    FUN_000028a4(DAT_000d8484);
    piVar3 = *(int **)(param_1 + 0x74);
  }
  if (piVar3 != (int *)0x0) {
    iVar6 = (**(code **)(*piVar3 + 0x24))();
    if ((iVar6 != 0) && (iVar6 = FUN_00058adc(local_30,local_2c,local_28), iVar6 != 0)) {
      bVar9 = *(char *)(param_1 + 0x3c) != '\0';
      uVar5 = 0;
      if (bVar9) {
        uVar5 = local_38;
      }
      bVar10 = uVar5 != 0;
      if (bVar9 && bVar10) {
        uVar5 = *(uint *)(param_1 + 0x40);
      }
      if ((bVar9 && bVar10) && uVar5 != 0) {
        *(undefined1 *)(param_1 + 0x3d) = 1;
        FUN_000028a4(DAT_000d8488);
        local_d0 = CONCAT22(local_82,*(undefined2 *)(param_1 + 0x1c));
        local_cc = CONCAT13((char)iVar2,CONCAT12((char)local_3c,*(undefined2 *)(param_1 + 0xc)));
        local_d8 = *(undefined4 *)(param_1 + 0x18);
        local_d4 = local_48[0];
        (**(code **)**(undefined4 **)(param_1 + 0x40))
                  (*(undefined4 **)(param_1 + 0x40),*(undefined1 *)(param_1 + 8),&local_d8);
      }
      if ((local_4c & 0xff) != 0) {
        FUN_001a0d18(iVar4);
      }
      FUN_00056e64(auStack_90);
      return 1;
    }
    if (*(int **)(param_1 + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x74) + 4))();
    }
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if ((local_4c & 0xff) != 0) {
    FUN_001a0d18(iVar4);
  }
LAB_000d86f8:
  FUN_00056e64(auStack_90);
  return 0;
}

