// rea decompile_all
// name: ___crtMessageBoxA
// address: 0x5c682c
// body: available
// range: 0x5c682c-0x5c6994 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___crtMessageBoxA
   
   Library: Visual Studio 2008 Release */

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  int iVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined1 local_18 [8];
  byte local_10;
  undefined1 local_c [4];
  int local_8;
  
  iVar1 = __encoded_null();
  local_8 = 0;
  if (DAT_0095d3bc == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar2 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar2 == (FARPROC)0x0) {
      return 0;
    }
    DAT_0095d3bc = __encode_pointer(pFVar2);
    pFVar2 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_0095d3c0 = __encode_pointer(pFVar2);
    pFVar2 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_0095d3c4 = __encode_pointer(pFVar2);
    pFVar2 = GetProcAddress(hModule,"GetUserObjectInformationA");
    DAT_0095d3cc = __encode_pointer(pFVar2);
    if (DAT_0095d3cc != 0) {
      pFVar2 = GetProcAddress(hModule,"GetProcessWindowStation");
      DAT_0095d3c8 = __encode_pointer(pFVar2);
    }
  }
  if ((DAT_0095d3c8 != iVar1) && (DAT_0095d3cc != iVar1)) {
    pcVar3 = (code *)__decode_pointer(DAT_0095d3c8);
    pcVar4 = (code *)__decode_pointer(DAT_0095d3cc);
    if (((pcVar3 != (code *)0x0) && (pcVar4 != (code *)0x0)) &&
       (((iVar5 = (*pcVar3)(), iVar5 == 0 ||
         (iVar5 = (*pcVar4)(iVar5,1,local_18,0xc,local_c), iVar5 == 0)) || ((local_10 & 1) == 0))))
    {
      _UType = _UType | 0x200000;
      goto LAB_005c696e;
    }
  }
  if ((((DAT_0095d3c0 != iVar1) &&
       (pcVar3 = (code *)__decode_pointer(DAT_0095d3c0), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_0095d3c4 != iVar1 &&
      (pcVar3 = (code *)__decode_pointer(DAT_0095d3c4), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_005c696e:
  pcVar3 = (code *)__decode_pointer(DAT_0095d3bc);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  iVar1 = (*pcVar3)(local_8,_LpText,_LpCaption,_UType);
  return iVar1;
}

