// rea decompile_all
// name: CMFCColorBar::GetExtraHeight
// address: 0x100a93a1
// body: available
// range: 0x100a93a1-0x100a943f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCColorBar::GetExtraHeight(int)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCColorBar::GetExtraHeight(CMFCColorBar *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(*(int *)(this + 0xdd8) + -0xc) == 0) {
    if (*(int *)(*(int *)(this + 0xddc) + -0xc) != 0) {
      iVar2 = *(int *)(this + 0xd70);
    }
  }
  else {
    iVar2 = *(int *)(this + 0xd6c);
  }
  if (*(int *)(*(int *)(this + 0xddc) + -0xc) != 0) {
    iVar2 = iVar2 + *(int *)(this + 0xd6c);
  }
  if (((*(int *)(*(int *)(this + 0xde0) + -0xc) != 0) && (*(int *)(this + 0xdb0) != 0)) &&
     ((*(int *)(this + 0xd84) != 0 || (iVar1 = (**(code **)(*(int *)this + 0x16c))(), iVar1 != 0))))
  {
    iVar1 = *(int *)(this + 0xdb0) / param_1;
    if (*(int *)(this + 0xdb0) % param_1 != 0) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + 4 +
            *(int *)(this + 0xdc4) * iVar1 + *(int *)(this + 0xd70) + *(int *)(this + 0xd6c);
  }
  return iVar2;
}

