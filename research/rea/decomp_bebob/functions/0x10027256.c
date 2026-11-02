// rea decompile_all
// name: CMFCToolBar::SetOneRowWithSibling
// address: 0x10027256
// body: available
// range: 0x10027256-0x100272bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCToolBar::SetOneRowWithSibling(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBar::SetOneRowWithSibling(CMFCToolBar *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(int *)(this + 0xb58) != 0) && (iVar3 = *(int *)(this + 0xc9c), iVar3 != 0)) {
    piVar1 = *(int **)(iVar3 + 0xb0);
    piVar2 = *(int **)(this + 0xb0);
    if (piVar2 != piVar1) {
      if (*(int *)(this + 0xb5c) == 0) {
        (**(code **)(*piVar2 + 0x24))(this);
        iVar3 = *piVar1;
      }
      else {
        (**(code **)(*piVar1 + 0x24))(iVar3);
        iVar3 = *piVar2;
        this = *(CMFCToolBar **)(this + 0xc9c);
      }
      (**(code **)(iVar3 + 0x1c))(this,5,0,0);
    }
  }
  return;
}

