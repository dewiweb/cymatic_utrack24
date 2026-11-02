// rea decompile_all
// name: FUN_005e5780
// address: 0x5e5780
// body: available
// range: 0x5e5780-0x5e5947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e5780(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_14 = -1;
  local_c = 0;
  iVar3 = param_1[0xd2];
  FUN_005eae90(param_2,*param_1,5);
  local_8 = (int *)0x0;
  piVar4 = param_1;
  if (0 < *param_1) {
    do {
      piVar4 = piVar4 + 1;
      FUN_005eae90(param_2,*piVar4,4);
      if (local_14 < *piVar4) {
        local_14 = *piVar4;
      }
      local_8 = (int *)((int)local_8 + 1);
    } while ((int)local_8 < *param_1);
  }
  local_14 = local_14 + 1;
  if (0 < local_14) {
    local_8 = param_1 + 0x50;
    piVar4 = param_1 + 0x30;
    do {
      FUN_005eae90(param_2,piVar4[-0x10] + -1,3);
      FUN_005eae90(param_2,*piVar4,2);
      if (*piVar4 != 0) {
        FUN_005eae90(param_2,piVar4[0x10],8);
      }
      local_10 = 0;
      piVar5 = local_8;
      if (0 < 1 << ((byte)*piVar4 & 0x1f)) {
        do {
          FUN_005eae90(param_2,*piVar5 + 1,8);
          local_10 = local_10 + 1;
          piVar5 = piVar5 + 1;
        } while (local_10 < 1 << ((byte)*piVar4 & 0x1f));
      }
      local_8 = local_8 + 8;
      piVar4 = piVar4 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  FUN_005eae90(param_2,param_1[0xd0] + -1,2);
  iVar1 = 0;
  if (iVar3 != 0) {
    for (uVar2 = iVar3 - 1; uVar2 != 0; uVar2 = uVar2 >> 1) {
      iVar1 = iVar1 + 1;
    }
  }
  FUN_005eae90(param_2,iVar1,4);
  local_8 = (int *)0x0;
  if (iVar3 != 0) {
    local_8 = (int *)0;
    for (uVar2 = iVar3 - 1; uVar2 != 0; uVar2 = uVar2 >> 1) {
      local_8 = (int *)((int)local_8 + 1);
    }
  }
  iVar3 = 0;
  local_14 = 0;
  piVar4 = param_1;
  if (0 < *param_1) {
    do {
      local_c = local_c + param_1[piVar4[1] + 0x20];
      if (iVar3 < local_c) {
        iVar1 = local_c - iVar3;
        piVar5 = param_1 + iVar3 + 0xd3;
        iVar3 = iVar3 + iVar1;
        do {
          FUN_005eae90(param_2,*piVar5,local_8);
          piVar5 = piVar5 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      local_14 = local_14 + 1;
      piVar4 = piVar4 + 1;
    } while (local_14 < *param_1);
  }
  return;
}

