// rea decompile_all
// name: FUN_005d94d0
// address: 0x5d94d0
// body: available
// range: 0x5d94d0-0x5d9753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005d94d0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int extraout_ECX;
  int extraout_EDX;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_20;
  int local_1c;
  int local_14;
  
  local_14 = 0;
  if ((in_ECX[3] != 1) && (in_ECX[3] != 2)) {
    return 0;
  }
  uVar1 = in_ECX[4];
  dVar8 = (double)(uVar1 & 0x1fffff);
  if ((int)uVar1 < 0) {
    dVar8 = -dVar8;
  }
  fVar6 = (float10)FUN_004ccda2(dVar8,((int)uVar1 >> 0x15 & 0x3ffU) - 0x314);
  uVar1 = in_ECX[5];
  fVar10 = (float)fVar6;
  dVar8 = (double)(uVar1 & 0x1fffff);
  if ((int)uVar1 < 0) {
    dVar8 = -dVar8;
  }
  fVar6 = (float10)FUN_004ccda2(dVar8,((int)uVar1 >> 0x15 & 0x3ffU) - 0x314);
  fVar11 = (float)fVar6;
  iVar2 = FUN_004c5556();
  if (in_ECX[3] == 1) {
    iVar3 = FUN_005d9760();
    local_1c = 0;
    if (0 < in_ECX[1]) {
      do {
        if ((param_1 == 0) || (*(int *)(in_ECX[2] + local_1c * 4) != 0)) {
          iVar5 = 0;
          local_20 = 1;
          fVar9 = 0.0;
          if (0 < *in_ECX) {
            do {
              fVar7 = (float)*(int *)(in_ECX[8] + ((local_1c / local_20) % iVar3) * 4);
              FUN_00411660();
              fVar7 = fVar7 * fVar11 + fVar10 + fVar9;
              if (in_ECX[7] != 0) {
                fVar9 = fVar7;
              }
              if (param_1 == 0) {
                *(float *)(iVar2 + (extraout_ECX * local_14 + iVar5) * 4) = fVar7;
              }
              else {
                *(float *)(iVar2 + (*(int *)(param_1 + local_14 * 4) * extraout_ECX + iVar5) * 4) =
                     fVar7;
              }
              iVar5 = iVar5 + 1;
              local_20 = local_20 * iVar3;
            } while (iVar5 < *in_ECX);
          }
          local_14 = local_14 + 1;
        }
        local_1c = local_1c + 1;
      } while (local_1c < in_ECX[1]);
    }
  }
  else if ((in_ECX[3] == 2) && (0 < in_ECX[1])) {
    iVar3 = 0;
    do {
      if ((param_1 == 0) || (*(int *)(in_ECX[2] + iVar3 * 4) != 0)) {
        iVar5 = *in_ECX;
        iVar4 = 0;
        fVar9 = 0.0;
        if (0 < iVar5) {
          do {
            fVar7 = (float)*(int *)(in_ECX[8] + (iVar5 * iVar3 + iVar4) * 4);
            FUN_00411660();
            fVar7 = fVar7 * fVar11 + fVar10 + fVar9;
            if (in_ECX[7] != 0) {
              fVar9 = fVar7;
            }
            if (param_1 == 0) {
              *(float *)(iVar2 + (extraout_EDX * local_14 + iVar4) * 4) = fVar7;
            }
            else {
              *(float *)(iVar2 + (*(int *)(param_1 + local_14 * 4) * extraout_EDX + iVar4) * 4) =
                   fVar7;
            }
            iVar5 = *in_ECX;
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar5);
        }
        local_14 = local_14 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_ECX[1]);
    return iVar2;
  }
  return iVar2;
}

