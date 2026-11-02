// rea decompile_all
// name: CMFCLinkCtrl::SizeToContent
// address: 0x1004ee4e
// body: available
// range: 0x1004ee4e-0x1004f012 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004ee9f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCLinkCtrl::SizeToContent(int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCLinkCtrl::SizeToContent(CMFCLinkCtrl *this,int param_1,int param_2)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  int in_stack_0000000c;
  int iVar7;
  uint uVar8;
  int local_54 [5];
  CPen *local_40;
  int *local_3c;
  int local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x1004ee5a;
  local_3c = (int *)param_1;
  iVar1 = CSize::operator!=((CSize *)(this + 0xd4),(tagSIZE)0x0);
  if (iVar1 != 0) {
    CMFCButton::SizeToContent((CMFCButton *)this,param_1);
LAB_1004f00b:
    FUN_100f90cf();
    return;
  }
  if (this == (CMFCLinkCtrl *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0x20);
  }
  if (iVar1 != 0) {
    CClientDC::CClientDC((CClientDC *)local_54,(CWnd *)this);
    local_8 = 0;
    local_40 = CDC::SelectObject((CDC *)local_54,(CPen *)&DAT_10166bdc);
    if (local_40 != (CPen *)0x0) {
      ppuVar2 = FUN_1000ad47();
      FUN_10005e00(&local_38,(int *)ppuVar2);
      local_8 = CONCAT31(local_8._1_3_,1);
      CWnd::GetWindowTextW
                ((CWnd *)this,
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_38);
      local_34.left = 0;
      local_34.top = 0;
      local_34.right = 0;
      local_34.bottom = 0;
      GetClientRect(*(HWND *)(this + 0x20),&local_34);
      local_24.left = local_34.left;
      local_24.top = local_34.top;
      local_24.right = local_34.right;
      local_24.bottom = local_34.bottom;
      (**(code **)(local_54[0] + 0x68))(local_38,*(undefined4 *)(local_38 + -0xc),&local_24,0x420);
      InflateRect(&local_24,3,3);
      iVar1 = 0;
      if ((param_2 == 0) && (in_stack_0000000c == 0)) {
        iVar3 = local_24.bottom - local_24.top;
        uVar8 = 0x16;
        iVar4 = local_24.right - local_24.left;
        iVar7 = -1;
        iVar1 = -1;
      }
      else {
        pHVar5 = GetParent(*(HWND *)(this + 0x20));
        pCVar6 = CWnd::FromHandle(pHVar5);
        if (pCVar6 == (CWnd *)0x0) {
          pHVar5 = (HWND)0x0;
        }
        else {
          pHVar5 = *(HWND *)(pCVar6 + 0x20);
        }
        MapWindowPoints(*(HWND *)(this + 0x20),pHVar5,(LPPOINT)&local_34,2);
        if (in_stack_0000000c != 0) {
          iVar1 = (((local_34.right - local_24.right) - local_34.left) + local_24.left) / 2;
        }
        iVar7 = 0;
        if (param_2 != 0) {
          iVar7 = (((local_24.top - local_24.bottom) - local_34.top) + local_34.bottom) / 2;
        }
        iVar3 = local_24.bottom - local_24.top;
        iVar4 = local_24.right - local_24.left;
        uVar8 = 0x14;
        iVar7 = local_34.top + iVar7;
        iVar1 = local_34.left + iVar1;
      }
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,iVar1,iVar7,iVar4,iVar3,uVar8);
      CDC::SelectObject((CDC *)local_54,local_40);
      *local_3c = local_24.right - local_24.left;
      local_3c[1] = local_24.bottom - local_24.top;
      FUN_10001030((undefined4 *)(local_38 + -0x10));
      local_8 = 0xffffffff;
      CClientDC::~CClientDC((CClientDC *)local_54);
      goto LAB_1004f00b;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

