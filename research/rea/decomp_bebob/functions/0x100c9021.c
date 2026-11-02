// rea decompile_all
// name: CPaneContainer::GetMinSize
// address: 0x100c9021
// body: available
// range: 0x100c9021-0x100c91ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c9035 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainer::GetMinSize(class CSize &)const 
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneContainer::GetMinSize(CPaneContainer *this,CSize *param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(this + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)param_1 = 0;
  local_24 = 0;
  local_20 = 0;
  local_c = 0;
  local_8 = 0;
  iVar1 = CPaneContainerManager::IsAutoHideMode(*(CPaneContainerManager **)(this + 0x1c));
  if ((*(CWnd **)(this + 4) != (CWnd *)0x0) &&
     ((uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 4)), (uVar2 & 0x10000000) != 0 || (iVar1 != 0))))
  {
    (**(code **)(**(int **)(this + 4) + 0x26c))(&local_24);
  }
  if ((*(CWnd **)(this + 8) != (CWnd *)0x0) &&
     ((uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 8)), (uVar2 & 0x10000000) != 0 || (iVar1 != 0))))
  {
    (**(code **)(**(int **)(this + 8) + 0x26c))(&local_c);
  }
  local_14 = 0;
  local_10 = 0;
  if ((*(CPaneContainer **)(this + 0x10) != (CPaneContainer *)0x0) &&
     ((iVar3 = IsVisible(*(CPaneContainer **)(this + 0x10)), iVar3 != 0 || (iVar1 != 0)))) {
    (**(code **)(**(int **)(this + 0x10) + 0x10))(&local_14);
  }
  local_1c = 0;
  local_18 = 0;
  if ((*(CPaneContainer **)(this + 0x14) != (CPaneContainer *)0x0) &&
     ((iVar3 = IsVisible(*(CPaneContainer **)(this + 0x14)), iVar3 != 0 || (iVar1 != 0)))) {
    (**(code **)(**(int **)(this + 0x14) + 0x10))(&local_1c);
  }
  if ((*(CWnd **)(this + 0xc) == (CWnd *)0x0) ||
     ((uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 0xc)), (uVar2 & 0x10000000) == 0 && (iVar1 == 0)))
     ) {
    iVar1 = local_24;
    if (local_24 <= local_c) {
      iVar1 = local_c;
    }
    *(int *)param_1 = iVar1;
    iVar1 = local_20;
    if (local_20 <= local_8) {
      iVar1 = local_8;
    }
    *(int *)(param_1 + 4) = iVar1;
    if ((*(CPaneContainer **)(this + 0x10) != (CPaneContainer *)0x0) &&
       (iVar1 = IsVisible(*(CPaneContainer **)(this + 0x10)), iVar1 != 0)) {
      *(int *)param_1 = local_14;
      *(int *)(param_1 + 4) = local_10;
    }
    if (*(CPaneContainer **)(this + 0x14) == (CPaneContainer *)0x0) {
      return;
    }
    iVar1 = IsVisible(*(CPaneContainer **)(this + 0x14));
    if (iVar1 == 0) {
      return;
    }
    *(int *)param_1 = local_1c;
  }
  else {
    iVar1 = IsPaneDividerHorz(this);
    if (iVar1 == 0) {
      if (local_20 <= local_8) {
        local_20 = local_8;
      }
      *(int *)(param_1 + 4) = local_20;
      if (local_20 < local_10) {
        local_20 = local_10;
      }
      *(int *)(param_1 + 4) = local_20;
      if (local_20 < local_18) {
        local_20 = local_18;
      }
      *(int *)(param_1 + 4) = local_20;
      *(int *)param_1 =
           *(int *)(*(int *)(this + 0xc) + 0x108) + local_1c + local_14 + local_c + local_24;
      return;
    }
    if (local_24 <= local_c) {
      local_24 = local_c;
    }
    *(int *)param_1 = local_24;
    if (local_24 < local_14) {
      local_24 = local_14;
    }
    *(int *)param_1 = local_24;
    if (local_24 < local_1c) {
      local_24 = local_1c;
    }
    *(int *)param_1 = local_24;
    local_18 = *(int *)(*(int *)(this + 0xc) + 0x108) + local_18 + local_10 + local_8 + local_20;
  }
  *(int *)(param_1 + 4) = local_18;
  return;
}

