// rea decompile_all
// name: CFrameWnd::OnSetPreviewMode
// address: 0x10055c28
// body: available
// range: 0x10055c28-0x10055e98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10055c3e to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CFrameWnd::OnSetPreviewMode(int,struct CPrintPreviewState *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameWnd::OnSetPreviewMode(CFrameWnd *this,int param_1,CPrintPreviewState *param_2)

{
  undefined4 *puVar1;
  CControlBar *pCVar2;
  CPrintPreviewState *pCVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  HMENU pHVar8;
  HWND hWnd;
  
  pCVar3 = param_2;
  if ((param_2 != (CPrintPreviewState *)0x0) &&
     (iVar4 = (**(code **)(*(int *)this + 0x16c))(), iVar4 != 0)) {
    if ((param_1 != 0) && (*(int *)(iVar4 + 0xa0) != 0)) {
      (**(code **)(**(int **)(iVar4 + 0xa0) + 0x5c))(0);
    }
    puVar1 = *(undefined4 **)(this + 0xa8);
    param_2 = (CPrintPreviewState *)0x0;
    while( true ) {
      if (puVar1 == (undefined4 *)0x0) {
        *(CPrintPreviewState **)(pCVar3 + 8) = param_2;
        if (param_1 == 0) {
          *(undefined4 *)(this + 0xd4) = 0;
          param_1 = (int)GetDlgItem(*(HWND *)(this + 0x20),0xea21);
          if ((HWND)param_1 != (HWND)0x0) {
            hWnd = GetDlgItem(*(HWND *)(this + 0x20),0xe900);
            if (hWnd != (HWND)0x0) {
              SetWindowLongW(hWnd,-0xc,0xea21);
            }
            SetWindowLongW((HWND)param_1,-0xc,0xe900);
          }
          if (*(int *)(pCVar3 + 4) != 0) {
            InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
            if (*(int *)(this + 0xf4) == 1) {
              ::SetMenu(*(HWND *)(this + 0x20),*(HMENU *)(pCVar3 + 4));
            }
            else if (*(int *)(this + 0xf4) == 2) {
              *(undefined4 *)(this + 0xf8) = *(undefined4 *)(pCVar3 + 4);
            }
          }
          if (*(int *)(iVar4 + 0xa0) != 0) {
            (**(code **)(**(int **)(iVar4 + 0xa0) + 0x5c))(1);
          }
          (**(code **)(*(int *)this + 0x174))(1);
          if (*(int *)pCVar3 != 0xe900) {
            param_1 = (int)GetDlgItem(*(HWND *)(this + 0x20),*(int *)pCVar3);
          }
          ShowWindow((HWND)param_1,5);
          *(undefined4 *)(this + 0x80) = *(undefined4 *)(pCVar3 + 0x14);
          ShowOwnedWindows(this,1);
        }
        else {
          *(undefined4 *)(this + 0xd4) = *(undefined4 *)(pCVar3 + 0x10);
          ShowOwnedWindows(this,0);
          param_1 = (int)GetDlgItem(*(HWND *)(this + 0x20),*(int *)pCVar3);
          ShowWindow((HWND)param_1,0);
          if (*(int *)(this + 0xf4) == 1) {
            pHVar8 = ::GetMenu(*(HWND *)(this + 0x20));
          }
          else {
            pHVar8 = *(HMENU *)(this + 0xf8);
          }
          *(HMENU *)(pCVar3 + 4) = pHVar8;
          if (pHVar8 != (HMENU)0x0) {
            InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
            (**(code **)(*(int *)this + 0x70))(0);
            *(uint *)(this + 0x10c) = *(uint *)(this + 0x10c) & 0xfffffffe;
          }
          *(undefined4 *)(pCVar3 + 0x14) = *(undefined4 *)(this + 0x80);
          *(undefined4 *)(this + 0x80) = 0;
          LoadAccelTable(this,(LPCWSTR)0x7915);
          if (*(int *)pCVar3 != 0xe900) {
            param_1 = (int)GetDlgItem(*(HWND *)(this + 0x20),0xe900);
          }
          if (param_1 != 0) {
            SetWindowLongW((HWND)param_1,-0xc,0xea21);
          }
        }
        return;
      }
      if (puVar1 == (undefined4 *)0x0) break;
      pCVar2 = (CControlBar *)puVar1[2];
      puVar1 = (undefined4 *)*puVar1;
      if (pCVar2 == (CControlBar *)0x0) break;
      iVar5 = GetDlgCtrlID(*(HWND *)(pCVar2 + 0x20));
      if (iVar5 - 0xe800U < 0x20) {
        uVar6 = 1 << ((byte)iVar5 & 0x1f);
        iVar7 = (**(code **)(*(int *)pCVar2 + 0x18c))();
        if (iVar7 != 0) {
          param_2 = (CPrintPreviewState *)((uint)param_2 | uVar6);
        }
        iVar7 = (**(code **)(*(int *)pCVar2 + 0x194))();
        if ((iVar7 == 0) || (iVar5 != 0xe81f)) {
          ShowControlBar(this,pCVar2,*(uint *)(pCVar3 + 8) & uVar6,1);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

