// rea decompile_all
// name: FUN_00563bc0
// address: 0x563bc0
// body: available
// range: 0x563bc0-0x563e33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00563bc0(undefined4 param_1,int param_2,ushort param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  ushort local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d42ca;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = param_3;
  if ((param_2 == 1) || (param_3 < 0xff)) {
    if (param_2 == 1) {
      local_18 = 1;
    }
    else if (param_2 == 2) {
      if (param_3 == 6) {
        local_18 = 0x80;
      }
      else if (param_3 == 0x87) {
        local_18 = 0;
      }
      else {
        local_18 = param_3 + 1;
      }
    }
    if (local_18 < 0x80) {
      FUN_005017d0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
      local_8 = 0;
      iVar1 = FUN_00564380(local_18,local_20);
      if (iVar1 == 0) {
        uVar2 = FUN_00501cb0();
        FUN_0059dc20(local_18,uVar2);
        local_8 = 0xffffffff;
        FUN_00501900();
        ExceptionList = local_10;
        return 1;
      }
      local_8 = 0xffffffff;
      FUN_00501900();
    }
    else if ((local_18 < 0xff) && (iVar1 = FUN_005646c0(local_18,local_28), iVar1 == 0)) {
      FUN_0059dc80(local_18,local_28);
      ExceptionList = local_10;
      return 1;
    }
  }
  local_14 = 0;
  if (param_2 == 1) {
    local_14 = *(int *)(in_ECX + 0x164);
  }
  else if (param_2 == 2) {
    local_14 = *(int *)(in_ECX + 0x164);
    if (local_18 != 0) {
      for (; (local_14 != 0 && (*(ushort *)(local_14 + 4) != local_18));
          local_14 = *(int *)(local_14 + 0xc)) {
      }
      if (local_14 != 0) {
        local_14 = *(int *)(local_14 + 0xc);
      }
    }
  }
  else if (param_2 == 5) {
    for (local_14 = *(int *)(in_ECX + 0x164);
        (local_14 != 0 && (*(ushort *)(local_14 + 4) != local_18));
        local_14 = *(int *)(local_14 + 0xc)) {
    }
  }
  if (local_14 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(local_14 + 8);
    if (iVar1 == 0) {
      FUN_0059dc80(*(undefined2 *)(local_14 + 4),local_14 + 0x10);
    }
    else if (iVar1 == 1) {
      uVar2 = FUN_00501d60();
      FUN_0059dc20(*(undefined2 *)(local_14 + 4),uVar2);
    }
    else {
      if (iVar1 != 2) {
        ExceptionList = local_10;
        return 0;
      }
      FUN_0059dce0(*(undefined2 *)(local_14 + 4),local_14 + 0x10,param_4);
    }
    uVar2 = 1;
  }
  ExceptionList = local_10;
  return uVar2;
}

