// rea decompile_all
// name: __Getctype
// address: 0x5cd648
// body: available
// range: 0x5cd648-0x5cd6a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Getctype
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

_Ctypevec * __cdecl __Getctype(_Ctypevec *__return_storage_ptr__)

{
  int iVar1;
  short *psVar2;
  void *pvVar3;
  ushort *puVar4;
  size_t _Size;
  
  iVar1 = ____lc_handle_func();
  __return_storage_ptr__->_Page = *(uint *)(iVar1 + 4);
  psVar2 = (short *)____lc_codepage_func();
  __return_storage_ptr__->_Table = psVar2;
  pvVar3 = __calloc_crt(0x100,2);
  __return_storage_ptr__->_Delfl = (int)pvVar3;
  if (pvVar3 == (void *)0x0) {
    puVar4 = ___pctype_func();
    __return_storage_ptr__->_LocaleName = (wchar_t *)0x0;
    __return_storage_ptr__->_Delfl = (int)puVar4;
  }
  else {
    _Size = 0x200;
    puVar4 = ___pctype_func();
    _memcpy((void *)__return_storage_ptr__->_Delfl,puVar4,_Size);
    __return_storage_ptr__->_LocaleName = (wchar_t *)0x1;
  }
  return __return_storage_ptr__;
}

