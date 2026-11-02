// rea decompile_all
// name: FUN_005a4b60
// address: 0x5a4b60
// body: available
// range: 0x5a4b60-0x5a4ca4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a4b60(int *param_1)

{
  char cVar1;
  undefined2 uVar2;
  ushort uVar3;
  int in_ECX;
  int local_2c;
  undefined1 local_20 [12];
  short local_14;
  undefined2 local_10;
  short local_c;
  int local_8;
  
  uVar2 = (**(code **)(*param_1 + 0x38))();
  local_10 = FUN_005a4770(uVar2);
  cVar1 = FUN_005a5a80(local_10);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x74))(local_20);
    local_c = FUN_00504120();
    local_8 = (**(code **)(*param_1 + 0x54))();
    if (local_8 != 0) {
      local_14 = local_c;
      uVar3 = FUN_005a3ec0(local_10);
      if ((local_14 < 0) && ((int)(uint)uVar3 < -(int)local_14)) {
        if (local_8 == 1) {
          local_c = -1;
        }
        else {
          local_c = 0;
        }
      }
      else if ((local_14 < 1) || ((int)local_14 <= (int)(0xffff - (uint)uVar3))) {
        local_c = uVar3 + local_14;
      }
      else if (local_8 == 1) {
        local_c = 0;
      }
      else {
        local_c = -1;
      }
    }
    if (in_ECX == 0) {
      local_2c = 0;
    }
    else {
      local_2c = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
    }
    FUN_005789b0(local_2c,local_c,param_1);
  }
  return;
}

