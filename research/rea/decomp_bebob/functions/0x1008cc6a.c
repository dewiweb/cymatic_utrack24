// rea decompile_all
// name: OnCreate
// address: 0x1008cc6a
// body: available
// range: 0x1008cc6a-0x1008ce77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCDropDownFrame::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCDropDownFrame::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall OnCreate(void *this,undefined4 *param_1)

{
  int iVar1;
  CObject *pCVar2;
  CWnd *pCVar3;
  undefined4 uVar4;
  HWND pHVar5;
  
  iVar1 = OnCreate(this,param_1);
  if (iVar1 != -1) {
    if ((*(int *)((int)this + 0x124) == 0) ||
       (pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10160470,
                                    *(CObject **)(*(int *)((int)this + 0x124) + 0x6c)),
       pCVar2 == (CObject *)0x0)) {
      iVar1 = 1;
    }
    else {
      iVar1 = (**(code **)(*(int *)pCVar2 + 0x160))();
    }
    iVar1 = (**(code **)(*(int *)((int)this + 0x128) + 0x324))
                      (this,0x800,(-(uint)(iVar1 != 0) & 0xffffb000) + 0xa000 | 0x50000000,1,1,1,1,
                       0xe827);
    if (iVar1 != 0) {
      *(undefined4 *)((int)this + 0xc2c) = 1;
      CMFCToolBarImages::CopyTemp
                ((CMFCToolBarImages *)(*(int *)((int)this + 0xdf0) + 0x2a4),
                 (CMFCToolBarImages *)((int)this + 0x3cc));
      CMFCToolBarImages::CopyTemp
                ((CMFCToolBarImages *)(*(int *)((int)this + 0xdf0) + 0x3b0),
                 (CMFCToolBarImages *)((int)this + 0x4d8));
      CMFCToolBarImages::CopyTemp
                ((CMFCToolBarImages *)(*(int *)((int)this + 0xdf0) + 0x4bc),
                 (CMFCToolBarImages *)((int)this + 0x5e4));
      CMFCToolBarImages::CopyTemp
                ((CMFCToolBarImages *)(*(int *)((int)this + 0xdf0) + 0x5c8),
                 (CMFCToolBarImages *)((int)this + 0x6f0));
      CMFCToolBarImages::CopyTemp
                ((CMFCToolBarImages *)(*(int *)((int)this + 0xdf0) + 0x6d4),
                 (CMFCToolBarImages *)((int)this + 0x7fc));
      CMFCToolBarImages::CopyTemp
                ((CMFCToolBarImages *)(*(int *)((int)this + 0xdf0) + 0x7e0),
                 (CMFCToolBarImages *)((int)this + 0x908));
      pCVar3 = *(CWnd **)((int)this + 0xdf0);
      *(undefined4 *)((int)this + 0xcc4) = *(undefined4 *)(pCVar3 + 0xb9c);
      *(undefined4 *)((int)this + 0xcc8) = *(undefined4 *)(pCVar3 + 0xba0);
      *(undefined4 *)((int)this + 0xccc) = *(undefined4 *)(pCVar3 + 0xba4);
      *(undefined4 *)((int)this + 0xcd0) = *(undefined4 *)(pCVar3 + 0xba8);
      *(undefined4 *)((int)this + 0xcd4) = *(undefined4 *)(pCVar3 + 0xbac);
      *(undefined4 *)((int)this + 0xcd8) = *(undefined4 *)(pCVar3 + 0xbb0);
      *(undefined4 *)((int)this + 0xcdc) = *(undefined4 *)(pCVar3 + 0xbb4);
      uVar4 = *(undefined4 *)(pCVar3 + 3000);
      *(uint *)((int)this + 0x1b8) = *(uint *)((int)this + 0x1b8) & 0xffbfffff;
      *(undefined4 *)((int)this + 0xce0) = uVar4;
      pCVar3 = CWnd::GetOwner(pCVar3);
      if (pCVar3 == (CWnd *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pCVar3 + 0x20);
      }
      *(undefined4 *)((int)this + 0x17c) = uVar4;
      *(undefined4 *)((int)this + 0xc68) = *(undefined4 *)(*(int *)((int)this + 0xdf0) + 0xb40);
      CObList::AddTail((CObList *)((int)this + 0xcf0),
                       (CObList *)(*(int *)((int)this + 0xdf0) + 0xbc8));
      (**(code **)(*(int *)this + 0x174))(1);
      ReleaseCapture();
      pHVar5 = SetCapture(*(HWND *)((int)this + 0x148));
      CWnd::FromHandle(pHVar5);
      return 0;
    }
  }
  return 0xffffffff;
}

