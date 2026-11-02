// rea decompile_all
// name: CPaneContainer::CheckPaneDividerVisibility
// address: 0x100c8a58
// body: available
// range: 0x100c8a58-0x100c8b04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CPaneContainer::CheckPaneDividerVisibility(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneContainer::CheckPaneDividerVisibility(CPaneContainer *this)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  int local_c;
  int local_8;
  
  bVar1 = false;
  local_8 = 0;
  local_c = 0;
  if (*(CWnd **)(this + 4) != (CWnd *)0x0) {
    uVar4 = CWnd::GetExStyle(*(CWnd **)(this + 4));
    if ((uVar4 & 0x10000000) != 0) {
      bVar1 = true;
    }
  }
  if (*(CWnd **)(this + 8) != (CWnd *)0x0) {
    uVar4 = CWnd::GetExStyle(*(CWnd **)(this + 8));
    if ((uVar4 & 0x10000000) != 0) {
      bVar2 = true;
      goto LAB_100c8a99;
    }
  }
  bVar2 = false;
LAB_100c8a99:
  if (*(CPaneContainer **)(this + 0x10) != (CPaneContainer *)0x0) {
    CheckPaneDividerVisibility(*(CPaneContainer **)(this + 0x10));
    local_8 = IsVisible(*(CPaneContainer **)(this + 0x10));
  }
  if (*(CPaneContainer **)(this + 0x14) != (CPaneContainer *)0x0) {
    CheckPaneDividerVisibility(*(CPaneContainer **)(this + 0x14));
    local_c = IsVisible(*(CPaneContainer **)(this + 0x14));
  }
  bVar3 = 0;
  if (*(void **)(this + 0xc) != (void *)0x0) {
    if ((((bVar1) && ((bVar2 || (local_c != 0)))) || ((bVar2 && (local_8 != 0)))) ||
       ((local_8 != 0 && (local_c != 0)))) {
      bVar3 = 1;
    }
    FUN_1007169e(*(void **)(this + 0xc),-(uint)bVar3 & 5);
  }
  return;
}

