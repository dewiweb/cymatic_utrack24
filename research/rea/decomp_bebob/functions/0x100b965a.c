// rea decompile_all
// name: CMFCCaptionButton::GetRect
// address: 0x100b965a
// body: available
// range: 0x100b965a-0x100b96a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CRect __thiscall CMFCCaptionButton::GetRect(void)const 
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCCaptionButton::GetRect(CMFCCaptionButton *this)

{
  int iVar1;
  CMFCCaptionButton *pCVar2;
  int iVar3;
  CMFCCaptionButton **ppCVar4;
  int *in_stack_00000004;
  CMFCCaptionButton *local_c;
  CMFCCaptionButton *local_8;
  
  if (*(int *)(this + 0xc) == 0) {
    local_c = this;
    local_8 = this;
    ppCVar4 = (CMFCCaptionButton **)GetSize();
  }
  else {
    local_c = (CMFCCaptionButton *)0x0;
    local_8 = (CMFCCaptionButton *)0x0;
    ppCVar4 = &local_c;
  }
  iVar1 = *(int *)(this + 0x24);
  pCVar2 = ppCVar4[1];
  iVar3 = *(int *)(this + 0x28);
  in_stack_00000004[2] = (int)(*ppCVar4 + iVar1);
  in_stack_00000004[3] = (int)(pCVar2 + iVar3);
  *in_stack_00000004 = iVar1;
  in_stack_00000004[1] = iVar3;
  return;
}

