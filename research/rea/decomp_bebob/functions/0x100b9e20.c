// rea decompile_all
// name: CMFCShowAllButton::OnCalculateSize
// address: 0x100b9e20
// body: available
// range: 0x100b9e20-0x100b9e4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual struct tagSIZE __thiscall CMFCShowAllButton::OnCalculateSize(class CDC *,class
   CSize const &,int)
   
   Library: Visual Studio 2010 Release */

tagSIZE __thiscall
CMFCShowAllButton::OnCalculateSize(CMFCShowAllButton *this,CDC *param_1,CSize *param_2,int param_3)

{
  CMFCVisualManager *pCVar1;
  undefined8 uVar2;
  tagSIZE tVar3;
  
  pCVar1 = CMFCVisualManager::GetInstance();
  uVar2 = (**(code **)(*(int *)pCVar1 + 0x2ec))(param_2,param_3);
  tVar3.cy = (LONG)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)param_1 = 0x32;
  *(int *)(param_1 + 4) = (int)uVar2;
  tVar3.cx = (LONG)param_1;
  return tVar3;
}

