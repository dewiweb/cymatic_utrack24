// rea decompile_all
// name: COleClientItem::Close
// address: 0x100d9276
// body: available
// range: 0x100d9276-0x100d92f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall COleClientItem::Close(enum tagOLECLOSE)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall COleClientItem::Close(COleClientItem *this,tagOLECLOSE param_1)

{
  undefined4 uVar1;
  
  if (this[0x48] == (COleClientItem)0x0) {
    this[0x48] = (COleClientItem)0x1;
    uVar1 = (**(code **)(**(int **)(this + 0x24) + 0x18))(*(int **)(this + 0x24),param_1);
    *(undefined4 *)(this + 0x34) = uVar1;
    if (this[0x46] != (COleClientItem)0x0) {
      OleLockRunning(*(LPUNKNOWN *)(this + 0x24),0,1);
      this[0x46] = (COleClientItem)0x0;
    }
    if (*(int *)(this + 0x50) != 1) {
      if (*(int *)(this + 0x50) == 4) {
        (**(code **)(*(int *)this + 0x80))(0);
      }
      if (*(int *)(this + 0x50) == 3) {
        (**(code **)(*(int *)this + 0x98))();
      }
      if (*(int *)(this + 0x50) != 1) {
        (**(code **)(*(int *)this + 0x6c))(4,1);
        *(undefined4 *)(this + 0x50) = 1;
      }
    }
    this[0x48] = (COleClientItem)0x0;
  }
  return;
}

