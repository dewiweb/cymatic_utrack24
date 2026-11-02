// rea decompile_all
// name: FUN_0040ed53
// address: 0x40ed53
// body: available
// range: 0x40ed53-0x40f06f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0040ed53(undefined4 *param_1,uint *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  char local_21;
  uint local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 local_c [2];
  
  local_1c = 0;
  local_18 = 0;
  if (((param_4 == (int *)0x0) && (-1 < param_3)) || (param_2 == (uint *)0x0)) {
    return 6;
  }
  if (((*param_2 & 2) == 0) || (local_21 = '\x01', param_2[4] == 0)) {
    local_21 = '\0';
  }
  local_20 = FUN_0040d9e0(&local_1c);
  if (local_20 == 0) {
    local_c[0] = *param_1;
    if (((*param_2 & 8) == 0) || ((undefined4 *)param_2[5] == (undefined4 *)0x0)) {
      puVar6 = param_1 + 5;
      local_10 = puVar6 + param_1[4];
      local_14 = puVar6;
      if (puVar6 < local_10) {
        do {
          if ((**(byte **)*puVar6 & 1) != 0) {
            uVar4 = 0;
            uVar5 = 0;
            if ((*param_2 & 0x10) != 0) {
              uVar4 = param_2[6];
              uVar5 = param_2[7];
            }
            local_14 = puVar6;
            local_20 = FUN_0040e2b3(local_1c,param_3,uVar4,uVar5,&local_18);
            if (local_20 == 0) goto LAB_0040eee5;
            iVar1 = _strcmp(*(char **)(*(int *)*puVar6 + 8),"truetype");
            if ((iVar1 == 0) && ((char)local_20 == -0x72)) {
              iVar1 = FUN_0041106d();
              if (iVar1 != 0) break;
              local_20 = FUN_0040e632(param_1,param_3,param_4);
              puVar6 = local_14;
              if (local_20 == 0) goto LAB_0040eff0;
            }
            if ((char)local_20 != '\x02') break;
          }
          puVar6 = puVar6 + 1;
          local_14 = puVar6;
        } while (puVar6 < local_10);
      }
      goto LAB_0040f00b;
    }
    if ((**(byte **)param_2[5] & 1) == 0) {
      local_20 = 0x20;
    }
    else {
      uVar4 = 0;
      uVar5 = 0;
      if ((*param_2 & 0x10) != 0) {
        uVar4 = param_2[6];
        uVar5 = param_2[7];
      }
      local_20 = FUN_0040e2b3(local_1c,param_3,uVar4,uVar5,&local_18);
      if (local_20 == 0) {
LAB_0040eee5:
        iVar1 = local_18;
        if (local_21 != '\0') {
          *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) | 0x400;
        }
        iVar2 = FUN_00411912(0xc,&local_20);
        if (local_20 == 0) {
          *(int *)(iVar2 + 8) = iVar1;
          FUN_00411b09();
          if (-1 < param_3) {
            local_20 = FUN_0040dc62(0);
            if ((local_20 != 0) || (local_20 = FUN_0040f0de(local_c), local_20 != 0))
            goto LAB_0040f05e;
            *(undefined4 *)(iVar1 + 0x58) = local_c[0];
          }
          if ((*(byte *)(iVar1 + 8) & 1) != 0) {
            if (*(short *)(iVar1 + 0x4a) < 0) {
              *(short *)(iVar1 + 0x4a) = -*(short *)(iVar1 + 0x4a);
            }
            if ((*(byte *)(iVar1 + 8) & 0x20) == 0) {
              *(undefined2 *)(iVar1 + 0x4e) = *(undefined2 *)(iVar1 + 0x4a);
            }
          }
          if (((*(byte *)(iVar1 + 8) & 2) != 0) && (iVar2 = 0, 0 < *(int *)(iVar1 + 0x1c))) {
            iVar7 = 0;
            do {
              psVar3 = (short *)(*(int *)(iVar1 + 0x20) + iVar7);
              if (*psVar3 < 0) {
                *psVar3 = -*psVar3;
              }
              if (*(int *)(psVar3 + 4) < 0) {
                *(int *)(psVar3 + 4) = (int)-psVar3[4];
              }
              if (*(int *)(psVar3 + 6) < 0) {
                *(int *)(psVar3 + 6) = -*(int *)(psVar3 + 6);
              }
              iVar2 = iVar2 + 1;
              iVar7 = iVar7 + 0x10;
            } while (iVar2 < *(int *)(iVar1 + 0x1c));
          }
          iVar2 = *(int *)(iVar1 + 0x80);
          *(undefined4 *)(iVar2 + 4) = 0x10000;
          *(undefined4 *)(iVar2 + 8) = 0;
          *(undefined4 *)(iVar2 + 0xc) = 0;
          *(undefined4 *)(iVar2 + 0x10) = 0x10000;
          *(undefined4 *)(iVar2 + 0x14) = 0;
          *(undefined4 *)(iVar2 + 0x18) = 0;
          *(undefined4 *)(iVar2 + 0x3c) = 1;
          if (param_4 != (int *)0x0) {
            *param_4 = iVar1;
            return local_20;
          }
        }
        goto LAB_0040f05e;
      }
    }
  }
  else {
LAB_0040f00b:
    uVar4 = local_20 & 0xff;
    if (((uVar4 == 0x51) || (uVar4 == 2)) || (uVar4 == 0x55)) {
      local_20 = FUN_0040ecf7(param_1,param_3,param_4);
      if (local_20 == 0) {
LAB_0040eff0:
        FUN_0040da85(local_21);
        return 0;
      }
      if ((char)local_20 == '\x02') {
        local_20 = 2;
      }
    }
  }
  FUN_0040da85(local_21);
LAB_0040f05e:
  FUN_0040f070();
  return local_20;
}

