// rea decompile_all
// name: FUN_004883b1
// address: 0x4883b1
// body: available
// range: 0x4883b1-0x488504 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004883b1(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint local_28;
  uint local_24;
  int local_20;
  undefined1 *local_1c;
  undefined1 local_18 [16];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  piVar3 = (int *)param_1[6];
  local_1c = (undefined1 *)*piVar3;
  local_20 = piVar3[1];
  if (local_20 == 0) {
    cVar5 = (*(code *)piVar3[3])(param_1);
    if (cVar5 == '\0') goto LAB_004884f7;
    local_1c = (undefined1 *)*piVar3;
    local_20 = piVar3[1];
  }
  local_20 = local_20 + -1;
  uVar1 = *local_1c;
  local_1c = local_1c + 1;
  if (local_20 == 0) {
    cVar5 = (*(code *)piVar3[3])(param_1);
    if (cVar5 == '\0') goto LAB_004884f7;
    local_1c = (undefined1 *)*piVar3;
    local_20 = piVar3[1];
  }
  uVar2 = *local_1c;
  local_20 = local_20 + -1;
  local_1c = local_1c + 1;
  uVar6 = CONCAT11(uVar1,uVar2) - 2;
  if ((int)uVar6 < 0xe) {
    local_24 = uVar6;
    if ((int)uVar6 < 1) {
      local_24 = 0;
    }
  }
  else {
    local_24 = 0xe;
  }
  local_28 = 0;
  if (local_24 != 0) {
    do {
      if (local_20 == 0) {
        cVar5 = (*(code *)piVar3[3])(param_1);
        if (cVar5 == '\0') goto LAB_004884f7;
        local_1c = (undefined1 *)*piVar3;
        local_20 = piVar3[1];
      }
      uVar1 = *local_1c;
      local_20 = local_20 + -1;
      local_1c = local_1c + 1;
      local_18[local_28] = uVar1;
      local_28 = local_28 + 1;
    } while (local_28 < local_24);
  }
  iVar7 = uVar6 - local_24;
  iVar4 = param_1[0x5f];
  if (iVar4 == 0xe0) {
    FUN_00488115();
  }
  else if (iVar4 == 0xee) {
    FUN_00488301(iVar7);
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x44;
    *(int *)(*param_1 + 0x18) = param_1[0x5f];
    (**(code **)*param_1)(param_1);
  }
  *piVar3 = (int)local_1c;
  piVar3[1] = local_20;
  if (0 < iVar7) {
    (**(code **)(param_1[6] + 0x10))(param_1,iVar7);
  }
LAB_004884f7:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

