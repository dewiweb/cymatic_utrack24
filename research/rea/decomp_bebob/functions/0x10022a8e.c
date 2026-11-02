// rea decompile_all
// name: CMDIFrameWndEx::NegotiateBorderSpace
// address: 0x10022a8e
// body: available
// range: 0x10022a8e-0x10022af3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10022adc to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMDIFrameWndEx::NegotiateBorderSpace(unsigned int,struct tagRECT
   *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMDIFrameWndEx::NegotiateBorderSpace(CMDIFrameWndEx *this,uint param_1,tagRECT *param_2)

{
  LONG LVar1;
  LONG LVar2;
  LONG LVar3;
  int iVar4;
  
  if (param_1 == 1) {
    CFrameWnd::NegotiateBorderSpace((CFrameWnd *)this,1,param_2);
    (**(code **)(*(int *)(this + 0x14c) + 0x38))(0);
    LVar1 = *(LONG *)(this + 0x248);
    LVar2 = *(LONG *)(this + 0x24c);
    LVar3 = *(LONG *)(this + 0x250);
    if (param_2 == (tagRECT *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    param_2->left = *(LONG *)(this + 0x244);
    param_2->top = LVar1;
    param_2->right = LVar2;
    param_2->bottom = LVar3;
  }
  else if ((param_1 != 2) && (param_1 == 3)) {
    iVar4 = CFrameWnd::NegotiateBorderSpace((CFrameWnd *)this,3,param_2);
    return iVar4;
  }
  return 1;
}

