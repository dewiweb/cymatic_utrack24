// rea decompile_all
// name: __NMSG_WRITE
// address: 0x101026e2
// body: available
// range: 0x101026e2-0x10102890 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __NMSG_WRITE
   
   Library: Visual Studio 2010 Release */

void __cdecl __NMSG_WRITE(int param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  int iVar3;
  errno_t eVar4;
  DWORD DVar5;
  size_t sVar6;
  HANDLE hFile;
  uint uVar7;
  wchar_t *unaff_EBX;
  rsize_t _SizeInWords;
  wchar_t *unaff_ESI;
  wchar_t *unaff_EDI;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  wchar_t *_Src;
  uintptr_t in_stack_fffffe04;
  
  uVar1 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pwVar2 = __GET_RTERRMSG(param_1);
  _SizeInWords = 0;
  if (pwVar2 != (wchar_t *)0x0) {
    _Src = pwVar2;
    iVar3 = __set_error_mode(3);
    if ((iVar3 == 1) || ((iVar3 = __set_error_mode(3), iVar3 == 0 && (DAT_1016a18c == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        uVar7 = 0;
        do {
          (&stack0xfffffe04)[uVar7] = (char)pwVar2[uVar7];
          if (pwVar2[uVar7] == L'\0') break;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 500);
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = (LPDWORD)&stack0xfffffe00;
        sVar6 = _strlen(&stack0xfffffe04);
        WriteFile(hFile,&stack0xfffffe04,sVar6,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar4 = _wcscpy_s((wchar_t *)&DAT_1016a540,0x314,L"Runtime Error!\n\nProgram: ");
      if (eVar4 == 0) {
        param_1 = (int)&DAT_1016a572;
        _DAT_1016a77a = 0;
        DVar5 = GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_1016a572,0x104);
        _SizeInWords = 0x2fb;
        if (DVar5 != 0) goto LAB_101027ac;
        eVar4 = _wcscpy_s((wchar_t *)&DAT_1016a572,0x2fb,L"<program name unknown>");
        if (eVar4 == 0) goto LAB_101027ac;
      }
LAB_101027a7:
      do {
        __invoke_watson(unaff_EDI,unaff_ESI,unaff_EBX,(uint)_Src,in_stack_fffffe04);
LAB_101027ac:
        sVar6 = _wcslen((wchar_t *)param_1);
        if (0x3c < sVar6 + 1) {
          sVar6 = _wcslen((wchar_t *)param_1);
          _SizeInWords = _SizeInWords - ((int)(&DAT_1016a4fc + sVar6 * 2) - param_1 >> 1);
          eVar4 = _wcsncpy_s((wchar_t *)(&DAT_1016a4fc + sVar6 * 2),_SizeInWords,L"...",3);
          if (eVar4 != 0) goto LAB_101027a7;
        }
        param_1 = 0x314;
        eVar4 = _wcscat_s((wchar_t *)&DAT_1016a540,0x314,L"\n\n");
      } while ((eVar4 != 0) || (eVar4 = _wcscat_s((wchar_t *)&DAT_1016a540,0x314,_Src), eVar4 != 0))
      ;
      ___crtMessageBoxW((LPCWSTR)&DAT_1016a540,L"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

