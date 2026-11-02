// rea decompile_all
// name: FUN_005561d0
// address: 0x5561d0
// body: available
// range: 0x5561d0-0x556255 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_005561d0(uint param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d3818;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = CPCHAI::
            TypedAsyncReturnManager<CPNS::IRemoteDevice_GetSelectorParameterValueText_AsyncReturnHandler>
            ::vftable;
  local_8 = 0;
  if (in_ECX[1] != 0) {
    FUN_00508530(in_ECX);
  }
  local_8 = 0xffffffff;
  *in_ECX = CPCHAI::BaseNotificationManager::vftable;
  if ((param_1 & 1) != 0) {
    FUN_005af7b6(in_ECX,uVar1);
  }
  ExceptionList = local_10;
  return in_ECX;
}

