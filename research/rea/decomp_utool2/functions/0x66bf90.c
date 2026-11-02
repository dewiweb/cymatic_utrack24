// rea decompile_all
// name: FUN_0066bf90
// address: 0x66bf90
// body: available
// range: 0x66bf90-0x66c12b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066bf90(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int local_c;
  
  iVar1 = param_1[0x57];
  *(int **)(iVar1 + 0x20) = param_1;
  *(char *)(iVar1 + 0xc) = param_2;
  iVar2 = param_1[0x4b];
  if (param_1[0x4d] == 0) {
    pcVar3 = FUN_0066b7b0;
    if (iVar2 == 0) {
      pcVar3 = FUN_0066b9a0;
    }
    *(code **)(iVar1 + 4) = pcVar3;
  }
  else if (iVar2 == 0) {
    *(code **)(iVar1 + 4) = FUN_0066b700;
  }
  else {
    *(code **)(iVar1 + 4) = FUN_0066b430;
    if (*(int *)(iVar1 + 0x40) == 0) {
      uVar5 = (**(code **)param_1[1])(param_1,1,1000);
      *(undefined4 *)(iVar1 + 0x40) = uVar5;
    }
  }
  pcVar3 = FUN_0066b3d0;
  if (param_2 != '\0') {
    pcVar3 = FUN_0066b300;
  }
  *(code **)(iVar1 + 8) = pcVar3;
  local_c = 0;
  if (0 < param_1[0x39]) {
    puVar4 = (undefined4 *)(iVar1 + 0x24);
    piVar6 = param_1 + 0x3a;
    do {
      iVar7 = *piVar6;
      *puVar4 = 0;
      if (iVar2 == 0) {
        if (param_1[0x4d] == 0) {
          iVar7 = *(int *)(iVar7 + 0x14);
          goto LAB_0066c063;
        }
      }
      else {
        iVar7 = *(int *)(iVar7 + 0x18);
        *(int *)(iVar1 + 0x34) = iVar7;
LAB_0066c063:
        if (param_2 == '\0') {
          FUN_0066f340(iVar7,iVar1 + 0x4c + iVar7 * 4);
        }
        else {
          if ((iVar7 < 0) || (3 < iVar7)) {
            *(undefined4 *)(*param_1 + 0x14) = 0x32;
            *(int *)(*param_1 + 0x18) = iVar7;
            (**(code **)*param_1)(param_1);
          }
          if (*(int *)(iVar1 + 0x5c + iVar7 * 4) == 0) {
            uVar5 = (**(code **)param_1[1])(param_1,1,0x404);
            *(undefined4 *)(iVar1 + 0x5c + iVar7 * 4) = uVar5;
          }
          _memset(*(void **)(iVar1 + 0x5c + iVar7 * 4),0,0x404);
        }
      }
      local_c = local_c + 1;
      piVar6 = piVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (local_c < param_1[0x39]);
  }
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(int *)(iVar1 + 0x44) = param_1[0x2f];
  *(undefined4 *)(iVar1 + 0x48) = 0;
  return;
}

