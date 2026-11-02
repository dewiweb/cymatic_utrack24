// rea decompile_all
// name: CMFCRibbonPanelMenuBar::CalcSize
// address: 0x100a4747
// body: available
// range: 0x100a4747-0x100a4b47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a47c0 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCRibbonPanelMenuBar::CalcSize(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonPanelMenuBar::CalcSize(CMFCRibbonPanelMenuBar *this,int param_1)

{
  CFont *pCVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  AFX_MODULE_STATE *pAVar6;
  int iVar7;
  CMFCRibbonBaseElement *pCVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  CClientDC local_64 [20];
  int local_50;
  int local_4c;
  int local_48;
  CWaitCursor local_41;
  int local_40;
  int *local_3c;
  CPen *local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 100;
  local_8 = 0x100a4753;
  local_3c = (int *)param_1;
  if (*(int *)(this + 0xe30) != 0) {
    *(undefined4 *)param_1 = *(undefined4 *)(this + 0xd88);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0xd8c);
    goto LAB_100a4776;
  }
  *(undefined4 *)(*(int *)(this + 0xe20) + 0x28) = *(undefined4 *)(this + 0xd68);
  CClientDC::CClientDC(local_64,*(CWnd **)(this + 0xe1c));
  local_8 = 0;
  pCVar1 = CWnd::GetFont(*(CWnd **)(this + 0xe1c));
  local_38 = CDC::SelectObject((CDC *)local_64,(CPen *)pCVar1);
  if (local_38 == (CPen *)0x0) goto LAB_100a47c0;
  if (*(int *)(this + 0xd60) == 0) {
    if ((*(int *)(this + 0xd5c) != 0) && (*(int *)(*(int *)(this + 0xe20) + 0x248) == 0)) {
      pAVar6 = AfxGetModuleState();
      CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar6 + 4));
      local_8._0_1_ = 1;
      (**(code **)(**(int **)(this + 0xe20) + 0x24))(local_64,0x7fff);
      local_8 = (uint)local_8._1_3_ << 8;
      CWaitCursor::~CWaitCursor(&local_41);
    }
    piVar9 = *(int **)(this + 0xe20);
    local_18 = piVar9[0x92];
    if (local_18 == 0) {
      CDC::SelectObject((CDC *)local_64,local_38);
      *local_3c = 10;
      iVar7 = 10;
    }
    else {
      if (((piVar9[5] == 0) || (piVar9[9] != 0)) ||
         (iVar7 = (**(code **)(*piVar9 + 0x40))(), iVar7 != 0)) {
        iVar7 = *(int *)(this + 0xe20);
        if (*(int *)(this + 0xd68) != 0) {
          if (*(int *)(iVar7 + 0x248) < 1) goto LAB_100a47c0;
          piVar9 = *(int **)(this + 0xe20);
          local_1c = **(int **)(iVar7 + 0x244) + piVar9[0x14] * 2;
          local_18 = 0x7fff;
          goto LAB_100a4982;
        }
        if (*(int *)(iVar7 + 0x24) == 0) {
          if (*(int *)(iVar7 + 0x248) < 1) {
LAB_100a47c0:
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          local_2c = **(int **)(iVar7 + 0x244) + *(int *)(*(int *)(this + 0xe20) + 0x50) * 4;
          local_28 = *(int *)(*(int *)(this + 0xe1c) + 0x2a8) +
                     *(int *)(*(int *)(this + 0xe20) + 0x54) * -2;
        }
        else {
          if (*(int *)(iVar7 + 0x248) <= (int)(uint)(2 < local_18)) goto LAB_100a47c0;
          local_2c = *(int *)(*(int *)(iVar7 + 0x244) + (uint)(2 < local_18) * 4) +
                     *(int *)(iVar7 + 0x50) * 4;
          local_28 = 0x7fff;
        }
        piVar9 = *(int **)(this + 0xe20);
        local_34 = 0;
        local_30 = 0;
        puVar10 = &local_34;
      }
      else {
        piVar9 = *(int **)(this + 0xe20);
        local_18 = *(int *)(*(int *)(this + 0xe1c) + 0x2a8) + piVar9[0x15] * -2;
        local_1c = 0x7fff;
LAB_100a4982:
        local_20 = 0;
        local_24 = 0;
        puVar10 = &local_24;
      }
      (**(code **)(*piVar9 + 0x48))(local_64,puVar10);
      iVar7 = *(int *)(this + 0xe20);
      local_18 = *(int *)(iVar7 + 0x78) - *(int *)(iVar7 + 0x70);
      local_50 = *(int *)(iVar7 + 0x74) - *(int *)(iVar7 + 0x6c);
      CDC::SelectObject((CDC *)local_64,local_38);
      if (((*(int *)(this + 0xd5c) == 0) ||
          (iVar7 = FUN_100b296c(*(int *)(this + 0xe20)), iVar7 < 1)) ||
         (*(int *)(this + 0xd68) != 0)) {
        *local_3c = local_50;
        iVar7 = local_18;
      }
      else {
        local_4c = 0x7fff;
        local_18 = 0;
        local_48 = 0x7fff;
        local_40 = 0;
        local_38 = (CPen *)0x0;
        iVar7 = FUN_100b296c(*(int *)(this + 0xe20));
        if (0 < iVar7) {
          do {
            pCVar8 = CMFCRibbonPanel::GetElement(*(CMFCRibbonPanel **)(this + 0xe20),(int)local_38);
            if (*(int *)(pCVar8 + 0x18) <= local_4c) {
              local_4c = *(int *)(pCVar8 + 0x18);
            }
            if (*(int *)(pCVar8 + 0x1c) <= local_48) {
              local_48 = *(int *)(pCVar8 + 0x1c);
            }
            if (local_18 <= *(int *)(pCVar8 + 0x20)) {
              local_18 = *(int *)(pCVar8 + 0x20);
            }
            if (local_40 <= *(int *)(pCVar8 + 0x24)) {
              local_40 = *(int *)(pCVar8 + 0x24);
            }
            local_38 = local_38 + 1;
            iVar7 = FUN_100b296c(*(int *)(this + 0xe20));
          } while ((int)local_38 < iVar7);
        }
        iVar7 = *(int *)(*(int *)(this + 0xe20) + 0x54);
        *local_3c = (*(int *)(*(int *)(this + 0xe20) + 0x50) * 2 - local_4c) + local_18;
        iVar7 = (iVar7 * 2 - local_48) + local_40;
      }
    }
    local_3c[1] = iVar7;
  }
  else {
    *(undefined4 *)(*(int *)(this + 0xe20) + 0x1c) = 1;
    *(undefined4 *)(*(int *)(this + 0xe20) + 0x20) = *(undefined4 *)(this + 0xd64);
    local_1c = *(int *)(this + 0xd80);
    local_18 = *(int *)(this + 0xd84);
    local_24 = 0;
    local_20 = 0;
    (**(code **)(**(int **)(this + 0xe20) + 0x48))(local_64,&local_24);
    CDC::SelectObject((CDC *)local_64,local_38);
    iVar7 = *(int *)(this + 0xe20);
    local_1c = *(int *)(iVar7 + 0x74) - *(int *)(iVar7 + 0x6c);
    iVar12 = *(int *)(iVar7 + 0x78) - *(int *)(iVar7 + 0x70);
    local_18 = iVar12;
    iVar2 = CSize::operator!=((CSize *)(this + 0xd80),(tagSIZE)0x0);
    iVar11 = local_18;
    if (iVar2 != 0) {
      if (local_1c < *(int *)(this + 0xd80)) {
        local_1c = *(int *)(this + 0xd80);
      }
      iVar2 = *(int *)(this + 0xd84);
      if (iVar2 < 1) {
        iVar11 = *(int *)(iVar7 + 0x78) - *(int *)(iVar7 + 0x70);
      }
      else if (*(int *)(iVar7 + 0xb0) == 0) {
        if (iVar2 < iVar12) {
          pHVar3 = GetParent(*(HWND *)(this + 0x20));
          pCVar4 = CWnd::FromHandle(pHVar3);
          pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,
                                      (CObject *)pCVar4);
          if (pCVar5 != (CObject *)0x0) {
            *(undefined4 *)(pCVar5 + 0xef0) = 1;
          }
        }
        iVar11 = *(int *)(this + 0xd84);
      }
      else if (iVar12 <= iVar2) {
        iVar11 = iVar2;
      }
    }
    *local_3c = local_1c;
    local_3c[1] = iVar11;
  }
  local_8 = 0xffffffff;
  CClientDC::~CClientDC(local_64);
LAB_100a4776:
  FUN_100f90cf();
  return;
}

