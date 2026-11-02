// rea decompile_all
// name: FUN_00547380
// address: 0x547380
// body: available
// range: 0x547380-0x547419 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00547380(void)

{
  undefined4 *puVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d273b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_005074a0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  puVar1 = (undefined4 *)(in_ECX + 0x68);
  *puVar1 = CPCHAI::TypedAsyncReturnManager<CPNS::ICHAI_RemoteDevice_Find_AsyncReturnHandler>::
            vftable;
  local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
  if (*(int *)(in_ECX + 0x6c) != 0) {
    FUN_00508530(puVar1);
  }
  *puVar1 = CPCHAI::BaseNotificationManager::vftable;
  local_8 = 0xffffffff;
  FUN_00544100();
  ExceptionList = local_10;
  return;
}

