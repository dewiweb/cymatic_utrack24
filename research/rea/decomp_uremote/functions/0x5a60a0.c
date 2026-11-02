// rea decompile_all
// name: FUN_005a60a0
// address: 0x5a60a0
// body: available
// range: 0x5a60a0-0x5a6285 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a60a0(void)

{
  HMODULE hModule;
  HANDLE pvVar1;
  int iVar2;
  char *lpProcName;
  int *piVar3;
  int local_c0;
  FARPROC local_bc;
  undefined1 local_b8 [8];
  _OSVERSIONINFOA local_b0;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d77ea;
  local_10 = ExceptionList;
  local_14 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005017d0(local_14);
  local_8 = 1;
  local_b0.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_b0);
  if (local_b0.dwPlatformId == 2) {
    if (local_b0.dwMajorVersion == 5) {
      if (local_b0.dwMinorVersion == 0) {
        FUN_00501f30("Windows 2000");
      }
      else {
        FUN_00501f30("Windows XP");
      }
    }
    else if (local_b0.dwMajorVersion == 6) {
      if (local_b0.dwMinorVersion == 0) {
        FUN_00501f30("Windows Vista");
      }
      else if (local_b0.dwMinorVersion == 1) {
        FUN_00501f30("Windows 7");
      }
      else if (local_b0.dwMinorVersion == 2) {
        FUN_00501f30("Windows 8");
      }
      else {
        FUN_00501f30("Windows > 8");
      }
      lpProcName = "IsWow64Process";
      hModule = GetModuleHandleA("kernel32");
      local_bc = GetProcAddress(hModule,lpProcName);
      local_c0 = 0;
      if (local_bc != (FARPROC)0x0) {
        piVar3 = &local_c0;
        pvVar1 = GetCurrentProcess();
        iVar2 = (*local_bc)(pvVar1,piVar3);
        if (iVar2 == 0) {
          local_c0 = 0;
        }
      }
      if (local_c0 == 0) {
        FUN_00502720(&DAT_005f0178);
      }
      else {
        FUN_00502720(&DAT_005f0180);
      }
    }
  }
  FUN_005018d0(local_b8);
  local_8 = local_8 & 0xffffff00;
  FUN_00501900();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

