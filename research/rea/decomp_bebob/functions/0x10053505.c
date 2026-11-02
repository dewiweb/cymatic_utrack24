// rea decompile_all
// name: CMFCButton::SizeToContent
// address: 0x10053505
// body: available
// range: 0x10053505-0x100536e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10053531 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCButton::SizeToContent(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCButton::SizeToContent(CMFCButton *this,int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000008;
  int local_50 [5];
  CPen *local_3c;
  int *local_38;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_34 [4];
  int local_30;
  int local_2c;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x10053511;
  local_38 = (int *)param_1;
  if (this == (CMFCButton *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0x20);
  }
  if (iVar1 != 0) {
    CClientDC::CClientDC((CClientDC *)local_50,(CWnd *)this);
    local_8 = 0;
    local_3c = (CPen *)(**(code **)(*(int *)this + 0x188))(local_50);
    if (local_3c != (CPen *)0x0) {
      ppuVar2 = FUN_1000ad47();
      FUN_10005e00(&local_2c,(int *)ppuVar2);
      local_8 = CONCAT31(local_8._1_3_,1);
      CWnd::GetWindowTextW
                ((CWnd *)this,
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_2c);
      iVar1 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_2c,L'\n',0);
      if (iVar1 < 0) {
        piVar3 = (int *)CDC::GetTextExtent((CDC *)local_50,local_34);
        iVar1 = *piVar3;
        local_30 = piVar3[1];
      }
      else {
        local_24.left = 0;
        local_24.top = 0;
        local_24.right = 0;
        local_24.bottom = 0;
        GetClientRect(*(HWND *)(this + 0x20),&local_24);
        (**(code **)(local_50[0] + 0x68))(local_2c,*(undefined4 *)(local_2c + -0xc),&local_24,0x400)
        ;
        local_30 = local_24.bottom - local_24.top;
        iVar1 = local_24.right - local_24.left;
      }
      if (*(int *)(this + 0x80) == 0) {
        iVar4 = (**(code **)(*(int *)this + 0x18c))();
        iVar4 = iVar4 + *(int *)(this + 0xd4) + iVar1;
        if (0 < iVar1) {
          iVar1 = (**(code **)(*(int *)this + 0x18c))();
          iVar4 = iVar4 + iVar1;
        }
        iVar1 = local_30;
        if (local_30 <= *(int *)(this + 0xd8)) {
          iVar1 = *(int *)(this + 0xd8);
        }
        iVar5 = (**(code **)(*(int *)this + 400))();
        iVar1 = iVar1 + iVar5 * 2;
      }
      else {
        local_28 = iVar1;
        if (iVar1 <= *(int *)(this + 0xd4)) {
          local_28 = *(int *)(this + 0xd4);
        }
        iVar4 = (**(code **)(*(int *)this + 0x18c))();
        iVar4 = iVar4 + local_28;
        if (0 < iVar1) {
          iVar1 = (**(code **)(*(int *)this + 0x18c))();
          iVar4 = iVar4 + iVar1;
        }
        local_28 = *(int *)(this + 0xd8);
        iVar1 = (**(code **)(*(int *)this + 400))();
        iVar1 = iVar1 + local_28 + local_30;
        if (0 < local_28) {
          iVar5 = (**(code **)(*(int *)this + 400))();
          iVar1 = iVar1 + iVar5;
        }
        if (0 < local_30) {
          iVar5 = (**(code **)(*(int *)this + 400))();
          iVar1 = iVar1 + iVar5;
        }
      }
      if (in_stack_00000008 == 0) {
        CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,-1,-1,iVar4,iVar1,0x16);
      }
      CDC::SelectObject((CDC *)local_50,local_3c);
      *local_38 = iVar4;
      local_38[1] = iVar1;
      FUN_10001030((undefined4 *)(local_2c + -0x10));
      local_8 = 0xffffffff;
      CClientDC::~CClientDC((CClientDC *)local_50);
      FUN_100f90cf();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

