// rea decompile_all
// name: CMFCRibbonPanelMenuBar::AdjustLocations
// address: 0x100a2b9d
// body: available
// range: 0x100a2b9d-0x100a2cbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a2c00 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonPanelMenuBar::AdjustLocations(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonPanelMenuBar::AdjustLocations(CMFCRibbonPanelMenuBar *this)

{
  int iVar1;
  CFont *pCVar2;
  CMFCRibbonBar *this_00;
  CClientDC local_3c [20];
  CPen *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x100a2ba9;
  if (*(int *)(this + 0xb68) == 0) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_24);
    CClientDC::CClientDC(local_3c,(CWnd *)this);
    local_8 = 0;
    pCVar2 = CWnd::GetFont(*(CWnd **)(this + 0xe1c));
    local_28 = CDC::SelectObject((CDC *)local_3c,(CPen *)pCVar2);
    if (local_28 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    iVar1 = *(int *)(this + 0xe30);
    if (iVar1 == 0) {
      if (*(int *)(this + 0xe20) != 0) {
        *(undefined4 *)(*(int *)(this + 0xe20) + 0x38) = *(undefined4 *)(this + 0xd14);
        *(undefined4 *)(*(int *)(this + 0xe20) + 0x58) = *(undefined4 *)(this + 0xcd4);
        (**(code **)(**(int **)(this + 0xe20) + 0x48))(local_3c,&local_24);
        (**(code **)(**(int **)(this + 0xe20) + 0x5c))(local_3c);
        this_00 = GetTopLevelRibbonBar(this);
        if ((this_00 != (CMFCRibbonBar *)0x0) &&
           (*(int *)(this_00 + 0x7b0) == *(int *)(this + 0xe20))) {
          FUN_1006e506(this_00,1);
        }
        *(undefined4 *)(*(int *)(this + 0xe20) + 0x38) = 0;
      }
    }
    else {
      *(LONG *)(iVar1 + 0x20) = local_24.left;
      *(LONG *)(iVar1 + 0x24) = local_24.top;
      *(LONG *)(iVar1 + 0x28) = local_24.right;
      *(LONG *)(iVar1 + 0x2c) = local_24.bottom;
      (**(code **)(**(int **)(this + 0xe30) + 0xc))(local_3c);
    }
    CDC::SelectObject((CDC *)local_3c,local_28);
    local_8 = 0xffffffff;
    CClientDC::~CClientDC(local_3c);
  }
  FUN_100f90cf();
  return;
}

