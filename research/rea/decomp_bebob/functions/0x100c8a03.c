// rea decompile_all
// name: CPaneContainer::IsVisible
// address: 0x100c8a03
// body: available
// range: 0x100c8a03-0x100c8a57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CPaneContainer::IsVisible(void)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall CPaneContainer::IsVisible(CPaneContainer *this)

{
  ulong uVar1;
  int iVar2;
  
  if (*(CWnd **)(this + 4) == (CWnd *)0x0) {
LAB_100c8a1e:
    if (*(CWnd **)(this + 8) != (CWnd *)0x0) {
      uVar1 = CWnd::GetExStyle(*(CWnd **)(this + 8));
      if ((uVar1 & 0x10000000) != 0) goto LAB_100c8a4e;
    }
    if (*(CPaneContainer **)(this + 0x10) != (CPaneContainer *)0x0) {
      iVar2 = IsVisible(*(CPaneContainer **)(this + 0x10));
      if (iVar2 != 0) goto LAB_100c8a4e;
    }
    if (*(CPaneContainer **)(this + 0x14) != (CPaneContainer *)0x0) {
      iVar2 = IsVisible(*(CPaneContainer **)(this + 0x14));
      if (iVar2 != 0) goto LAB_100c8a4e;
    }
    iVar2 = 0;
  }
  else {
    uVar1 = CWnd::GetExStyle(*(CWnd **)(this + 4));
    if ((uVar1 & 0x10000000) == 0) goto LAB_100c8a1e;
LAB_100c8a4e:
    iVar2 = 1;
  }
  return iVar2;
}

