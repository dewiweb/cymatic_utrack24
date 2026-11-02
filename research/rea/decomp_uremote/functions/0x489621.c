// rea decompile_all
// name: FUN_00489621
// address: 0x489621
// body: available
// range: 0x489621-0x489855 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00489621(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  iVar2 = param_1[0x66];
  bVar8 = param_1[0x5b] != 0;
  bVar4 = false;
  if (bVar8) {
    if ((param_1[0x5c] < param_1[0x5b]) || (0x3f < param_1[0x5c])) {
      bVar4 = true;
    }
    bVar9 = param_1[0x49] == 1;
  }
  else {
    bVar9 = param_1[0x5c] == 0;
  }
  if (!bVar9) {
    bVar4 = true;
  }
  if ((param_1[0x5d] != 0) && (param_1[0x5e] != param_1[0x5d] + -1)) {
    bVar4 = true;
  }
  if (0xd < param_1[0x5e]) {
    bVar4 = true;
  }
  if (bVar4) {
    *(undefined4 *)(*param_1 + 0x14) = 0x10;
    *(int *)(*param_1 + 0x18) = param_1[0x5b];
    *(int *)(*param_1 + 0x1c) = param_1[0x5c];
    *(int *)(*param_1 + 0x20) = param_1[0x5d];
    *(int *)(*param_1 + 0x24) = param_1[0x5e];
    (**(code **)*param_1)(param_1);
  }
  local_8 = 0;
  if (0 < param_1[0x49]) {
    local_c = param_1 + 0x4a;
    do {
      iVar3 = *(int *)(*local_c + 4);
      piVar6 = (int *)(iVar3 * 0x100 + param_1[0x23]);
      if ((bVar8) && (*piVar6 < 0)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x73;
        *(int *)(*param_1 + 0x18) = iVar3;
        *(undefined4 *)(*param_1 + 0x1c) = 0;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
      }
      for (iVar7 = param_1[0x5b]; iVar7 <= param_1[0x5c]; iVar7 = iVar7 + 1) {
        iVar5 = piVar6[iVar7];
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        if (param_1[0x5d] != iVar5) {
          *(undefined4 *)(*param_1 + 0x14) = 0x73;
          *(int *)(*param_1 + 0x18) = iVar3;
          *(int *)(*param_1 + 0x1c) = iVar7;
          (**(code **)(*param_1 + 4))(param_1,0xffffffff);
        }
        piVar6[iVar7] = param_1[0x5e];
      }
      local_8 = local_8 + 1;
      local_c = local_c + 1;
    } while (local_8 < param_1[0x49]);
  }
  if (param_1[0x5d] == 0) {
    if (bVar8) {
      *(code **)(iVar2 + 4) = FUN_00489aa8;
    }
    else {
      *(code **)(iVar2 + 4) = FUN_004898bc;
    }
  }
  else if (bVar8) {
    *(code **)(iVar2 + 4) = FUN_00489d90;
  }
  else {
    *(code **)(iVar2 + 4) = FUN_00489cbc;
  }
  local_8 = 0;
  if (0 < param_1[0x49]) {
    local_c = param_1 + 0x4a;
    local_10 = (undefined4 *)(iVar2 + 0x18);
    do {
      if (bVar8) {
        puVar1 = (undefined4 *)(iVar2 + 0x2c + *(int *)(*local_c + 0x18) * 4);
        FUN_00486105(0,puVar1);
        *(undefined4 *)(iVar2 + 0x3c) = *puVar1;
      }
      else if (param_1[0x5d] == 0) {
        FUN_00486105(1,iVar2 + 0x2c + *(int *)(*local_c + 0x14) * 4);
      }
      local_8 = local_8 + 1;
      local_c = local_c + 1;
      *local_10 = 0;
      local_10 = local_10 + 1;
    } while (local_8 < param_1[0x49]);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined1 *)(iVar2 + 8) = 0;
  *(int *)(iVar2 + 0x28) = param_1[0x3f];
  return;
}

