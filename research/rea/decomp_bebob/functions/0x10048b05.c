// rea decompile_all
// name: CMFCPropertyGridCtrl::OnLButtonDblClk
// address: 0x10048b05
// body: available
// range: 0x10048b05-0x10048ca1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::OnLButtonDblClk(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCPropertyGridCtrl::OnLButtonDblClk
          (CMFCPropertyGridCtrl *this,undefined4 param_1,int param_3,int param_4)

{
  CMFCPropertyGridProperty *this_00;
  POINT pt;
  long lVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 local_48;
  int local_44;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  CWnd::Default((CWnd *)this);
  if (param_4 <= *(int *)(this + 0x2f4)) {
    lVar1 = _labs((param_3 - *(int *)(this + 0x2e8)) - *(int *)(this + 0x318));
    if (lVar1 < 3) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetClientRect(*(HWND *)(this + 0x20),&local_18);
      local_44 = (local_18.right - local_18.left) / 2;
      *(int *)(this + 0x318) = local_44;
      local_44 = local_44 + 2;
      local_48 = 1;
      iVar2 = (**(code **)(*(int *)this + 0x160))();
      SendMessageW(*(HWND *)(iVar2 + 0x20),0x120c,0,(LPARAM)&local_48);
      local_44 = (local_18.right - local_18.left) + 10;
      iVar2 = (**(code **)(*(int *)this + 0x160))();
      SendMessageW(*(HWND *)(iVar2 + 0x20),0x120c,1,(LPARAM)&local_48);
      goto LAB_10048c91;
    }
  }
  this_00 = *(CMFCPropertyGridProperty **)(this + 0x398);
  if (this_00 != (CMFCPropertyGridProperty *)0x0) {
    if ((*(int *)(this_00 + 0x58) == 0) ||
       ((*(int *)(this_00 + 0x68) != 0 &&
        (*(int *)(this + 0x318) + *(int *)(this + 0x2e8) <= param_3)))) {
      if (*(int *)(this_00 + 0x60) != 0) {
        iVar2 = (**(code **)(*(int *)this + 0x17c))(this_00,0);
        if ((iVar2 != 0) && (*(int *)(*(int *)(this + 0x398) + 0xb4) != 0)) {
          SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x398) + 0xb4) + 0x20),0x201,0,0);
          SendMessageW(*(HWND *)(*(int *)(*(int *)(this + 0x398) + 0xb4) + 0x20),0x202,0,0);
        }
        iVar2 = *(int *)(this + 0x398);
        local_18.left = *(int *)(iVar2 + 0x2c);
        local_18.top = *(LONG *)(iVar2 + 0x30);
        local_18.right = *(int *)(iVar2 + 0x34);
        local_18.bottom = *(LONG *)(iVar2 + 0x38);
        pt.y = param_4;
        pt.x = param_3;
        BVar3 = PtInRect(&local_18,pt);
        if (BVar3 != 0) {
          (**(code **)(**(int **)(this + 0x398) + 0x44))(param_3,param_4);
        }
      }
    }
    else {
      CMFCPropertyGridProperty::Expand(this_00,(uint)(*(int *)(this_00 + 0x5c) == 0));
    }
  }
LAB_10048c91:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

