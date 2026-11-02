// rea decompile_all
// name: FUN_004141fa
// address: 0x4141fa
// body: available
// range: 0x4141fa-0x4144ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004144a2) */

int FUN_004141fa(int param_1,int param_2,int *param_3,int param_4)

{
  uint *puVar1;
  undefined1 uVar2;
  int in_EAX;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  int iVar9;
  void *_Src;
  int *local_68;
  int local_64;
  undefined4 local_60;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_14 = (uint)(in_EAX == 3);
  local_18 = (uint)(in_EAX == 4);
  if (*(int *)(param_2 + 0x48) == *(int *)(param_1 + 0x10)) {
    if (in_EAX == param_4) {
      if (param_3 != (int *)0x0) {
        FUN_00410751(*param_3,param_3[1]);
      }
      FUN_004106d2();
      local_38 = local_38 & 0xffffffc0;
      local_34 = local_34 & 0xffffffc0;
      uVar3 = local_30 + 0x3fU & 0xffffffc0;
      uVar7 = local_2c + 0x3fU & 0xffffffc0;
      if (((-1 < (int)local_38) || ((int)uVar3 <= (int)(local_38 + 0x7fffffff))) &&
         ((local_20 = (int)(uVar3 - local_38) >> 6, -1 < (int)local_34 ||
          ((int)uVar7 <= (int)(local_34 + 0x7fffffff))))) {
        local_c = *(int *)(param_1 + 8);
        iVar9 = (int)(uVar7 - local_34) >> 6;
        local_1c = iVar9;
        local_10 = local_20;
        if ((*(byte *)(*(int *)(param_2 + 0x9c) + 4) & 1) != 0) {
          FUN_00411a5c(*(undefined4 *)(param_2 + 0x58));
          *(undefined4 *)(param_2 + 0x58) = 0;
          puVar1 = (uint *)(*(int *)(param_2 + 0x9c) + 4);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        local_8 = local_10;
        if (local_14 != 0) {
          local_10 = local_10 * 3;
          local_8 = local_10 + 3 & 0xfffffffc;
        }
        if (local_18 != 0) {
          iVar9 = iVar9 * 3;
        }
        local_24 = (int)local_38 >> 6;
        local_28 = (int)(local_2c + 0x3fU) >> 6;
        if (((int)local_10 < 0x8000) && (iVar9 < 0x8000)) {
          *(uint *)(param_2 + 0x50) = local_10;
          *(uint *)(param_2 + 0x54) = local_8;
          *(undefined1 *)(param_2 + 0x5e) = 2;
          *(undefined2 *)(param_2 + 0x5c) = 0x100;
          *(int *)(param_2 + 0x4c) = iVar9;
          FUN_00410751(-local_38,-local_34);
          uVar4 = FUN_00411912(local_8 * iVar9,&local_c);
          *(undefined4 *)(param_2 + 0x58) = uVar4;
          if (local_c == 0) {
            puVar1 = (uint *)(*(int *)(param_2 + 0x9c) + 4);
            *puVar1 = *puVar1 | 1;
            local_60 = 1;
            local_68 = (int *)(param_2 + 0x4c);
            local_64 = param_2 + 0x6c;
            local_c = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x34),&local_68);
            uVar3 = local_8;
            if (local_14 != 0) {
              param_1 = local_1c;
              if (local_1c != 0) {
                iVar6 = *(int *)(param_2 + 0x58) + -1;
                do {
                  if (local_20 != 0) {
                    puVar5 = (undefined1 *)((local_10 - 1) + iVar6);
                    uVar7 = local_20;
                    do {
                      uVar2 = *(undefined1 *)(iVar6 + uVar7);
                      puVar5[-1] = uVar2;
                      *puVar5 = uVar2;
                      puVar5[1] = uVar2;
                      puVar5 = puVar5 + -3;
                      uVar7 = uVar7 - 1;
                    } while (uVar7 != 0);
                  }
                  param_1 = param_1 + -1;
                  iVar6 = iVar6 + local_8;
                } while (param_1 != 0);
              }
            }
            if (local_18 != 0) {
              pvVar8 = *(void **)(param_2 + 0x58);
              _Src = (void *)((iVar9 - local_1c) * local_8 + (int)pvVar8);
              for (iVar9 = local_1c; iVar9 != 0; iVar9 = iVar9 + -1) {
                _memcpy(pvVar8,_Src,uVar3);
                _memcpy((void *)((int)pvVar8 + uVar3),_Src,uVar3);
                pvVar8 = (void *)((int)((int)pvVar8 + uVar3) + uVar3);
                _memcpy(pvVar8,_Src,uVar3);
                pvVar8 = (void *)((int)pvVar8 + uVar3);
                _Src = (void *)((int)_Src + uVar3);
              }
            }
            FUN_00410751(local_38,local_34);
            if (local_c == 0) {
              *(undefined4 *)(param_2 + 0x48) = 0x62697473;
              *(int *)(param_2 + 100) = local_24;
              *(int *)(param_2 + 0x68) = local_28;
            }
          }
          if (param_2 == -0x6c) {
            return local_c;
          }
          if (param_3 == (int *)0x0) {
            return local_c;
          }
          FUN_00410751(-*param_3,-param_3[1]);
          return local_c;
        }
      }
      local_c = 0x62;
    }
    else {
      local_c = 0x13;
    }
  }
  else {
    local_c = 6;
  }
  return local_c;
}

