// rea decompile_all
// name: FUN_0067ca70
// address: 0x67ca70
// body: available
// range: 0x67ca70-0x67cd12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_0067ca70(int param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
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
  int *local_14;
  int *local_10;
  
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_10 = (int *)(*in_ECX + in_ECX[6] * param_1 * 4);
  local_24 = *local_10;
  if (local_24 != 0) {
    iVar8 = *param_2;
    if (iVar8 == 0) {
      *local_10 = 0;
    }
    else {
      iVar6 = (in_ECX[3] + in_ECX[1]) * 0x100;
      if ((iVar8 == 2) && (0xfe < param_2[2])) {
        if (param_2[3] < iVar6) {
          iVar6 = param_2[3];
        }
        FUN_0067c9e0(local_10,param_2[1],iVar6);
      }
      else {
        local_28 = local_10[1];
        piVar7 = local_10 + 2;
        local_34 = param_2[1];
        param_2 = param_2 + 2;
        bVar2 = false;
        local_20 = 0;
        local_18 = 0;
        local_44 = 0;
        local_38 = 0;
        local_40 = -0x80000000;
        local_3c = 0;
        iVar5 = 0;
        if (0 < local_24) {
          local_1c = local_24 << 3;
          local_2c = 0;
          local_30 = iVar8;
          local_14 = piVar7;
          do {
            if (iVar8 < 1) break;
            if (local_34 < local_28) {
              local_38 = *param_2;
              piVar1 = param_2 + 1;
              param_2 = param_2 + 2;
              iVar8 = iVar8 + -1;
              iVar5 = local_34;
              local_34 = *piVar1;
              local_30 = iVar8;
            }
            else {
              if (local_28 == local_34) {
                local_38 = *param_2;
                local_34 = param_2[1];
                param_2 = param_2 + 2;
                iVar8 = iVar8 + -1;
                local_30 = iVar8;
              }
              local_44 = *piVar7;
              local_24 = local_24 + -1;
              piVar1 = piVar7 + 1;
              piVar7 = piVar7 + 2;
              local_1c = local_1c + -8;
              iVar5 = local_28;
              local_28 = *piVar1;
              local_14 = piVar7;
            }
            if (local_40 < iVar5) {
              if (iVar6 <= iVar5) break;
              iVar9 = (local_38 + 1) * local_44 >> 8;
              iVar8 = local_30;
              local_40 = iVar5;
              if (iVar9 != local_3c) {
                if (in_ECX[5] <= local_18) {
                  *local_10 = local_18;
                  if (bVar2) {
                    FUN_004c2c30(&stack0xffffffa4,local_14,local_1c);
                    iVar4 = 0x100;
                    if (0x100 < local_2c) {
                      iVar4 = local_2c;
                    }
                    FUN_0067cec0(iVar4);
                    local_10 = (int *)(*in_ECX + in_ECX[6] * param_1 * 4);
                    local_14 = (int *)(*in_ECX + in_ECX[4] * in_ECX[6] * 4);
                    FUN_004c2c30(local_14,&stack0xffffffa4,local_1c);
                    piVar7 = local_14;
                  }
                  else {
                    iVar4 = 0x100;
                    if (0x100 < local_2c) {
                      iVar4 = local_2c;
                    }
                    FUN_0067cec0(iVar4);
                    local_10 = (int *)(*in_ECX + in_ECX[6] * param_1 * 4);
                    piVar7 = local_14;
                  }
                }
                local_2c = local_2c + 2;
                local_18 = local_18 + 1;
                if (!bVar2) {
                  bVar2 = true;
                  local_14 = (int *)(*in_ECX + in_ECX[4] * in_ECX[6] * 4);
                  FUN_004c2c30(local_14,piVar7,local_1c);
                }
                local_10[local_20 + 1] = iVar5;
                local_20 = local_20 + 2;
                local_10[local_20] = iVar9;
                piVar7 = local_14;
                local_3c = iVar9;
              }
            }
          } while (0 < local_24);
          iVar5 = local_18;
          if (0 < local_3c) {
            if (in_ECX[5] <= local_18) {
              *local_10 = local_18;
              iVar8 = 0x100;
              if (0x100 < local_18 * 2) {
                iVar8 = local_18 * 2;
              }
              FUN_0067cec0(iVar8);
              local_10 = (int *)(*in_ECX + in_ECX[6] * param_1 * 4);
            }
            iVar5 = local_18 + 1;
            local_10[local_20 + 1] = iVar6;
            local_10[local_20 + 2] = 0;
          }
        }
        *local_10 = iVar5;
      }
    }
  }
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}

