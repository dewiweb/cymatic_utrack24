// rea decompile_all
// name: CFrameWnd::DestroyDockBars
// address: 0x1005660a
// body: available
// range: 0x1005660a-0x1005671b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10056690 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CFrameWnd::DestroyDockBars(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameWnd::DestroyDockBars(CFrameWnd *this)

{
  int *piVar1;
  int iVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  CList<HWND__*,HWND__*> *this_00;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined **local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined **local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_48 = CList<HWND__*,HWND__*>::vftable;
  local_3c = 0;
  local_38 = 0;
  local_40 = 0;
  local_44 = (undefined4 *)0x0;
  local_34 = 0;
  local_30 = 10;
  local_2c = CList<HWND__*,HWND__*>::vftable;
  local_20 = 0;
  local_1c = 0;
  local_24 = 0;
  local_28 = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 10;
  puVar6 = *(undefined4 **)(this + 0xa8);
  local_8 = 1;
  puVar5 = local_44;
  while (local_44 = puVar5, puVar6 != (undefined4 *)0x0) {
    if (puVar6 == (undefined4 *)0x0) goto LAB_10056690;
    piVar1 = (int *)puVar6[2];
    puVar6 = (undefined4 *)*puVar6;
    iVar2 = (**(code **)(*piVar1 + 0x194))();
    this_00 = (CList<HWND__*,HWND__*> *)&local_48;
    if (iVar2 == 0) {
      this_00 = (CList<HWND__*,HWND__*> *)&local_2c;
    }
    CList<HWND__*,HWND__*>::AddTail(this_00,(HWND__ *)piVar1[8]);
    puVar5 = local_44;
  }
  while( true ) {
    do {
      puVar6 = local_28;
      if (puVar5 == (undefined4 *)0x0) {
        while (puVar6 != (undefined4 *)0x0) {
          puVar5 = (undefined4 *)*puVar6;
          pCVar3 = CWnd::FromHandlePermanent((HWND__ *)puVar6[2]);
          pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CControlBar_10127374,(CObject *)pCVar3
                                     );
          puVar6 = puVar5;
          if (pCVar4 != (CObject *)0x0) {
            (**(code **)(*(int *)pCVar4 + 0x60))();
          }
        }
        local_8 = local_8 & 0xffffff00;
        local_2c = CList<HWND__*,HWND__*>::vftable;
        CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_2c);
        local_8 = 0xffffffff;
        local_48 = CList<HWND__*,HWND__*>::vftable;
        CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_48);
        return;
      }
      puVar6 = puVar5 + 2;
      puVar5 = (undefined4 *)*puVar5;
      pCVar3 = CWnd::FromHandlePermanent((HWND__ *)*puVar6);
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockBar_10137990,(CObject *)pCVar3);
    } while (pCVar4 == (CObject *)0x0);
    if ((*(int *)(pCVar4 + 0xb8) != 0) &&
       (pCVar4 = (CObject *)CWnd::GetParentFrame((CWnd *)pCVar4), pCVar4 == (CObject *)0x0)) break;
    (**(code **)(*(int *)pCVar4 + 0x60))();
  }
LAB_10056690:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

