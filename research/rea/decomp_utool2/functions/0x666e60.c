// rea decompile_all
// name: FUN_00666e60
// address: 0x666e60
// body: available
// range: 0x666e60-0x6672c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00666e60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_78 [12];
  uint local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined2 *local_4c;
  int local_48;
  int local_44;
  int *local_40;
  uint local_3c;
  int *local_38;
  int local_34;
  int local_30 [7];
  uint local_14;
  
  local_14 = DAT_00c76070 ^ (uint)auStack_78;
  local_34 = param_2;
  local_50 = *(int *)(param_1 + 0x198);
  local_68 = param_1;
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(local_50 + 0x24) == 0)) &&
     (cVar3 = FUN_006672d0(), cVar3 == '\0')) {
LAB_00666ea8:
    __security_check_cookie(local_14 ^ (uint)auStack_78);
    return;
  }
  if (*(char *)(local_50 + 8) == '\0') {
    iVar8 = *(int *)(local_50 + 0xc);
    local_30[0] = *(int *)(local_50 + 0x14);
    local_30[1] = *(undefined4 *)(local_50 + 0x18);
    local_30[2] = *(undefined4 *)(local_50 + 0x1c);
    local_30[3] = *(undefined4 *)(local_50 + 0x20);
    local_64 = **(undefined4 **)(local_68 + 0x18);
    local_60 = (*(undefined4 **)(local_68 + 0x18))[1];
    iVar5 = *(int *)(local_50 + 0x10);
    local_44 = 0;
    local_54 = local_68;
    if (0 < *(int *)(local_68 + 0x140)) {
      local_40 = (int *)(local_68 + 0x144);
      local_38 = (int *)(local_50 + 0x70);
      do {
        local_4c = *(undefined2 **)(local_34 + local_44 * 4);
        iVar1 = local_38[-10];
        local_48 = *local_38;
        if (iVar5 < 8) {
          cVar3 = FUN_00667430(iVar5,0);
          if (cVar3 == '\0') goto LAB_00666ea8;
          iVar5 = local_58;
          iVar8 = local_5c;
          if (7 < local_58) goto LAB_00666f6b;
          uVar6 = 1;
LAB_00666f91:
          uVar4 = FUN_00667350(iVar5,iVar1,uVar6);
          iVar5 = local_58;
          iVar8 = local_5c;
          if ((int)uVar4 < 0) goto LAB_00666ea8;
        }
        else {
LAB_00666f6b:
          uVar4 = iVar8 >> ((char)iVar5 - 8U & 0x1f) & 0xff;
          iVar2 = *(int *)(iVar1 + 0x90 + uVar4 * 4);
          if (iVar2 == 0) {
            uVar6 = 9;
            goto LAB_00666f91;
          }
          uVar4 = (uint)*(byte *)(uVar4 + 0x490 + iVar1);
          iVar5 = iVar5 - iVar2;
        }
        uVar7 = 0;
        if (uVar4 != 0) {
          if ((iVar5 < (int)uVar4) &&
             (cVar3 = FUN_00667430(iVar5,uVar4), iVar5 = local_58, iVar8 = local_5c, cVar3 == '\0'))
          goto LAB_00666ea8;
          iVar5 = iVar5 - uVar4;
          local_6c = (1 << ((byte)uVar4 & 0x1f)) - 1;
          uVar7 = local_6c & iVar8 >> ((byte)iVar5 & 0x1f);
          if ((int)uVar7 < *(int *)(&DAT_00c02390 + uVar4 * 4)) {
            uVar7 = *(int *)(&DAT_00c020f0 + uVar4 * 4) + uVar7;
          }
        }
        if (*(char *)(local_44 + 0x98 + local_50) != '\0') {
          iVar1 = *local_40;
          local_30[iVar1] = local_30[iVar1] + uVar7;
          *local_4c = (short)local_30[iVar1];
        }
        if (*(char *)(local_44 + 0xa2 + local_50) == '\0') {
          local_4c = (undefined2 *)0x1;
          do {
            if (iVar5 < 8) {
              cVar3 = FUN_00667430(iVar5,0);
              if (cVar3 == '\0') goto LAB_00666ea8;
              iVar5 = local_58;
              iVar8 = local_5c;
              if (7 < local_58) goto LAB_006671b6;
              uVar6 = 1;
LAB_006671e0:
              uVar4 = FUN_00667350(iVar5,local_48,uVar6);
              iVar5 = local_58;
              iVar8 = local_5c;
              if ((int)uVar4 < 0) goto LAB_00666ea8;
            }
            else {
LAB_006671b6:
              uVar4 = iVar8 >> ((char)iVar5 - 8U & 0x1f) & 0xff;
              iVar1 = *(int *)(local_48 + 0x90 + uVar4 * 4);
              if (iVar1 == 0) {
                uVar6 = 9;
                goto LAB_006671e0;
              }
              uVar4 = (uint)*(byte *)(uVar4 + 0x490 + local_48);
              iVar5 = iVar5 - iVar1;
            }
            local_3c = (int)uVar4 >> 4;
            uVar4 = uVar4 & 0xf;
            if (uVar4 == 0) {
              if (local_3c != 0xf) break;
            }
            else {
              if ((iVar5 < (int)uVar4) &&
                 (cVar3 = FUN_00667430(iVar5,uVar4), iVar5 = local_58, iVar8 = local_5c,
                 cVar3 == '\0')) goto LAB_00666ea8;
              iVar5 = iVar5 - uVar4;
            }
            local_4c = (undefined2 *)((int)local_4c + local_3c + 1);
          } while ((int)local_4c < 0x40);
        }
        else {
          local_6c = 1;
          do {
            if (iVar5 < 8) {
              cVar3 = FUN_00667430(iVar5,0);
              if (cVar3 == '\0') goto LAB_00666ea8;
              iVar5 = local_58;
              iVar8 = local_5c;
              if (7 < local_58) goto LAB_00667089;
              uVar6 = 1;
LAB_006670b3:
              uVar4 = FUN_00667350(iVar5,local_48,uVar6);
              iVar5 = local_58;
              iVar8 = local_5c;
              if ((int)uVar4 < 0) goto LAB_00666ea8;
            }
            else {
LAB_00667089:
              uVar4 = iVar8 >> ((char)iVar5 - 8U & 0x1f) & 0xff;
              iVar1 = *(int *)(local_48 + 0x90 + uVar4 * 4);
              if (iVar1 == 0) {
                uVar6 = 9;
                goto LAB_006670b3;
              }
              uVar4 = (uint)*(byte *)(uVar4 + 0x490 + local_48);
              iVar5 = iVar5 - iVar1;
            }
            uVar7 = uVar4 & 0xf;
            if (uVar7 == 0) {
              if ((int)uVar4 >> 4 != 0xf) break;
              local_6c = local_6c + 0xf;
            }
            else {
              local_6c = local_6c + ((int)uVar4 >> 4);
              if ((iVar5 < (int)uVar7) &&
                 (cVar3 = FUN_00667430(iVar5,uVar7), iVar5 = local_58, iVar8 = local_5c,
                 cVar3 == '\0')) goto LAB_00666ea8;
              iVar5 = iVar5 - uVar7;
              local_3c = (1 << (sbyte)uVar7) - 1;
              uVar4 = local_3c & iVar8 >> ((byte)iVar5 & 0x1f);
              if ((int)uVar4 < *(int *)(&DAT_00c02390 + uVar7 * 4)) {
                uVar4 = *(int *)(&DAT_00c020f0 + uVar7 * 4) + uVar4;
              }
              local_4c[(&DAT_00c02140)[local_6c]] = (short)uVar4;
            }
            local_6c = local_6c + 1;
          } while ((int)local_6c < 0x40);
        }
        local_44 = local_44 + 1;
        local_40 = local_40 + 1;
        local_38 = local_38 + 1;
      } while (local_44 < *(int *)(local_68 + 0x140));
    }
    **(undefined4 **)(local_68 + 0x18) = local_64;
    *(undefined4 *)(*(int *)(local_68 + 0x18) + 4) = local_60;
    *(int *)(local_50 + 0xc) = iVar8;
    *(int *)(local_50 + 0x10) = iVar5;
    *(int *)(local_50 + 0x14) = local_30[0];
    *(int *)(local_50 + 0x18) = local_30[1];
    *(int *)(local_50 + 0x1c) = local_30[2];
    *(int *)(local_50 + 0x20) = local_30[3];
  }
  *(int *)(local_50 + 0x24) = *(int *)(local_50 + 0x24) + -1;
  __security_check_cookie(local_14 ^ (uint)auStack_78);
  return;
}

