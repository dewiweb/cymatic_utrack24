// rea decompile_all
// name: CMFCTasksPaneFrameWnd::OnPressButtons
// address: 0x100b1108
// body: available
// range: 0x100b1108-0x100b118d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTasksPaneFrameWnd::OnPressButtons(unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCTasksPaneFrameWnd::OnPressButtons(CMFCTasksPaneFrameWnd *this,uint param_1)

{
  CObject *pCVar1;
  CMFCCaptionButton *pCVar2;
  
  pCVar1 = (CObject *)(**(code **)(*(int *)this + 0x1a4))();
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTasksPane_1013e8af_1_10163228,pCVar1);
  if (pCVar1 != (CObject *)0x0) {
    if (param_1 == 0x17) {
      (**(code **)(*(int *)pCVar1 + 0x3a4))();
    }
    else if (param_1 == 0x18) {
      (**(code **)(*(int *)pCVar1 + 0x3a8))();
    }
    else if (param_1 == 0x19) {
      pCVar2 = CPaneFrameWnd::FindButton((CPaneFrameWnd *)this,0x19);
      if (pCVar2 != (CMFCCaptionButton *)0x0) {
        *(undefined4 *)(this + 0x180) = 1;
        (**(code **)(*(int *)pCVar1 + 0x3b0))(pCVar2,this);
        *(undefined4 *)(this + 0x180) = 0;
      }
    }
  }
  CPaneFrameWnd::OnPressButtons((CPaneFrameWnd *)this,param_1);
  return;
}

