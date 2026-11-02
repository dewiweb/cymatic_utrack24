// rea decompile_all
// name: FUN_004b0760
// address: 0x4b0760
// body: available
// range: 0x4b0760-0x4b09ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b0760(float *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int *in_ECX;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (0 < in_ECX[2]) {
    uVar4 = in_ECX[2] - 1;
    fVar11 = *param_1;
    fVar9 = param_1[1];
    fVar10 = param_1[2] + fVar11;
    fVar8 = param_1[3] + fVar9;
    if (-1 < (int)uVar4) {
      iVar5 = uVar4 * 0x10;
      local_14 = fVar11;
      local_10 = fVar10;
      local_c = fVar9;
      do {
        pfVar3 = (float *)(*in_ECX + iVar5);
        fVar1 = *pfVar3;
        fVar2 = pfVar3[1];
        fVar6 = fVar1 + pfVar3[2];
        fVar7 = fVar2 + pfVar3[3];
        if ((((fVar1 < fVar10) && (fVar11 < fVar6)) && (fVar2 < fVar8)) && (fVar9 < fVar7)) {
          if ((fVar11 <= fVar1) || (fVar6 <= fVar11)) {
            if ((fVar10 <= fVar1) || (fVar6 <= fVar10)) {
              if ((fVar9 <= fVar2) || (fVar7 <= fVar9)) {
                if ((fVar8 <= fVar2) || (fVar7 <= fVar8)) {
                  if (uVar4 < (uint)in_ECX[2]) {
                    FUN_00472850(uVar4);
                    fVar9 = local_c;
                    fVar10 = local_10;
                    fVar11 = local_14;
                  }
                }
                else {
                  pfVar3[1] = fVar8;
                  pfVar3[3] = fVar7 - fVar8;
                  if (((fVar1 < fVar11) || (fVar10 < fVar6)) || (fVar2 < fVar9)) {
                    local_4c = fVar6 - fVar1;
                    local_48 = fVar8 - fVar2;
                    local_54 = fVar1;
                    local_50 = fVar2;
                    FUN_004718f0(uVar4 + 1,&local_54);
                    uVar4 = uVar4 + 2;
                    iVar5 = iVar5 + 0x20;
                    fVar9 = local_c;
                    fVar10 = local_10;
                    fVar11 = local_14;
                  }
                }
              }
              else if (((fVar1 < fVar11) || (fVar10 < fVar6)) || (fVar8 < fVar7)) {
                local_3c = fVar6 - fVar1;
                pfVar3[1] = fVar9;
                pfVar3[3] = fVar7 - fVar9;
                local_38 = fVar9 - fVar2;
                local_44 = fVar1;
                local_40 = fVar2;
                FUN_004718f0(uVar4 + 1,&local_44);
                uVar4 = uVar4 + 2;
                iVar5 = iVar5 + 0x20;
                fVar9 = local_c;
                fVar10 = local_10;
                fVar11 = local_14;
              }
              else {
                pfVar3[3] = fVar9 - fVar2;
              }
            }
            else {
              *pfVar3 = fVar10;
              pfVar3[2] = fVar6 - fVar10;
              if (((fVar2 < fVar9) || (fVar8 < fVar7)) || (fVar1 < fVar11)) {
                local_2c = fVar10 - fVar1;
                local_28 = fVar7 - fVar2;
                local_34 = fVar1;
                local_30 = fVar2;
                FUN_004718f0(uVar4 + 1,&local_34);
                uVar4 = uVar4 + 2;
                iVar5 = iVar5 + 0x20;
                fVar9 = local_c;
                fVar10 = local_10;
                fVar11 = local_14;
              }
            }
          }
          else if (((fVar2 < fVar9) || (fVar8 < fVar7)) || (fVar10 < fVar6)) {
            *pfVar3 = fVar11;
            local_18 = fVar7 - fVar2;
            pfVar3[2] = fVar6 - fVar11;
            local_1c = fVar11 - fVar1;
            local_24 = fVar1;
            local_20 = fVar2;
            FUN_004718f0(uVar4 + 1,&local_24);
            uVar4 = uVar4 + 2;
            iVar5 = iVar5 + 0x20;
            fVar9 = local_c;
            fVar10 = local_10;
            fVar11 = local_14;
          }
          else {
            pfVar3[2] = fVar11 - fVar1;
          }
        }
        iVar5 = iVar5 + -0x10;
        uVar4 = uVar4 - 1;
      } while (-1 < (int)uVar4);
    }
  }
  return;
}

