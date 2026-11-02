// rea decompile_all
// name: FUN_005e6bf0
// address: 0x5e6bf0
// body: available
// range: 0x5e6bf0-0x5e6df5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e6bf0(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *in_ECX;
  uint uVar6;
  int in_EDX;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_14;
  uint local_c;
  
  iVar9 = 0;
  local_14 = 0;
  if (0 < in_ECX[2]) {
    iVar2 = param_1 / param_2;
    iVar1 = iVar2;
    while (iVar2 < (param_1 + param_4) / param_2) {
      iVar8 = in_ECX[10];
      iVar3 = FUN_005eaca0();
      if (iVar3 < 0) {
        local_c = 0;
        iVar3 = in_ECX[2];
LAB_005e6cb5:
        iVar4 = FUN_005eaca0();
        while (iVar4 < 0) {
          if (iVar8 < 2) {
            if (iVar4 < 0) {
              return 0xffffffff;
            }
            break;
          }
          iVar8 = iVar8 + -1;
          iVar4 = FUN_005eaca0();
        }
        uVar5 = FUN_005e75e0();
        iVar4 = iVar3 - local_c;
        if (1 < iVar4) {
          do {
            uVar7 = iVar4 >> 1;
            uVar6 = (uint)(uVar5 < *(uint *)(in_ECX[5] + (uVar7 + local_c) * 4));
            iVar3 = iVar3 - (-uVar6 & uVar7);
            local_c = local_c + (uVar6 - 1 & uVar7);
            iVar4 = iVar3 - local_c;
            iVar2 = iVar1;
            iVar9 = local_14;
          } while (1 < iVar4);
        }
        if (iVar8 < *(char *)(in_ECX[7] + local_c)) {
          uVar5 = param_3[1] + iVar8;
          iVar9 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 7U)) >> 3;
          param_3[3] = param_3[3] + iVar9;
          *param_3 = *param_3 + iVar9;
          param_3[1] = uVar5 & 7;
          return 0xffffffff;
        }
        uVar5 = param_3[1] + (int)*(char *)(in_ECX[7] + local_c);
        iVar8 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 7U)) >> 3;
        param_3[3] = param_3[3] + iVar8;
        *param_3 = *param_3 + iVar8;
        param_3[1] = uVar5 & 7;
      }
      else {
        uVar5 = *(uint *)(in_ECX[8] + iVar3 * 4);
        if ((int)uVar5 < 0) {
          local_c = (int)uVar5 >> 0xf & 0x7fff;
          iVar3 = in_ECX[2] - (uVar5 & 0x7fff);
          goto LAB_005e6cb5;
        }
        uVar6 = (int)*(char *)(in_ECX[7] + -1 + uVar5) + param_3[1];
        iVar8 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 7U)) >> 3;
        param_3[3] = param_3[3] + iVar8;
        *param_3 = *param_3 + iVar8;
        param_3[1] = uVar6 & 7;
        local_c = uVar5 - 1;
      }
      if (local_c == 0xffffffff) {
        return 0xffffffff;
      }
      iVar8 = *in_ECX;
      iVar3 = in_ECX[4];
      iVar4 = 0;
      if (0 < iVar8) {
        do {
          iVar1 = *(int *)(in_EDX + iVar9 * 4);
          iVar9 = iVar9 + 1;
          *(float *)(iVar1 + iVar2 * 4) =
               *(float *)(iVar3 + iVar8 * local_c * 4 + iVar4 * 4) + *(float *)(iVar1 + iVar2 * 4);
          if (iVar9 == param_2) {
            iVar9 = 0;
            iVar2 = iVar2 + 1;
          }
          iVar4 = iVar4 + 1;
          iVar1 = iVar2;
          local_14 = iVar9;
        } while (iVar4 < *in_ECX);
      }
    }
  }
  return 0;
}

