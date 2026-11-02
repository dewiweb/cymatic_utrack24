// rea decompile_all
// name: FUN_00664c80
// address: 0x664c80
// body: available
// range: 0x664c80-0x664ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00664c80(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 *local_1c;
  undefined4 *local_18;
  uint local_10;
  uint local_8;
  
  local_8 = 0;
  iVar2 = param_1[0x65];
  puVar3 = (undefined4 *)param_1[6];
  local_1c = *(undefined4 **)(iVar2 + 0xa0);
  puVar10 = (undefined1 *)*puVar3;
  iVar8 = puVar3[1];
  if (local_1c == (undefined4 *)0x0) {
    if (iVar8 == 0) {
      cVar6 = (*(code *)puVar3[3])(param_1);
      if (cVar6 == '\0') {
        return 0;
      }
      puVar10 = (undefined1 *)*puVar3;
      iVar8 = puVar3[1];
    }
    uVar1 = *puVar10;
    puVar9 = puVar10 + 1;
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) {
      cVar6 = (*(code *)puVar3[3])(param_1);
      if (cVar6 == '\0') {
        return 0;
      }
      puVar9 = (undefined1 *)*puVar3;
      iVar8 = puVar3[1];
    }
    iVar8 = iVar8 + -1;
    puVar10 = puVar9 + 1;
    local_8 = CONCAT11(uVar1,*puVar9) - 2;
    if ((int)local_8 < 0) {
      local_18 = (undefined4 *)0x0;
      local_10 = 0;
      uVar7 = 0;
    }
    else {
      if (param_1[0x5f] == 0xfe) {
        local_10 = *(uint *)(iVar2 + 0x5c);
      }
      else {
        local_10 = *(uint *)(iVar2 + -800 + param_1[0x5f] * 4);
      }
      if (local_8 < local_10) {
        local_10 = local_8;
      }
      local_1c = (undefined4 *)(**(code **)(param_1[1] + 4))(param_1,1,local_10 + 0x14);
      *local_1c = 0;
      *(char *)(local_1c + 1) = (char)param_1[0x5f];
      local_1c[2] = local_8;
      local_18 = local_1c + 5;
      local_1c[3] = local_10;
      local_1c[4] = local_18;
      *(undefined4 **)(iVar2 + 0xa0) = local_1c;
      *(undefined4 *)(iVar2 + 0xa4) = 0;
      uVar7 = 0;
    }
  }
  else {
    local_10 = local_1c[3];
    uVar7 = *(uint *)(iVar2 + 0xa4);
    local_18 = (undefined4 *)(local_1c[4] + uVar7);
  }
  if (uVar7 < local_10) {
    do {
      *puVar3 = puVar10;
      puVar3[1] = iVar8;
      *(uint *)(iVar2 + 0xa4) = uVar7;
      if (iVar8 != 0) goto LAB_00664de5;
      cVar6 = (*(code *)puVar3[3])(param_1);
      if (cVar6 == '\0') {
        return 0;
      }
      puVar10 = (undefined1 *)*puVar3;
      iVar8 = puVar3[1];
      while (iVar8 != 0) {
LAB_00664de5:
        uVar7 = uVar7 + 1;
        *(undefined1 *)local_18 = *puVar10;
        puVar10 = puVar10 + 1;
        local_18 = (undefined4 *)((int)local_18 + 1);
        iVar8 = iVar8 + -1;
        if (local_10 <= uVar7) goto LAB_00664df7;
      }
    } while( true );
  }
LAB_00664df7:
  if (local_1c != (undefined4 *)0x0) {
    piVar4 = (int *)param_1[0x43];
    if (piVar4 == (int *)0x0) {
      param_1[0x43] = (int)local_1c;
    }
    else {
      iVar5 = *piVar4;
      while (iVar5 != 0) {
        piVar4 = (int *)*piVar4;
        iVar5 = *piVar4;
      }
      *piVar4 = (int)local_1c;
    }
    local_8 = local_1c[2] - local_10;
  }
  *(undefined4 *)(iVar2 + 0xa0) = 0;
  if (param_1[0x5f] == 0xe0) {
    FUN_00665110(local_10,local_8);
  }
  else if (param_1[0x5f] == 0xee) {
    FUN_00665030(local_10,local_8);
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x5b;
    *(int *)(*param_1 + 0x18) = param_1[0x5f];
    *(uint *)(*param_1 + 0x1c) = local_10 + local_8;
    (**(code **)(*param_1 + 4))(param_1,1);
  }
  *puVar3 = puVar10;
  puVar3[1] = iVar8;
  if (0 < (int)local_8) {
    (**(code **)(param_1[6] + 0x10))(param_1,local_8);
  }
  return 1;
}

