// rea decompile_all
// name: __itoa_s
// address: 0x5cc17d
// body: available
// range: 0x5cc17d-0x5cc1a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __itoa_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix)

{
  errno_t eVar1;
  undefined4 uVar2;
  
  if ((_Radix == 10) && (_Value < 0)) {
    uVar2 = 1;
    _Radix = 10;
  }
  else {
    uVar2 = 0;
  }
  eVar1 = xtoa_s(_Size,_Radix,uVar2);
  return eVar1;
}

