// rea decompile_all
// name: CMFCPropertyGridCtrl::NotifyAccessibility
// address: 0x100492be
// body: available
// range: 0x100492be-0x1004931a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCPropertyGridCtrl::NotifyAccessibility(class
   CMFCPropertyGridProperty *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCPropertyGridCtrl::NotifyAccessibility
          (CMFCPropertyGridCtrl *this,CMFCPropertyGridProperty *param_1)

{
  tagPOINT local_c;
  
  if ((DAT_10166c3c != 0) && (param_1 != (CMFCPropertyGridProperty *)0x0)) {
    *(CMFCPropertyGridProperty **)(this + 0x3c4) = param_1;
    local_c.x = *(LONG *)(param_1 + 0x2c);
    local_c.y = *(LONG *)(param_1 + 0x30);
    ClientToScreen(*(HWND *)(this + 0x20),&local_c);
    NotifyWinEvent(0x8005,*(HWND *)(this + 0x20),-4,
                   CONCAT22((undefined2)local_c.y,(undefined2)local_c.x));
  }
  return;
}

