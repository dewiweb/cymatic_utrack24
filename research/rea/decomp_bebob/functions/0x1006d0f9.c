// rea decompile_all
// name: CMFCRibbonButton::HasCompactMode
// address: 0x1006d0f9
// body: available
// range: 0x1006d0f9-0x1006d119 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonButton::HasCompactMode(void)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCRibbonButton::HasCompactMode(CMFCRibbonButton *this)

{
  tagSIZE tVar1;
  CSize *this_00;
  int iVar2;
  CMFCRibbonButton **ppCVar3;
  LONG LVar4;
  CMFCRibbonButton *local_c;
  CMFCRibbonButton *pCStack_8;
  
  LVar4 = 1;
  ppCVar3 = &local_c;
  local_c = this;
  pCStack_8 = this;
  this_00 = (CSize *)(**(code **)(*(int *)this + 0x70))(ppCVar3,1,0,0);
  tVar1.cy = LVar4;
  tVar1.cx = (LONG)ppCVar3;
  iVar2 = CSize::operator!=(this_00,tVar1);
  return iVar2;
}

