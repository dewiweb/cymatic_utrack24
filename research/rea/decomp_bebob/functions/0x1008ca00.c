// rea decompile_all
// name: CMFCDropDownToolBar::OnMouseMove
// address: 0x1008ca00
// body: available
// range: 0x1008ca00-0x1008cc69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008cb2e to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCDropDownToolBar::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCDropDownToolBar::OnMouseMove
          (CMFCDropDownToolBar *this,undefined4 param_1,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  CWnd *pCVar5;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar1 = CSize::operator!=((CSize *)(this + 0xc88),(tagSIZE)0xffffffffffffffff);
  if (((iVar1 == 0) || (lVar2 = _labs(*(int *)(this + 0xc88) - param_3), 0 < lVar2)) ||
     (lVar2 = _labs(*(int *)(this + 0xc8c) - param_4), 0 < lVar2)) {
    iVar1 = *(int *)(this + 0xb7c);
    *(int *)(this + 0xc8c) = param_4;
    *(int *)(this + 0xc88) = param_3;
    iVar3 = (**(code **)(*(int *)this + 0x390))(param_3,param_4);
    *(int *)(this + 0xb7c) = iVar3;
    if (iVar3 == -1) {
      local_c = 0;
    }
    else {
      local_c = FUN_100261ef(this,iVar3);
      if ((local_c != 0) &&
         (((*(uint *)(local_c + 0x24) & 1) != 0 ||
          (((*(uint *)(local_c + 0x24) & 0x40000) != 0 &&
           (iVar3 = (**(code **)(*(int *)this + 1000))(), iVar3 == 0)))))) {
        *(undefined4 *)(this + 0xb7c) = 0xffffffff;
      }
    }
    if (*(int *)(this + 0xb34) == 0) {
      local_14 = *(undefined4 *)(this + 0x20);
      local_10 = 0xffffffff;
      *(undefined4 *)(this + 0xb34) = 1;
      local_1c = 0x10;
      local_18 = 2;
      AFXTrackMouse((tagTRACKMOUSEEVENT *)&local_1c);
    }
    if (iVar1 == *(int *)(this + 0xb7c)) {
      return;
    }
    local_8 = 0;
    *(int *)(this + 0xb78) = *(int *)(this + 0xb7c);
    if (iVar1 != -1) {
      iVar3 = FUN_100261ef(this,iVar1);
      if (iVar3 == 0) goto LAB_1008cb2e;
      uVar4 = *(uint *)(iVar3 + 0x24) & 0xfffdffff;
      if (uVar4 != *(uint *)(iVar3 + 0x24)) {
        (**(code **)(*(int *)this + 0x374))(iVar1,uVar4);
      }
    }
    if (*(int *)(this + 0xb78) != -1) {
      iVar3 = FUN_100261ef(this,*(int *)(this + 0xb78));
      if (iVar3 == 0) goto LAB_1008cb2e;
      uVar4 = *(uint *)(iVar3 + 0x24) & 0xfffdffff;
      if (*(int *)(this + 0xb7c) == *(int *)(this + 0xb78)) {
        uVar4 = uVar4 | 0x20000;
      }
      if (uVar4 != *(uint *)(iVar3 + 0x24)) {
        (**(code **)(*(int *)this + 0x374))(*(int *)(this + 0xb78),uVar4);
        local_8 = 1;
      }
    }
    if (((*(int *)(this + 0xb78) == -1) || (iVar1 == *(int *)(this + 0xb78))) && (iVar1 != -1)) {
      CMFCToolBar::InvalidateButton((CMFCToolBar *)this,iVar1);
      local_8 = 1;
    }
    if (((*(int *)(this + 0xb78) == -1) || (*(int *)(this + 0xb7c) == *(int *)(this + 0xb78))) &&
       (*(int *)(this + 0xb7c) != -1)) {
      CMFCToolBar::InvalidateButton((CMFCToolBar *)this,*(int *)(this + 0xb7c));
      local_8 = 1;
    }
    if (local_8 != 0) {
      UpdateWindow(*(HWND *)(this + 0x20));
    }
    if ((*(int *)(this + 0xb7c) == -1) ||
       ((*(int *)(this + 0xb7c) != *(int *)(this + 0xb78) && (*(int *)(this + 0xb78) != -1)))) {
      if ((*(int *)(this + 0xb78) == -1) && (DAT_10166e78 == 0)) {
        pCVar5 = CWnd::GetOwner((CWnd *)this);
        SendMessageW(*(HWND *)(pCVar5 + 0x20),0x362,0xe001,0);
      }
    }
    else {
      if (local_c == 0) {
LAB_1008cb2e:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      (**(code **)(*(int *)this + 0x414))(*(undefined4 *)(local_c + 0x20));
    }
    (**(code **)(*(int *)this + 0x3b0))(*(undefined4 *)(this + 0xb7c));
  }
  else {
    *(int *)(this + 0xc88) = param_3;
    *(int *)(this + 0xc8c) = param_4;
  }
  return;
}

