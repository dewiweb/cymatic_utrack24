// rea decompile_all
// name: FUN_000911c8
// address: 0x911c8
// body: available
// range: 0x911c8-0x915b7 inclusive
// range: 0x91608-0x918f3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x916dc to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000911c8(int param_1)

{
  int iVar1;
  char cVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  int *piVar12;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  int local_100;
  uint local_fc;
  uint local_f8;
  int local_f4;
  int local_f0;
  undefined1 auStack_e8 [8];
  char *local_e0;
  char *local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 auStack_98 [36];
  int local_74;
  int local_70;
  int local_6c;
  undefined1 auStack_68 [4];
  undefined4 local_64;
  int local_60;
  int local_5c;
  undefined1 auStack_44 [8];
  int *local_3c;
  int *local_28;
  
  FUN_001d6158(&local_c8,0,0x400);
  iVar10 = _DAT_000915b8;
  local_cc = 0;
  local_f4 = 0;
  local_bc = *(undefined4 *)(_DAT_000915b8 + 0xc);
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  FUN_001d41f8(&local_c8,s___ArchwaveAES67_000915ba + 2,&local_d8,local_b8);
  puVar4 = (undefined4 *)FUN_001d436c(&local_c8,s___ArchwaveAES67_000915ba + 2);
  puVar4[3] = *(undefined4 *)(iVar10 + 0xc);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  uVar5 = FUN_001d436c(&local_c8,s___ArchwaveAES67_000915ba + 2);
  local_d8 = (char *)0x1;
  local_d4 = 0;
  local_cc = DAT_000915cc;
  FUN_001d41f8(uVar5,s_version_000915d0,&local_d8,local_b8);
  FUN_001d41f8(uVar5,s_devices_000915d8,&local_d8,local_b8);
  puVar4 = (undefined4 *)FUN_001d436c(uVar5,s_devices_000915d8);
  puVar4[3] = *(undefined4 *)(iVar10 + 0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  local_28 = (int *)FUN_001d436c(uVar5,s_devices_000915d8);
  iVar6 = FUN_0019e4a8(&DAT_000915e0);
  iVar14 = DAT_000915e4;
  iVar17 = DAT_000915e4 + -0x200000;
  if (iVar6 != 0) {
    local_f4 = *(int *)(iVar10 + 0xc);
    local_100 = 0;
    local_fc = 0;
    local_f8 = 0;
    pcVar11 = *(char **)(iVar6 + 0x2c);
    cVar2 = *pcVar11;
    pcVar7 = pcVar11;
    while (cVar2 != '\0') {
      pcVar7 = pcVar7 + 1;
      cVar2 = *pcVar7;
    }
    if (pcVar11 == (char *)0x0) {
LAB_000916dc:
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    local_d8 = pcVar11;
    local_d4 = (int)pcVar7 - (int)pcVar11;
    local_cc = iVar17;
    FUN_001d41f8(&local_100,s_hostname_000915e8,&local_d8,local_b8);
    piVar8 = (int *)FUN_000509a8();
    uVar5 = (**(code **)(*piVar8 + 0x1c))();
    uVar9 = FUN_0018e4b4(iVar6 + 4,auStack_e8,0x10);
    iVar6 = FUN_000028d8(auStack_98,s__s__u_000915f4,uVar9,uVar5);
    local_cc = iVar14;
    local_d8 = (char *)FUN_001d631c(local_b8,iVar6 + 1);
    local_d4 = iVar6;
    FUN_00003628(local_d8,auStack_98,iVar6);
    local_d8[iVar6] = '\0';
    FUN_001d41f8(&local_100,s_IPaddress_000915fc,&local_d8,local_b8);
    FUN_001d416c(local_28,&local_100,local_b8);
  }
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  FUN_00155640(*(undefined4 *)(param_1 + 300),&local_74);
  iVar6 = local_74;
  if (local_70 != local_74) {
    do {
      bVar18 = *(int *)(*(int *)(iVar6 + 8) + -4) != 0;
      sVar3 = 0;
      if (bVar18) {
        sVar3 = *(short *)(iVar6 + 0xc);
      }
      if (bVar18 && sVar3 != 0) {
        local_f4 = *(int *)(iVar10 + 0xc);
        local_100 = 0;
        local_fc = 0;
        local_f8 = 0;
        pcVar11 = *(char **)(iVar6 + 4);
        cVar2 = *pcVar11;
        pcVar7 = pcVar11;
        while (cVar2 != '\0') {
          pcVar7 = pcVar7 + 1;
          cVar2 = *pcVar7;
        }
        iVar15 = (int)pcVar7 - (int)pcVar11;
        if (pcVar11 == (char *)0x0) goto LAB_000916dc;
        local_cc = iVar14;
        local_d8 = (char *)FUN_001d631c(local_b8,iVar15 + 1);
        local_d4 = iVar15;
        FUN_00003628(local_d8,pcVar11,iVar15);
        local_d8[iVar15] = '\0';
        pcVar7 = s_hostname_000915e8;
        do {
          pcVar11 = pcVar7;
          pcVar7 = pcVar11 + 1;
        } while (*pcVar7 != '\0');
        local_e0 = s_hostname_000915e8;
        if (local_f4 != 3) goto LAB_000916dc;
        if (local_f8 <= local_fc) {
          if (local_f8 == 0) {
            local_f8 = 0x10;
            local_100 = FUN_001d631c(local_b8,0x200);
          }
          else {
            iVar15 = local_f8 << 6;
            iVar1 = local_f8 << 5;
            local_f8 = local_f8 << 1;
            local_100 = FUN_001d6390(local_b8,local_100,iVar1,iVar15);
          }
        }
        puVar4 = (undefined4 *)(local_100 + local_fc * 0x20);
        *puVar4 = local_e0;
        puVar4[1] = pcVar11 + -0x915e7;
        puVar4[2] = param_1;
        puVar4[3] = iVar17;
        piVar8 = (int *)(local_fc * 0x20 + 0x10 + local_100);
        piVar8[3] = local_cc;
        piVar8[2] = local_d0;
        piVar8[1] = local_d4;
        *piVar8 = (int)local_d8;
        local_cc = 0;
        local_fc = local_fc + 1;
        iVar15 = FUN_000028d8(auStack_98,s__s__u_000915f4,*(undefined4 *)(iVar6 + 8),
                              *(undefined2 *)(iVar6 + 0xc));
        local_cc = iVar14;
        local_d8 = (char *)FUN_001d631c(local_b8,iVar15 + 1);
        local_d4 = iVar15;
        FUN_00003628(local_d8,auStack_98,iVar15);
        local_d8[iVar15] = '\0';
        pcVar7 = s_IPaddress_000915fc;
        do {
          pcVar11 = pcVar7;
          pcVar7 = pcVar11 + 1;
        } while (*pcVar7 != '\0');
        local_f0 = iVar17;
        if (local_f4 != 3) goto LAB_000916dc;
        if (local_f8 <= local_fc) {
          if (local_f8 == 0) {
            local_f8 = 0x10;
            local_100 = FUN_001d631c(local_b8,0x200);
          }
          else {
            iVar15 = local_f8 << 6;
            iVar1 = local_f8 << 5;
            local_f8 = local_f8 << 1;
            local_100 = FUN_001d6390(local_b8,local_100,iVar1,iVar15);
          }
        }
        piVar8 = local_28;
        puVar4 = (undefined4 *)(local_100 + local_fc * 0x20);
        puVar4[3] = local_f0;
        puVar4[2] = param_1;
        puVar4[1] = pcVar11 + -0x915fb;
        *puVar4 = s_IPaddress_000915fc;
        piVar12 = (int *)(local_100 + local_fc * 0x20 + 0x10);
        piVar12[2] = local_d0;
        piVar12[3] = local_cc;
        *piVar12 = (int)local_d8;
        piVar12[1] = local_d4;
        local_fc = local_fc + 1;
        local_cc = 0;
        if (local_28[3] != 4) goto LAB_000916dc;
        uVar13 = local_28[2];
        if (uVar13 <= (uint)local_28[1]) {
          if (uVar13 == 0) {
            uVar16 = 0x10;
          }
          else {
            uVar16 = uVar13 << 1;
          }
          if (uVar13 < uVar16) {
            iVar15 = FUN_001d6390(local_b8,*local_28,uVar13 << 4,uVar16 << 4);
            *piVar8 = iVar15;
            piVar8[2] = uVar16;
          }
        }
        piVar12 = (int *)(*piVar8 + piVar8[1] * 0x10);
        piVar8[1] = piVar8[1] + 1;
        *piVar12 = local_100;
        piVar12[1] = local_fc;
        piVar12[2] = local_f8;
        piVar12[3] = local_f4;
        local_f4 = 0;
      }
      iVar6 = iVar6 + 0x10;
    } while (local_70 != iVar6);
  }
  FUN_001d62a8(auStack_68,0,0x100);
  FUN_001d6abc(auStack_44,auStack_68,0,0x20);
  FUN_001d86a0(&local_c8,auStack_44);
  iVar14 = (local_5c - local_60) + 0xd3;
  FUN_0007136c(param_1 + 0x178,0xffffffff);
  FUN_0019f30c(*(undefined4 *)(param_1 + 0x1c4));
  iVar10 = FUN_001a0808(iVar14,1);
  *(int *)(param_1 + 0x1c4) = iVar10;
  if (iVar10 == 0) {
    FUN_000028a4(DAT_000918f8,iVar14);
    uVar5 = FUN_001a0808(1);
    *(undefined4 *)(param_1 + 0x1c4) = uVar5;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  else {
    iVar10 = FUN_000028d8(iVar10,DAT_000918f4,local_5c - local_60);
    uVar5 = FUN_001d8d38(auStack_68);
    FUN_00003418(*(int *)(param_1 + 0x1c4) + iVar10,uVar5);
    *(int *)(param_1 + 0x1c8) = (local_5c - local_60) + iVar10;
  }
  FUN_0007143c(param_1 + 0x178);
  iVar10 = extraout_r1;
  if (local_3c != (int *)0x0) {
    while( true ) {
      iVar14 = *local_3c;
      if (iVar14 != 0) {
        iVar10 = local_3c[2];
      }
      if (iVar14 == 0 || iVar14 == iVar10) break;
      iVar10 = *(int *)(iVar14 + 8);
      FUN_0018a280();
      *local_3c = iVar10;
      iVar10 = extraout_r1_00;
    }
    FUN_0019f30c(local_3c[4]);
    FUN_0019f30c(local_3c);
  }
  FUN_0018a280(local_60);
  FUN_0019f30c(local_64);
  iVar14 = local_70;
  for (iVar10 = local_74; iVar10 != iVar14; iVar10 = iVar10 + 0x10) {
    iVar6 = FUN_001da44c(iVar10 + 8);
    FUN_001da44c(iVar6 + -4);
  }
  FUN_0010fa20(local_74,local_6c - local_74 >> 4,0);
  FUN_0015242c(&local_c8);
  return;
}

