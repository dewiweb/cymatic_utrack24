// rea decompile_all
// name: CPropertyPage::PreProcessPageTemplate
// address: 0x100d7600
// body: available
// range: 0x100d7600-0x100d76a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPropertyPage::PreProcessPageTemplate(struct _PROPSHEETPAGEA &,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CPropertyPage::PreProcessPageTemplate(CPropertyPage *this,_PROPSHEETPAGEA *param_1,int param_2)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  AFX_MODULE_STATE *pAVar1;
  DLGTEMPLATE *pDVar2;
  DLGTEMPLATE *pDVar3;
  
  if (((byte)param_1[4] & 1) == 0) {
    hResInfo = FindResourceW(*(HMODULE *)(param_1 + 8),*(LPCWSTR *)(param_1 + 0xc),
                             (LPCWSTR)&DAT_00000005);
    if (hResInfo == (HRSRC)0x0) {
      FUN_100170f3();
    }
    hResData = LoadResource(*(HMODULE *)(param_1 + 8),hResInfo);
    if (hResData == (HGLOBAL)0x0) {
      FUN_100170f3();
    }
    pDVar2 = LockResource(hResData);
    if (pDVar2 == (DLGTEMPLATE *)0x0) {
      FUN_100170f3();
    }
  }
  else {
    pDVar2 = *(DLGTEMPLATE **)(param_1 + 0xc);
  }
  pAVar1 = AfxGetModuleState();
  if (*(int *)(pAVar1 + 0x3c) != 0) {
    pDVar2 = InitDialogInfo(this,pDVar2);
  }
  pDVar3 = _AfxChangePropPageFont(pDVar2,param_2);
  if (*(HGLOBAL *)(this + 0x7c) != (HGLOBAL)0x0) {
    GlobalFree(*(HGLOBAL *)(this + 0x7c));
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (pDVar3 != (DLGTEMPLATE *)0x0) {
    *(DLGTEMPLATE **)(this + 0x7c) = pDVar3;
    pDVar2 = pDVar3;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  *(DLGTEMPLATE **)(param_1 + 0xc) = pDVar2;
  return;
}

