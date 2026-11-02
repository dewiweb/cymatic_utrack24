// rea decompile_all
// name: FUN_0046d200
// address: 0x46d200
// body: available
// range: 0x46d200-0x46d22d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0046d200(undefined4 param_1,undefined4 param_2)

{
  LPCWSTR lpParameters;
  LPCWSTR lpFile;
  HINSTANCE pHVar1;
  LPCWSTR lpDirectory;
  INT nShowCmd;
  
  nShowCmd = 10;
  lpDirectory = (LPCWSTR)0x0;
  lpParameters = (LPCWSTR)FUN_00466b89(param_2);
  lpFile = (LPCWSTR)FUN_00466b89(param_1);
  pHVar1 = ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,lpFile,lpParameters,lpDirectory,nShowCmd);
  return (HINSTANCE)0x20 < pHVar1;
}

