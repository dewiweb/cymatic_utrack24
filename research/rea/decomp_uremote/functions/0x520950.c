// rea decompile_all
// name: FUN_00520950
// address: 0x520950
// body: available
// range: 0x520950-0x5209c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00520950(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = CPCHAI::BaseNotificationManager::vftable;
  in_ECX[1] = param_1;
  in_ECX[2] = param_2;
  in_ECX[3] = 0;
  FUN_00508480(in_ECX);
  *in_ECX = CPCHAI::TypedNotificationManager<CPNS::IRemoteDevice_WatcherNotificationHandler>::
            vftable;
  in_ECX[4] = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  *(undefined2 *)((int)in_ECX + 0x16) = 0;
  return in_ECX;
}

