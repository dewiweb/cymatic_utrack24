// rea decompile_all
// name: AfxGetPropSheetFont
// address: 0x100f3070
// body: available
// range: 0x100f3070-0x100f31a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f308c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100f315a to 0x10009030 FUN_10009030 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __stdcall AfxGetPropSheetFont(class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > &,unsigned short &,int)
   
   Library: Visual Studio 2010 Release */

int AfxGetPropSheetFont(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,
                       ushort *param_2,int param_3)

{
  ushort uVar1;
  LANGID LVar2;
  CNoTrackObject *pCVar3;
  AFX_MODULE_STATE *pAVar4;
  HINSTANCE__ *hModule;
  int iVar5;
  HRSRC hResInfo;
  DLGTEMPLATE *pDVar6;
  uint dwBytes;
  wchar_t *pwVar7;
  wchar_t *unaff_EDI;
  
  pCVar3 = CProcessLocalObject::GetData
                     ((CProcessLocalObject *)&DAT_10169f94,(_func_CNoTrackObject_ptr *)&LAB_100f3051
                     );
  if (pCVar3 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if (*(short *)(pCVar3 + 8) == 0) {
    pAVar4 = AfxGetModuleState();
    hModule = CDllIsolationWrapperBase::GetModuleHandleA
                        ((CDllIsolationWrapperBase *)**(undefined4 **)(pAVar4 + 0x78));
    if (((hModule != (HINSTANCE__ *)0x0) &&
        ((((LVar2 = GetUserDefaultUILanguage(), (LVar2 & 0x3ff) == 0x11 &&
           (iVar5 = IsFontInstalled(unaff_EDI), iVar5 != 0)) &&
          (hResInfo = FindResourceExW(hModule,(LPCWSTR)&DAT_00000005,
                                      (LPCWSTR)((-(uint)(param_3 != 0) & 0xe) + 0x3ee),0xfc11),
          hResInfo != (HRSRC)0x0)) ||
         (hResInfo = FindResourceW(hModule,(LPCWSTR)((-(uint)(param_3 != 0) & 0xe) + 0x3ee),
                                   (LPCWSTR)&DAT_00000005), hResInfo != (HRSRC)0x0)))) &&
       (pDVar6 = LoadResource(hModule,hResInfo), pDVar6 != (DLGTEMPLATE *)0x0)) {
      CDialogTemplate::GetFont(pDVar6,param_1,param_2);
    }
    dwBytes = ATL::AtlMultiplyThrow<unsigned_int>(*(int *)(*(int *)param_1 + -0xc) + 1,2);
    pwVar7 = GlobalAlloc(0x40,dwBytes);
    *(wchar_t **)(pCVar3 + 4) = pwVar7;
    if (pwVar7 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009030();
    }
    ATL::Checked::tcscpy_s(pwVar7,*(int *)(*(wchar_t **)param_1 + -6) + 1,*(wchar_t **)param_1);
    *(ushort *)(pCVar3 + 8) = *param_2;
  }
  FUN_100022b0(param_1,*(short **)(pCVar3 + 4));
  uVar1 = *(ushort *)(pCVar3 + 8);
  *param_2 = uVar1;
  return (uint)(uVar1 != 0xffff);
}

