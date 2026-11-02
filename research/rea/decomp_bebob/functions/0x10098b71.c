// rea decompile_all
// name: CMFCToolBarMenuButtonsButton::OnCalculateSize
// address: 0x10098b71
// body: available
// range: 0x10098b71-0x10098b97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual struct tagSIZE __thiscall CMFCToolBarMenuButtonsButton::OnCalculateSize(class
   CDC *,class CSize const &,int)
   
   Library: Visual Studio 2010 Release */

tagSIZE __thiscall
CMFCToolBarMenuButtonsButton::OnCalculateSize
          (CMFCToolBarMenuButtonsButton *this,CDC *param_1,CSize *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  LONG extraout_EDX;
  tagSIZE tVar3;
  
  iVar1 = GetSystemMetrics(0x37);
  iVar2 = GetSystemMetrics(0x36);
  *(int *)(param_1 + 4) = iVar1;
  *(int *)param_1 = iVar2;
  tVar3.cy = extraout_EDX;
  tVar3.cx = (LONG)param_1;
  return tVar3;
}

