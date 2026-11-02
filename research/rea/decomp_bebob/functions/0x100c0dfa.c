// rea decompile_all
// name: OnCreate
// address: 0x100c0dfa
// body: available
// range: 0x100c0dfa-0x100c0f31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c0e42 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CTabbedPane::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CTabbedPane::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2010 Release */

void __thiscall OnCreate(void *this,int param_1)

{
  int iVar1;
  CObject *pCVar2;
  CMFCVisualManager *pCVar3;
  undefined4 uVar4;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar1 = OnCreate(this);
  if (iVar1 != -1) {
    local_18.right = *(LONG *)(param_1 + 0x14);
    local_18.bottom = *(LONG *)(param_1 + 0x10);
    local_18.left = 0;
    local_18.top = 0;
    if ((*(int *)((int)this + 0x358) != 0) || (PTR_PTR_10162190 == (undefined *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    pCVar2 = CRuntimeClass::CreateObject((CRuntimeClass *)PTR_PTR_10162190);
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,pCVar2);
    *(CObject **)((int)this + 0x358) = pCVar2;
    if (pCVar2 != (CObject *)0x0) {
      iVar1 = CMFCTabCtrl::Create((CMFCTabCtrl *)pCVar2,DAT_10169318,&local_18,this,0x65,
                                  (uint)(DAT_10169320 != 0),0);
      if (iVar1 == 0) {
        if (*(int **)((int)this + 0x358) != (int *)0x0) {
          (**(code **)(**(int **)((int)this + 0x358) + 4))(1);
        }
        *(undefined4 *)((int)this + 0x358) = 0;
      }
      else {
        *(undefined4 *)(*(int *)((int)this + 0x358) + 0x80) = 1;
        if (DAT_1016931c != 0) {
          FUN_10093f29(pCVar2,1);
          CMFCBaseTabCtrl::SetAutoColors
                    ((CMFCBaseTabCtrl *)pCVar2,
                     (CArray<unsigned_long,unsigned_long> *)&PTR_vftable_10162194);
        }
        *(undefined4 *)(pCVar2 + 0xfc) = 0;
        (**(code **)(*(int *)pCVar2 + 0x2a0))(1);
        pCVar3 = CMFCVisualManager::GetInstance();
        iVar1 = *(int *)pCVar2;
        uVar4 = (**(code **)(*(int *)pCVar3 + 300))(1);
        (**(code **)(iVar1 + 0x240))(uVar4);
        *(undefined4 *)(pCVar2 + 0x74) = 1;
        CList<HWND__*,HWND__*>::AddTail
                  ((CList<HWND__*,HWND__*> *)&PTR_vftable_101621a8,*(HWND__ **)((int)this + 0x20));
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

