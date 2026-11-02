// rea decompile_all
// name: CFrameImpl::OnMenuChar
// address: 0x1005fe41
// body: available
// range: 0x1005fe41-0x1005ff57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005ff4e to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CFrameImpl::OnMenuChar(unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CFrameImpl::OnMenuChar(CFrameImpl *this,uint param_1)

{
  CObject *this_00;
  bool bVar1;
  ulong uVar2;
  int iVar3;
  CWnd *pCVar4;
  CFrameWnd *pCVar5;
  undefined4 *puVar6;
  
  if (((*(CWnd **)(this + 0xfc) == (CWnd *)0x0) ||
      (uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 0xfc)), (uVar2 & 0x10000000) == 0)) ||
     (iVar3 = (**(code **)(**(int **)(this + 0xfc) + 0x354))(param_1), iVar3 == 0)) {
    puVar6 = DAT_10166ec0;
    if ((*(int *)(this + 0xb4) == 0) || (*(int *)(*(int *)(this + 0xb4) + 0x130) == 0)) {
      bVar1 = false;
      if ((*(CWnd **)(this + 0xac) != (CWnd *)0x0) &&
         ((uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 0xac)), puVar6 = DAT_10166ec0,
          (uVar2 & 0x10000000) != 0 &&
          (iVar3 = (**(code **)(**(int **)(this + 0xac) + 0x394))(param_1), puVar6 = DAT_10166ec0,
          iVar3 != 0)))) {
        return 1;
      }
    }
    else {
      bVar1 = true;
    }
    do {
      if (puVar6 == (undefined4 *)0x0) {
        return 0;
      }
      if (puVar6 == (undefined4 *)0x0) {
LAB_1005ff4e:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      this_00 = (CObject *)puVar6[2];
      puVar6 = (undefined4 *)*puVar6;
      if (this_00 == (CObject *)0x0) goto LAB_1005ff4e;
    } while (((((bVar1) &&
               (iVar3 = CObject::IsKindOf(this_00,(CRuntimeClass *)
                                                  &PTR_s_CMFCPrintPreviewToolBar_101290d4),
               iVar3 == 0)) ||
              (pCVar4 = CWnd::FromHandlePermanent(*(HWND__ **)(this_00 + 0x20)),
              pCVar4 == (CWnd *)0x0)) ||
             ((this_00 == *(CObject **)(this + 0xac) ||
              (uVar2 = CWnd::GetExStyle((CWnd *)this_00), (uVar2 & 0x10000000) == 0)))) ||
            ((pCVar5 = CWnd::GetTopLevelFrame((CWnd *)this_00),
             pCVar5 != *(CFrameWnd **)(this + 0xb0) ||
             (iVar3 = (**(code **)(*(int *)this_00 + 0x394))(param_1), iVar3 == 0))));
  }
  return 1;
}

