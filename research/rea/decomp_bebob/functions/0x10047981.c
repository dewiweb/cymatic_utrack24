// rea decompile_all
// name: CMFCPropertyGridProperty::GetExpandedSubItems
// address: 0x10047981
// body: available
// range: 0x10047981-0x100479c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCPropertyGridProperty::GetExpandedSubItems(int)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCPropertyGridProperty::GetExpandedSubItems(CMFCPropertyGridProperty *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)(this + 0x5c) == 0) {
    iVar2 = 0;
  }
  else {
    puVar4 = *(undefined4 **)(this + 0xcc);
    iVar2 = 0;
    while (puVar4 != (undefined4 *)0x0) {
      puVar1 = puVar4 + 2;
      puVar4 = (undefined4 *)*puVar4;
      if ((param_1 != 0) || (*(int *)((CMFCPropertyGridProperty *)*puVar1 + 0x78) != 0)) {
        iVar3 = GetExpandedSubItems((CMFCPropertyGridProperty *)*puVar1,param_1);
        iVar2 = iVar2 + 1 + iVar3;
      }
    }
  }
  return iVar2;
}

