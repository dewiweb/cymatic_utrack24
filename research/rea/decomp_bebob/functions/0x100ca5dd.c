// rea decompile_all
// name: CPaneContainer::Copy
// address: 0x100ca5dd
// body: available
// range: 0x100ca5dd-0x100ca6f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CPaneContainer * __thiscall CPaneContainer::Copy(class CPaneContainer *)
   
   Library: Visual Studio 2010 Release */

CPaneContainer * __thiscall CPaneContainer::Copy(CPaneContainer *this,CPaneContainer *param_1)

{
  CPaneContainer *this_00;
  CObject *pCVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(CRuntimeClass **)(*(int *)(this + 0x1c) + 0x40) == (CRuntimeClass *)0x0) {
    this_00 = FUN_1000858a(0x9c);
    if (this_00 == (CPaneContainer *)0x0) {
      pCVar1 = (CObject *)0x0;
    }
    else {
      pCVar1 = (CObject *)
               CPaneContainer(this_00,*(CPaneContainerManager **)(this + 0x1c),
                              *(CDockablePane **)(this + 4),*(CDockablePane **)(this + 8),
                              *(CPaneDivider **)(this + 0xc));
    }
  }
  else {
    pCVar1 = CRuntimeClass::CreateObject(*(CRuntimeClass **)(*(int *)(this + 0x1c) + 0x40));
    *(undefined4 *)(pCVar1 + 0x1c) = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)(pCVar1 + 4) = *(undefined4 *)(this + 4);
    *(undefined4 *)(pCVar1 + 8) = *(undefined4 *)(this + 8);
    *(undefined4 *)(pCVar1 + 0xc) = *(undefined4 *)(this + 0xc);
  }
  if (*(CWnd **)(this + 4) != (CWnd *)0x0) {
    uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 4));
    if ((uVar2 & 0x10000000) == 0) {
      *(undefined4 *)(pCVar1 + 4) = 0;
    }
    else {
      *(undefined4 *)(this + 4) = 0;
    }
  }
  if (*(CWnd **)(this + 8) != (CWnd *)0x0) {
    uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 8));
    if ((uVar2 & 0x10000000) == 0) {
      *(undefined4 *)(pCVar1 + 8) = 0;
    }
    else {
      *(undefined4 *)(this + 8) = 0;
    }
  }
  *(CPaneContainer **)(pCVar1 + 0x18) = param_1;
  if (*(int **)(this + 0x10) != (int *)0x0) {
    iVar3 = (**(code **)(**(int **)(this + 0x10) + 0x50))(pCVar1);
    *(int *)(pCVar1 + 0x10) = iVar3;
    if (iVar3 != 0) {
      *(CObject **)(iVar3 + 0x18) = pCVar1;
    }
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    iVar3 = (**(code **)(**(int **)(this + 0x14) + 0x50))(pCVar1);
    *(int *)(pCVar1 + 0x14) = iVar3;
    if (iVar3 != 0) {
      *(CObject **)(iVar3 + 0x18) = pCVar1;
    }
  }
  if (*(CWnd **)(this + 0xc) != (CWnd *)0x0) {
    uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 0xc));
    if ((uVar2 & 0x10000000) == 0) {
      *(undefined4 *)(pCVar1 + 0xc) = 0;
    }
    else {
      *(undefined4 *)(this + 0x40) = *(undefined4 *)(*(int *)(this + 0xc) + 0x104);
      GetClientRect(*(HWND *)(*(int *)(this + 0xc) + 0x20),(LPRECT)(this + 0x44));
      uVar4 = (**(code **)(**(int **)(this + 0xc) + 0x160))();
      *(undefined4 *)(this + 0x34) = uVar4;
      *(undefined4 *)(this + 0xc) = 0;
    }
  }
  return (CPaneContainer *)pCVar1;
}

