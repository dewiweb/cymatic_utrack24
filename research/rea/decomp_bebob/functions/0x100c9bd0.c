// rea decompile_all
// name: CPaneContainer::FreeReleasedPaneContainer
// address: 0x100c9bd0
// body: available
// range: 0x100c9bd0-0x100c9cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c9c3e to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100c9cd7 to 0x100c4ea2 CPaneContainerManager::NotifyPaneDivider (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPaneContainer::FreeReleasedPaneContainer(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneContainer::FreeReleasedPaneContainer(CPaneContainer *this)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = *(int *)(this + 4) != 0;
  if (*(int *)(this + 8) != 0) {
    bVar3 = bVar3 + 1;
  }
  if (*(int *)(this + 0x10) != 0) {
    bVar3 = bVar3 + 1;
  }
  if (*(int *)(this + 0x14) != 0) {
    bVar3 = bVar3 + 1;
  }
  if ((bVar3 < 2) && (*(int *)(this + 0x30) < 1)) {
    iVar1 = *(int *)(this + 0xc);
    if ((((iVar1 != 0) && ((*(int *)(iVar1 + 0x11c) != 0 && (iVar1 != 0)))) ||
        (iVar1 = *(int *)(this + 0x18), iVar1 == 0)) ||
       (iVar1 == *(int *)(*(int *)(this + 0x1c) + 0x3c))) {
      CPaneContainerManager::NotifyPaneDivider(*(CPaneContainerManager **)(this + 0x1c));
      return;
    }
    if ((*(CPaneContainer **)(iVar1 + 0x10) == (CPaneContainer *)0x0) &&
       (*(int *)(iVar1 + 0x14) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    uVar2 = (uint)(*(CPaneContainer **)(iVar1 + 0x10) == this);
    if (uVar2 == 0) {
      *(undefined4 *)(iVar1 + 0x14) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    if (*(CDockablePane **)(this + 4) == (CDockablePane *)0x0) {
      if (*(CDockablePane **)(this + 8) == (CDockablePane *)0x0) {
        if (*(CPaneContainer **)(this + 0x10) == (CPaneContainer *)0x0) {
          if (*(CPaneContainer **)(this + 0x14) != (CPaneContainer *)0x0) {
            SetPaneContainer(*(CPaneContainer **)(this + 0x18),*(CPaneContainer **)(this + 0x14),
                             uVar2);
            *(undefined4 *)(this + 0x14) = 0;
          }
        }
        else {
          SetPaneContainer(*(CPaneContainer **)(this + 0x18),*(CPaneContainer **)(this + 0x10),uVar2
                          );
          *(undefined4 *)(this + 0x10) = 0;
        }
      }
      else {
        SetPane(*(CPaneContainer **)(this + 0x18),*(CDockablePane **)(this + 8),uVar2);
        *(undefined4 *)(this + 8) = 0;
      }
    }
    else {
      SetPane(*(CPaneContainer **)(this + 0x18),*(CDockablePane **)(this + 4),uVar2);
      *(undefined4 *)(this + 4) = 0;
    }
    if (*(int **)(this + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xc) + 0x60))();
      *(undefined4 *)(this + 0xc) = 0;
    }
    *(undefined4 *)(this + 0x3c) = 1;
    CObList::AddTail((CObList *)&DAT_101694d4,(CObject *)this);
  }
  return;
}

