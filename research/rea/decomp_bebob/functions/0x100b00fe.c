// rea decompile_all
// name: AddGroup
// address: 0x100b00fe
// body: available
// range: 0x100b00fe-0x100b014a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall CMFCRibbonGallery::AddGroup(char const *,int)
    public: void __thiscall CMFCRibbonGallery::AddGroup(wchar_t const *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall AddGroup(void *this,short *param_1,int param_2)

{
  if (*(int *)((int)this + 0x2f8) != 0) {
    SetAtGrow((void *)((int)this + 0x178),*(int *)((int)this + 0x180),param_1);
    CArray<int,int>::SetAtGrow
              ((CArray<int,int> *)((int)this + 0x18c),*(int *)((int)this + 0x194),
               *(int *)((int)this + 0x2e0));
    *(int *)((int)this + 0x2e0) = *(int *)((int)this + 0x2e0) + param_2;
    FUN_100af852((int)this);
  }
  return;
}

