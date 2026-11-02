// rea decompile_all
// name: CWnd::OnCommand
// address: 0x10012d78
// body: available
// range: 0x10012d78-0x10012e10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10012ddc to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CWnd::OnCommand(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

int __thiscall CWnd::OnCommand(CWnd *this,uint param_1,long param_2)

{
  CNoTrackObject *pCVar1;
  int iVar2;
  uint uVar3;
  CTestCmdUI local_30 [4];
  uint local_2c;
  int local_8;
  
  uVar3 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_2 == 0) {
    if (uVar3 == 0) {
      return 0;
    }
    CTestCmdUI::CTestCmdUI(local_30);
    local_2c = uVar3;
    (**(code **)(*(int *)this + 0xc))(uVar3,0xffffffff,local_30,0);
    if (local_8 != 0) {
      param_1 = 0;
LAB_10012dfd:
      iVar2 = (**(code **)(*(int *)this + 0xc))(uVar3,param_1,0,0);
      return iVar2;
    }
  }
  else {
    pCVar1 = CThreadLocalObject::GetData
                       ((CThreadLocalObject *)&DAT_10164b18,
                        (_func_CNoTrackObject_ptr *)&LAB_10009084);
    if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    if ((*(int *)(pCVar1 + 0x13c) != *(int *)(this + 0x20)) &&
       (iVar2 = ReflectLastMsg((HWND__ *)param_2,(long *)0x0), iVar2 == 0)) {
      if (uVar3 == 0) {
        return 0;
      }
      goto LAB_10012dfd;
    }
  }
  return 1;
}

