// rea decompile_all
// name: FUN_10044a41
// address: 0x10044a41
// body: available
// range: 0x10044a41-0x10044c20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10044c1c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_10044a41(CWnd *param_1)

{
  HWND__ *pHVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *this;
  CFont *pCVar4;
  int iVar5;
  int iVar6;
  CPen *pCVar7;
  CClientDC local_7c [8];
  HDC local_74;
  CWnd *local_68;
  CWnd *local_64;
  tagTEXTMETRICW local_60;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x10044a4d;
  if ((param_1 != (CWnd *)0x0) && (*(int *)(param_1 + 0x20) != 0)) {
    pHVar1 = (HWND__ *)(**(code **)(*(int *)param_1 + 0x1c0))();
    local_64 = CWnd::FromHandle(pHVar1);
    if (local_64 != (CWnd *)0x0) {
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      GetClientRect(*(HWND *)(param_1 + 0x20),&local_24);
      *(LONG *)(param_1 + 0xe8) = local_24.left;
      *(LONG *)(param_1 + 0xec) = local_24.top;
      *(LONG *)(param_1 + 0xf0) = local_24.right;
      *(LONG *)(param_1 + 0xf4) = local_24.bottom;
      CClientDC::CClientDC(local_7c,param_1);
      pCVar7 = (CPen *)0x0;
      local_8 = 0;
      if (((CPen *)(param_1 + 0xf8) == (CPen *)0x0) || (*(int *)(param_1 + 0xfc) == 0)) {
        pHVar3 = GetParent(*(HWND *)(param_1 + 0x20));
        this = CWnd::FromHandle(pHVar3);
        pCVar4 = CWnd::GetFont(this);
        if (pCVar4 != (CFont *)0x0) {
          SendMessageW(*(HWND *)(local_64 + 0x20),0x30,*(WPARAM *)(pCVar4 + 4),0);
          pCVar7 = CDC::SelectObject((CDC *)local_7c,(CPen *)pCVar4);
          if (pCVar7 == (CPen *)0x0) {
LAB_10044c1c:
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
        }
      }
      else {
        pCVar7 = CDC::SelectObject((CDC *)local_7c,(CPen *)(param_1 + 0xf8));
        SendMessageW(*(HWND *)(local_64 + 0x20),0x30,*(WPARAM *)(param_1 + 0xfc),0);
      }
      GetTextMetricsW(local_74,&local_60);
      if (pCVar7 != (CPen *)0x0) {
        CDC::SelectObject((CDC *)local_7c,pCVar7);
      }
      iVar2 = (local_60.tmHeight << 2) / 3;
      iVar5 = *(int *)(param_1 + 0xe4);
      if (*(int *)(param_1 + 0xe4) < iVar2) {
        iVar5 = iVar2;
      }
      iVar2 = *(int *)(param_1 + 0x7c);
      *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xec) + iVar5;
      iVar5 = *(int *)(param_1 + 0xe0);
      iVar6 = (local_24.right - iVar5) + -1;
      while (iVar2 != 0) {
        local_68 = *(CWnd **)(iVar2 + 8);
        iVar2 = *(int *)(iVar2 + 4);
        if (local_68 == (CWnd *)0x0) goto LAB_10044c1c;
        CWnd::MoveWindow(local_68,iVar6,local_24.top + 1,iVar5,
                         (*(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xec)) + -2,1);
        iVar5 = *(int *)(param_1 + 0xe0);
        iVar6 = iVar6 - iVar5;
      }
      CWnd::MoveWindow(local_64,local_24.left,
                       (*(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xec)) + local_24.top,
                       local_24.right - local_24.left,
                       ((*(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xf4)) - local_24.top) +
                       local_24.bottom,1);
      (**(code **)(*(int *)param_1 + 0x1c8))();
      local_8 = 0xffffffff;
      CClientDC::~CClientDC(local_7c);
    }
  }
  FUN_100f90cf();
  return;
}

