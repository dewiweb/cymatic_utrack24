// rea decompile_all
// name: COleDataSource::Empty
// address: 0x10097cf0
// body: available
// range: 0x10097cf0-0x10097d40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall COleDataSource::Empty(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall COleDataSource::Empty(COleDataSource *this)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(this + 0x20) != 0) {
    uVar1 = 0;
    if (*(int *)(this + 0x28) != 0) {
      do {
        CoTaskMemFree(*(LPVOID *)(iVar2 + 4 + *(int *)(this + 0x20)));
        ReleaseStgMedium((LPSTGMEDIUM)(iVar2 + 0x14 + *(int *)(this + 0x20)));
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 0x24;
      } while (uVar1 < *(uint *)(this + 0x28));
    }
    FUN_100085b9(*(void **)(this + 0x20));
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
  }
  return;
}

