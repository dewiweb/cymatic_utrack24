// rea decompile_all
// name: CPaneFrameWnd::HitTest
// address: 0x1003a171
// body: available
// range: 0x1003a171-0x1003a5d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003a2d9 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __thiscall CPaneFrameWnd::HitTest(class CPoint,int)
   
   Library: Visual Studio 2010 Release */

long __thiscall CPaneFrameWnd::HitTest(CPaneFrameWnd *this,LONG param_2,LONG param_3,int param_4)

{
  int *piVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  POINT pt_04;
  POINT pt_05;
  POINT pt_06;
  POINT pt_07;
  POINT pt_08;
  POINT pt_09;
  POINT pt_10;
  POINT pt_11;
  POINT pt_12;
  POINT pt_13;
  POINT pt_14;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  CWnd *this_00;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  bool bVar8;
  tagRECT local_68;
  RECT local_58;
  tagRECT local_48;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar2 = IsCustModeAndNotFloatingToolbar(this);
  if (iVar2 == 0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    pt.y = param_3;
    pt.x = param_2;
    BVar3 = PtInRect(&local_18,pt);
    if (BVar3 != 0) {
      local_48.left = 0;
      local_48.top = 0;
      local_48.right = 0;
      local_48.bottom = 0;
      GetClientRect(*(HWND *)(this + 0x20),&local_48);
      CWnd::ClientToScreen((CWnd *)this,&local_48);
      pt_00.y = param_3;
      pt_00.x = param_2;
      BVar3 = PtInRect(&local_48,pt_00);
      if (BVar3 == 0) {
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        (**(code **)(*(int *)this + 0x1b8))(&local_38);
        iVar2 = GetSystemMetrics(0xd);
        iVar2 = iVar2 / 2;
        iVar4 = GetSystemMetrics(0xe);
        local_58.left = local_38 + local_18.left;
        local_58.top = local_34 + local_18.top;
        local_58.right = local_18.right - local_30;
        iVar4 = iVar4 / 2;
        local_58.bottom = *(int *)(this + 0xa0) + local_34 + local_18.top;
        pt_01.y = param_3;
        pt_01.x = param_2;
        BVar3 = PtInRect(&local_58,pt_01);
        if (BVar3 == 0) {
          bVar8 = true;
          this_00 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 200));
          if (this_00 != (CWnd *)0x0) {
            iVar5 = CObject::IsKindOf((CObject *)this_00,
                                      (CRuntimeClass *)&PTR_s_CMFCToolBar_10160470);
            bVar8 = iVar5 == 0;
            iVar5 = CObject::IsKindOf((CObject *)this_00,
                                      (CRuntimeClass *)&PTR_s_CMFCColorBar_10161cc0);
            if (iVar5 != 0) {
              AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCColorBar_10161cc0,(CObject *)this_00);
            }
          }
          local_28.left = 0;
          local_28.top = 0;
          local_28.right = 0;
          local_28.bottom = 0;
          if (bVar8) {
            SetRect(&local_28,local_18.left,local_18.top,local_18.left + iVar2,local_18.top + iVar4)
            ;
            pt_03.y = param_3;
            pt_03.x = param_2;
            BVar3 = PtInRect(&local_28,pt_03);
            if (BVar3 != 0) goto LAB_1003a5c6;
            SetRect(&local_28,local_18.left + iVar2,local_18.top,local_18.right - iVar2,
                    local_34 + local_18.top);
            pt_04.y = param_3;
            pt_04.x = param_2;
            BVar3 = PtInRect(&local_28,pt_04);
            if (BVar3 != 0) goto LAB_1003a5c6;
            SetRect(&local_28,local_18.right - iVar2,local_18.top,local_18.right,
                    iVar4 + local_18.top);
            pt_05.y = param_3;
            pt_05.x = param_2;
            BVar3 = PtInRect(&local_28,pt_05);
            if (BVar3 != 0) goto LAB_1003a5c6;
            SetRect(&local_28,local_18.right - local_30,local_18.top + iVar4,local_18.right,
                    local_18.bottom - iVar4);
            pt_06.y = param_3;
            pt_06.x = param_2;
            BVar3 = PtInRect(&local_28,pt_06);
            if (BVar3 != 0) goto LAB_1003a5c6;
            SetRect(&local_28,local_18.right - iVar2,local_18.bottom - iVar4,local_18.right,
                    local_18.bottom);
            pt_07.y = param_3;
            pt_07.x = param_2;
            BVar3 = PtInRect(&local_28,pt_07);
            if (BVar3 != 0) goto LAB_1003a5c6;
            SetRect(&local_28,local_18.left + iVar2,local_18.bottom - local_2c,
                    local_18.right - iVar2,local_18.bottom);
            pt_08.y = param_3;
            pt_08.x = param_2;
            BVar3 = PtInRect(&local_28,pt_08);
            if (BVar3 != 0) goto LAB_1003a5c6;
            SetRect(&local_28,local_18.left,local_18.bottom - iVar4,local_18.left + iVar2,
                    local_18.bottom);
            pt_09.y = param_3;
            pt_09.x = param_2;
            BVar3 = PtInRect(&local_28,pt_09);
            if (BVar3 != 0) goto LAB_1003a5c6;
            SetRect(&local_28,local_18.left,local_18.top + iVar4,local_38 + local_18.left,
                    local_18.bottom - iVar4);
            pt_10.y = param_3;
            pt_10.x = param_2;
            iVar2 = PtInRect(&local_28,pt_10);
          }
          else {
            SetRect(&local_28,local_18.left,local_18.top,local_18.right,local_34 + local_18.top);
            pt_11.y = param_3;
            pt_11.x = param_2;
            BVar3 = PtInRect(&local_28,pt_11);
            if (BVar3 != 0) goto LAB_1003a5c6;
            SetRect(&local_28,local_18.left,local_18.top,local_38 + local_18.left,local_18.bottom);
            pt_12.y = param_3;
            pt_12.x = param_2;
            BVar3 = PtInRect(&local_28,pt_12);
            if (BVar3 != 0) goto LAB_1003a5c6;
            SetRect(&local_28,local_18.left,local_18.bottom - local_2c,local_18.right,
                    local_18.bottom);
            pt_13.y = param_3;
            pt_13.x = param_2;
            BVar3 = PtInRect(&local_28,pt_13);
            if (BVar3 != 0) goto LAB_1003a5c6;
            SetRect(&local_28,local_18.right - local_30,local_18.top,local_18.right,local_18.bottom)
            ;
            pt_14.y = param_3;
            pt_14.x = param_2;
            iVar2 = PtInRect(&local_28,pt_14);
          }
          if (iVar2 == 0) {
            CWnd::Default((CWnd *)this);
          }
        }
        else if (param_4 == 0) {
          puVar7 = *(undefined4 **)(this + 0x100);
          do {
            if (puVar7 == (undefined4 *)0x0) goto LAB_1003a5c6;
            if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_10009068();
            }
            piVar1 = (int *)puVar7[2];
            puVar7 = (undefined4 *)*puVar7;
            (**(code **)(*piVar1 + 0xc))(&local_68);
            OffsetRect(&local_68,local_58.left,local_58.top);
            pt_02.y = param_3;
            pt_02.x = param_2;
            BVar3 = PtInRect(&local_68,pt_02);
          } while (BVar3 == 0);
          FUN_100b954e((int)piVar1);
        }
      }
    }
  }
LAB_1003a5c6:
  lVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar6;
}

