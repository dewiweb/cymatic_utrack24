// rea decompile_all
// name: CPane::OnLButtonUp
// address: 0x1008852c
// body: available
// range: 0x1008852c-0x10088706 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPane::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPane::OnLButtonUp(CPane *this,WPARAM param_1,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  BOOL BVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CDockingManager *pCVar5;
  uint uVar6;
  CPane *pCVar7;
  int local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)this + 0x224))(0);
  if (this[0x160] == (CPane)0x0) {
    if ((iVar1 != 0) && (this[0x162] == (CPane)0x0)) {
      BVar2 = IsWindowVisible(*(HWND *)(iVar1 + 0x20));
      if (BVar2 != 0) {
        MapWindowPoints(*(HWND *)(this + 0x20),*(HWND *)(iVar1 + 0x20),(LPPOINT)&param_3,1);
        SendMessageW(*(HWND *)(iVar1 + 0x20),0x202,param_1,CONCAT22(param_4,param_3));
        goto LAB_100886f6;
      }
    }
  }
  else {
    ReleaseCapture();
    this[0x160] = (CPane)0x0;
    if (param_1 != 0xffff) {
      if (*(HWND *)(this + 0x174) != (HWND)0x0) {
        BVar2 = IsWindow(*(HWND *)(this + 0x174));
        if (BVar2 != 0) {
          DestroyWindow(*(HWND *)(this + 0x174));
        }
      }
      *(undefined4 *)(this + 0x174) = 0;
    }
    (**(code **)(*(int *)this + 0x30c))(0);
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    pCVar5 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar4);
    if ((pCVar5 != (CDockingManager *)0x0) &&
       (*(CSmartDockingManager **)(pCVar5 + 0x1b8) != (CSmartDockingManager *)0x0)) {
      CSmartDockingManager::Stop(*(CSmartDockingManager **)(pCVar5 + 0x1b8));
    }
    uVar6 = (**(code **)(*(int *)this + 0x1b4))();
    if (((uVar6 & 2) != 0) && ((*(int *)(this + 0x1ac) != 0 || (-1 < *(int *)(this + 0x1b0))))) {
      local_18.left = *(LONG *)(this + 0x188);
      local_18.top = *(LONG *)(this + 0x18c);
      local_18.right = *(LONG *)(this + 400);
      local_18.bottom = *(LONG *)(this + 0x194);
      if (*(int *)(this + 0x1ac) != 0) {
        uVar6 = (**(code **)(*(int *)this + 0x1b4))();
        if ((uVar6 & 2) != 0) {
          CMFCDragFrameImpl::EndDrawDragFrame((CMFCDragFrameImpl *)(this + 0x17c),1);
        }
      }
      local_1c = 0;
      (**(code **)(*(int *)this + 0x31c))();
      pCVar7 = (CPane *)(**(code **)(*(int *)this + 0x2b0))(&local_1c);
      if (local_1c == 0) {
        BVar2 = IsRectEmpty(&local_18);
        if ((BVar2 == 0) && (pCVar7 != this)) {
          (**(code **)(*(int *)this + 0x1f8))
                    (local_18.left,local_18.top,local_18.right,local_18.bottom,5,1);
        }
      }
      goto LAB_100886f6;
    }
  }
  this[0x162] = (CPane)0x0;
  if (*(void **)(this + 0xb0) != (void *)0x0) {
    FUN_1008e4fd(*(void **)(this + 0xb0),'\0',(CPane *)0x0);
  }
  CWnd::Default((CWnd *)this);
LAB_100886f6:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

