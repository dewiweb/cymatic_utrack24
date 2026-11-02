// rea decompile_all
// name: FUN_00410273
// address: 0x410273
// body: available
// range: 0x410273-0x4104de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00410273(undefined4 param_1)

{
  int iVar1;
  short *unaff_EBX;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  
  iVar4 = 0;
  if (unaff_EBX == (short *)0x0) {
    iVar4 = 6;
  }
  else {
    local_10 = 0;
    if (0 < *unaff_EBX) {
      do {
        local_14 = (int)*(short *)(*(int *)(unaff_EBX + 6) + local_10 * 2);
        if (local_14 < 0) {
          return 0x14;
        }
        iVar1 = *(int *)(unaff_EBX + 2);
        local_18 = local_14 * 8;
        local_c = (int *)(iVar1 + local_18);
        local_28 = *(int *)(iVar1 + iVar4 * 8);
        local_24 = *(int *)(iVar1 + 4 + iVar4 * 8);
        iVar1 = *(int *)(unaff_EBX + 2);
        local_30 = *(int *)(iVar1 + local_18);
        local_2c = *(int *)(iVar1 + 4 + local_18);
        piVar3 = (int *)(iVar1 + iVar4 * 8);
        pbVar5 = (byte *)(iVar4 + *(int *)(unaff_EBX + 4));
        if ((*pbVar5 & 3) == 2) {
          return 0x14;
        }
        local_20 = local_28;
        local_1c = local_24;
        if ((*pbVar5 & 3) == 0) {
          if ((*(byte *)(*(int *)(unaff_EBX + 4) + local_14) & 3) == 1) {
            local_c = local_c + -2;
            local_1c = local_2c;
            local_20 = local_30;
          }
          else {
            local_20 = (local_30 + local_28) / 2;
            local_1c = (local_2c + local_24) / 2;
          }
          piVar3 = piVar3 + -2;
          pbVar5 = pbVar5 + -1;
        }
        iVar4 = FUN_0041394c(&local_20,param_1);
        while( true ) {
          while( true ) {
            while( true ) {
              if (iVar4 != 0) {
                return iVar4;
              }
              if (local_c <= piVar3) {
                iVar4 = FUN_00413986(&local_20,param_1);
                goto LAB_0041048c;
              }
              piVar2 = piVar3 + 2;
              pbVar6 = pbVar5 + 1;
              if ((*pbVar6 & 3) != 0) break;
              local_28 = *piVar2;
              local_24 = piVar3[3];
              while( true ) {
                if (local_c <= piVar2) {
                  iVar4 = FUN_004139a5(&local_28,&local_20,param_1);
                  goto LAB_0041048c;
                }
                local_34 = piVar2[3];
                piVar2 = piVar2 + 2;
                local_38 = *piVar2;
                pbVar6 = pbVar6 + 1;
                if ((*pbVar6 & 3) == 1) break;
                if ((*pbVar6 & 3) != 0) {
                  return 0x14;
                }
                local_60 = (local_28 + local_38) / 2;
                local_5c = (local_24 + local_34) / 2;
                iVar4 = FUN_004139a5(&local_28,&local_60,param_1);
                if (iVar4 != 0) {
                  return iVar4;
                }
                local_28 = local_38;
                local_24 = local_34;
              }
              iVar4 = FUN_004139a5(&local_28,&local_38,param_1);
              piVar3 = piVar2;
              pbVar5 = pbVar6;
            }
            if ((*pbVar6 & 3) != 1) break;
            local_58 = *piVar2;
            local_54 = piVar3[3];
            iVar4 = FUN_00413986(&local_58,param_1);
            piVar3 = piVar2;
            pbVar5 = pbVar6;
          }
          if (local_c < piVar3 + 4) {
            return 0x14;
          }
          if ((pbVar5[2] & 3) != 2) {
            return 0x14;
          }
          local_48 = *piVar2;
          piVar2 = piVar3 + 6;
          local_44 = piVar3[3];
          local_40 = piVar3[4];
          local_3c = piVar3[5];
          if (local_c < piVar2) break;
          local_50 = *piVar2;
          local_4c = piVar3[7];
          iVar4 = FUN_004139bb(&local_48,&local_40,&local_50,param_1);
          piVar3 = piVar2;
          pbVar5 = pbVar5 + 3;
        }
        iVar4 = FUN_004139bb(&local_48,&local_40,&local_20,param_1);
LAB_0041048c:
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = local_14 + 1;
        local_10 = local_10 + 1;
      } while (local_10 < *unaff_EBX);
    }
    iVar4 = 0;
  }
  return iVar4;
}

