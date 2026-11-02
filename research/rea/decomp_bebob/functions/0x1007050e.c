// rea decompile_all
// name: LoadState
// address: 0x1007050e
// body: available
// range: 0x1007050e-0x100707bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007052d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMFCMenuBar::LoadState(char const *,int,unsigned int)
    public: virtual int __thiscall CMFCMenuBar::LoadState(wchar_t const *,int,unsigned int)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall LoadState(void *this,short *param_1,WPARAM param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  UINT UVar4;
  AFX_MODULE_STATE *pAVar5;
  CObject *this_00;
  int iVar6;
  CWnd *pCVar7;
  CFrameWnd *pCVar8;
  int local_18;
  WPARAM local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x1007051a;
  if (*(int *)((int)this + 0xcd8) != 0) {
    FUN_1009b642(&param_1,DAT_10168714,param_1);
    iVar1 = *(int *)((int)this + 0xcf8);
    local_8 = 0;
    CMFCMenuBar::SetMaximizeMode(this,0,(CWnd *)0x0,0);
    pAVar5 = AfxGetModuleState();
    piVar2 = *(int **)(*(int *)(pAVar5 + 4) + 0x5c);
    if ((*(int *)((int)this + 0xcc8) != 0) && (piVar2 != (int *)0x0)) {
      local_18 = (**(code **)(*piVar2 + 0x10))();
      while (local_18 != 0) {
        this_00 = (CObject *)(**(code **)(*piVar2 + 0x14))(&local_18);
        iVar6 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CMultiDocTemplate_10134a2c);
        if ((iVar6 != 0) && (*(int *)(this_00 + 0x88) != 0)) {
          local_14 = *(WPARAM *)(this_00 + 0x54);
          (**(code **)(*(int *)this + 0x434))(local_14);
          iVar6 = FUN_1002dbd6(this,param_1,param_2,local_14);
          if ((iVar6 == 0) || (*(int *)((int)this + 0xb1c) != 0)) {
            pCVar7 = CWnd::GetOwner(this);
            if ((pCVar7 != (CWnd *)0x0) && (*(int *)(pCVar7 + 0x20) != 0)) {
              *(undefined4 *)((int)this + 0xcd4) = 0;
              (**(code **)(*(int *)this + 0x430))(*(undefined4 *)(this_00 + 0x88),0,0);
              UVar4 = DAT_10166ea8;
              pCVar7 = CWnd::GetOwner(this);
              SendMessageW(*(HWND *)(pCVar7 + 0x20),UVar4,local_14,0);
              CMenuHash::SaveMenuBar((CMenuHash *)&DAT_10168048,*(HMENU__ **)(this_00 + 0x88),this);
              *(undefined4 *)((int)this + 0xcd4) = *(undefined4 *)(this_00 + 0x88);
            }
          }
          else {
            CMenuHash::SaveMenuBar((CMenuHash *)&DAT_10168048,*(HMENU__ **)(this_00 + 0x88),this);
          }
        }
      }
    }
    (**(code **)(*(int *)this + 0x434))(*(undefined4 *)((int)this + 0xce4));
    iVar6 = FUN_1002dbd6(this,param_1,param_2,0);
    if ((iVar6 == 0) || (*(int *)((int)this + 0xb1c) != 0)) {
      pCVar7 = CWnd::GetOwner(this);
      if ((pCVar7 != (CWnd *)0x0) && (*(int *)(pCVar7 + 0x20) != 0)) {
        *(undefined4 *)((int)this + 0xcd4) = 0;
        (**(code **)(*(int *)this + 0x430))(*(undefined4 *)((int)this + 0xcd8),1,0);
        param_2 = *(WPARAM *)((int)this + 0xce4);
        if (param_2 == 0) {
          pCVar7 = CWnd::GetOwner(this);
          param_2 = SendMessageW(*(HWND *)(pCVar7 + 0x20),0x366,0,0);
        }
        UVar4 = DAT_10166ea8;
        pCVar7 = CWnd::GetOwner(this);
        SendMessageW(*(HWND *)(pCVar7 + 0x20),UVar4,param_2,0);
        CMenuHash::SaveMenuBar((CMenuHash *)&DAT_10168048,*(HMENU__ **)((int)this + 0xcd8),this);
        *(undefined4 *)((int)this + 0xcd4) = *(undefined4 *)((int)this + 0xcd8);
      }
    }
    else {
      CMenuHash::SaveMenuBar((CMenuHash *)&DAT_10168048,*(HMENU__ **)((int)this + 0xcd8),this);
    }
    if ((*(HMENU__ **)((int)this + 0xcd4) == (HMENU__ *)0x0) ||
       (iVar6 = CMenuHash::LoadMenuBar
                          ((CMenuHash *)&DAT_10168048,*(HMENU__ **)((int)this + 0xcd4),this),
       iVar6 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (iVar1 != 0) {
      CMFCMenuBar::RestoreMaximizeMode(this,(uint)!bVar3);
    }
    if (bVar3) {
      pCVar8 = CWnd::GetParentFrame(this);
      (**(code **)(*(int *)pCVar8 + 0x174))(1);
      InvalidateRect(*(HWND *)((int)this + 0x20),(RECT *)0x0,1);
      UpdateWindow(*(HWND *)((int)this + 0x20));
    }
    (**(code **)(*(int *)this + 0x208))();
    FUN_1002de91((int)this);
    FUN_10001030((undefined4 *)(param_1 + -8));
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

