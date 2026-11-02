// rea decompile_all
// name: CMFCToolBar::OnCommand
// address: 0x100268c0
// body: available
// range: 0x100268c0-0x10026991 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002696c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::OnCommand(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBar::OnCommand(CMFCToolBar *this,uint param_1,long param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  HWND hWndParent;
  BOOL BVar4;
  uint uVar5;
  undefined4 local_c;
  HWND local_8;
  
  if ((DAT_10166e54 != 0) && (*(int *)(this + 0xb04) == 0)) {
    iVar3 = CWnd::OnCommand((CWnd *)this,param_1,param_2);
    return iVar3;
  }
  uVar5 = param_1 >> 0x10;
  local_c = 0;
  local_8 = (HWND)param_2;
  if (param_2 == 0) {
    if (param_1 == 2) {
      (**(code **)(*(int *)this + 0x364))();
      return 1;
    }
    if (param_1 != 1) {
      return 0;
    }
    local_8 = GetFocus();
    if (local_8 == (HWND)0x0) {
      return 0;
    }
    local_c = 1;
    uVar5 = 0;
  }
  puVar1 = *(undefined4 **)(this + 0xbcc);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if (puVar1 == (undefined4 *)0x0) break;
    piVar2 = (int *)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    hWndParent = (HWND)(**(code **)(*piVar2 + 0x38))();
    if ((hWndParent != (HWND)0x0) &&
       ((hWndParent == local_8 || (BVar4 = IsChild(hWndParent,local_8), BVar4 != 0)))) {
      iVar3 = (**(code **)(*(int *)this + 0x3d8))(piVar2,local_c,uVar5,param_1,param_2);
      if (iVar3 != 0) {
        return 1;
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

