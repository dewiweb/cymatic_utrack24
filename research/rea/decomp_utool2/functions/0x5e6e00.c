// rea decompile_all
// name: FUN_005e6e00
// address: 0x5e6e00
// body: available
// range: 0x5e6e00-0x5e6fda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e6e00(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  uint uVar5;
  int in_EDX;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_c;
  
  if (in_ECX[2] < 1) {
    iVar8 = 0;
    if (0 < param_2) {
      iVar2 = *in_ECX;
      do {
        while (0 < iVar2) {
          *(undefined4 *)(in_EDX + iVar8 * 4) = 0;
          iVar8 = iVar8 + 1;
          iVar2 = *in_ECX;
        }
      } while (iVar8 < param_2);
    }
  }
  else {
    local_c = 0;
    if (0 < param_2) {
      do {
        iVar8 = in_ECX[10];
        iVar2 = FUN_005eaca0();
        if (iVar2 < 0) {
          iVar2 = in_ECX[2];
          uVar7 = 0;
LAB_005e6e99:
          iVar3 = FUN_005eaca0();
          while (iVar3 < 0) {
            if (iVar8 < 2) {
              if (iVar3 < 0) {
                return 0xffffffff;
              }
              break;
            }
            iVar8 = iVar8 + -1;
            iVar3 = FUN_005eaca0();
          }
          uVar4 = FUN_005e75e0();
          iVar3 = iVar2 - uVar7;
          if (1 < iVar3) {
            do {
              uVar6 = iVar3 >> 1;
              uVar5 = (uint)(uVar4 < *(uint *)(in_ECX[5] + (uVar6 + uVar7) * 4));
              iVar2 = iVar2 - (-uVar5 & uVar6);
              uVar7 = uVar7 + (uVar5 - 1 & uVar6);
              iVar3 = iVar2 - uVar7;
            } while (1 < iVar3);
          }
          if (iVar8 < *(char *)(in_ECX[7] + uVar7)) {
            uVar7 = param_1[1] + iVar8;
            iVar8 = (int)(uVar7 + ((int)uVar7 >> 0x1f & 7U)) >> 3;
            param_1[3] = param_1[3] + iVar8;
            *param_1 = *param_1 + iVar8;
            param_1[1] = uVar7 & 7;
            return 0xffffffff;
          }
          uVar5 = param_1[1] + (int)*(char *)(in_ECX[7] + uVar7);
          iVar8 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 7U)) >> 3;
          param_1[3] = param_1[3] + iVar8;
          *param_1 = *param_1 + iVar8;
        }
        else {
          uVar4 = *(uint *)(in_ECX[8] + iVar2 * 4);
          if ((int)uVar4 < 0) {
            uVar7 = (int)uVar4 >> 0xf & 0x7fff;
            iVar2 = in_ECX[2] - (uVar4 & 0x7fff);
            goto LAB_005e6e99;
          }
          uVar5 = (int)*(char *)(in_ECX[7] + -1 + uVar4) + param_1[1];
          iVar8 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 7U)) >> 3;
          param_1[3] = param_1[3] + iVar8;
          *param_1 = *param_1 + iVar8;
          uVar7 = uVar4 - 1;
        }
        param_1[1] = uVar5 & 7;
        if (uVar7 == 0xffffffff) {
          return 0xffffffff;
        }
        iVar8 = *in_ECX;
        iVar2 = in_ECX[4];
        iVar3 = 0;
        if (0 < iVar8) {
          do {
            iVar1 = iVar3 * 4;
            iVar3 = iVar3 + 1;
            *(undefined4 *)(in_EDX + local_c * 4) =
                 *(undefined4 *)(iVar2 + iVar8 * uVar7 * 4 + iVar1);
            local_c = local_c + 1;
          } while (iVar3 < *in_ECX);
        }
        if (param_2 <= local_c) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

