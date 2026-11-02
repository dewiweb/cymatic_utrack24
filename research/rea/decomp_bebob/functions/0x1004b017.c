// rea decompile_all
// name: CMFCPropertyGridCtrl::TrackToolTip
// address: 0x1004b017
// body: available
// range: 0x1004b017-0x1004b305 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::TrackToolTip(class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCPropertyGridCtrl::TrackToolTip(CMFCPropertyGridCtrl *this,int param_2,LONG param_3)

{
  POINT pt;
  BOOL BVar1;
  HWND pHVar2;
  CMFCPropertyGridProperty *pCVar3;
  long lVar4;
  undefined **ppuVar5;
  int *piVar6;
  undefined4 *puVar7;
  CFont *pCVar8;
  WPARAM wParam;
  HWND pHVar9;
  CMFCPropertyGridProperty *pCVar10;
  tagPOINT local_50;
  uint local_48;
  CMFCPropertyGridProperty *local_44;
  int local_40;
  int local_3c;
  char local_35;
  tagRECT local_34;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x1004b023;
  local_48 = 0;
  if ((*(int *)(this + 0x348) != 0) || (*(int *)(this + 0x34c) != 0)) goto LAB_1004b2fe;
  local_50.x = param_2;
  local_50.y = param_3;
  ClientToScreen(*(HWND *)(this + 0x20),&local_50);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x1d0),&local_24);
  pt.y = local_50.y;
  pt.x = local_50.x;
  BVar1 = PtInRect(&local_24,pt);
  if (BVar1 != 0) {
    BVar1 = IsWindowVisible(*(HWND *)(this + 0x1d0));
    if (BVar1 != 0) goto LAB_1004b2fe;
  }
  BVar1 = IsWindowVisible(*(HWND *)(this + 0x1d0));
  if (BVar1 == 0) {
    SetRectEmpty(&local_24);
  }
  pHVar9 = *(HWND *)(this + 0x20);
  pHVar2 = GetCapture();
  if (pHVar2 == pHVar9) {
    ReleaseCapture();
  }
  pCVar3 = HitTest(this,param_2,param_3,0,0);
  local_44 = pCVar3;
  if (pCVar3 != (CMFCPropertyGridProperty *)0x0) {
    lVar4 = _labs((param_2 - *(int *)(this + 0x318)) - *(int *)(this + 0x2e8));
    if (2 < lVar4) {
      if (*(int *)(pCVar3 + 0x54) != 0) goto LAB_1004b2fe;
      ppuVar5 = FUN_1000ad47();
      FUN_10005e00(&local_3c,(int *)ppuVar5);
      pCVar10 = local_44;
      local_8 = 0;
      local_34.left = *(LONG *)(pCVar3 + 0x2c);
      local_34.top = *(LONG *)(pCVar3 + 0x30);
      local_34.right = *(LONG *)(pCVar3 + 0x34);
      local_34.bottom = *(LONG *)(pCVar3 + 0x38);
      local_40 = 0;
      if (param_2 < *(int *)(this + 0x318) + *(int *)(this + 0x2e8)) {
        if ((*(int *)(local_44 + 0x58) == 0) ||
           (local_34.left = local_34.left + *(int *)(this + 0x314), local_34.left < param_2)) {
          if (*(int *)(local_44 + 0x6c) != 0) {
            if (*(int *)(this + 0x2c0) == 0) {
LAB_1004b192:
              local_35 = '\x01';
            }
            else {
              piVar6 = (int *)(**(code **)(*(int *)local_44 + 0x58))(&local_44);
              local_48 = 1;
              local_35 = '\0';
              if (*(int *)(*piVar6 + -0xc) == 0) goto LAB_1004b192;
            }
            if ((local_48 & 1) != 0) {
              FUN_10001030((undefined4 *)(local_44 + -0x10));
            }
            if (local_35 != '\0') {
              FUN_10007c90(&local_3c,(undefined4 *)(pCVar10 + 0x84));
            }
          }
          goto LAB_1004b24e;
        }
LAB_1004b2e8:
        CMFCPropertyGridToolTipCtrl::Deactivate((CMFCPropertyGridToolTipCtrl *)(this + 0x1b0));
      }
      else {
        if (*(int *)(local_44 + 0x70) != 0) {
          if (*(int *)(this + 0x2c0) == 0) {
LAB_1004b1ef:
            local_35 = '\x01';
          }
          else {
            piVar6 = (int *)(**(code **)(*(int *)local_44 + 0x5c))(&local_40);
            local_48 = 2;
            local_35 = '\0';
            if (*(int *)(*piVar6 + -0xc) == 0) goto LAB_1004b1ef;
          }
          if ((local_48 & 2) != 0) {
            FUN_10001030((undefined4 *)(local_40 + -0x10));
          }
          if (local_35 != '\0') {
            puVar7 = (undefined4 *)(**(code **)(*(int *)pCVar10 + 0x24))(&local_40);
            local_8._0_1_ = 1;
            FUN_10007c90(&local_3c,puVar7);
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_10001030((undefined4 *)(local_40 + -0x10));
          }
        }
        local_34.left = *(int *)(this + 0x318) + 1 + *(int *)(this + 0x2e8);
        local_40 = 1;
        pCVar10 = local_44;
LAB_1004b24e:
        if (*(int *)(local_3c + -0xc) == 0) goto LAB_1004b2e8;
        CWnd::ClientToScreen((CWnd *)this,&local_34);
        if ((local_24.left != local_34.left) || (local_24.top != local_34.top)) {
          *(undefined4 *)(this + 0x238) = 4;
          if ((local_40 == 0) || ((*(int *)(pCVar10 + 0x74) == 0 || (*(int *)(this + 0x2cc) == 0))))
          {
            pCVar8 = CWnd::GetFont((CWnd *)this);
          }
          else {
            pCVar8 = (CFont *)(this + 0x2e0);
          }
          if (pCVar8 == (CFont *)0x0) {
            wParam = 0;
          }
          else {
            wParam = *(WPARAM *)(pCVar8 + 4);
          }
          SendMessageW(*(HWND *)(this + 0x1d0),0x30,wParam,1);
          CMFCPropertyGridToolTipCtrl::Track
                    ((CMFCPropertyGridToolTipCtrl *)(this + 0x1b0),local_34.left,local_34.top,
                     local_34.right,local_34.bottom,&local_3c);
          pHVar9 = SetCapture(*(HWND *)(this + 0x20));
          CWnd::FromHandle(pHVar9);
        }
      }
      FUN_10001030((undefined4 *)(local_3c + -0x10));
      goto LAB_1004b2fe;
    }
  }
  CMFCPropertyGridToolTipCtrl::Deactivate((CMFCPropertyGridToolTipCtrl *)(this + 0x1b0));
LAB_1004b2fe:
  FUN_100f90cf();
  return;
}

