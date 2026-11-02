// rea decompile_all
// name: __NMSG_WRITE
// address: 0x5b66ed
// body: available
// range: 0x5b66ed-0x5b6897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __NMSG_WRITE
   
   Library: Visual Studio 2008 Release */

void __cdecl __NMSG_WRITE(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  errno_t eVar4;
  DWORD DVar5;
  size_t sVar6;
  char *_Dst;
  HANDLE hFile;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_c;
  uint local_8;
  
  local_8 = 0;
  do {
    if (param_1 == (&DAT_00956298)[local_8 * 2]) break;
    local_8 = local_8 + 1;
  } while (local_8 < 0x17);
  uVar2 = local_8;
  if (local_8 < 0x17) {
    iVar3 = __set_error_mode(3);
    if ((iVar3 == 1) || ((iVar3 = __set_error_mode(3), iVar3 == 0 && (DAT_00955fd0 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_c;
        puVar1 = (undefined4 *)(uVar2 * 8 + 0x95629c);
        sVar6 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar6,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar4 = _strcpy_s(&DAT_0095cf00,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar4 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_0095d01d = 0;
      DVar5 = GetModuleFileNameA((HMODULE)0x0,&DAT_0095cf19,0x104);
      if ((DVar5 == 0) &&
         (eVar4 = _strcpy_s(&DAT_0095cf19,0x2fb,"<program name unknown>"), eVar4 != 0)) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar6 = _strlen(&DAT_0095cf19);
      if (0x3c < sVar6 + 1) {
        sVar6 = _strlen(&DAT_0095cf19);
        _Dst = (char *)((int)&DAT_0095cedc + sVar6 + 2);
        eVar4 = _strncpy_s(_Dst,(int)&DAT_0095d214 - (int)_Dst,"...",3);
        if (eVar4 != 0) {
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar4 = _strcat_s(&DAT_0095cf00,0x314,"\n\n");
      if (eVar4 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar4 = _strcat_s(&DAT_0095cf00,0x314,*(char **)(local_8 * 8 + 0x95629c));
      if (eVar4 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      ___crtMessageBoxA(&DAT_0095cf00,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}

