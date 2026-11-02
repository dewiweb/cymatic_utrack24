// rea decompile_all
// name: FUN_005e1350
// address: 0x5e1350
// body: available
// range: 0x5e1350-0x5e14b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e1350(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  if (*param_2 < 2) {
    FUN_005eae90(param_3,0,1);
  }
  else {
    FUN_005eae90(param_3,1,1);
    FUN_005eae90(param_3,*param_2 + -1,4);
  }
  if (param_2[0x121] < 1) {
    FUN_005eae90(param_3,0,1);
  }
  else {
    FUN_005eae90(param_3,1,1);
    FUN_005eae90(param_3,param_2[0x121] + -1,8);
    local_8 = 0;
    if (0 < param_2[0x121]) {
      piVar3 = param_2 + 0x222;
      do {
        iVar2 = 0;
        if (*(int *)(param_1 + 4) != 0) {
          for (uVar1 = *(int *)(param_1 + 4) - 1; uVar1 != 0; uVar1 = uVar1 >> 1) {
            iVar2 = iVar2 + 1;
          }
        }
        FUN_005eae90(param_3,piVar3[-0x100],iVar2);
        iVar2 = 0;
        if (*(int *)(param_1 + 4) != 0) {
          for (uVar1 = *(int *)(param_1 + 4) - 1; uVar1 != 0; uVar1 = uVar1 >> 1) {
            iVar2 = iVar2 + 1;
          }
        }
        FUN_005eae90(param_3,*piVar3,iVar2);
        local_8 = local_8 + 1;
        piVar3 = piVar3 + 1;
      } while (local_8 < param_2[0x121]);
    }
  }
  FUN_005eae90(param_3,0,2);
  if ((1 < *param_2) && (iVar2 = 0, piVar3 = param_2, 0 < *(int *)(param_1 + 4))) {
    do {
      FUN_005eae90(param_3,piVar3[1],4);
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  iVar2 = 0;
  if (0 < *param_2) {
    piVar3 = param_2 + 0x111;
    do {
      FUN_005eae90(param_3,0,8);
      FUN_005eae90(param_3,piVar3[-0x10],8);
      FUN_005eae90(param_3,*piVar3,8);
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_2);
  }
  return;
}

