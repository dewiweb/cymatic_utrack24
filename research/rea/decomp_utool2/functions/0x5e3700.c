// rea decompile_all
// name: FUN_005e3700
// address: 0x5e3700
// body: available
// range: 0x5e3700-0x5e3e15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e3700(int param_1,uint *param_2,void *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_ECX;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int in_EDX;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int local_178;
  int local_174;
  uint *local_170;
  uint local_15c;
  int *local_154;
  uint local_14c [65];
  int local_48 [17];
  
  local_48[0x10] = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  piVar1 = *(int **)(param_1 + 0x510);
  local_174 = *(int *)(param_1 + 0x504);
  iVar19 = *(int *)(*(int *)(*(int *)(in_EDX + 0x40) + 4) + 0x1c);
  iVar17 = *(int *)(iVar19 + 0xb20);
  if (param_2 == (uint *)0x0) {
    FUN_005eae90();
    _memset(param_3,0,*(int *)(in_EDX + 0x24) / 2 << 2);
    __security_check_cookie(local_48[0x10] ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar15 = 0;
  if (0 < local_174) {
    do {
      uVar11 = param_2[iVar15] & 0x7fff;
      switch(piVar1[0xd0]) {
      case 1:
        uVar11 = uVar11 >> 2;
        break;
      case 3:
        uVar11 = (uint)((ulonglong)uVar11 * 0xaaaaaaab >> 0x20);
      case 2:
        uVar11 = uVar11 >> 3;
        break;
      case 4:
        uVar11 = uVar11 >> 4;
      }
      param_2[iVar15] = param_2[iVar15] & 0x8000 | uVar11;
      iVar15 = iVar15 + 1;
    } while (iVar15 < local_174);
  }
  uVar11 = *param_2;
  uVar2 = param_2[1];
  if (2 < local_174) {
    piVar8 = (int *)(param_1 + 0x30c);
    local_170 = param_2 + 2;
    local_154 = piVar1 + 0xd3;
    local_174 = local_174 + -2;
    do {
      iVar15 = piVar8[0x3f];
      iVar3 = *piVar8;
      uVar4 = param_2[iVar15] & 0x7fff;
      uVar18 = (param_2[iVar3] & 0x7fff) - uVar4;
      iVar5 = (int)(((uVar18 ^ (int)uVar18 >> 0x1f) - ((int)uVar18 >> 0x1f)) *
                   (*local_154 - piVar1[iVar15 + 0xd1])) /
              (piVar1[iVar3 + 0xd1] - piVar1[iVar15 + 0xd1]);
      if ((int)uVar18 < 0) {
        iVar5 = -iVar5;
      }
      uVar12 = uVar4 + iVar5;
      uVar18 = *local_170;
      if (((uVar18 & 0x8000) == 0) && (uVar12 != uVar18)) {
        uVar6 = *(int *)(param_1 + 0x50c) - uVar12;
        uVar9 = uVar12;
        if ((int)uVar6 < (int)uVar12) {
          uVar9 = uVar6;
        }
        iVar5 = uVar18 - uVar12;
        if (iVar5 < 0) {
          if (iVar5 < (int)-uVar9) {
            uVar9 = (uVar9 - iVar5) - 1;
          }
          else {
            uVar9 = ~(iVar5 * 2);
          }
        }
        else if (iVar5 < (int)uVar9) {
          uVar9 = iVar5 * 2;
        }
        else {
          uVar9 = iVar5 + uVar9;
        }
        *(uint *)(((int)local_14c - (int)param_2) + (int)local_170) = uVar9;
        param_2[iVar15] = uVar4;
        param_2[iVar3] = param_2[iVar3] & 0x7fff;
      }
      else {
        *local_170 = uVar12 | 0x8000;
        *(undefined4 *)(((int)local_14c - (int)param_2) + (int)local_170) = 0;
      }
      local_170 = local_170 + 1;
      local_154 = local_154 + 1;
      piVar8 = piVar8 + 1;
      local_174 = local_174 + -1;
    } while (local_174 != 0);
  }
  local_14c[0] = uVar11;
  local_14c[1] = uVar2;
  FUN_005eae90(in_ECX,1,1);
  iVar15 = 0;
  *(int *)(param_1 + 0x51c) = *(int *)(param_1 + 0x51c) + 1;
  uVar18 = *(int *)(param_1 + 0x50c) - 1;
  for (uVar4 = uVar18; uVar4 != 0; uVar4 = uVar4 >> 1) {
    iVar15 = iVar15 + 1;
  }
  *(int *)(param_1 + 0x518) = *(int *)(param_1 + 0x518) + iVar15 * 2;
  iVar15 = 0;
  for (; uVar18 != 0; uVar18 = uVar18 >> 1) {
    iVar15 = iVar15 + 1;
  }
  FUN_005eae90(in_ECX,uVar11,iVar15);
  iVar15 = 0;
  for (uVar11 = *(int *)(param_1 + 0x50c) - 1; uVar11 != 0; uVar11 = uVar11 >> 1) {
    iVar15 = iVar15 + 1;
  }
  FUN_005eae90(in_ECX,uVar2,iVar15);
  local_170 = (uint *)0x0;
  local_154 = (int *)0x2;
  piVar8 = piVar1;
  if (0 < *piVar1) {
    do {
      iVar15 = piVar8[1];
      local_48[0] = 0;
      local_48[1] = 0;
      local_48[2] = 0;
      local_48[3] = 0;
      iVar3 = piVar1[iVar15 + 0x20];
      iVar14 = 0;
      iVar5 = 1 << ((byte)piVar1[iVar15 + 0x30] & 0x1f);
      local_15c = 0;
      local_48[4] = 0;
      local_48[5] = 0;
      local_48[6] = 0;
      local_48[7] = 0;
      if (piVar1[iVar15 + 0x30] != 0) {
        iVar10 = 0;
        local_48[8] = 0;
        local_48[0xd] = 0;
        local_48[0xe] = 0;
        local_48[0xf] = 0;
        local_48[9] = 0;
        local_48[10] = 0;
        local_48[0xb] = 0;
        local_48[0xc] = 0;
        if (0 < iVar5) {
          piVar16 = piVar1 + (iVar15 + 10) * 8;
          do {
            if (*piVar16 < 0) {
              local_48[iVar10 + 8] = 1;
            }
            else {
              local_48[iVar10 + 8] = *(int *)(*(int *)(iVar19 + 0x720 + *piVar16 * 4) + 4);
            }
            iVar10 = iVar10 + 1;
            piVar16 = piVar16 + 1;
          } while (iVar10 < iVar5);
        }
        uVar11 = 0;
        iVar10 = 0;
        if (0 < iVar3) {
          puVar13 = local_14c + (int)local_154;
          do {
            iVar7 = 0;
            if (0 < iVar5) {
              do {
                if ((int)*puVar13 < local_48[iVar7 + 8]) {
                  local_48[iVar10] = iVar7;
                  break;
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < iVar5);
            }
            piVar16 = local_48 + iVar10;
            iVar10 = iVar10 + 1;
            uVar11 = local_15c | *piVar16 << ((byte)iVar14 & 0x1f);
            puVar13 = puVar13 + 1;
            iVar14 = iVar14 + piVar1[iVar15 + 0x30];
            local_15c = uVar11;
          } while (iVar10 < iVar3);
        }
        iVar5 = iVar17 + piVar1[iVar15 + 0x40] * 0x38;
        if (((int)uVar11 < 0) || (*(int *)(*(int *)(iVar5 + 0xc) + 4) <= (int)uVar11)) {
          *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_1 + 0x514);
        }
        else {
          FUN_005eae90(in_ECX,*(undefined4 *)(*(int *)(iVar5 + 0x14) + uVar11 * 4),
                       *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0xc) + 8) + uVar11 * 4));
          *(int *)(param_1 + 0x514) =
               *(int *)(param_1 + 0x514) +
               *(int *)(*(int *)(*(int *)(iVar5 + 0xc) + 8) + uVar11 * 4);
        }
      }
      iVar5 = 0;
      if (0 < iVar3) {
        puVar13 = local_14c + (int)local_154;
        do {
          iVar14 = piVar1[local_48[iVar5] + iVar15 * 8 + 0x50];
          if (-1 < iVar14) {
            uVar11 = *puVar13;
            iVar10 = iVar17 + iVar14 * 0x38;
            if ((int)uVar11 < *(int *)(iVar17 + 4 + iVar14 * 0x38)) {
              if (((int)uVar11 < 0) || (*(int *)(*(int *)(iVar10 + 0xc) + 4) <= (int)uVar11)) {
                *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_1 + 0x518);
              }
              else {
                FUN_005eae90(in_ECX,*(undefined4 *)(*(int *)(iVar10 + 0x14) + uVar11 * 4),
                             *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0xc) + 8) + uVar11 * 4));
                *(int *)(param_1 + 0x518) =
                     *(int *)(param_1 + 0x518) +
                     *(int *)(*(int *)(*(int *)(iVar10 + 0xc) + 8) + uVar11 * 4);
              }
            }
          }
          iVar5 = iVar5 + 1;
          puVar13 = puVar13 + 1;
        } while (iVar5 < iVar3);
      }
      local_154 = (int *)((int)local_154 + iVar3);
      local_170 = (uint *)((int)local_170 + 1);
      piVar8 = piVar8 + 1;
    } while ((int)local_170 < *piVar1);
  }
  iVar19 = 0;
  local_154 = (int *)(*param_2 * piVar1[0xd0]);
  local_178 = 1;
  if (1 < *(int *)(param_1 + 0x504)) {
    piVar8 = (int *)(param_1 + 0x108);
    do {
      uVar11 = param_2[*piVar8] & 0x7fff;
      if (uVar11 == param_2[*piVar8]) {
        iVar17 = piVar1[0xd0] * uVar11;
        iVar19 = piVar1[*piVar8 + 0xd1];
        FUN_005e4da0(iVar19,local_154,iVar17,param_3);
        local_154 = (int *)iVar17;
      }
      local_178 = local_178 + 1;
      piVar8 = piVar8 + 1;
    } while (local_178 < *(int *)(param_1 + 0x504));
  }
  if (iVar19 < *(int *)(in_EDX + 0x24) / 2) {
    do {
      *(int **)((int)param_3 + iVar19 * 4) = local_154;
      iVar19 = iVar19 + 1;
    } while (iVar19 < *(int *)(in_EDX + 0x24) / 2);
  }
  __security_check_cookie(local_48[0x10] ^ (uint)&stack0xfffffffc);
  return;
}

