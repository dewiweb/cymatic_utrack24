// rea decompile_all
// name: FUN_004d79c2
// address: 0x4d79c2
// body: available
// range: 0x4d79c2-0x4d7b91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004d79c2(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int *local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_14 = 0;
  local_8 = FUN_004e7d21();
  if ((local_8 == 1) || (local_8 == 2)) {
    local_10 = 0x1e;
  }
  else {
    local_14 = 0xf;
  }
  FUN_004c2047(&local_28);
  uVar2 = FUN_004e7d2b();
  FUN_00440367(uVar2);
  local_c = FUN_00439b5a(0);
  uVar2 = FUN_004e7d35();
  FUN_00440367(uVar2);
  local_10 = FUN_00439b5a(0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (local_8 == 0) goto LAB_004d7aae;
  cVar1 = FUN_004e7d4f();
  local_24 = extraout_ECX;
  if (cVar1 != '\0') {
    param_1[4] = local_28;
    param_1[5] = extraout_ECX;
    param_1[6] = local_20;
    param_1[7] = local_1c;
    goto LAB_004d7aae;
  }
  param_1[6] = local_c;
  param_1[7] = extraout_EDX;
  if (local_8 == 1) {
    param_1[4] = 0;
LAB_004d7aa0:
    iVar3 = (local_1c - local_10) / 2;
  }
  else {
    if (local_8 == 2) {
      param_1[4] = local_20 - local_c;
      goto LAB_004d7aa0;
    }
    param_1[4] = (local_20 - local_c) / 2;
    if (local_8 == 3) {
      param_1[5] = 0;
      goto LAB_004d7aae;
    }
    if (local_8 != 4) goto LAB_004d7aa0;
    iVar3 = local_1c - local_10;
  }
  param_1[5] = iVar3;
LAB_004d7aae:
  *param_1 = local_28;
  param_1[3] = local_1c;
  param_1[1] = local_24;
  param_1[2] = local_20;
  cVar1 = FUN_004e7d4f();
  if (cVar1 == '\0') {
    if (local_8 == 1) {
      FUN_004f5b9e(local_c);
    }
    else if (local_8 == 2) {
      FUN_004f5bd0(local_c);
    }
    else if (local_8 == 3) {
      FUN_004f5b6b(local_10);
    }
    else if (local_8 == 4) {
      FUN_004f5c0c(local_10);
    }
    (**(code **)(*local_18 + 0x10))(param_2);
    cVar1 = FUN_004e7d3f();
    if ((cVar1 == '\0') && (cVar1 = FUN_004e7d47(), cVar1 == '\0')) {
      return param_1;
    }
  }
  FUN_0045151e();
  return param_1;
}

