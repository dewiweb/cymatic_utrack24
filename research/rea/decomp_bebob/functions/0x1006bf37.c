// rea decompile_all
// name: CBasePane::OnSetIcon
// address: 0x1006bf37
// body: available
// range: 0x1006bf37-0x1006bfaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CBasePane::OnSetIcon(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall CBasePane::OnSetIcon(CBasePane *this,uint param_1,long param_2)

{
  long lVar1;
  int iVar2;
  CMFCBaseTabCtrl *pCVar3;
  int iVar4;
  LRESULT LVar5;
  CBasePane *local_8;
  
  local_8 = this;
  lVar1 = CWnd::Default((CWnd *)this);
  iVar2 = (**(code **)(*(int *)this + 0x168))();
  if (iVar2 != 0) {
    local_8 = (CBasePane *)0x0;
    pCVar3 = GetParentTabWnd(this,(HWND__ **)&local_8);
    iVar2 = (**(code **)(*(int *)pCVar3 + 0x218))(local_8);
    if ((-1 < iVar2) && (iVar4 = (**(code **)(*(int *)pCVar3 + 0x1a8))(), iVar2 < iVar4)) {
      LVar5 = SendMessageW(*(HWND *)(this + 0x20),0x7f,0,0);
      (**(code **)(*(int *)pCVar3 + 0x1d0))(iVar2,LVar5);
    }
  }
  return lVar1;
}

