// rea decompile_all
// name: CMFCEditBrowseCtrl::SetInternalImage
// address: 0x1005016f
// body: available
// range: 0x1005016f-0x10050271 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100501ad to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCEditBrowseCtrl::SetInternalImage(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCEditBrowseCtrl::SetInternalImage(CMFCEditBrowseCtrl *this)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  HANDLE h;
  uint uVar3;
  CGdiObject *pCVar4;
  HBITMAP__ *pHVar5;
  LPCWSTR name;
  _IMAGELIST *p_Var6;
  ulong uVar7;
  undefined1 local_1c [18];
  short local_a;
  
  if (((CImageList *)(this + 0xb0) != (CImageList *)0x0) && (*(int *)(this + 0xb4) != 0)) {
    CImageList::DeleteImageList((CImageList *)(this + 0xb0));
  }
  iVar1 = AFX_GLOBAL_DATA::Is32BitIcons((AFX_GLOBAL_DATA *)&DAT_10166aa0);
  name = (LPCWSTR)((-(uint)(iVar1 != 0) & 0x11) + 0x4288);
  if (name != (LPCWSTR)0x0) {
    pAVar2 = AfxGetModuleState();
    h = LoadImageW(*(HINSTANCE *)(pAVar2 + 0xc),name,0,0,0,0x2000);
    if (h != (HANDLE)0x0) {
      GetObjectW(h,0x18,local_1c);
      if (local_a == 8) {
        uVar3 = 9;
      }
      else if (local_a == 0x10) {
        uVar3 = 0x11;
      }
      else if (local_a == 0x18) {
        uVar3 = 0x19;
      }
      else {
        uVar3 = ((local_a == 0x20) - 1 & 0xffffffe4) + 0x21;
      }
      CImageList::Create((CImageList *)(this + 0xb0),0x10,0x10,uVar3,0,0);
      pCVar4 = CGdiObject::FromHandle(h);
      if (pCVar4 == (CGdiObject *)0x0) {
        pHVar5 = (HBITMAP__ *)0x0;
      }
      else {
        pHVar5 = *(HBITMAP__ **)(pCVar4 + 4);
      }
      p_Var6 = *(_IMAGELIST **)(this + 0xb4);
      uVar7 = 0xff00ff;
      pAVar2 = AfxGetModuleState();
      CComCtlWrapper::_ImageList_AddMasked
                ((CComCtlWrapper *)**(undefined4 **)(pAVar2 + 0x78),p_Var6,pHVar5,uVar7);
      *(undefined4 *)(this + 0x98) = 0x10;
      *(undefined4 *)(this + 0x9c) = 0x10;
      *(undefined4 *)(this + 0x84) = 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

