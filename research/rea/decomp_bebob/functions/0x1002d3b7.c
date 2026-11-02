// rea decompile_all
// name: CMFCToolBar::SetButtons
// address: 0x1002d3b7
// body: available
// range: 0x1002d3b7-0x1002d6d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002d3ef to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBar::SetButtons(unsigned int const *,int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBar::SetButtons(CMFCToolBar *this,uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined3 extraout_var;
  CRuntimeClass *pCVar4;
  CObject *pCVar5;
  CMFCToolBarButton *this_00;
  undefined4 uVar6;
  int *piVar7;
  HWND pHVar8;
  CWnd *pCVar9;
  int iVar10;
  CObject *pCVar11;
  int local_10c;
  CObject *local_104;
  int local_fc;
  char local_f5;
  CMFCToolBarButton local_f4 [112];
  CMFCToolBarButton local_84 [124];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x100;
  local_8 = 0x1002d3c6;
  if ((param_1 != (uint *)0x0) &&
     (bVar3 = FUN_1000c794((int)param_1), CONCAT31(extraout_var,bVar3) == 0)) {
LAB_1002d3ef:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  local_104 = (CObject *)0x0;
  if (*(undefined4 **)(this + 0xca0) != (undefined4 *)0x0) {
    pCVar4 = (CRuntimeClass *)(**(code **)**(undefined4 **)(this + 0xca0))();
    pCVar5 = CRuntimeClass::CreateObject(pCVar4);
    local_104 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCCustomizeButton_10161a18,pCVar5);
    (**(code **)(*(int *)local_104 + 0x14))(*(undefined4 *)(this + 0xca0));
  }
  (**(code **)(*(int *)this + 0x350))();
  while (*(int *)(this + 0xbf0) != 0) {
    pCVar5 = CObList::RemoveHead((CObList *)(this + 0xbe4));
    if (pCVar5 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar5 + 4))(1);
    }
  }
  if (param_1 == (uint *)0x0) {
    while (0 < param_2) {
      param_2 = param_2 + -1;
      (**(code **)(*(int *)this + 0x348))(0xffffffff);
    }
  }
  else {
    local_fc = *(int *)(this + 0xb90);
    if (0 < param_2) {
      local_10c = param_2;
      do {
        uVar1 = *param_1;
        param_1 = param_1 + 1;
        this_00 = FUN_1000858a(0x70);
        local_8 = 0;
        if (this_00 == (CMFCToolBarButton *)0x0) {
          pCVar5 = (CObject *)0x0;
        }
        else {
          pCVar5 = (CObject *)
                   CMFCToolBarButton::CMFCToolBarButton(this_00,uVar1,-1,(wchar_t *)0x0,0,0);
        }
        local_8 = 0xffffffff;
        CObList::AddTail((CObList *)(this + 0xbe4),pCVar5);
        if (uVar1 == 0) {
          (**(code **)(*(int *)this + 0x348))(0xffffffff);
        }
        else if (param_3 == 0) {
          iVar10 = CMap<unsigned_int,unsigned_int,int,int>::Lookup
                             ((CMap<unsigned_int,unsigned_int,int,int> *)&PTR_vftable_1016041c,uVar1
                              ,&local_fc);
          if (iVar10 != 0) {
            uVar6 = CMFCToolBarButton::CMFCToolBarButton
                              (local_f4,uVar1,local_fc,(wchar_t *)0x0,0,*(int *)(this + 0xb04));
            local_8 = 2;
            (**(code **)(*(int *)this + 0x344))(uVar6,0xffffffff);
            local_8 = 0xffffffff;
            CMFCToolBarButton::~CMFCToolBarButton(local_f4);
          }
        }
        else {
          uVar6 = CMFCToolBarButton::CMFCToolBarButton
                            (local_84,uVar1,local_fc,(wchar_t *)0x0,0,*(int *)(this + 0xb04));
          local_8 = 1;
          iVar10 = (**(code **)(*(int *)this + 0x344))(uVar6,0xffffffff);
          if ((iVar10 < 0) || (local_f5 = '\x01', *(int *)(this + 0xb04) != 0)) {
            local_f5 = '\0';
          }
          local_8 = 0xffffffff;
          CMFCToolBarButton::~CMFCToolBarButton(local_84);
          if (local_f5 != '\0') {
            piVar7 = CMap<unsigned_int,unsigned_int,int,int>::operator[]
                               ((CMap<unsigned_int,unsigned_int,int,int> *)&PTR_vftable_1016041c,
                                uVar1);
            *piVar7 = local_fc;
          }
          local_fc = local_fc + 1;
        }
        local_10c = local_10c + -1;
      } while (local_10c != 0);
    }
    if (local_104 != (CObject *)0x0) {
      (**(code **)(*(int *)this + 0x340))(local_104,0xffffffff);
      *(CObject **)(this + 0xca0) = local_104;
    }
    if (*(int *)(this + 0x20) != 0) {
      (**(code **)(*(int *)this + 0x38c))();
      pCVar9 = *(CWnd **)(this + 0x98);
      if (pCVar9 == (CWnd *)0x0) {
        pHVar8 = GetParent(*(HWND *)(this + 0x20));
        pCVar9 = CWnd::FromHandle(pHVar8);
        if (pCVar9 == (CWnd *)0x0) goto LAB_1002d6cd;
      }
      SendMessageW(*(HWND *)(pCVar9 + 0x20),DAT_10166ea4,*(WPARAM *)(this + 0xca4),0);
      while (*(int *)(this + 0xc0c) != 0) {
        pCVar5 = CObList::RemoveHead((CObList *)(this + 0xc00));
        if (pCVar5 != (CObject *)0x0) {
          (**(code **)(*(int *)pCVar5 + 4))(1);
        }
      }
      puVar2 = *(undefined4 **)(this + 0xbcc);
      while (puVar2 != (undefined4 *)0x0) {
        if (puVar2 == (undefined4 *)0x0) goto LAB_1002d3ef;
        pCVar5 = (CObject *)puVar2[2];
        puVar2 = (undefined4 *)*puVar2;
        if ((pCVar5 != (CObject *)0x0) &&
           (iVar10 = CObject::IsKindOf(pCVar5,(CRuntimeClass *)&PTR_s_CMFCToolBarButton_1016154c),
           iVar10 != 0)) {
          pCVar4 = (CRuntimeClass *)(*(code *)**(undefined4 **)pCVar5)();
          pCVar11 = CRuntimeClass::CreateObject(pCVar4);
          (**(code **)(*(int *)pCVar11 + 0x14))(pCVar5);
          CObList::AddTail((CObList *)(this + 0xc00),pCVar11);
        }
      }
    }
  }
LAB_1002d6cd:
  iVar10 = FUN_100f90cf();
  return iVar10;
}

