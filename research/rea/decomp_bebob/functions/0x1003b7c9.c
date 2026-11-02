// rea decompile_all
// name: CPaneFrameWnd::SetDockState
// address: 0x1003b7c9
// body: available
// range: 0x1003b7c9-0x1003ba0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneFrameWnd::SetDockState(class CDockingManager *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneFrameWnd::SetDockState(CPaneFrameWnd *this,CDockingManager *param_1)

{
  CWnd *this_00;
  int iVar1;
  BOOL BVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  int *piVar5;
  undefined1 local_34 [4];
  CPaneFrameWnd *local_30;
  CWnd *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_30 = this;
  if (*(int *)(this + 0xb4) != 0) {
    this_00 = (CWnd *)(**(code **)(*(int *)param_1 + 0x24))(*(int *)(this + 0xb4),1);
    if (this_00 != (CWnd *)0x0) {
      iVar1 = (**(code **)(*(int *)this_00 + 0x1c8))();
      if (iVar1 != 0) {
        BVar2 = IsWindow(*(HWND *)(this_00 + 0x20));
        if (BVar2 != 0) {
          iVar1 = (**(code **)(*(int *)this_00 + 0x168))();
          if (iVar1 != 0) {
            pHVar3 = GetParent(*(HWND *)(this_00 + 0x20));
            pCVar4 = CWnd::FromHandle(pHVar3);
            pHVar3 = GetParent(*(HWND *)(pCVar4 + 0x20));
            local_2c = CWnd::FromHandle(pHVar3);
            pCVar4 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xbc));
            CWnd::SetParent(this_00,pCVar4);
            (**(code **)(*(int *)local_2c + 0x3c4))(this_00);
            iVar1 = CObject::IsKindOf((CObject *)this_00,
                                      (CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
            if (iVar1 != 0) {
              (**(code **)(*(int *)this_00 + 0x1ec))(1);
            }
            CWnd::ShowWindow(this_00,5);
          }
          iVar1 = CObject::IsKindOf((CObject *)this_00,
                                    (CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
          if (iVar1 != 0) {
            iVar1 = (**(code **)(*(int *)this_00 + 0x1d8))();
            if (iVar1 != 0) {
              (**(code **)(*(int *)this_00 + 0x368))(0,0xf000,0,1);
            }
          }
          local_28.left = 0;
          local_28.top = 0;
          local_28.right = 0;
          local_28.bottom = 0;
          GetWindowRect(*(HWND *)(this_00 + 0x20),&local_28);
          iVar1 = (**(code **)(*(int *)this_00 + 0x224))(0);
          if (iVar1 == 0) {
            (**(code **)(*(int *)this_00 + 0x1f8))
                      (local_28.left,local_28.top,local_28.right,local_28.bottom,3,0);
            this = local_30;
          }
          piVar5 = (int *)(**(code **)(*(int *)this_00 + 0x224))(0);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0x178))(this_00,0,0);
            CWnd::SetParent(this_00,(CWnd *)this);
            (**(code **)(*(int *)this_00 + 0x264))(0);
            local_18.left = 0;
            local_18.top = 0;
            local_18.right = 0;
            local_18.bottom = 0;
            GetClientRect(*(HWND *)(this + 0x20),&local_18);
            (**(code **)(*(int *)this + 0x174))(this_00);
            (**(code **)(*(int *)this_00 + 0x234))(&DAT_101665c0,0,0,0,0,0x11,0);
            (**(code **)(*(int *)this_00 + 0x204))(local_34,local_18.bottom - local_18.top,1);
            (**(code **)(*(int *)this_00 + 0x20c))();
            (**(code **)(*(int *)this + 0x1b0))();
            CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,0,0,0x37);
            iVar1 = (**(code **)(*(int *)this_00 + 0x1a8))();
            if (iVar1 != 0) {
              *(undefined4 *)(this + 0x94) = 1;
            }
            (**(code **)(*(int *)this_00 + 0x220))(iVar1,1,0);
            (**(code **)(*(int *)this + 0x188))(*(undefined4 *)(this + 0xb8));
            goto LAB_1003b9fa;
          }
        }
      }
    }
  }
  (**(code **)(*(int *)this + 0x60))();
LAB_1003b9fa:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

