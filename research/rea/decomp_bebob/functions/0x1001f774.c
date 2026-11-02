// rea decompile_all
// name: CMDIChildWndEx::RecalcLayout
// address: 0x1001f774
// body: available
// range: 0x1001f774-0x1001f8f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMDIChildWndEx::RecalcLayout(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMDIChildWndEx::RecalcLayout(CMDIChildWndEx *this,int param_1)

{
  CWnd *pCVar1;
  int iVar2;
  CFrameWnd *pCVar3;
  CMDIChildWndEx *pCVar4;
  CObject *pCVar5;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0xe8) != 0) goto LAB_1001f7e6;
  *(undefined4 *)(this + 0xe8) = 1;
  if (*(int *)(this + 0x124) == 0) {
    pCVar1 = (CWnd *)FUN_10054804((int)this);
    if ((*(int *)(this + 0x374) == 0) &&
       (iVar2 = CDockingManager::IsOLEContainerMode((CDockingManager *)(this + 0x244)), iVar2 == 0))
    {
      (**(code **)(*(int *)(this + 0x244) + 0x34))(param_1);
    }
    else {
      if ((pCVar1 != (CWnd *)0x0) &&
         (iVar2 = CObject::IsKindOf((CObject *)pCVar1,
                                    (CRuntimeClass *)&PTR_s_CPreviewViewEx_101290b8), iVar2 != 0)) {
        (**(code **)(*(int *)(this + 0x244) + 0x34))(param_1);
        local_18.left = *(LONG *)(this + 0x33c);
        local_18.top = *(LONG *)(this + 0x340);
        local_18.right = *(LONG *)(this + 0x344);
        local_18.bottom = *(LONG *)(this + 0x348);
        CWnd::SetWindowPos(pCVar1,(CWnd *)0x0,local_18.left,local_18.top,
                           local_18.right - local_18.left,local_18.bottom - local_18.top,0x14);
        goto LAB_1001f7e0;
      }
      pCVar1 = (CWnd *)FUN_10054804((int)this);
      if (pCVar1 != (CWnd *)0x0) {
        pCVar3 = CWnd::GetParentFrame((CWnd *)this);
        pCVar4 = (CMDIChildWndEx *)(**(code **)(*(int *)pCVar3 + 0x16c))();
        if ((pCVar4 == this) && (*(int *)(this + 0x138) != 0)) {
          pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocument_1012901c,
                                      *(CObject **)(pCVar1 + 0x74));
          if ((pCVar5 != (CObject *)0x0) &&
             (((iVar2 = (**(code **)(*(int *)pCVar5 + 0x110))(pCVar1), param_1 != 0 && (iVar2 != 0))
              && (*(int *)(iVar2 + 0x60) != 0)))) {
            (**(code **)(**(int **)(iVar2 + 0x60) + 0x50))();
          }
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          pCVar3 = CWnd::GetParentFrame(pCVar1);
          if (pCVar3 != (CFrameWnd *)0x0) {
            GetClientRect(*(HWND *)(pCVar3 + 0x20),&local_18);
            CWnd::SetWindowPos(pCVar1,(CWnd *)0x0,0,0,local_18.right - local_18.left,
                               local_18.bottom - local_18.top,0x14);
          }
          goto LAB_1001f7e0;
        }
      }
    }
    AdjustClientArea(this);
  }
LAB_1001f7e0:
  *(undefined4 *)(this + 0xe8) = 0;
LAB_1001f7e6:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

