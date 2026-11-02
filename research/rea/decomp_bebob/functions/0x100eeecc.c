// rea decompile_all
// name: CMFCTasksPane::OnLButtonUp
// address: 0x100eeecc
// body: available
// range: 0x100eeecc-0x100ef118 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ef0c5 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    protected: void __thiscall CMFCTasksPane::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCTasksPane::OnLButtonUp(CMFCTasksPane *this,WPARAM param_1,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  CMFCTasksPaneTask *pCVar2;
  bool bVar3;
  int iVar4;
  CMFCTasksPaneTask *pCVar5;
  undefined4 *puVar6;
  LONG *pLVar7;
  int iVar8;
  int local_40;
  int local_3c;
  RECT local_38;
  RECT local_28;
  LONG local_18 [5];
  
  local_18[4] = DAT_10163564 ^ (uint)&stack0xfffffffc;
  CDockablePane::OnLButtonUp((CDockablePane *)this,param_1,param_3,param_4);
  if ((((*(int *)(this + 0x444) != 0) || (*(int *)(this + 0x448) != 0)) ||
      (*(int *)(this + 0x518) != 0)) || (*(int *)(this + 0x51c) != 0)) {
    ReleaseCapture();
    iVar8 = *(int *)(this + 0x518);
    if (((iVar8 == 0) ||
        (iVar4 = (**(code **)(*(int *)this + 1000))(param_3,param_4), iVar8 != iVar4)) ||
       (*(int *)(this + 0x51c) != iVar8)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    *(undefined4 *)(this + 0x51c) = 0;
    if (bVar3) {
      *(undefined4 *)(this + 0x518) = 0;
      *(uint *)(iVar8 + 0x30) = (uint)(*(int *)(iVar8 + 0x30) == 0);
      if (*(int *)(this + 0x360) != 0) {
        *(int *)(this + 0x520) = iVar8;
        iVar4 = *(int *)(iVar8 + 0x50);
        iVar1 = *(int *)(iVar8 + 0x48);
        *(int *)(this + 0x3f4) = *(int *)(iVar8 + 0x4c) - *(int *)(iVar8 + 0x44);
        *(int *)(this + 0x3f8) = iVar4 - iVar1;
        SetTimer(*(HWND *)(this + 0x20),4,0x1e,(TIMERPROC)0x0);
        _DAT_10169edc = _clock();
      }
      AdjustScroll(this);
      (**(code **)(*(int *)this + 0x3e4))(0);
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
      SendMessageW(*(HWND *)(this + 0x20),0x200,param_1,
                   CONCAT22((undefined2)param_4,(undefined2)param_3));
    }
    else {
      if (iVar8 == 0) {
        local_18[0] = 0;
        local_18[1] = 0;
        local_18[2] = 0;
        local_18[3] = 0;
        pLVar7 = local_18;
      }
      else {
        pLVar7 = (LONG *)(iVar8 + 0x34);
      }
      local_38.left = *pLVar7;
      local_38.top = pLVar7[1];
      local_38.right = pLVar7[2];
      local_38.bottom = pLVar7[3];
      RedrawWindow(*(HWND *)(this + 0x20),&local_38,(HRGN)0x0,0x105);
      pCVar2 = *(CMFCTasksPaneTask **)(this + 0x444);
      if (((pCVar2 == (CMFCTasksPaneTask *)0x0) ||
          (pCVar5 = TaskHitTest(this,param_3,param_4), pCVar2 != pCVar5)) ||
         (bVar3 = true, *(CMFCTasksPaneTask **)(this + 0x448) != pCVar2)) {
        bVar3 = false;
      }
      if (pCVar2 == (CMFCTasksPaneTask *)0x0) {
        local_18[0] = 0;
        local_18[1] = 0;
        local_18[2] = 0;
        local_18[3] = 0;
        pCVar5 = (CMFCTasksPaneTask *)local_18;
      }
      else {
        pCVar5 = pCVar2 + 0xc;
      }
      local_28.left = *(LONG *)pCVar5;
      local_28.top = *(LONG *)(pCVar5 + 4);
      local_28.right = *(LONG *)(pCVar5 + 8);
      local_28.bottom = *(LONG *)(pCVar5 + 0xc);
      iVar8 = 0;
      *(undefined4 *)(this + 0x444) = 0;
      *(undefined4 *)(this + 0x448) = 0;
      RedrawWindow(*(HWND *)(this + 0x20),&local_28,(HRGN)0x0,0x105);
      if (bVar3) {
        local_3c = -1;
        puVar6 = *(undefined4 **)(*(int *)(pCVar2 + 4) + 0x10);
        while (iVar4 = local_3c, puVar6 != (undefined4 *)0x0) {
          if (puVar6 == (undefined4 *)0x0) goto LAB_100ef0c5;
          iVar4 = iVar8;
          if ((CMFCTasksPaneTask *)puVar6[2] == pCVar2) break;
          iVar8 = iVar8 + 1;
          puVar6 = (undefined4 *)*puVar6;
        }
        local_3c = iVar4;
        local_40 = -1;
        iVar8 = 0;
        puVar6 = *(undefined4 **)(this + 0x46c);
        while (iVar4 = local_40, puVar6 != (undefined4 *)0x0) {
          if (puVar6 == (undefined4 *)0x0) {
LAB_100ef0c5:
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          iVar4 = iVar8;
          if (*(int *)(pCVar2 + 4) == puVar6[2]) break;
          iVar8 = iVar8 + 1;
          puVar6 = (undefined4 *)*puVar6;
        }
        local_40 = iVar4;
        (**(code **)(*(int *)this + 0x3b4))
                  (local_40,local_3c,*(undefined4 *)(pCVar2 + 0x24),*(undefined4 *)(pCVar2 + 0x28));
      }
    }
  }
  __security_check_cookie(local_18[4] ^ (uint)&stack0xfffffffc);
  return;
}

