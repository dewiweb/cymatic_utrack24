// rea decompile_all
// name: FUN_00541da0
// address: 0x541da0
// body: available
// range: 0x541da0-0x541eb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00541da0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d2124;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 2;
  FUN_0057a0d0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  *(undefined ***)(in_ECX + 0x178) = CPNS::IBaseLocalDevice_SignalNotificationHandler::vftable;
  *(undefined ***)(in_ECX + 0x174) = CPNS::IPipe_NotificationHandler::vftable;
  local_8 = 0xffffffff;
  FUN_00539030();
  *(undefined ***)(in_ECX + 0x1b4) = CPNS::ISharedDisplayLocalDevice::vftable;
  *(undefined ***)(in_ECX + 0x1b8 + *(int *)(*(int *)(in_ECX + 0x1b8) + 4)) =
       CPNS::ISharedDisplayLocalDevice::vftable;
  *(undefined ***)(in_ECX + 0x1b8 + *(int *)(*(int *)(in_ECX + 0x1b8) + 8)) =
       CPNS::ISharedDisplayLocalDevice::vftable;
  *(undefined ***)(in_ECX + 0x1a8) = CPNS::IBaseLocalDevice::vftable;
  *(undefined ***)(in_ECX + 0x1ac + *(int *)(*(int *)(in_ECX + 0x1ac) + 4)) =
       CPNS::IBaseLocalDevice::vftable;
  *(undefined ***)(in_ECX + 0x19c) = CPNS::IHookedObject::vftable;
  *(undefined ***)(in_ECX + 0x1a0 + *(int *)(*(int *)(in_ECX + 0x1a0) + 4)) =
       CPNS::IHookedObject::vftable;
  *(undefined ***)(in_ECX + 0x194) = CPNS::IObject::vftable;
  ExceptionList = local_10;
  return;
}

