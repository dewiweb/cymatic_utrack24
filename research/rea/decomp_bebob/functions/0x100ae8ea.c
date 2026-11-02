// rea decompile_all
// name: CMFCRibbonEdit::CopyFrom
// address: 0x100ae8ea
// body: available
// range: 0x100ae8ea-0x100ae9c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonEdit::CopyFrom(class CMFCRibbonBaseElement const &)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void __thiscall CMFCRibbonEdit::CopyFrom(CMFCRibbonEdit *this,CMFCRibbonBaseElement *param_1)

{
  FUN_100bb925(this,param_1);
  FUN_10007c90(this + 0x18c,(undefined4 *)(param_1 + 0x18c));
  if (*(int **)(this + 400) != (int *)0x0) {
    (**(code **)(**(int **)(this + 400) + 0x60))();
    if (*(int **)(this + 400) != (int *)0x0) {
      (**(code **)(**(int **)(this + 400) + 4))(1);
    }
    *(undefined4 *)(this + 400) = 0;
  }
  if (*(int **)(this + 0x194) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x194) + 0x60))();
    if (*(int **)(this + 0x194) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x194) + 4))(1);
    }
    *(undefined4 *)(this + 0x194) = 0;
  }
  *(undefined4 *)(this + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(this + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(this + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(this + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(this + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(this + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(this + 0x178) = *(undefined4 *)(param_1 + 0x178);
  return;
}

