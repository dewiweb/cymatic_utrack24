// rea decompile_all
// name: __freeptd
// address: 0x5b8861
// body: available
// range: 0x5b8861-0x5b88ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2008 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  
  if (DAT_009564a0 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_009564a4), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_009564a0;
      pcVar2 = TlsGetValue(DAT_009564a4);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    pcVar2 = (code *)__decode_pointer(DAT_0095d224,DAT_009564a0,0);
    (*pcVar2)();
    __freefls_4(_Ptd);
  }
  if (DAT_009564a4 != 0xffffffff) {
    TlsSetValue(DAT_009564a4,(LPVOID)0x0);
  }
  return;
}

