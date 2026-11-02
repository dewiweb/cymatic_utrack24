// rea decompile_all
// name: FUN_005c2ff0
// address: 0x5c2ff0
// body: available
// range: 0x5c2ff0-0x5c3103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c2ff0(uint param_1,int *param_2,int param_3)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  int in_ECX;
  uint *puVar4;
  int iVar5;
  int iVar6;
  
  param_2[param_1] = param_3;
  if (*(int *)(in_ECX + 0x24) != 0) {
    puVar4 = *(uint **)(in_ECX + 0x28);
    puVar2 = puVar4 + *(int *)(in_ECX + 0x30) * 4;
    for (; puVar4 != puVar2; puVar4 = puVar4 + 4) {
      if (*puVar4 == param_1) {
        FUN_005c2f40(puVar4,param_2,param_3);
        return;
      }
    }
    cVar1 = FUN_005c2a60(param_1);
    if (cVar1 != '\0') {
      if (*param_2 == 3) {
        iVar5 = *(int *)(in_ECX + 0x24) + -1;
        if (-1 < iVar5) {
          iVar3 = iVar5 * 0x28;
          do {
            iVar6 = *(int *)(in_ECX + 0x1c) + iVar3;
            if ((*(byte *)(iVar6 + 2) == param_1) && (*(int *)(param_2[0x11] + iVar6) != param_3)) {
              *(int *)(param_2[0x11] + iVar6) = param_3;
              if (param_2 == (int *)(in_ECX + 0xdc)) {
                FUN_005c2d40(iVar6);
              }
              FUN_005c2e90(iVar6,param_2);
            }
            iVar5 = iVar5 + -1;
            iVar3 = iVar3 + -0x28;
          } while (-1 < iVar5);
          return;
        }
      }
      else {
        iVar5 = FUN_005c29b0(param_1,*param_2);
        if (iVar5 != 0) {
          FUN_005c2f00(iVar5,param_2,param_3);
        }
      }
    }
  }
  return;
}

