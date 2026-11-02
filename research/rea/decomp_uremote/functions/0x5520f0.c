// rea decompile_all
// name: FUN_005520f0
// address: 0x5520f0
// body: available
// range: 0x5520f0-0x55215c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005520f0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d3818;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CPCHAI::TypedAsyncReturnManager<CPNS::IRemoteDevice_GetOutputInfo_AsyncReturnHandler>::
            vftable;
  local_8 = 0;
  if (in_ECX[1] != 0) {
    FUN_00508530(in_ECX);
  }
  *in_ECX = CPCHAI::BaseNotificationManager::vftable;
  ExceptionList = local_10;
  return;
}

