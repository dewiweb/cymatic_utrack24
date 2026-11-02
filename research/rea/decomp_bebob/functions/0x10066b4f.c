// rea decompile_all
// name: CMDIClientAreaWnd::SerializeOpenChildren
// address: 0x10066b4f
// body: available
// range: 0x10066b4f-0x10066f60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10066d72 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: void __thiscall CMDIClientAreaWnd::SerializeOpenChildren(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMDIClientAreaWnd::SerializeOpenChildren(CMDIClientAreaWnd *this,CArchive *param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  short *psVar5;
  long lVar6;
  undefined **ppuVar7;
  CBasePane *pCVar8;
  CBaseTabbedPane *pCVar9;
  undefined4 *puVar10;
  UINT uCmd;
  CObList local_8c [4];
  undefined4 *local_88;
  long local_80;
  LONG local_70;
  long local_6c;
  LONG local_68;
  int local_64;
  CObject *local_60;
  CObject *local_5c;
  CMDIClientAreaWnd *local_58;
  CWnd *local_54;
  CObject *local_50;
  CObject *local_4c;
  int *local_48;
  CObject *local_44;
  tagWINDOWPLACEMENT local_40;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x7c;
  local_8 = 0x10066b5b;
  local_58 = this;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    local_60 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)pCVar3)
    ;
    local_44 = (CObject *)0x0;
    CArchive::operator>>(param_1,(long *)&local_44);
    local_48 = (int *)0x0;
    local_64 = 0;
    if (0 < (int)local_44) {
      local_50 = local_44;
      do {
        ppuVar7 = FUN_1000ad47();
        FUN_10005e00(&local_44,(int *)ppuVar7);
        local_8 = 3;
        CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_44);
        local_54 = (CWnd *)0x0;
        local_5c = (CObject *)0x0;
        CArchive::operator>>(param_1,(long *)&local_54);
        if (local_54 != (CWnd *)0x0) {
          local_5c = CArchive::ReadObject(param_1,(CRuntimeClass *)0x0);
        }
        CArchive::operator>>(param_1,(long *)&local_40.flags);
        CArchive::operator>>(param_1,(long *)&local_40);
        operator>>(param_1,&local_40.ptMaxPosition);
        operator>>(param_1,&local_40.ptMinPosition);
        operator>>(param_1,&local_40.rcNormalPosition);
        CArchive::operator>>(param_1,(long *)&local_40.showCmd);
        local_6c = 0;
        CArchive::operator>>(param_1,&local_6c);
        local_4c = (CObject *)0xffffffff;
        CArchive::operator>>(param_1,(long *)&local_4c);
        if (local_64 != 0) {
          local_40.showCmd = 3;
        }
        local_54 = (CWnd *)0x0;
        if (*(int *)(local_44 + -0xc) == 0) {
          if (local_4c != (CObject *)0xffffffff) goto LAB_10066e90;
        }
        else if (local_4c == (CObject *)0xffffffff) {
          local_54 = (CWnd *)(**(code **)(*(int *)local_60 + 0x220))(local_44,local_5c);
        }
        else {
LAB_10066e90:
          pCVar8 = CMDIFrameWndEx::GetPane((CMDIFrameWndEx *)local_60,(uint)local_4c);
          pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,
                                      (CObject *)pCVar8);
          if (pCVar4 != (CObject *)0x0) {
            pCVar9 = CBasePane::GetParentTabbedPane((CBasePane *)pCVar4);
            if (pCVar9 != (CBaseTabbedPane *)0x0) {
              (**(code **)(*(int *)pCVar4 + 0x37c))();
            }
            local_54 = (CWnd *)(**(code **)(*(int *)local_60 + 0x1cc))(pCVar4);
            this = local_58;
            if (pCVar9 != (CBaseTabbedPane *)0x0) {
              (**(code **)(*(int *)pCVar9 + 0x3c4))(pCVar4);
              this = local_58;
            }
          }
        }
        if (local_5c != (CObject *)0x0) {
          (**(code **)(*(int *)local_5c + 4))(1);
        }
        pCVar3 = local_54;
        if (local_54 != (CWnd *)0x0) {
          CWnd::SetWindowPlacement(local_54,&local_40);
          if (local_40.showCmd == 3) {
            CWnd::ShowWindow((CWnd *)this,3);
            local_64 = 1;
          }
          if (local_6c != 0) {
            local_48 = *(int **)(pCVar3 + 0x20);
          }
        }
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(local_44 + -0x10));
        local_50 = local_50 + -1;
      } while (local_50 != (CObject *)0x0);
      if (local_48 != (int *)0x0) {
        SendMessageW(*(HWND *)(this + 0x20),0x222,(WPARAM)local_48,0);
      }
    }
  }
  else {
    CObList::CObList(local_8c,10);
    local_8 = 0;
    uCmd = 5;
    pHVar2 = *(HWND *)(this + 0x20);
    while( true ) {
      pHVar2 = GetWindow(pHVar2,uCmd);
      pCVar3 = CWnd::FromHandle(pHVar2);
      if (pCVar3 == (CWnd *)0x0) break;
      local_50 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,
                                    (CObject *)pCVar3);
      if (local_50 != (CObject *)0x0) {
        local_48 = (int *)0x0;
        psVar5 = (short *)(**(code **)(*(int *)local_50 + 0x20c))(&local_48);
        FUN_10006ce0(&local_44,psVar5);
        local_8 = CONCAT31(local_8._1_3_,1);
        if (local_48 != (int *)0x0) {
          (**(code **)(*local_48 + 4))(1);
        }
        if (*(int *)(local_44 + -0xc) != 0) {
          CObList::AddHead(local_8c,local_50);
        }
        local_8 = local_8 & 0xffffff00;
        FUN_10001030((undefined4 *)(local_44 + -0x10));
      }
      pHVar2 = *(HWND *)(pCVar3 + 0x20);
      uCmd = 2;
    }
    local_50 = (CObject *)SendMessageW(*(HWND *)(local_58 + 0x20),0x229,0,0);
    CArchive::operator<<(param_1,local_80);
    puVar10 = local_88;
    while (puVar10 != (undefined4 *)0x0) {
      if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = puVar10 + 2;
      puVar10 = (undefined4 *)*puVar10;
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,(CObject *)*puVar1
                                 );
      local_4c = (CObject *)0x0;
      psVar5 = (short *)(**(code **)(*(int *)pCVar4 + 0x20c))(&local_4c);
      FUN_10006ce0(&local_44,psVar5);
      local_8 = CONCAT31(local_8._1_3_,2);
      CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_44);
      local_48 = (int *)(uint)(local_4c != (CObject *)0x0);
      CArchive::operator<<(param_1,(long)local_48);
      if ((local_48 != (int *)0x0) &&
         (CArchive::WriteObject(param_1,local_4c), local_4c != (CObject *)0x0)) {
        (**(code **)(*(int *)local_4c + 4))(1);
      }
      CWnd::GetWindowPlacement((CWnd *)pCVar4,&local_40);
      CArchive::operator<<(param_1,local_40.flags);
      CArchive::operator<<(param_1,local_40.length);
      local_70 = local_40.ptMaxPosition.x;
      local_6c = local_40.ptMaxPosition.y;
      CArchive::Write(param_1,&local_70,8);
      local_68 = local_40.ptMinPosition.x;
      local_64 = local_40.ptMinPosition.y;
      CArchive::Write(param_1,&local_68,8);
      CArchive::Write(param_1,&local_40.rcNormalPosition,0x10);
      CArchive::operator<<(param_1,local_40.showCmd);
      CArchive::operator<<(param_1,(uint)(*(CObject **)(pCVar4 + 0x20) == local_50));
      pCVar3 = *(CWnd **)(pCVar4 + 0x434);
      lVar6 = -1;
      if ((pCVar3 != (CWnd *)0x0) && (*(int *)(pCVar3 + 0x20) != 0)) {
        lVar6 = CWnd::GetDlgCtrlID(pCVar3);
      }
      CArchive::operator<<(param_1,lVar6);
      local_8 = local_8 & 0xffffff00;
      FUN_10001030((undefined4 *)(local_44 + -0x10));
    }
    local_8 = 0xffffffff;
    FUN_1001e259(local_8c);
  }
  FUN_100f90cf();
  return;
}

