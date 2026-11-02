// rea decompile_all
// name: FUN_00674310
// address: 0x674310
// body: available
// range: 0x674310-0x674c87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00674310(int *param_1,undefined4 *param_2)

{
  uint *puVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int in_ECX;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  undefined4 in_stack_fffffe04;
  undefined4 in_stack_fffffe08;
  undefined4 local_13c;
  undefined4 local_138;
  float local_134;
  uint *local_130;
  float local_12c;
  float local_128;
  int local_124;
  uint *local_120;
  int *local_11c;
  char *local_118;
  uint local_114;
  int local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  undefined1 local_100 [4];
  char *local_fc;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  undefined1 local_f0 [34];
  undefined1 local_ce;
  undefined1 local_cd [34];
  char local_ab [36];
  char local_87 [36];
  char local_63 [36];
  char local_3f [36];
  char local_1b [7];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720582;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = *param_1;
  if (iVar4 == 0) {
    local_10c = 0;
    local_108 = 0;
  }
  else {
    local_10c = *(uint *)(iVar4 + 0xc);
    local_108 = *(uint *)(iVar4 + 0x10);
  }
  local_110 = in_ECX;
  FUN_00675f90(local_14);
  (**(code **)(**(int **)(in_ECX + 4) + 0x10))("gsave ",6);
  iVar4 = *(int *)(in_ECX + 0x20);
  if (iVar4 < 1) {
    iVar7 = 0;
    iVar4 = 0;
  }
  else {
    iVar7 = *(int *)(*(int *)(in_ECX + 0x18) + -4 + iVar4 * 4);
    iVar4 = *(int *)(*(int *)(in_ECX + 0x18) + -4 + iVar4 * 4);
  }
  local_13c = *param_2;
  local_138 = param_2[1];
  local_134 = (float)param_2[2] + (float)*(int *)(iVar4 + 0xc);
  local_130 = (uint *)((float)param_2[3] * -1.0);
  local_12c = (float)param_2[4] * -1.0;
  local_128 = ((float)param_2[5] + (float)*(int *)(iVar7 + 0x10)) * -1.0;
  FUN_006756d0(&local_13c);
  local_130 = (uint *)0x0;
  local_12c = 0.0;
  local_128 = 0.0;
  local_8 = 0;
  FUN_00672a60(&local_130);
  (**(code **)(**(int **)(in_ECX + 4) + 0x10))("newpath ",8);
  puVar5 = local_130 + (int)local_128 * 4;
  if (local_130 != puVar5) {
    puVar6 = local_130 + 2;
    local_124 = 0;
    do {
      local_124 = local_124 + 1;
      local_120 = puVar6;
      if (local_124 == 6) {
        pcVar2 = *(code **)(**(int **)(in_ECX + 4) + 0x14);
        if (pcVar2 == FUN_0062c8e0) {
          local_100[0] = 10;
          (**(code **)(**(int **)(in_ECX + 4) + 0x10))(local_100,1);
        }
        else {
          (*pcVar2)(10);
        }
        local_124 = 0;
      }
      uVar12 = local_120[-2];
      local_104 = local_120[1];
      uVar10 = *local_120;
      pcVar9 = (char *)local_120[-1];
      local_fc = local_63 + 2;
      local_11c = *(int **)(local_110 + 4);
      local_63[2] = 0;
      if ((int)uVar12 < 0) {
        uVar12 = -uVar12;
        do {
          pcVar13 = local_fc;
          local_fc = pcVar13 + -1;
          uVar8 = uVar12 / 10;
          *local_fc = (char)uVar12 + (char)uVar8 * -10 + '0';
          uVar12 = uVar8;
        } while (uVar8 != 0);
        local_fc = pcVar13 + -2;
        *local_fc = '-';
      }
      else {
        do {
          local_fc = local_fc + -1;
          uVar8 = uVar12 / 10;
          *local_fc = (char)uVar12 + (char)uVar8 * -10 + '0';
          uVar12 = uVar8;
        } while (uVar8 != 0);
      }
      local_118 = pcVar9;
      local_114 = uVar10;
      (**(code **)(*local_11c + 0x10))(local_fc,local_63 + (2 - (int)local_fc));
      if (*(code **)(*local_11c + 0x14) == FUN_0062c8e0) {
        local_f4[0] = 0x20;
        (**(code **)(*local_11c + 0x10))(local_f4,1);
      }
      else {
        (**(code **)(*local_11c + 0x14))(0x20);
      }
      piVar3 = local_11c;
      local_87[2] = 0;
      pcVar13 = local_87 + 2;
      pcVar11 = local_118;
      if ((int)pcVar9 < 0) {
        uVar12 = -(int)local_118;
        do {
          pcVar9 = pcVar13;
          pcVar13 = pcVar9 + -1;
          uVar8 = uVar12 / 10;
          *pcVar13 = (char)uVar12 + (char)uVar8 * -10 + '0';
          uVar12 = uVar8;
        } while (uVar8 != 0);
        pcVar13 = pcVar9 + -2;
        *pcVar13 = '-';
      }
      else {
        do {
          pcVar13 = pcVar13 + -1;
          pcVar9 = (char *)((uint)pcVar11 / 10);
          *pcVar13 = (char)pcVar11 + (char)pcVar9 * -10 + '0';
          pcVar11 = pcVar9;
          local_118 = pcVar13;
        } while (pcVar9 != (char *)0x0);
      }
      (**(code **)(*local_11c + 0x10))(pcVar13,local_87 + (2 - (int)pcVar13));
      pcVar2 = *(code **)(*piVar3 + 0x14);
      if (pcVar2 == FUN_0062c8e0) {
        local_f8[0] = 0x20;
        (**(code **)(*piVar3 + 0x10))(local_f8,1);
      }
      else {
        (*pcVar2)(0x20);
      }
      uVar12 = local_104;
      local_1b[2] = 0;
      pcVar9 = local_1b + 2;
      uVar8 = local_114;
      if ((int)uVar10 < 0) {
        uVar10 = -local_114;
        do {
          pcVar13 = pcVar9;
          pcVar9 = pcVar13 + -1;
          uVar8 = uVar10 / 10;
          *pcVar9 = (char)uVar10 + (char)uVar8 * -10 + '0';
          uVar10 = uVar8;
        } while (uVar8 != 0);
        pcVar9 = pcVar13 + -2;
        *pcVar9 = '-';
      }
      else {
        do {
          pcVar9 = pcVar9 + -1;
          uVar10 = uVar8 / 10;
          *pcVar9 = (char)uVar8 + (char)uVar10 * -10 + '0';
          uVar8 = uVar10;
        } while (uVar10 != 0);
      }
      (**(code **)(*piVar3 + 0x10))(pcVar9,local_1b + (2 - (int)pcVar9));
      pcVar2 = *(code **)(*piVar3 + 0x14);
      if (pcVar2 == FUN_0062c8e0) {
        local_f0[0] = 0x20;
        (**(code **)(*piVar3 + 0x10))(local_f0,1);
      }
      else {
        (*pcVar2)(0x20);
      }
      local_3f[2] = 0;
      pcVar9 = local_3f + 2;
      if ((int)uVar12 < 0) {
        uVar12 = -uVar12;
        do {
          pcVar13 = pcVar9;
          pcVar9 = pcVar13 + -1;
          uVar10 = uVar12 / 10;
          *pcVar9 = (char)uVar12 + (char)uVar10 * -10 + '0';
          uVar12 = uVar10;
        } while (uVar10 != 0);
        pcVar9 = pcVar13 + -2;
        *pcVar9 = '-';
      }
      else {
        do {
          pcVar9 = pcVar9 + -1;
          uVar10 = uVar12 / 10;
          *pcVar9 = (char)uVar12 + (char)uVar10 * -10 + '0';
          uVar12 = uVar10;
        } while (uVar10 != 0);
      }
      (**(code **)(*piVar3 + 0x10))(pcVar9,local_3f + (2 - (int)pcVar9));
      (**(code **)(*piVar3 + 0x10))(&DAT_00c0284c,4);
      puVar6 = local_120 + 4;
      puVar1 = local_120 + 2;
      in_ECX = local_110;
      local_120 = puVar6;
    } while (puVar1 != puVar5);
  }
  (**(code **)(**(int **)(in_ECX + 4) + 0x10))(" clip newpath\n",0xe);
  pcVar9 = local_3f + 2;
  piVar3 = *(int **)(in_ECX + 4);
  local_3f[2] = 0;
  uVar12 = local_10c;
  if ((int)local_10c < 0) {
    uVar12 = -local_10c;
    do {
      pcVar13 = pcVar9;
      pcVar9 = pcVar13 + -1;
      uVar10 = uVar12 / 10;
      *pcVar9 = (char)uVar12 + (char)uVar10 * -10 + '0';
      uVar12 = uVar10;
    } while (uVar10 != 0);
    pcVar9 = pcVar13 + -2;
    *pcVar9 = '-';
  }
  else {
    do {
      pcVar9 = pcVar9 + -1;
      uVar10 = uVar12 / 10;
      *pcVar9 = (char)uVar12 + (char)uVar10 * -10 + '0';
      uVar12 = uVar10;
    } while (uVar10 != 0);
  }
  (**(code **)(*piVar3 + 0x10))(pcVar9,local_3f + (2 - (int)pcVar9));
  pcVar2 = *(code **)(*piVar3 + 0x14);
  if (pcVar2 == FUN_0062c8e0) {
    local_f0[0] = 0x20;
    (**(code **)(*piVar3 + 0x10))(local_f0,1);
  }
  else {
    (*pcVar2)(0x20);
  }
  pcVar9 = local_1b + 2;
  local_1b[2] = 0;
  uVar12 = local_108;
  if ((int)local_108 < 0) {
    uVar12 = -local_108;
    do {
      pcVar13 = pcVar9;
      pcVar9 = pcVar13 + -1;
      uVar10 = uVar12 / 10;
      *pcVar9 = (char)uVar12 + (char)uVar10 * -10 + '0';
      uVar12 = uVar10;
    } while (uVar10 != 0);
    pcVar9 = pcVar13 + -2;
    *pcVar9 = '-';
  }
  else {
    do {
      pcVar9 = pcVar9 + -1;
      uVar10 = uVar12 / 10;
      *pcVar9 = (char)uVar12 + (char)uVar10 * -10 + '0';
      uVar12 = uVar10;
    } while (uVar10 != 0);
  }
  (**(code **)(*piVar3 + 0x10))(pcVar9,local_1b + (2 - (int)pcVar9));
  (**(code **)(*piVar3 + 0x10))(" scale\n",7);
  pcVar9 = local_3f + 2;
  local_3f[2] = 0;
  piVar3 = *(int **)(local_110 + 4);
  uVar12 = local_10c;
  if ((int)local_10c < 0) {
    uVar12 = -local_10c;
    do {
      pcVar13 = pcVar9;
      pcVar9 = pcVar13 + -1;
      uVar10 = uVar12 / 10;
      *pcVar9 = (char)uVar12 + (char)uVar10 * -10 + '0';
      uVar12 = uVar10;
    } while (uVar10 != 0);
    pcVar9 = pcVar13 + -2;
    *pcVar9 = '-';
  }
  else {
    do {
      pcVar9 = pcVar9 + -1;
      uVar10 = uVar12 / 10;
      *pcVar9 = (char)uVar12 + (char)uVar10 * -10 + '0';
      uVar12 = uVar10;
    } while (uVar10 != 0);
  }
  (**(code **)(*piVar3 + 0x10))(pcVar9,local_3f + (2 - (int)pcVar9));
  pcVar2 = *(code **)(*piVar3 + 0x14);
  if (pcVar2 == FUN_0062c8e0) {
    local_f0[0] = 0x20;
    (**(code **)(*piVar3 + 0x10))(local_f0,1);
  }
  else {
    (*pcVar2)(0x20);
  }
  pcVar9 = local_1b + 2;
  local_1b[2] = 0;
  uVar12 = local_108;
  if ((int)local_108 < 0) {
    uVar12 = -local_108;
    do {
      pcVar13 = pcVar9;
      pcVar9 = pcVar13 + -1;
      uVar10 = uVar12 / 10;
      *pcVar9 = (char)uVar12 + (char)uVar10 * -10 + '0';
      uVar12 = uVar10;
    } while (uVar10 != 0);
    pcVar9 = pcVar13 + -2;
    *pcVar9 = '-';
  }
  else {
    do {
      pcVar9 = pcVar9 + -1;
      uVar10 = uVar12 / 10;
      *pcVar9 = (char)uVar12 + (char)uVar10 * -10 + '0';
      uVar12 = uVar10;
    } while (uVar10 != 0);
  }
  (**(code **)(*piVar3 + 0x10))(pcVar9,local_1b + (2 - (int)pcVar9));
  (**(code **)(*piVar3 + 0x10))(&DAT_00c02ca8,4);
  pcVar9 = local_87 + 2;
  local_87[2] = 0;
  uVar12 = local_10c;
  if ((int)local_10c < 0) {
    uVar12 = -local_10c;
    do {
      pcVar13 = pcVar9;
      pcVar9 = pcVar13 + -1;
      uVar10 = uVar12 / 10;
      *pcVar9 = (char)uVar12 + (char)uVar10 * -10 + '0';
      uVar12 = uVar10;
    } while (uVar10 != 0);
    pcVar9 = pcVar13 + -2;
    *pcVar9 = '-';
  }
  else {
    do {
      pcVar9 = pcVar9 + -1;
      uVar10 = uVar12 / 10;
      *pcVar9 = (char)uVar12 + (char)uVar10 * -10 + '0';
      uVar12 = uVar10;
    } while (uVar10 != 0);
  }
  (**(code **)(*piVar3 + 0x10))(pcVar9,local_87 + (2 - (int)pcVar9));
  (**(code **)(*piVar3 + 0x10))(" 0 0 -",6);
  pcVar9 = local_63 + 2;
  local_63[2] = 0;
  uVar12 = local_108;
  if ((int)local_108 < 0) {
    uVar12 = -local_108;
    do {
      pcVar13 = pcVar9;
      pcVar9 = pcVar13 + -1;
      uVar10 = uVar12 / 10;
      *pcVar9 = (char)uVar12 + (char)uVar10 * -10 + '0';
      uVar12 = uVar10;
    } while (uVar10 != 0);
    pcVar9 = pcVar13 + -2;
    *pcVar9 = '-';
  }
  else {
    do {
      pcVar9 = pcVar9 + -1;
      uVar10 = uVar12 / 10;
      *pcVar9 = (char)uVar12 + (char)uVar10 * -10 + '0';
      uVar12 = uVar10;
    } while (uVar10 != 0);
  }
  (**(code **)(*piVar3 + 0x10))(pcVar9,local_63 + (2 - (int)pcVar9));
  pcVar2 = *(code **)(*piVar3 + 0x14);
  if (pcVar2 == FUN_0062c8e0) {
    local_f8[0] = 0x20;
    (**(code **)(*piVar3 + 0x10))(local_f8,1);
  }
  else {
    (*pcVar2)(0x20);
  }
  local_cd[0] = 0;
  local_ce = 0x30;
  (**(code **)(*piVar3 + 0x10))(&local_ce,local_cd + -(int)&local_ce);
  pcVar2 = *(code **)(*piVar3 + 0x14);
  if (pcVar2 == FUN_0062c8e0) {
    local_f4[0] = 0x20;
    (**(code **)(*piVar3 + 0x10))(local_f4,1);
  }
  else {
    (*pcVar2)(0x20);
  }
  pcVar9 = local_ab + 2;
  local_ab[2] = 0;
  uVar12 = local_108;
  if ((int)local_108 < 0) {
    uVar12 = -local_108;
    do {
      pcVar13 = pcVar9;
      pcVar9 = pcVar13 + -1;
      uVar10 = uVar12 / 10;
      *pcVar9 = (char)uVar12 + (char)uVar10 * -10 + '0';
      uVar12 = uVar10;
    } while (uVar10 != 0);
    pcVar9 = pcVar13 + -2;
    *pcVar9 = '-';
  }
  else {
    do {
      pcVar9 = pcVar9 + -1;
      uVar10 = uVar12 / 10;
      *pcVar9 = (char)uVar12 + (char)uVar10 * -10 + '0';
      uVar12 = uVar10;
    } while (uVar10 != 0);
  }
  (**(code **)(*piVar3 + 0x10))(pcVar9,local_ab + (2 - (int)pcVar9));
  (**(code **)(*piVar3 + 0x10))(&DAT_00c02880,3);
  FUN_00674c90(param_1,in_stack_fffffe04,in_stack_fffffe08,local_10c,local_108);
  (**(code **)(**(int **)(local_110 + 4) + 0x10))("false 3 colorimage grestore\n",0x1c);
  *(undefined1 *)(local_110 + 0x10) = 1;
  FID_conflict__free(local_130);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

