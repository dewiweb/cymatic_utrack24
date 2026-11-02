// rea decompile_all
// name: CFrameWnd::EndModalState
// address: 0x100545cc
// body: available
// range: 0x100545cc-0x10054646 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CFrameWnd::EndModalState(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameWnd::EndModalState(CFrameWnd *this)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (((*(int *)(this + 0xd8) != 0) &&
      (iVar2 = *(int *)(this + 0xd8) + -1, *(int *)(this + 0xd8) = iVar2, iVar2 == 0)) &&
     (*(int **)(this + 0xdc) != (int *)0x0)) {
    iVar3 = 0;
    iVar2 = **(int **)(this + 0xdc);
    while (iVar2 != 0) {
      BVar1 = IsWindow(*(HWND *)(*(int *)(this + 0xdc) + iVar4));
      if (BVar1 != 0) {
        EnableWindow(*(HWND *)(*(int *)(this + 0xdc) + iVar4),1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar3 * 4;
      iVar2 = *(int *)(iVar4 + *(int *)(this + 0xdc));
    }
    FUN_100085b9(*(void **)(this + 0xdc));
    *(undefined4 *)(this + 0xdc) = 0;
  }
  return;
}

