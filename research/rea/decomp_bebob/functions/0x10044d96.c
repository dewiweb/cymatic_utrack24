// rea decompile_all
// name: CVSListBoxBase::OnEnable
// address: 0x10044d96
// body: available
// range: 0x10044d96-0x10044e0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CVSListBoxBase::OnEnable(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CVSListBoxBase::OnEnable(CVSListBoxBase *this,int param_1)

{
  undefined4 uVar1;
  HWND__ *pHVar2;
  CWnd *pCVar3;
  int iVar4;
  
  CWnd::Default((CWnd *)this);
  iVar4 = *(int *)(this + 0x7c);
  while (iVar4 != 0) {
    pCVar3 = *(CWnd **)(iVar4 + 8);
    iVar4 = *(int *)(iVar4 + 4);
    if ((param_1 == 0) || (*(int *)(this + 0xd8) != 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    *(undefined4 *)(pCVar3 + 0x90) = uVar1;
    CWnd::EnableWindow(pCVar3,param_1);
  }
  pHVar2 = (HWND__ *)(**(code **)(*(int *)this + 0x1c0))();
  pCVar3 = CWnd::FromHandle(pHVar2);
  if (pCVar3 != (CWnd *)0x0) {
    CWnd::EnableWindow(pCVar3,param_1);
  }
  RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  return;
}

