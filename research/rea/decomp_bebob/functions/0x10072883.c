// rea decompile_all
// name: CSmartDockingManager::Show
// address: 0x10072883
// body: available
// range: 0x10072883-0x1007291c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CSmartDockingManager::Show(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CSmartDockingManager::Show(CSmartDockingManager *this,int param_1)

{
  uint uVar1;
  int iVar2;
  CSmartDockingManager *pCVar3;
  
  iVar2 = 0;
  if ((*(int *)(this + 4) != 0) && (*(int *)(this + 0xc) != param_1)) {
    *(int *)(this + 0xc) = param_1;
    if (*(int *)(this + 0x10) != 0) {
      (**(code **)(**(int **)(this + 0xfc) + 0x14))(param_1);
    }
    pCVar3 = this + 0xd8;
    do {
      uVar1 = *(uint *)(this + 0x1c);
      if ((((((uVar1 & 0x1000) != 0) && (iVar2 == 0)) || (((uVar1 & 0x4000) != 0 && (iVar2 == 1))))
          || (((uVar1 & 0x2000) != 0 && (iVar2 == 2)))) || (((uVar1 & 0x8000) != 0 && (iVar2 == 3)))
         ) {
        (**(code **)(**(int **)pCVar3 + 0x14))(param_1);
      }
      iVar2 = iVar2 + 1;
      pCVar3 = pCVar3 + 4;
    } while (iVar2 < 4);
    if ((param_1 == 0) && (*(int *)(this + 0xcc) == 0)) {
      CSmartDockingHighlighterWnd::Hide((CSmartDockingHighlighterWnd *)(this + 0x30));
    }
  }
  return;
}

