// rea decompile_all
// name: CSmartDockingManager::OnMouseMove
// address: 0x1007291d
// body: available
// range: 0x1007291d-0x100729a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CSmartDockingManager::OnMouseMove(class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CSmartDockingManager::OnMouseMove(CSmartDockingManager *this,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  CSmartDockingManager *pCVar4;
  
  if (*(int *)(this + 4) != 0) {
    *(undefined4 *)(this + 0x100) = 0xffffffff;
    bVar1 = false;
    iVar3 = (*(int *)(*(int *)(this + 0xfc) + 0x102c) != 0) + 7;
    pCVar4 = this + iVar3 * 4 + 0xd8;
    do {
      if (bVar1) {
LAB_10072987:
        if (*(int **)pCVar4 != (int *)0x0) {
          (**(code **)(**(int **)pCVar4 + 0x1c))(0);
        }
      }
      else if (*(int **)pCVar4 != (int *)0x0) {
        iVar2 = (**(code **)(**(int **)pCVar4 + 0x20))(param_2,param_3);
        if (iVar2 == 0) goto LAB_10072987;
        bVar1 = true;
        (**(code **)(**(int **)pCVar4 + 0x1c))(1);
        *(int *)(this + 0x100) = iVar3;
      }
      pCVar4 = pCVar4 + -4;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return;
}

