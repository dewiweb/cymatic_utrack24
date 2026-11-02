// rea decompile_all
// name: CMFCBaseTabCtrl::RemoveTab
// address: 0x10093118
// body: available
// range: 0x10093118-0x100932c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009327f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseTabCtrl::RemoveTab(int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCBaseTabCtrl::RemoveTab(CMFCBaseTabCtrl *this,int param_1,int param_2)

{
  int *piVar1;
  CToolTipCtrl *this_00;
  int iVar2;
  CMFCBaseTabCtrl *pCVar3;
  CMFCBaseTabCtrl *local_8;
  
  if ((param_1 < 0) || (*(int *)(this + 0x9c) <= param_1)) {
    iVar2 = 0;
  }
  else {
    local_8 = this;
    if (*(int *)(this + 0x9c) == 1) {
      (**(code **)(*(int *)this + 0x198))();
    }
    else {
      if (*(int *)(this + 0x90) <= param_1) {
LAB_1009327f:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      piVar1 = *(int **)(*(int *)(this + 0x8c) + param_1 * 4);
      this_00 = *(CToolTipCtrl **)(this + 0xd8);
      if ((this_00 != (CToolTipCtrl *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
        CToolTipCtrl::DelTool(this_00,(CWnd *)this,piVar1[10]);
      }
      FUN_1006cfdb(this + 0x88,param_1,1);
      *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + -1;
      if (*(int *)(this + 0xfc) != 0) {
        (**(code **)(*(int *)piVar1[8] + 0x60))();
      }
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(1);
      }
      local_8 = *(CMFCBaseTabCtrl **)(this + 0xa0);
      if (param_1 <= (int)local_8) {
        if (*(int *)(this + 0x78) == 0) {
          for (pCVar3 = (CMFCBaseTabCtrl *)(*(int *)(this + 0x9c) + -1); -1 < (int)pCVar3;
              pCVar3 = pCVar3 + -1) {
            if (((int)pCVar3 < 0) || (*(int *)(this + 0x90) <= (int)pCVar3)) goto LAB_1009327f;
            if ((((int)pCVar3 < param_1) && (-1 < (int)local_8)) &&
               ((int)local_8 < *(int *)(this + 0x9c))) break;
            if (*(int *)(*(int *)(*(int *)(this + 0x8c) + (int)pCVar3 * 4) + 0x34) != 0) {
              local_8 = pCVar3;
            }
          }
        }
        else {
          (**(code **)(*(int *)this + 600))(&local_8);
        }
        *(undefined4 *)(this + 0xa0) = 0xffffffff;
      }
      (**(code **)(*(int *)this + 0x268))();
      if ((param_2 != 0) &&
         ((**(code **)(*(int *)this + 0x180))(), local_8 != (CMFCBaseTabCtrl *)0xffffffff)) {
        if ((*(int *)(this + 0x1d8) == 0) || (iVar2 = *(int *)(this + 0x1d4), iVar2 == -1)) {
          param_1 = -1;
          (**(code **)(*(int *)this + 0x250))(local_8,&param_1);
        }
        else {
          if (param_1 < iVar2) {
            iVar2 = iVar2 + -1;
          }
          param_1 = -1;
          (**(code **)(*(int *)this + 0x250))(iVar2,&param_1);
        }
        (**(code **)(*(int *)this + 0x210))(param_1);
        (**(code **)(*(int *)this + 0x26c))(*(undefined4 *)(this + 0xa0));
      }
    }
    iVar2 = 1;
  }
  return iVar2;
}

