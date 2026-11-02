// rea decompile_all
// name: CPaneFrameWnd::SetCaptionButtons
// address: 0x1003c407
// body: available
// range: 0x1003c407-0x1003c4b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneFrameWnd::SetCaptionButtons(unsigned long)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneFrameWnd::SetCaptionButtons(CPaneFrameWnd *this,ulong param_1)

{
  CObject *pCVar1;
  int iVar2;
  
  RemoveAllCaptionButtons(this);
  if ((param_1 & 2) != 0) {
    pCVar1 = (CObject *)(**(code **)(*(int *)this + 0x1a4))();
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,pCVar1);
    if (pCVar1 != (CObject *)0x0) {
      iVar2 = (**(code **)(*(int *)pCVar1 + 0x1c4))();
      if (iVar2 != 0) {
        (**(code **)(*(int *)this + 0x22c))(0x14);
      }
    }
  }
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)this + 0x22c))(9);
  }
  if ((param_1 & 4) != 0) {
    (**(code **)(*(int *)this + 0x22c))(8);
  }
  if ((param_1 & 0x10) != 0) {
    (**(code **)(*(int *)this + 0x22c))(0x19);
  }
  *(ulong *)(this + 0xb8) = param_1;
  SetCaptionButtonsToolTips(this);
  FUN_1003afb8((CWnd *)this);
  SendMessageW(*(HWND *)(this + 0x20),0x85,0,0);
  return;
}

