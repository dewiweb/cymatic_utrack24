// rea decompile_all
// name: FUN_005641c0
// address: 0x5641c0
// body: available
// range: 0x5641c0-0x56437f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005641c0(undefined2 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_ECX;
  undefined4 *local_3c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4326;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  iVar2 = FUN_00563e70(param_1);
  if (iVar2 == 0) {
    local_3c = (undefined4 *)FUN_005af82d(0x28,uVar1);
    if (local_3c == (undefined4 *)0x0) {
      local_3c = (undefined4 *)0x0;
    }
    else {
      *local_3c = CPCHAI::CBaseLocalDevice::PropertyInfo::vftable;
      local_3c[3] = 0;
      local_8 = 1;
      *local_3c = CPCHAI::CBaseLocalDevice::PropertyInfoBinary::vftable;
      FUN_005050f0();
      local_3c[2] = 2;
    }
    local_8 = 0xffffffff;
    if (local_3c == (undefined4 *)0x0) {
      local_18 = 0x16;
    }
    else {
      *(undefined2 *)(local_3c + 1) = param_1;
      FUN_005051f0(param_2);
      if (local_3c[6] == 0) {
        if (local_3c != (undefined4 *)0x0) {
          (**(code **)*local_3c)(1);
        }
        local_18 = 0x16;
      }
      else {
        FUN_00563eb0(local_3c);
      }
    }
  }
  else if (*(int *)(iVar2 + 8) == 2) {
    FUN_005051f0(param_2);
    if (*(int *)(iVar2 + 0x18) == 0) {
      local_18 = 0x16;
    }
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

