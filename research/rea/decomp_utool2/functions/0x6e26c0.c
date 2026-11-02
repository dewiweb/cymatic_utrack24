// rea decompile_all
// name: FUN_006e26c0
// address: 0x6e26c0
// body: available
// range: 0x6e26c0-0x6e27bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e26c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 char param_7)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  iVar4 = param_5;
  if (param_7 != '\0') {
    iVar4 = param_6;
  }
  in_ECX[3] = iVar4;
  FUN_006aee10(0,in_ECX[2],iVar4,0);
  local_8 = param_3;
  if (param_7 != '\0') {
    local_8 = param_4;
  }
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar2 = in_ECX[2] + -1;
      if (-1 < iVar2) {
        puVar3 = (undefined4 *)(*in_ECX + iVar2 * 4);
        do {
          if (*(int *)*puVar3 == iVar4) {
            iVar2 = *(int *)(*in_ECX + iVar2 * 4);
            if (iVar2 != 0) {
              if (*(int *)(param_1 + iVar4 * 4) != 0) {
                iVar5 = param_3;
                iVar6 = local_8;
                iVar7 = param_5;
                iVar8 = param_6;
                if (iVar4 == param_2 + -1) {
                  iVar1 = *(int *)(iVar2 + 4);
                  if (param_7 == '\0') {
                    iVar5 = local_8;
                    iVar6 = param_4;
                    iVar7 = iVar1;
                    if (iVar1 < param_5 - local_8) {
                      iVar5 = local_8;
                      iVar6 = param_4;
                      iVar7 = param_5 - local_8;
                    }
                  }
                  else {
                    iVar8 = iVar1;
                    if (iVar1 < param_6 - local_8) {
                      iVar8 = param_6 - local_8;
                    }
                  }
                }
                else if (param_7 == '\0') {
                  iVar5 = local_8;
                  iVar6 = param_4;
                  iVar7 = *(int *)(iVar2 + 4);
                }
                else {
                  iVar8 = *(int *)(iVar2 + 4);
                }
                FUN_006e9790(iVar5,iVar6,iVar7,iVar8);
              }
              local_8 = local_8 + *(int *)(iVar2 + 4);
            }
            break;
          }
          puVar3 = puVar3 + -1;
          iVar2 = iVar2 + -1;
        } while (-1 < iVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  return;
}

