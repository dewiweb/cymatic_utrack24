// rea decompile_all
// name: CFrameImpl::OnShowPopupMenu
// address: 0x10062ae2
// body: available
// range: 0x10062ae2-0x10062c6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: int __thiscall CFrameImpl::OnShowPopupMenu(class CMFCPopupMenu *,class CFrameWnd *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CFrameImpl::OnShowPopupMenu(CFrameImpl *this,CMFCPopupMenu *param_1,CFrameWnd *param_2)

{
  HWND pHVar1;
  int iVar2;
  void *this_00;
  HMENU pHVar3;
  int *piVar4;
  HWND pHVar5;
  CObject *this_01;
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10062aee;
  if (*(int *)(this + 0xb4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(this + 0xb4) + 0x1b8);
  }
  if (((iVar2 == 0) || (*(int *)(iVar2 + 8) == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    if ((param_1 != (CMFCPopupMenu *)0x0) && (*(int *)(this + 0x18) != 0)) {
      this_00 = (void *)(**(code **)(*(int *)param_1 + 0x1c0))();
      if (*(int *)(this + 0xb4) != 0) {
        iVar2 = FUN_1002605c(this_00,*(int *)(this + 0x18),0);
        if (-1 < iVar2) {
          if (DAT_10166e54 != 0) goto LAB_10062b14;
          CMFCPopupMenu::RemoveAllItems(param_1);
          local_14 = 0;
          local_18 = CMenu::vftable;
          local_8 = 0;
          pHVar3 = CreatePopupMenu();
          CMenu::Attach((CMenu *)&local_18,pHVar3);
          CDockingManager::BuildPanesMenu
                    (*(CDockingManager **)(this + 0xb4),(CMenu *)&local_18,*(int *)(this + 0x38));
          piVar4 = (int *)(**(code **)(*(int *)param_1 + 0x1c0))();
          (**(code **)(*piVar4 + 0x434))(local_14,1);
          local_8 = 0xffffffff;
          *(undefined4 *)(*(int *)(this + 0xb4) + 0x1d8) = 1;
          local_18 = CMenu::vftable;
          CMenu::DestroyMenu((CMenu *)&local_18);
        }
      }
    }
    DAT_1016843c = param_1;
    if (param_1 != (CMFCPopupMenu *)0x0) {
      iVar2 = IsCustomizePane(this,param_1);
      if (iVar2 != 0) {
        ShowQuickCustomizePane(this,param_1);
      }
      if (DAT_10166e54 == 0) {
        this_01 = (CObject *)0x0;
        do {
          if (*(int *)(param_1 + 0x148) == 0) break;
          this_01 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,
                                       *(CObject **)(*(int *)(param_1 + 0x148) + 0x6c));
          param_1 = CMFCPopupMenu::GetParentPopupMenu(param_1);
        } while (param_1 != (CMFCPopupMenu *)0x0);
        if (this_01 != (CObject *)0x0) {
          iVar2 = CObject::IsKindOf(this_01,(CRuntimeClass *)
                                            &PTR_s_CMFCPopupMenuBar_1012f74f_1_10161b40);
          if (iVar2 == 0) {
            iVar2 = (**(code **)(*(int *)this_01 + 0x164))();
            if (iVar2 != 0) {
              pHVar1 = *(HWND *)(this_01 + 0x20);
              pHVar5 = GetFocus();
              if ((pHVar5 != pHVar1) && (DAT_10160df0 != 0)) {
                CWnd::SetFocus((CWnd *)this_01);
              }
            }
          }
        }
      }
    }
    iVar2 = 1;
  }
  else {
LAB_10062b14:
    iVar2 = 0;
  }
  return iVar2;
}

