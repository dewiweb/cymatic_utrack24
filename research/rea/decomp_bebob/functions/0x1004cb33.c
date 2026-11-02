// rea decompile_all
// name: CMFCMaskedEdit::IsMaskedChar
// address: 0x1004cb33
// body: available
// range: 0x1004cb33-0x1004cbd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCMaskedEdit::IsMaskedChar(wchar_t,wchar_t)const 
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

int __thiscall CMFCMaskedEdit::IsMaskedChar(CMFCMaskedEdit *this,wchar_t param_1,wchar_t param_2)

{
  int iVar1;
  
  if ((ushort)param_2 < 0x45) {
    if (param_2 == L'D') {
      iVar1 = _iswdigit(param_1);
LAB_1004cb8a:
      if (iVar1 == 0) goto LAB_1004cbcb;
    }
    else {
      if (param_2 == L'*') {
        iVar1 = _iswprint(param_1);
        goto LAB_1004cb8a;
      }
      if (param_2 != L'+') {
        if (param_2 == L'A') {
          iVar1 = _iswalnum(param_1);
        }
        else {
          if (param_2 != L'C') goto LAB_1004cbcb;
          iVar1 = _iswalpha(param_1);
        }
        goto LAB_1004cb8a;
      }
      if ((param_1 != L'+') && (param_1 != L'-')) goto LAB_1004cbad;
    }
LAB_1004cb8f:
    iVar1 = 1;
  }
  else {
    if (param_2 == L'a') {
      iVar1 = _iswalnum(param_1);
LAB_1004cba8:
      if (iVar1 != 0) goto LAB_1004cb8f;
LAB_1004cbad:
      iVar1 = _iswspace(param_1);
      goto LAB_1004cb8a;
    }
    if (param_2 == L'c') {
      iVar1 = _iswalpha(param_1);
      goto LAB_1004cba8;
    }
    if (param_2 == L'd') {
      iVar1 = _iswdigit(param_1);
      goto LAB_1004cba8;
    }
LAB_1004cbcb:
    iVar1 = 0;
  }
  return iVar1;
}

