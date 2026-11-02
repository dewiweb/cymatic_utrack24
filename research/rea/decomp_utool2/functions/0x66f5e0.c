// rea decompile_all
// name: FUN_0066f5e0
// address: 0x66f5e0
// body: available
// range: 0x66f5e0-0x66f778 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066f5e0(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *local_10;
  int local_8;
  
  iVar1 = param_1[0x57];
  if (param_2 == '\0') {
    *(code **)(iVar1 + 4) = FUN_0066ee40;
    *(code **)(iVar1 + 8) = FUN_0066eda0;
  }
  else {
    *(code **)(iVar1 + 4) = FUN_0066ebe0;
    *(code **)(iVar1 + 8) = FUN_0066e8b0;
  }
  local_8 = 0;
  if (0 < param_1[0x39]) {
    local_10 = (undefined4 *)(iVar1 + 0x14);
    piVar5 = param_1 + 0x3a;
    do {
      iVar2 = *(int *)(*piVar5 + 0x18);
      iVar3 = *(int *)(*piVar5 + 0x14);
      if (param_2 == '\0') {
        FUN_0066f340(iVar3,iVar1 + 0x2c + iVar3 * 4);
        FUN_0066f340(iVar2,iVar1 + (iVar2 + 0xf) * 4);
      }
      else {
        if ((iVar3 < 0) || (3 < iVar3)) {
          *(undefined4 *)(*param_1 + 0x14) = 0x32;
          *(int *)(*param_1 + 0x18) = iVar3;
          (**(code **)*param_1)(param_1);
        }
        if ((iVar2 < 0) || (3 < iVar2)) {
          *(undefined4 *)(*param_1 + 0x14) = 0x32;
          *(int *)(*param_1 + 0x18) = iVar2;
          (**(code **)*param_1)(param_1);
        }
        if (*(int *)(iVar1 + 0x4c + iVar3 * 4) == 0) {
          uVar4 = (**(code **)param_1[1])(param_1,1,0x404);
          *(undefined4 *)(iVar1 + 0x4c + iVar3 * 4) = uVar4;
        }
        _memset(*(void **)(iVar1 + 0x4c + iVar3 * 4),0,0x404);
        iVar3 = iVar1 + iVar2 * 4;
        if (*(int *)(iVar1 + 0x5c + iVar2 * 4) == 0) {
          uVar4 = (**(code **)param_1[1])(param_1,1,0x404);
          *(undefined4 *)(iVar3 + 0x5c) = uVar4;
        }
        _memset(*(void **)(iVar3 + 0x5c),0,0x404);
      }
      local_8 = local_8 + 1;
      piVar5 = piVar5 + 1;
      *local_10 = 0;
      local_10 = local_10 + 1;
    } while (local_8 < param_1[0x39]);
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(int *)(iVar1 + 0x24) = param_1[0x2f];
  *(undefined4 *)(iVar1 + 0x28) = 0;
  return;
}

