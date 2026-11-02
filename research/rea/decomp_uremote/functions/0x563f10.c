// rea decompile_all
// name: FUN_00563f10
// address: 0x563f10
// body: available
// range: 0x563f10-0x564081 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00563f10(undefined2 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_ECX;
  undefined4 *local_34;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d42f8;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  iVar2 = FUN_00563e70(param_1);
  if (iVar2 == 0) {
    local_34 = (undefined4 *)FUN_005af82d(0x18,uVar1);
    if (local_34 == (undefined4 *)0x0) {
      local_34 = (undefined4 *)0x0;
    }
    else {
      *local_34 = CPCHAI::CBaseLocalDevice::PropertyInfo::vftable;
      local_34[3] = 0;
      local_8 = 1;
      *local_34 = CPCHAI::CBaseLocalDevice::PropertyInfoText::vftable;
      FUN_005017d0();
      local_34[2] = 1;
    }
    local_8 = 0xffffffff;
    if (local_34 == (undefined4 *)0x0) {
      local_18 = 0x16;
    }
    else {
      *(undefined2 *)(local_34 + 1) = param_1;
      FUN_00501f30(param_2);
      FUN_00563eb0(local_34);
    }
  }
  else if (*(int *)(iVar2 + 8) == 1) {
    FUN_00501f30(param_2);
  }
  else {
    local_18 = 0x11;
  }
  if (local_18 == 0) {
    FUN_00521900(in_ECX,param_1);
    FUN_00521900(in_ECX,param_1);
  }
  ExceptionList = local_10;
  return local_18;
}

