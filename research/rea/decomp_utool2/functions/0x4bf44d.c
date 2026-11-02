// rea decompile_all
// name: __Getcvt
// address: 0x4bf44d
// body: available
// range: 0x4bf44d-0x4bf4b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Getcvt
   
   Library: Visual Studio 2015 Release */

_Cvtvec * __cdecl __Getcvt(_Cvtvec *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  UINT UVar2;
  uint uVar3;
  wchar_t **ppwVar4;
  int iVar5;
  uint _C;
  _Cvtvec *p_Var6;
  
  _C = 0;
  __return_storage_ptr__->_Page = 0;
  p_Var6 = __return_storage_ptr__;
  for (iVar5 = 10; p_Var6 = (_Cvtvec *)&p_Var6->_Mbcurmax, iVar5 != 0; iVar5 = iVar5 + -1) {
    *(uint *)p_Var6 = 0;
  }
  UVar2 = ____lc_codepage_func();
  __return_storage_ptr__->_Page = UVar2;
  uVar3 = ____mb_cur_max_func();
  __return_storage_ptr__->_Mbcurmax = uVar3;
  ppwVar4 = ____lc_locale_name_func();
  pwVar1 = ppwVar4[2];
  __return_storage_ptr__->_Isclocale = (uint)(pwVar1 == (wchar_t *)0x0);
  if ((pwVar1 == (wchar_t *)0x0) == 0) {
    do {
      iVar5 = __ismbblead(_C);
      if (iVar5 != 0) {
        __return_storage_ptr__->_Isleadbyte[(int)_C >> 3] =
             __return_storage_ptr__->_Isleadbyte[(int)_C >> 3] | (byte)(1 << (_C & 7));
      }
      _C = _C + 1;
    } while ((int)_C < 0x100);
  }
  return __return_storage_ptr__;
}

