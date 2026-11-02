// rea decompile_all
// name: CMDIClientAreaWnd::SerializeTabGroup
// address: 0x1006655b
// body: available
// range: 0x1006655b-0x10066b4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10066772 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: void __thiscall CMDIClientAreaWnd::SerializeTabGroup(class CArchive &,class CMFCTabCtrl
   *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMDIClientAreaWnd::SerializeTabGroup
          (CMDIClientAreaWnd *this,CArchive *param_1,CMFCTabCtrl *param_2,int param_3)

{
  long lVar1;
  CObject *pCVar2;
  short *psVar3;
  undefined **ppuVar4;
  int iVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  undefined4 *puVar8;
  CBasePane *pCVar9;
  int iVar10;
  tagRECT *ptVar11;
  undefined **local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  ResizeMode local_64;
  CBaseTabbedPane *local_60;
  long local_5c;
  CObject *local_58;
  ushort *local_54;
  CObject *local_50;
  CObject *local_4c;
  long local_48;
  CObject *local_44;
  uint local_40;
  int local_3c;
  CObject *local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x10066567;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    local_40 = 0;
    CArchive::operator>>(param_1,(long *)&local_40);
    local_5c = -1;
    CArchive::operator>>(param_1,&local_5c);
    local_44 = (CObject *)0x0;
    CArchive::operator>>(param_1,(long *)&local_44);
    if (local_44 != (CObject *)0x0) {
      local_50 = FUN_10062d9c((int)this);
      if (local_50 != (CObject *)0x0) {
        *(undefined4 *)(local_50 + 0x24c) = 0;
        iVar5 = (**(code **)(*(int *)local_50 + 0x208))();
        CMFCBaseTabCtrl::InvalidateTab((CMFCBaseTabCtrl *)local_50,iVar5);
      }
    }
    *(CObject **)(param_2 + 0x24c) = local_44;
    pHVar6 = GetParent(*(HWND *)(this + 0x20));
    pCVar7 = CWnd::FromHandle(pHVar6);
    local_4c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)pCVar7)
    ;
    local_3c = 0;
    if (0 < (int)local_40) {
      do {
        ppuVar4 = FUN_1000ad47();
        FUN_10005e00(&local_54,(int *)ppuVar4);
        local_8 = 2;
        CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_54);
        local_58 = (CObject *)0x0;
        local_44 = (CObject *)0x0;
        CArchive::operator>>(param_1,(long *)&local_58);
        if (local_58 != (CObject *)0x0) {
          local_44 = CArchive::ReadObject(param_1,(CRuntimeClass *)0x0);
        }
        ppuVar4 = FUN_1000ad47();
        FUN_10005e00(&local_48,(int *)ppuVar4);
        local_8 = CONCAT31(local_8._1_3_,3);
        CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_48);
        CArchive::operator>>(param_1,(long *)&local_64);
        CMFCTabCtrl::SetResizeMode(param_2,local_64);
        local_50 = (CObject *)0xffffffff;
        CArchive::operator>>(param_1,(long *)&local_50);
        local_38 = (CObject *)0xffffffff;
        CArchive::operator>>(param_1,(long *)&local_38);
        if (*(int *)(local_54 + -6) == 0) {
          if (local_38 != (CObject *)0xffffffff) {
            pCVar9 = CMDIFrameWndEx::GetPane((CMDIFrameWndEx *)local_4c,(uint)local_38);
            local_58 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,
                                          (CObject *)pCVar9);
            if (local_58 != (CObject *)0x0) {
              local_60 = CBasePane::GetParentTabbedPane((CBasePane *)local_58);
              if (local_60 != (CBaseTabbedPane *)0x0) {
                (**(code **)(*(int *)local_58 + 0x37c))();
              }
              local_38 = (CObject *)(**(code **)(*(int *)local_4c + 0x1cc))(local_58);
              if (local_60 != (CBaseTabbedPane *)0x0) {
                (**(code **)(*(int *)local_60 + 0x3c4))(local_58);
              }
              goto LAB_10066955;
            }
          }
        }
        else {
          puVar8 = Find(this + 0x294c,local_54,(undefined4 *)0x0);
          if (puVar8 == (undefined4 *)0x0) {
            local_38 = (CObject *)(**(code **)(*(int *)local_4c + 0x21c))();
            if (local_38 == (CObject *)0x0) goto LAB_1006698e;
            AddTail(this + 0x294c,&local_54);
          }
          else {
            local_38 = (CObject *)(**(code **)(*(int *)local_4c + 0x220))(local_54,local_44);
          }
LAB_10066955:
          if (local_38 != (CObject *)0x0) {
            (**(code **)(*(int *)param_2 + 0x188))(local_38,local_48,0xffffffff,1);
            (**(code **)(*(int *)param_2 + 0x1dc))(local_3c,local_50);
            if (param_3 != 0) {
              *(CMFCTabCtrl **)(local_38 + 0x118) = param_2;
            }
          }
        }
LAB_1006698e:
        if (local_44 != (CObject *)0x0) {
          (**(code **)(*(int *)local_44 + 4))(1);
        }
        FUN_10001030((undefined4 *)(local_48 + -0x10));
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(local_54 + -8));
        local_3c = local_3c + 1;
      } while (local_3c < (int)local_40);
    }
    local_48 = 0;
    CArchive::operator>>(param_1,&local_48);
    local_40 = 0;
    CArchive::operator>>(param_1,(long *)&local_40);
    local_78 = CArray<unsigned_long,unsigned_long>::vftable;
    local_74 = 0;
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_8 = 4;
    local_3c = 0;
    if (0 < (int)local_40) {
      do {
        local_50 = (CObject *)0xffffffff;
        CArchive::operator>>(param_1,(long *)&local_50);
        CArray<unsigned_long,unsigned_long>::SetAtGrow
                  ((CArray<unsigned_long,unsigned_long> *)&local_78,local_3c,(ulong)local_50);
        local_3c = local_3c + 1;
      } while (local_3c < (int)local_40);
    }
    FUN_10093f29(param_2,local_48);
    CMFCBaseTabCtrl::SetAutoColors
              ((CMFCBaseTabCtrl *)param_2,(CArray<unsigned_long,unsigned_long> *)&local_78);
    local_38 = (CObject *)0x0;
    *(long *)(this + 0x28b8) = local_48;
    CArchive::operator>>(param_1,(long *)&local_38);
    CMFCTabCtrl::EnableTabDocumentsMenu(param_2,(int)local_38);
    *(CObject **)(this + 0x28bc) = local_38;
    CArchive::operator>>(param_1,(long *)&local_38);
    *(CObject **)(param_2 + 0x108) = local_38;
    *(CObject **)(this + 0x28c0) = local_38;
    local_40 = 1;
    CArchive::operator>>(param_1,(long *)&local_40);
    (**(code **)(*(int *)param_2 + 0x240))(local_40,1);
    *(uint *)(this + 0x28cc) = local_40;
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    operator>>(param_1,&local_24);
    ptVar11 = &local_24;
    pHVar6 = GetParent(*(HWND *)(param_2 + 0x20));
    pCVar7 = CWnd::FromHandle(pHVar6);
    CWnd::ScreenToClient(pCVar7,ptVar11);
    CWnd::SetWindowPos((CWnd *)param_2,(CWnd *)0x0,local_24.left,local_24.right,
                       local_24.right - local_24.left,local_24.bottom - local_24.top,0x14);
    iVar5 = (**(code **)(*(int *)param_2 + 0x1a8))();
    if (0 < iVar5) {
      iVar5 = (**(code **)(*(int *)param_2 + 0x1a8))();
      lVar1 = local_5c;
      if (iVar5 + -1 < local_5c) {
        iVar5 = (**(code **)(*(int *)param_2 + 0x1a8))();
        lVar1 = iVar5 + -1;
      }
      (**(code **)(*(int *)param_2 + 0x210))(lVar1);
    }
    local_8 = 0xffffffff;
    FUN_10005770(&local_78);
  }
  else {
    local_4c = (CObject *)(**(code **)(*(int *)param_2 + 0x1a8))();
    CArchive::operator<<(param_1,(long)local_4c);
    lVar1 = (**(code **)(*(int *)param_2 + 0x208))();
    CArchive::operator<<(param_1,lVar1);
    CArchive::operator<<(param_1,*(long *)(param_2 + 0x24c));
    local_3c = 0;
    if (0 < (int)local_4c) {
      do {
        pCVar2 = (CObject *)(**(code **)(*(int *)param_2 + 0x1ac))(local_3c);
        pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,pCVar2);
        local_38 = (CObject *)0x0;
        psVar3 = (short *)(**(code **)(*(int *)pCVar2 + 0x20c))(&local_38);
        FUN_10006ce0(&local_48,psVar3);
        local_8 = 0;
        CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_48);
        local_40 = (uint)(local_38 != (CObject *)0x0);
        CArchive::operator<<(param_1,local_40);
        if (local_40 != 0) {
          CArchive::WriteObject(param_1,local_38);
          if (local_38 != (CObject *)0x0) {
            (**(code **)(*(int *)local_38 + 4))(1);
          }
        }
        ppuVar4 = FUN_1000ad47();
        FUN_10005e00(&local_44,(int *)ppuVar4);
        local_8 = CONCAT31(local_8._1_3_,1);
        (**(code **)(*(int *)param_2 + 0x1b8))(local_3c,&local_44);
        CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           &local_44);
        CArchive::operator<<(param_1,*(long *)(param_2 + 0x27e4));
        lVar1 = (**(code **)(*(int *)param_2 + 0x1d8))(local_3c);
        CArchive::operator<<(param_1,lVar1);
        pCVar7 = *(CWnd **)(pCVar2 + 0x434);
        lVar1 = -1;
        if ((pCVar7 != (CWnd *)0x0) && (*(int *)(pCVar7 + 0x20) != 0)) {
          lVar1 = CWnd::GetDlgCtrlID(pCVar7);
        }
        CArchive::operator<<(param_1,lVar1);
        FUN_10001030((undefined4 *)(local_44 + -0x10));
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(local_48 + -0x10));
        local_3c = local_3c + 1;
      } while (local_3c < (int)local_4c);
    }
    CArchive::operator<<(param_1,*(long *)(param_2 + 0x1cc));
    CArchive::operator<<(param_1,*(long *)(param_2 + 0x1c0));
    iVar5 = *(int *)(param_2 + 0x1c0);
    iVar10 = 0;
    if (0 < iVar5) {
      do {
        if ((iVar10 < 0) || (iVar5 <= iVar10)) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        CArchive::operator<<(param_1,*(long *)(*(int *)(param_2 + 0x1bc) + iVar10 * 4));
        iVar5 = *(int *)(param_2 + 0x1c0);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar5);
    }
    CArchive::operator<<(param_1,*(long *)(param_2 + 0x244));
    CArchive::operator<<(param_1,*(long *)(param_2 + 0x108));
    lVar1 = (**(code **)(*(int *)param_2 + 0x244))();
    CArchive::operator<<(param_1,lVar1);
    local_34.left = 0;
    local_34.top = 0;
    local_34.right = 0;
    local_34.bottom = 0;
    GetWindowRect(*(HWND *)(param_2 + 0x20),&local_34);
    CArchive::Write(param_1,&local_34,0x10);
  }
  FUN_100f90cf();
  return;
}

