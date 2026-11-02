// rea decompile_all
// name: CMFCPropertyGridCtrl::OnRButtonDown
// address: 0x1004a6b0
// body: available
// range: 0x1004a6b0-0x1004a80e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::OnRButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCPropertyGridCtrl::OnRButtonDown
          (CMFCPropertyGridCtrl *this,undefined4 param_1,LONG param_3,int param_4)

{
  POINT pt;
  long lVar1;
  CMFCPropertyGridProperty *pCVar2;
  int iVar3;
  BOOL BVar4;
  int local_20;
  uint local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  CWnd::Default((CWnd *)this);
  CWnd::SetFocus((CWnd *)this);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  if (((*(int *)(this + 700) == 0) ||
      ((lVar1 = _labs((param_4 - *(int *)(this + 0x2f4)) + -4), 2 < lVar1 &&
       (param_4 <= *(int *)(this + 0x2f4))))) &&
     (lVar1 = _labs((param_3 - *(int *)(this + 0x318)) - *(int *)(this + 0x2e8)), 2 < lVar1)) {
    pCVar2 = HitTest(this,param_3,param_4,&local_20,0);
    local_1c = (uint)(pCVar2 != *(CMFCPropertyGridProperty **)(this + 0x398));
    SetCurSel(this,pCVar2,1);
    if (pCVar2 != (CMFCPropertyGridProperty *)0x0) {
      EnsureVisible(this,pCVar2,0);
      if (local_20 == 1) {
        (**(code **)(*(int *)pCVar2 + 100))(param_3,param_4);
      }
      else if ((((local_20 == 2) &&
                ((**(code **)(*(int *)pCVar2 + 0x68))(param_3,param_4,local_1c),
                *(int *)(pCVar2 + 0x60) != 0)) && (local_1c == 0)) &&
              (((iVar3 = (**(code **)(*(int *)this + 0x17c))(pCVar2,&param_3), iVar3 != 0 &&
                (*(int *)(pCVar2 + 0xb4) != 0)) &&
               ((pt.y = param_4, pt.x = param_3, BVar4 = PtInRect((RECT *)(pCVar2 + 0x3c),pt),
                BVar4 == 0 && (iVar3 = (**(code **)(*(int *)pCVar2 + 0x98))(), iVar3 != 0)))))) {
        (**(code **)(*(int *)pCVar2 + 0x40))(0x204,param_3,param_4);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

