// rea decompile_all
// name: FUN_0042dff2
// address: 0x42dff2
// body: available
// range: 0x42dff2-0x42e446 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042dff2(uint param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int in_EAX;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  uint *puVar14;
  uint local_50;
  uint local_4c;
  uint local_48;
  ushort *local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  void *local_2c;
  short *local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  ushort *local_14;
  uint *local_10;
  int local_c;
  int local_8;
  
  piVar1 = *(int **)(in_EAX + 0x68);
  local_c = piVar1[7];
  puVar14 = *(uint **)(in_EAX + 0x2c8);
  local_48 = 0;
  local_44 = (ushort *)0x0;
  local_14 = (ushort *)0x0;
  if ((*(char *)(in_EAX + 0x2c4) == '\0') || (puVar14 == (uint *)0x0)) {
    local_8 = 6;
  }
  else {
    local_10 = puVar14;
    local_40 = FUN_00411976(8,0,&local_8);
    if (local_8 == 0) {
      *param_2 = local_40;
      if ((param_1 < puVar14[8]) &&
         (piVar5 = (int *)(puVar14[9] + param_1 * 4), *piVar5 != piVar5[1])) {
        local_8 = FUN_0041106d();
        if ((local_8 == 0) && (local_8 = FUN_004111b5(), local_8 == 0)) {
          iVar2 = piVar1[8];
          iVar3 = *piVar1;
          local_2c = (void *)FUN_00411976(4,0,&local_8);
          if ((local_8 == 0) &&
             ((local_38 = FUN_00411976(4,0,&local_8), local_8 == 0 &&
              (local_3c = FUN_00411976(4,0,&local_8), local_8 == 0)))) {
            uVar6 = FUN_00411277();
            uVar7 = FUN_00411277();
            local_18 = (uVar7 & 0xffff) + (iVar2 - iVar3);
            if ((uVar6 & 0x8000) != 0) {
              iVar2 = *piVar1;
              iVar3 = piVar1[8];
              piVar1[8] = iVar2 + local_18;
              local_44 = (ushort *)FUN_0042d004(piVar1,&local_48);
              local_18 = piVar1[8] - *piVar1;
              piVar1[8] = *piVar1 + (iVar3 - iVar2);
            }
            local_34 = 0;
            if ((uVar6 & 0xfff) != 0) {
              do {
                uVar7 = FUN_00411277();
                uVar8 = FUN_00411277();
                puVar14 = local_10;
                local_28 = (short *)(uVar8 & 0xffff);
                if ((uVar8 & 0x8000) == 0) {
                  if (local_10[6] <= (uVar8 & 0xfff)) {
                    local_8 = 8;
                    break;
                  }
                  _memcpy(local_2c,(void *)(local_10[7] + (uVar8 & 0xfff) * *local_10 * 4),
                          *local_10 << 2);
                  puVar14 = local_10;
                }
                else {
                  uVar8 = 0;
                  if (*local_10 != 0) {
                    do {
                      sVar4 = FUN_00411277();
                      *(int *)((int)local_2c + uVar8 * 4) = (int)sVar4 << 2;
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < *puVar14);
                  }
                }
                if (((uint)local_28 & 0x4000) != 0) {
                  uVar8 = 0;
                  if (*puVar14 != 0) {
                    do {
                      sVar4 = FUN_00411277();
                      *(int *)(local_38 + uVar8 * 4) = (int)sVar4 << 2;
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < *puVar14);
                  }
                  uVar8 = 0;
                  if (*puVar14 != 0) {
                    do {
                      sVar4 = FUN_00411277();
                      *(int *)(local_3c + uVar8 * 4) = (int)sVar4 << 2;
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < *puVar14);
                  }
                }
                local_20 = FUN_0042d52a(puVar14,local_28);
                if (local_20 != 0) {
                  iVar2 = *piVar1;
                  iVar3 = piVar1[8];
                  if (((uint)local_28 & 0x2000) == 0) {
                    local_4c = local_48;
                    puVar13 = local_44;
                  }
                  else {
                    piVar1[8] = iVar2 + local_18;
                    local_14 = (ushort *)FUN_0042d004(piVar1,&local_4c);
                    puVar13 = local_14;
                  }
                  local_50 = local_4c;
                  uVar8 = param_3;
                  if (local_4c != 0) {
                    uVar8 = local_4c;
                  }
                  local_24 = FUN_0042d116(piVar1,uVar8);
                  uVar8 = param_3;
                  if (local_50 != 0) {
                    uVar8 = local_50;
                  }
                  psVar9 = (short *)FUN_0042d116(piVar1,uVar8);
                  local_28 = psVar9;
                  if (((puVar13 != (ushort *)0x0) && (psVar9 != (short *)0x0)) && (local_24 != 0)) {
                    if (puVar13 == (ushort *)0xffffffff) {
                      local_1c = 0;
                      if (param_3 != 0) {
                        local_30 = local_24 - (int)psVar9;
                        do {
                          iVar11 = local_40;
                          iVar12 = local_1c * 8;
                          iVar10 = thunk_FUN_00401000((int)*(short *)(local_30 + (int)psVar9),
                                                      local_20);
                          piVar5 = (int *)(iVar12 + iVar11);
                          *piVar5 = *piVar5 + iVar10;
                          piVar5 = (int *)(iVar12 + 4 + iVar11);
                          iVar11 = thunk_FUN_00401000((int)*psVar9,local_20);
                          *piVar5 = *piVar5 + iVar11;
                          local_1c = local_1c + 1;
                          psVar9 = psVar9 + 1;
                        } while (local_1c < param_3);
                      }
                    }
                    else if (local_50 != 0) {
                      iVar11 = local_24 - (int)psVar9;
                      uVar8 = (int)psVar9 - (int)local_14;
                      puVar13 = local_14;
                      local_30 = iVar11;
                      local_1c = uVar8;
                      do {
                        if (*puVar13 < param_3) {
                          iVar10 = thunk_FUN_00401000((int)*(short *)((int)puVar13 + iVar11 + uVar8)
                                                      ,local_20);
                          iVar11 = local_40;
                          *(int *)(local_40 + (uint)*puVar13 * 8) =
                               iVar10 + *(int *)(local_40 + (uint)*puVar13 * 8);
                          iVar10 = thunk_FUN_00401000((int)*(short *)(local_1c + (int)puVar13),
                                                      local_20);
                          *(int *)(iVar11 + 4 + (uint)*puVar13 * 8) =
                               iVar10 + *(int *)(iVar11 + 4 + (uint)*puVar13 * 8);
                          uVar8 = local_1c;
                          iVar11 = local_30;
                        }
                        puVar13 = puVar13 + 1;
                        local_50 = local_50 - 1;
                      } while (local_50 != 0);
                    }
                  }
                  if (local_14 != (ushort *)0xffffffff) {
                    FUN_00411a5c(local_14);
                    local_14 = (ushort *)0x0;
                  }
                  FUN_00411a5c(local_24);
                  FUN_00411a5c(local_28);
                  piVar1[8] = *piVar1 + (iVar3 - iVar2);
                }
                local_18 = local_18 + (uVar7 & 0xffff);
                local_34 = local_34 + 1;
              } while (local_34 < (uVar6 & 0xfff));
            }
            FUN_00411a5c(local_2c);
            FUN_00411a5c(local_38);
            FUN_00411a5c(local_3c);
          }
          FUN_00411249();
          if (local_8 == 0) {
            return 0;
          }
        }
        FUN_00411a5c(local_40);
        *param_2 = 0;
      }
      else {
        local_8 = 0;
      }
    }
  }
  return local_8;
}

