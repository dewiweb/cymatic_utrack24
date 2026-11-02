// rea decompile_all
// name: CDockingManager::OnMoveMiniFrame
// address: 0x1003ecc9
// body: available
// range: 0x1003ecc9-0x1003f060 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDockingManager::OnMoveMiniFrame(class CWnd *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CDockingManager::OnMoveMiniFrame(CDockingManager *this,CWnd *param_1)

{
  bool bVar1;
  SHORT SVar2;
  CObject *this_00;
  CObject *pCVar3;
  uint uVar4;
  CWnd *pCVar5;
  CWnd *pCVar6;
  clock_t cVar7;
  int iVar8;
  int local_34;
  int local_30;
  CObject *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  LONG local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  SVar2 = GetKeyState(0x11);
  if (-1 < SVar2) {
    this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,(CObject *)param_1);
    iVar8 = *(int *)(this + 0x1b8);
    if (((iVar8 == 0) || (*(int *)(iVar8 + 8) == 0)) || (bVar1 = true, *(int *)(iVar8 + 4) == 0)) {
      bVar1 = false;
    }
    if (this_00 != (CObject *)0x0) {
      local_18._0_4_ = 0;
      local_18._4_4_ = 0;
      local_18._8_4_ = 0;
      local_c = 0;
      GetWindowRect(*(HWND *)(param_1 + 0x20),(LPRECT)local_18);
      local_28 = (**(code **)(*(int *)this_00 + 0x16c))();
      local_24 = local_28;
      local_20 = local_28;
      local_1c = local_28;
      CGlobalUtils::AdjustRectToWorkArea
                ((CGlobalUtils *)&PTR_vftable_10160f68,(CRect *)local_18,(CRect *)&local_28);
      CWnd::SetWindowPos((CWnd *)this_00,(CWnd *)0x0,local_18._0_4_,local_18._4_4_,0,0,0x15);
      local_18._8_4_ = 0;
      local_c = 0;
      GetCursorPos((LPPOINT)(local_18 + 8));
      pCVar3 = (CObject *)(**(code **)(*(int *)this_00 + 0x1a4))();
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,pCVar3);
      if (((pCVar3 == (CObject *)0x0) ||
          (((!bVar1 && (uVar4 = (**(code **)(*(int *)pCVar3 + 0x1bc))(), (uVar4 & 0x40) != 0)) &&
           (iVar8 = CObject::IsKindOf(pCVar3,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c),
           iVar8 != 0)))) &&
         (local_2c = (CObject *)(**(code **)(*(int *)this + 0x14))(local_18._8_4_,local_c,this_00,1)
         , local_2c != (CObject *)0x0)) {
        pCVar5 = CWnd::FromHandlePermanent(*(HWND__ **)(local_2c + 0xbc));
        pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(this_00 + 0xbc));
        if (pCVar5 == pCVar6) {
          pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_10162338,local_2c);
          if (pCVar3 != (CObject *)0x0) {
            if (*(int *)(this + 0x124) == 0) {
              cVar7 = _clock();
              *(clock_t *)(this + 0x128) = cVar7;
              *(CObject **)(this + 0x124) = pCVar3;
            }
            if ((*(CObject **)(this + 0x124) == pCVar3) &&
               (cVar7 = _clock(), (int)DAT_10160704 < cVar7 - *(int *)(this + 0x128))) {
              (**(code **)(*(int *)pCVar3 + 0x244))(this_00,1);
              cVar7 = _clock();
              *(clock_t *)(this + 0x128) = cVar7;
              *(undefined4 *)(this + 0x124) = 0;
            }
          }
          goto LAB_1003f051;
        }
      }
      *(undefined4 *)(this + 0x124) = 0;
      if ((pCVar3 != (CObject *)0x0) &&
         (uVar4 = (**(code **)(*(int *)pCVar3 + 0x194))(), (uVar4 & 0xf000) != 0)) {
        local_2c = (CObject *)0x0;
        local_30 = (**(code **)(*(int *)pCVar3 + 0x2b4))(DAT_10160710,&local_2c);
        if (pCVar3 == local_2c) {
          local_30 = 0;
        }
        if (((local_2c != (CObject *)0x0) || (local_30 == 2)) && (!bVar1)) {
          if (local_2c == (CObject *)0x0) {
            local_34 = 0;
          }
          else {
            local_34 = CObject::IsKindOf(local_2c,(CRuntimeClass *)&PTR_s_CDockSite_1012dd78);
          }
          if (local_2c == (CObject *)0x0) {
            iVar8 = 1;
          }
          else {
            iVar8 = CObject::IsKindOf(local_2c,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
          }
          uVar4 = DAT_10160700;
          if ((local_34 != 0) || (uVar4 = DAT_10160704, iVar8 != 0)) {
            if ((*(CObject **)(this + 0x120) != local_2c) || (local_30 != *(int *)(this + 300))) {
              cVar7 = _clock();
              *(clock_t *)(this + 0x128) = cVar7;
              *(CObject **)(this + 0x120) = local_2c;
              *(int *)(this + 300) = local_30;
              CPaneFrameWnd::SetDockingTimer((CPaneFrameWnd *)this_00,uVar4);
            }
            cVar7 = _clock();
            if (cVar7 - *(int *)(this + 0x128) < (int)uVar4) goto LAB_1003f051;
          }
        }
        *(undefined4 *)(this + 0x120) = 0;
        cVar7 = _clock();
        *(clock_t *)(this + 0x128) = cVar7;
        *(undefined4 *)(this + 300) = 0;
        CPaneFrameWnd::KillDockingTimer((CPaneFrameWnd *)this_00);
        if (local_30 == 1) {
          if (local_2c != (CObject *)0x0) {
            (**(code **)(*(int *)this_00 + 0x18c))(0,0,1);
            iVar8 = (**(code **)(*(int *)pCVar3 + 0x2a0))(local_2c);
            if (iVar8 != 0) goto LAB_1003f051;
          }
        }
        else if (local_30 == 2) {
          if (!bVar1) {
            (**(code **)(*(int *)this_00 + 0x18c))(1,local_2c,1);
            goto LAB_1003f051;
          }
        }
        else if ((local_30 == 3) && (!bVar1)) {
          (**(code **)(*(int *)this_00 + 0x18c))(2,local_2c,1);
          (**(code **)(*(int *)this + 0x38))(0);
          goto LAB_1003f051;
        }
        (**(code **)(*(int *)this_00 + 0x18c))(0,local_2c,1);
      }
    }
  }
LAB_1003f051:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}

