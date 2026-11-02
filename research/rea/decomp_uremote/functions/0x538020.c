// rea decompile_all
// name: FUN_00538020
// address: 0x538020
// body: available
// range: 0x538020-0x538150 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00538020(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  undefined4 *local_2c;
  int local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d1645;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < (int)(uint)*(ushort *)(in_ECX + 0x14); local_14 = local_14 + 1) {
    local_24 = 0;
    FUN_00512900(local_14,&local_24);
    local_18 = local_24;
    if (local_24 != 0) {
      local_20 = (undefined4 *)FUN_005af82d(0x28,uVar1);
      if (local_20 == (undefined4 *)0x0) {
        local_2c = (undefined4 *)0x0;
      }
      else {
        *local_20 = CPCHAI::BaseQueuedNotification::vftable;
        local_20[1] = 0;
        *local_20 = CPCHAI::TypedQueuedNotification<CPNS::ICHAI_NotificationHandler>::vftable;
        local_20[2] = local_18;
        local_8 = 1;
        *local_20 = CPCHAI::NotificationManager_CHAI::CHAI_DeviceIdentityChanged::vftable;
        local_20[3] = param_2;
        FUN_005033e0(param_3);
        FUN_005033e0(param_4);
        local_2c = local_20;
      }
      local_1c = local_2c;
      local_8 = 0xffffffff;
      FUN_00508280(param_1,local_2c);
    }
  }
  ExceptionList = local_10;
  return;
}

