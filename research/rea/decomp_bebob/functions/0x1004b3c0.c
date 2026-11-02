// rea decompile_all
// name: CMFCPropertyGridCtrl::PreTranslateMessage
// address: 0x1004b3c0
// body: available
// range: 0x1004b3c0-0x1004baff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCPropertyGridCtrl::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCPropertyGridCtrl::PreTranslateMessage(CMFCPropertyGridCtrl *this,tagMSG *param_1)

{
  uint uVar1;
  CMFCPropertyGridProperty *this_00;
  int *piVar2;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  int iVar3;
  AFX_MODULE_STATE *pAVar4;
  undefined4 *puVar5;
  LRESULT LVar6;
  BOOL BVar7;
  LPARAM lParam;
  HWND pHVar8;
  UINT UVar9;
  WPARAM WVar10;
  int local_4c;
  int local_48;
  int local_44;
  tagPOINT local_40;
  CWaitCursor local_35;
  tagRECT local_34;
  undefined1 local_24 [12];
  int local_18 [4];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x1004b3cc;
  uVar1 = param_1->message;
  pHVar8 = (HWND)0x0;
  if (uVar1 < 0x105) {
    if ((uVar1 == 0x104) ||
       ((0xa0 < uVar1 &&
        ((uVar1 < 0xa3 ||
         ((0xa3 < uVar1 &&
          ((uVar1 < 0xa6 || ((0xa6 < uVar1 && ((uVar1 < 0xa9 || (uVar1 == 0x100)))))))))))))) {
LAB_1004b451:
      SendMessageW(*(HWND *)(this + 0x94),0x407,0,(LPARAM)param_1);
      CMFCPropertyGridToolTipCtrl::Hide((CMFCPropertyGridToolTipCtrl *)(this + 0x1b0));
    }
  }
  else if (uVar1 == 0x200) {
    SendMessageW(*(HWND *)(this + 0x94),0x407,0,(LPARAM)param_1);
    if (param_1->wParam == 0) {
      local_24._8_4_ = 0;
      local_18[0] = 0;
      GetCursorPos((LPPOINT)(local_24 + 8));
      ScreenToClient(*(HWND *)(this + 0x20),(LPPOINT)(local_24 + 8));
      TrackToolTip(this,local_24._8_4_,local_18[0]);
    }
  }
  else if ((0x200 < uVar1) &&
          ((uVar1 < 0x203 || ((0x203 < uVar1 && ((uVar1 < 0x206 || (uVar1 - 0x207 < 2))))))))
  goto LAB_1004b451;
  if ((((param_1->message == 0x100) && (param_1->wParam == 9)) && (*(int *)(this + 0x398) != 0)) &&
     (iVar3 = (**(code **)(**(int **)(this + 0x398) + 0xa8))(), iVar3 != 0)) goto LAB_1004bac2;
  if ((((param_1->message == 0x104) && ((param_1->wParam == 0x28 || (param_1->wParam == 0x27)))) &&
      (iVar3 = *(int *)(this + 0x398), iVar3 != 0)) &&
     (((*(int *)(iVar3 + 0x60) != 0 && ((*(byte *)(iVar3 + 0x28) & 2) != 0)) &&
      (iVar3 = (**(code **)(*(int *)this + 0x17c))(iVar3,0), iVar3 != 0)))) {
    (**(code **)(**(int **)(this + 0x398) + 0x24))(&local_44);
    local_8 = 0;
    pAVar4 = AfxGetModuleState();
    CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar4 + 4));
    local_8._0_1_ = 1;
    (**(code **)(**(int **)(this + 0x398) + 0x3c))(0xffffffff,0xffffffff);
    puVar5 = (undefined4 *)(**(code **)(**(int **)(this + 0x398) + 0x24))(&local_48);
    local_8._0_1_ = 2;
    iVar3 = FUN_10005720(&local_44,(ushort *)*puVar5);
    local_35 = (CWaitCursor)(iVar3 != 0);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_10001030((undefined4 *)(local_48 + -0x10));
    if (local_35 != (CWaitCursor)0x0) {
      (**(code **)(*(int *)this + 0x170))(*(undefined4 *)(this + 0x398));
    }
    local_8 = local_8 & 0xffffff00;
LAB_1004b5b8:
    CWaitCursor::~CWaitCursor(&local_35);
    local_48 = local_44;
LAB_1004b5c3:
    FUN_10001030((undefined4 *)(local_48 + -0x10));
    goto LAB_1004bac2;
  }
  uVar1 = param_1->message;
  if ((((uVar1 == 0x100) && (param_1->wParam == 0xd)) &&
      (this_00 = *(CMFCPropertyGridProperty **)(this + 0x398),
      this_00 != (CMFCPropertyGridProperty *)0x0)) &&
     ((*(int *)(this_00 + 0x58) != 0 && (*(int *)(this_00 + 0x54) == 0)))) {
    CMFCPropertyGridProperty::Expand(this_00,(uint)(*(int *)(this_00 + 0x5c) == 0));
    goto LAB_1004bac2;
  }
  piVar2 = *(int **)(this + 0x398);
  if (((piVar2 != (int *)0x0) && (piVar2[0x15] != 0)) && (piVar2[0x18] != 0)) {
    if (uVar1 == 0x100) {
      WVar10 = param_1->wParam;
      if (WVar10 == 0xd) {
        if (piVar2[0x14] != 0) {
          (**(code **)(*piVar2 + 0x24))(&local_44);
          local_8 = 3;
          pAVar4 = AfxGetModuleState();
          CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar4 + 4));
          local_8._0_1_ = 4;
          (**(code **)(**(int **)(this + 0x398) + 0x3c))(0xffffffff,0xffffffff);
          puVar5 = (undefined4 *)(**(code **)(**(int **)(this + 0x398) + 0x24))(local_18);
          local_8._0_1_ = 5;
          iVar3 = FUN_10005720(&local_44,(ushort *)*puVar5);
          local_35 = (CWaitCursor)(iVar3 != 0);
          local_8 = CONCAT31(local_8._1_3_,4);
          FUN_10001030((undefined4 *)(local_18[0] + -0x10));
          if (local_35 != (CWaitCursor)0x0) {
            (**(code **)(*(int *)this + 0x170))(*(undefined4 *)(this + 0x398));
          }
          local_8 = CONCAT31(local_8._1_3_,3);
          goto LAB_1004b5b8;
        }
        if ((piVar2[0x2e] == 0) ||
           (LVar6 = SendMessageW(*(HWND *)(piVar2[0x2e] + 0x20),0x157,0,0), LVar6 == 0)) {
          iVar3 = (**(code **)(*(int *)this + 0x184))(1);
          if (iVar3 == 0) {
            MessageBeep(0xffffffff);
          }
        }
        else {
          if (*(int *)(*(int *)(this + 0x398) + 0xb4) != 0) {
            pHVar8 = *(HWND *)(*(int *)(*(int *)(this + 0x398) + 0xb4) + 0x20);
          }
          (**(code **)(**(int **)(this + 0x398) + 0x48))();
          BVar7 = IsWindow(pHVar8);
          if (BVar7 == 0) goto LAB_1004bac2;
          this = *(CMFCPropertyGridCtrl **)(*(int *)(this + 0x398) + 0xb4);
        }
      }
      else {
        if (WVar10 != 0x1b) {
          if ((WVar10 != 0x26) && (WVar10 != 0x28)) {
            if (piVar2[0x19] == 0) {
              (**(code **)(*piVar2 + 0x54))();
            }
            else {
              (**(code **)(*(int *)this + 0x1ac))(WVar10);
            }
            goto LAB_1004bac2;
          }
          if ((1 < piVar2[0x29]) &&
             ((piVar2[0x2e] == 0 ||
              (LVar6 = SendMessageW(*(HWND *)(piVar2[0x2e] + 0x20),0x157,0,0), LVar6 == 0)))) {
            (**(code **)(**(int **)(this + 0x398) + 0xac))(param_1->wParam != 0x26);
            goto LAB_1004bac2;
          }
          if (*(int *)(*(int *)(this + 0x398) + 0xb4) == 0) {
            pHVar8 = (HWND)0x0;
          }
          else {
            pHVar8 = *(HWND *)(*(int *)(*(int *)(this + 0x398) + 0xb4) + 0x20);
          }
          BVar7 = IsWindow(pHVar8);
          if (BVar7 == 0) goto LAB_1004bac2;
          lParam = param_1->lParam;
          WVar10 = param_1->wParam;
          iVar3 = *(int *)(*(int *)(this + 0x398) + 0xb4);
          UVar9 = 0x100;
LAB_1004b6fc:
          pHVar8 = *(HWND *)(iVar3 + 0x20);
          goto LAB_1004b6ff;
        }
        (**(code **)(*(int *)this + 0x184))(0);
      }
      CWnd::SetFocus((CWnd *)this);
      goto LAB_1004bac2;
    }
    if ((uVar1 < 0x200) || (0x20e < uVar1)) goto LAB_1004bac2;
    local_40.x = 0;
    local_40.y = 0;
    GetCursorPos(&local_40);
    ScreenToClient(*(HWND *)(this + 0x20),&local_40);
    if (*(int *)(*(int *)(this + 0x398) + 0xbc) != 0) {
      local_24._0_4_ = 0;
      local_24._4_4_ = 0;
      local_24._8_4_ = 0;
      local_18[0] = 0;
      GetClientRect(*(HWND *)(*(int *)(*(int *)(this + 0x398) + 0xbc) + 0x20),(LPRECT)local_24);
      MapWindowPoints(*(HWND *)(*(int *)(*(int *)(this + 0x398) + 0xbc) + 0x20),
                      *(HWND *)(this + 0x20),(LPPOINT)local_24,2);
      pt.y = local_40.y;
      pt.x = local_40.x;
      BVar7 = PtInRect((RECT *)local_24,pt);
      if (BVar7 != 0) {
        if (*(int *)(*(int *)(this + 0x398) + 0xbc) == 0) {
          pHVar8 = (HWND)0x0;
        }
        else {
          pHVar8 = *(HWND *)(*(int *)(*(int *)(this + 0x398) + 0xbc) + 0x20);
        }
        MapWindowPoints(*(HWND *)(this + 0x20),pHVar8,&local_40,1);
        lParam = CONCAT22((undefined2)local_40.y,(undefined2)local_40.x);
        WVar10 = param_1->wParam;
        UVar9 = param_1->message;
        iVar3 = *(int *)(*(int *)(this + 0x398) + 0xbc);
        goto LAB_1004b6fc;
      }
    }
    local_44 = *(int *)(*(int *)(this + 0x398) + 0xb4);
    if (*(int *)(*(int *)(this + 0x398) + 100) == 0) {
      HideCaret(*(HWND *)(local_44 + 0x20));
    }
    local_34.left = 0;
    local_34.top = 0;
    local_34.right = 0;
    local_34.bottom = 0;
    GetClientRect(*(HWND *)(local_44 + 0x20),&local_34);
    MapWindowPoints(*(HWND *)(local_44 + 0x20),*(HWND *)(this + 0x20),(LPPOINT)&local_34,2);
    pt_00.y = local_40.y;
    pt_00.x = local_40.x;
    BVar7 = PtInRect(&local_34,pt_00);
    if ((((BVar7 != 0) && (param_1->message == 0x203)) &&
        (iVar3 = (**(code **)(**(int **)(this + 0x398) + 0x44))(local_40.x,local_40.y), iVar3 != 0))
       || (((pt_01.y = local_40.y, pt_01.x = local_40.x, BVar7 = PtInRect(&local_34,pt_01),
            BVar7 != 0 && (param_1->message == 0x204)) &&
           (*(int *)(*(int *)(this + 0x398) + 100) == 0)))) goto LAB_1004bac2;
    pt_02.y = local_40.y;
    pt_02.x = local_40.x;
    BVar7 = PtInRect(&local_34,pt_02);
    iVar3 = local_44;
    if ((BVar7 != 0) ||
       (((UVar9 = param_1->message, UVar9 != 0x201 && (UVar9 != 0xa1)) &&
        ((UVar9 != 0x204 && (UVar9 != 0x207)))))) {
      MapWindowPoints(*(HWND *)(this + 0x20),*(HWND *)(local_44 + 0x20),&local_40,1);
      lParam = CONCAT22((undefined2)local_40.y,(undefined2)local_40.x);
      WVar10 = param_1->wParam;
      UVar9 = param_1->message;
      pHVar8 = *(HWND *)(iVar3 + 0x20);
LAB_1004b6ff:
      SendMessageW(pHVar8,UVar9,WVar10,lParam);
      goto LAB_1004bac2;
    }
    pt_03.y = local_40.y;
    pt_03.x = local_40.x;
    BVar7 = PtInRect((RECT *)(*(int *)(this + 0x398) + 0x3c),pt_03);
    if (BVar7 != 0) {
      (**(code **)(**(int **)(this + 0x398) + 0x24))(&local_48);
      local_8 = 6;
      pAVar4 = AfxGetModuleState();
      CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar4 + 4));
      local_8._0_1_ = 7;
      (**(code **)(*(int *)this + 0x180))(local_40.x,local_40.y);
      puVar5 = (undefined4 *)(**(code **)(**(int **)(this + 0x398) + 0x24))(&local_4c);
      local_8._0_1_ = 8;
      iVar3 = FUN_10005720(&local_48,(ushort *)*puVar5);
      local_35 = (CWaitCursor)(iVar3 != 0);
      local_8 = CONCAT31(local_8._1_3_,7);
      FUN_10001030((undefined4 *)(local_4c + -0x10));
      if (local_35 != (CWaitCursor)0x0) {
        (**(code **)(*(int *)this + 0x170))(*(undefined4 *)(this + 0x398));
      }
      local_8 = CONCAT31(local_8._1_3_,6);
      CWaitCursor::~CWaitCursor(&local_35);
      goto LAB_1004b5c3;
    }
    iVar3 = (**(code **)(*(int *)this + 0x184))(1);
    if (iVar3 == 0) goto LAB_1004bac2;
  }
  CWnd::PreTranslateMessage((CWnd *)this,param_1);
LAB_1004bac2:
  iVar3 = FUN_100f90cf();
  return iVar3;
}

