// rea decompile_all
// name: FUN_00663500
// address: 0x663500
// body: available
// range: 0x663500-0x663765 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00663500(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_8;
  
  bVar11 = false;
  iVar1 = param_1[0x5b];
  iVar2 = param_1[0x66];
  if (iVar1 == 0) {
    bVar11 = param_1[0x5c] != 0;
  }
  else {
    if ((param_1[0x5c] < iVar1) || (0x3f < param_1[0x5c])) {
      bVar11 = true;
    }
    if (param_1[0x49] != 1) {
      bVar11 = true;
    }
  }
  if ((param_1[0x5d] != 0) && (param_1[0x5e] != param_1[0x5d] + -1)) {
    bVar11 = true;
  }
  if ((0xd < param_1[0x5e]) || (bVar11)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x10;
    *(int *)(*param_1 + 0x18) = param_1[0x5b];
    *(int *)(*param_1 + 0x1c) = param_1[0x5c];
    *(int *)(*param_1 + 0x20) = param_1[0x5d];
    *(int *)(*param_1 + 0x24) = param_1[0x5e];
    (**(code **)*param_1)(param_1);
  }
  local_8 = 0;
  if (0 < param_1[0x49]) {
    piVar3 = param_1 + 0x4a;
    do {
      iVar9 = *(int *)(*piVar3 + 4);
      piVar8 = (int *)(iVar9 * 0x100 + param_1[0x23]);
      if ((iVar1 != 0) && (*piVar8 < 0)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x73;
        *(int *)(*param_1 + 0x18) = iVar9;
        *(undefined4 *)(*param_1 + 0x1c) = 0;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
      }
      iVar10 = param_1[0x5b];
      if (iVar10 <= param_1[0x5c]) {
        do {
          iVar4 = piVar8[iVar10];
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          if (param_1[0x5d] != iVar4) {
            *(undefined4 *)(*param_1 + 0x14) = 0x73;
            *(int *)(*param_1 + 0x18) = iVar9;
            *(int *)(*param_1 + 0x1c) = iVar10;
            (**(code **)(*param_1 + 4))(param_1,0xffffffff);
          }
          piVar8[iVar10] = param_1[0x5e];
          iVar10 = iVar10 + 1;
        } while (iVar10 <= param_1[0x5c]);
      }
      local_8 = local_8 + 1;
      piVar3 = piVar3 + 1;
    } while (local_8 < param_1[0x49]);
  }
  if (param_1[0x5d] == 0) {
    pcVar5 = FUN_00663000;
    pcVar7 = FUN_00663240;
  }
  else {
    pcVar5 = FUN_00662a60;
    pcVar7 = FUN_00662f20;
  }
  if (iVar1 == 0) {
    pcVar5 = pcVar7;
  }
  iVar9 = 0;
  *(code **)(iVar2 + 4) = pcVar5;
  if (0 < param_1[0x49]) {
    puVar6 = (undefined4 *)(iVar2 + 0x18);
    piVar3 = param_1 + 0x4a;
    do {
      if (iVar1 == 0) {
        if (param_1[0x5d] == 0) {
          iVar10 = *(int *)(*piVar3 + 0x14);
          FUN_00667550(iVar10,iVar2 + (iVar10 + 0xb) * 4);
        }
      }
      else {
        iVar10 = *(int *)(*piVar3 + 0x18);
        FUN_00667550(iVar10,iVar2 + (iVar10 + 0xb) * 4);
        *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(iVar2 + 0x2c + iVar10 * 4);
      }
      *puVar6 = 0;
      iVar9 = iVar9 + 1;
      piVar3 = piVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar9 < param_1[0x49]);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined1 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(int *)(iVar2 + 0x28) = param_1[0x3f];
  return;
}

