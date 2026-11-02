// rea decompile_all
// name: FUN_00564090
// address: 0x564090
// body: available
// range: 0x564090-0x5641b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00564090(undefined2 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 *local_28;
  int local_c;
  
  local_c = 0;
  iVar1 = FUN_00563e70(param_1);
  if (iVar1 == 0) {
    local_28 = (undefined4 *)FUN_005af82d(0x18);
    if (local_28 == (undefined4 *)0x0) {
      local_28 = (undefined4 *)0x0;
    }
    else {
      *local_28 = CPCHAI::CBaseLocalDevice::PropertyInfo::vftable;
      local_28[3] = 0;
      *local_28 = CPCHAI::CBaseLocalDevice::PropertyInfoNumeric::vftable;
      local_28[2] = 0;
    }
    if (local_28 == (undefined4 *)0x0) {
      local_c = 0x16;
    }
    else {
      *(undefined2 *)(local_28 + 1) = param_1;
      local_28[4] = param_2;
      local_28[5] = param_3;
      FUN_00563eb0(local_28);
    }
  }
  else if (*(int *)(iVar1 + 8) == 0) {
    *(undefined4 *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 0x14) = param_3;
  }
  else {
    local_c = 0x11;
  }
  if (local_c == 0) {
    FUN_00521900(in_ECX,param_1);
    FUN_00521900(in_ECX,param_1);
  }
  return local_c;
}

