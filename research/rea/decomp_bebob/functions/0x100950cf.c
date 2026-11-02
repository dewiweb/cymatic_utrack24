// rea decompile_all
// name: CMFCBaseTabCtrl::InsertTab
// address: 0x100950cf
// body: available
// range: 0x100950cf-0x10095155 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10095118 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCBaseTabCtrl::InsertTab(class CWnd *,unsigned
   int,int,unsigned int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCBaseTabCtrl::InsertTab
          (CMFCBaseTabCtrl *this,CWnd *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined **ppuVar2;
  HMODULE pHVar3;
  undefined4 uVar4;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100950db;
  iVar1 = CWnd::GetDlgCtrlID(param_1);
  if (iVar1 == -1) {
    return;
  }
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(local_14,(int *)ppuVar2);
  local_8 = 0;
  pHVar3 = (HMODULE)FUN_1000ac62();
  if ((pHVar3 != (HMODULE)0x0) && (iVar1 = FUN_10006200(local_14,pHVar3,param_2), iVar1 != 0)) {
    uVar4 = (**(code **)(*(int *)this + 0x2c0))(param_1,local_14[0],param_5);
    (**(code **)(*(int *)this + 400))(uVar4,local_14[0],param_3,param_4,param_5);
    FUN_10001030((undefined4 *)(local_14[0] + -0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

