// rea decompile_all
// name: CMFCToolBar::OnMouseMove
// address: 0x1002ae86
// body: available
// range: 0x1002ae86-0x1002b2b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002b15b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBar::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBar::OnMouseMove(CMFCToolBar *this,undefined4 param_1,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CMFCToolBarMenuButton *pCVar7;
  int iVar8;
  uint uVar9;
  CObject *pCVar10;
  UINT uElapse;
  CClientDC local_50 [20];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x1002ae92;
  if (*(int *)(this + 0x164) == 0) {
    if ((DAT_10166e54 != 0) && (*(int *)(this + 0xb04) == 0)) {
      if (*(int *)(this + 0xb30) != 0) {
        if (4 < param_3 - *(int *)(*(int *)(this + 0xc98) + 0x54)) {
          CClientDC::CClientDC(local_50,(CWnd *)this);
          local_8 = 0;
          local_24.left = ((tagRECT *)(this + 0xc68))->left;
          local_24.top = *(LONG *)(this + 0xc6c);
          local_24.right = *(LONG *)(this + 0xc70);
          local_24.bottom = *(LONG *)(this + 0xc74);
          *(int *)(this + 0xc70) = param_3;
          CDC::DrawDragRect((CDC *)local_50,(tagRECT *)(this + 0xc68),(tagSIZE)0x200000002,&local_24
                            ,(tagSIZE)0x200000002,(CBrush *)0x0,(CBrush *)0x0);
          local_8 = 0xffffffff;
          CClientDC::~CClientDC(local_50);
        }
        SetCursor(DAT_10166b88);
      }
      goto LAB_1002b2a9;
    }
    iVar2 = CSize::operator!=((CSize *)(this + 0xc88),(tagSIZE)0xffffffffffffffff);
    if (((iVar2 != 0) && (lVar3 = _labs(*(int *)(this + 0xc88) - param_3), lVar3 < 1)) &&
       (lVar3 = _labs(*(int *)(this + 0xc8c) - param_4), lVar3 < 1)) {
      *(int *)(this + 0xc88) = param_3;
      *(int *)(this + 0xc8c) = param_4;
      goto LAB_1002b2a9;
    }
    iVar2 = *(int *)(this + 0xb7c);
    *(int *)(this + 0xc8c) = param_4;
    *(int *)(this + 0xc88) = param_3;
    local_28 = iVar2;
    iVar4 = (**(code **)(*(int *)this + 0x390))(param_3,param_4);
    *(int *)(this + 0xb7c) = iVar4;
    if ((*(int *)(this + 0xb20) == 0) || (iVar4 != -1)) {
LAB_1002afe1:
      pCVar7 = GetDroppedDownMenu(this,(int *)0x0);
      if ((pCVar7 == (CMFCToolBarMenuButton *)0x0) ||
         (iVar8 = (**(code **)(*(int *)pCVar7 + 0xe8))(), iVar8 == 0)) {
        if (*(int *)(this + 0xb7c) == -1) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_100261ef(this,*(int *)(this + 0xb7c));
          if ((iVar2 != 0) &&
             (((*(uint *)(iVar2 + 0x24) & 1) != 0 ||
              (((*(uint *)(iVar2 + 0x24) & 0x40000) != 0 &&
               (iVar8 = (**(code **)(*(int *)this + 1000))(), iVar8 == 0)))))) {
            *(undefined4 *)(this + 0xb7c) = 0xffffffff;
          }
        }
        if ((((*(int *)(this + 0xb38) != 0) && (*(int *)(this + 0xb7c) == -1)) &&
            (DAT_10166c3c != 0)) &&
           ((iVar8 = (**(code **)(*(int *)this + 0x390))(param_3,param_4), iVar8 != -1 &&
            (iVar8 != *(int *)(this + 0xb98))))) {
          *(int *)(this + 0xb98) = iVar8;
          SetTimer(*(HWND *)(this + 0x20),0x14,500,(TIMERPROC)0x0);
        }
        if (*(int *)(this + 0xb34) == 0) {
          local_34 = *(undefined4 *)(this + 0x20);
          local_30 = 0xffffffff;
          *(undefined4 *)(this + 0xb34) = 1;
          local_3c = 0x10;
          local_38 = 2;
          AFXTrackMouse((tagTRACKMOUSEEVENT *)&local_3c);
        }
        if (local_28 != iVar4) {
          if ((iVar4 == -1) ||
             (((*(int *)(this + 0xb38) == 0 && (iVar4 != *(int *)(this + 0xb78))) &&
              (*(int *)(this + 0xb78) != -1)))) {
            if (((*(int *)(this + 0xb78) == -1) || ((*(int *)(this + 0xb38) != 0 && (iVar4 == -1))))
               && (DAT_10166e78 == 0)) {
              pCVar6 = CWnd::GetOwner((CWnd *)this);
              SendMessageW(*(HWND *)(pCVar6 + 0x20),0x362,0xe001,0);
            }
          }
          else if (iVar2 != 0) {
            (**(code **)(*(int *)this + 0x414))(*(undefined4 *)(iVar2 + 0x20));
          }
        }
        if (local_28 != *(int *)(this + 0xb7c)) {
          local_2c = 0;
          if (*(int *)(this + 0xb78) != -1) {
            iVar2 = FUN_100261ef(this,*(int *)(this + 0xb78));
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_10009068();
            }
            uVar9 = *(uint *)(iVar2 + 0x24) & 0xfffdffff;
            if (*(int *)(this + 0xb7c) == *(int *)(this + 0xb78)) {
              uVar9 = uVar9 | 0x20000;
            }
            if (uVar9 != *(uint *)(iVar2 + 0x24)) {
              (**(code **)(*(int *)this + 0x374))(*(int *)(this + 0xb78),uVar9);
              local_2c = 1;
            }
          }
          if ((((*(int *)(this + 0xb38) != 0) || (*(int *)(this + 0xb78) == -1)) ||
              (local_28 == *(int *)(this + 0xb78))) && (local_28 != -1)) {
            InvalidateButton(this,local_28);
            local_2c = 1;
          }
          if ((((*(int *)(this + 0xb38) != 0) || (*(int *)(this + 0xb78) == -1)) ||
              (*(int *)(this + 0xb7c) == *(int *)(this + 0xb78))) && (*(int *)(this + 0xb7c) != -1))
          {
            InvalidateButton(this,*(int *)(this + 0xb7c));
            local_2c = 1;
            if (DAT_10166c3c != 0) {
              bVar1 = false;
              pCVar10 = (CObject *)FUN_100261ef(this,*(int *)(this + 0xb7c));
              pCVar10 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10161420,
                                           pCVar10);
              if ((pCVar10 != (CObject *)0x0) && (*(int *)(pCVar10 + 0x90) != 0)) {
                bVar1 = true;
              }
              iVar2 = (**(code **)(*(int *)this + 0x390))(param_3,param_4);
              if (iVar2 != *(int *)(this + 0xb98)) {
                *(int *)(this + 0xb98) = iVar2;
                KillTimer(*(HWND *)(this + 0x20),0x14);
                if (bVar1) {
                  uElapse = 0x514;
                }
                else {
                  uElapse = 500;
                }
                SetTimer(*(HWND *)(this + 0x20),0x14,uElapse,(TIMERPROC)0x0);
              }
            }
          }
          (**(code **)(*(int *)this + 0x3b0))(*(undefined4 *)(this + 0xb7c));
          if (local_2c != 0) {
            UpdateWindow(*(HWND *)(this + 0x20));
          }
        }
        goto LAB_1002b29b;
      }
    }
    else {
      pHVar5 = GetFocus();
      pCVar6 = CWnd::FromHandle(pHVar5);
      if (pCVar6 != (CWnd *)this) goto LAB_1002afe1;
    }
    *(int *)(this + 0xb7c) = iVar2;
  }
  else {
LAB_1002b29b:
    CPane::OnMouseMove((CPane *)this,param_1,param_3,param_4);
  }
LAB_1002b2a9:
  FUN_100f90cf();
  return;
}

