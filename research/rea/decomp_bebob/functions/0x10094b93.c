// rea decompile_all
// name: CMFCBaseTabCtrl::SetImageList
// address: 0x10094b93
// body: available
// range: 0x10094b93-0x10094c35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10094bb0 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseTabCtrl::SetImageList(struct _IMAGELIST *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCBaseTabCtrl::SetImageList(CMFCBaseTabCtrl *this,_IMAGELIST *param_1)

{
  CImageList *pCVar1;
  AFX_MODULE_STATE *pAVar2;
  _IMAGELIST *p_Var3;
  int iVar4;
  _IMAGEINFO *p_Var5;
  _IMAGEINFO local_38 [16];
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (param_1 == (_IMAGELIST *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if (((CImageList *)(this + 0xa8) != (CImageList *)0x0) && (*(int *)(this + 0xac) != 0)) {
    CImageList::DeleteImageList((CImageList *)(this + 0xa8));
  }
  pCVar1 = CImageList::FromHandle(param_1);
  if (pCVar1 != (CImageList *)0x0) {
    p_Var3 = *(_IMAGELIST **)(pCVar1 + 4);
    p_Var5 = local_38;
    iVar4 = 0;
    pAVar2 = AfxGetModuleState();
    CComCtlWrapper::_ImageList_GetImageInfo
              ((CComCtlWrapper *)**(undefined4 **)(pAVar2 + 0x78),p_Var3,iVar4,p_Var5);
    CopyRect(&local_18,&local_28);
    *(LONG *)(this + 0xb4) = local_18.right - local_18.left;
    *(LONG *)(this + 0xb8) = local_18.bottom - local_18.top;
    *(_IMAGELIST **)(this + 0xb0) = param_1;
    (**(code **)(*(int *)this + 0x174))();
  }
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

