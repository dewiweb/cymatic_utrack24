// rea decompile_all
// name: CPaneContainerManager::AddPaneAndPaneDivider
// address: 0x100c59d8
// body: available
// range: 0x100c59d8-0x100c5d41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: int __thiscall CPaneContainerManager::AddPaneAndPaneDivider(class CDockablePane
   *,class CDockablePane *,struct __POSITION *,unsigned long)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CPaneContainerManager::AddPaneAndPaneDivider
          (CPaneContainerManager *this,CDockablePane *param_1,CDockablePane *param_2,
          __POSITION *param_3,ulong param_4)

{
  CPaneContainerManager *pCVar1;
  int iVar2;
  ulong uVar3;
  CPaneDivider *pCVar4;
  CPaneContainer *this_00;
  int iVar5;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  CPaneContainer *local_5c;
  undefined4 local_58;
  int local_54;
  CPaneContainerManager *local_50;
  CDockablePane *local_4c;
  CDockablePane *local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x100c59e4;
  local_50 = this;
  if (*(int *)(this + 0x3c) == 0) goto LAB_100c5d3a;
  local_5c = (CPaneContainer *)(param_4 & 0xf000);
  if ((local_5c == (CPaneContainer *)0x1000) || (local_5c == (CPaneContainer *)0x2000)) {
    CObList::InsertBefore((CObList *)(this + 4),param_3,(CObject *)param_2);
  }
  else {
    if ((local_5c != (CPaneContainer *)0x4000) && (local_5c != (CPaneContainer *)0x8000))
    goto LAB_100c5d3a;
    CObList::InsertAfter((CObList *)(this + 4),param_3,(CObject *)param_2);
  }
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  local_44.left = 0;
  local_44.top = 0;
  local_44.right = 0;
  local_44.bottom = 0;
  local_6c = 0;
  local_68 = 0;
  (**(code **)(*(int *)param_1 + 0x26c))(&local_6c);
  local_64 = 0;
  local_60 = 0;
  (**(code **)(*(int *)param_2 + 0x26c))(&local_64);
  GetWindowRect(*(HWND *)(param_1 + 0x20),&local_34);
  GetWindowRect(*(HWND *)(param_2 + 0x20),&local_24);
  if (local_24.right - local_24.left < local_64) {
    local_24.right = local_24.left + local_64;
  }
  if (local_24.bottom - local_24.top < local_60) {
    local_24.bottom = local_24.top + local_60;
  }
  if ((param_4 & 0xa000) == 0) {
    local_24.top = local_34.top;
    local_44.top = local_34.top;
    local_24.bottom = local_34.bottom;
    local_44.bottom = local_34.bottom;
    iVar2 = (local_34.right - local_34.left) / 2;
    iVar5 = local_24.right - local_24.left;
    if (iVar2 < local_24.right - local_24.left) {
      iVar5 = iVar2;
    }
    local_58 = 2;
  }
  else {
    local_24.left = local_34.left;
    local_44.left = local_34.left;
    local_24.right = local_34.right;
    local_44.right = local_34.right;
    iVar2 = (local_34.bottom - local_34.top) / 2;
    iVar5 = local_24.bottom - local_24.top;
    if (iVar2 < local_24.bottom - local_24.top) {
      iVar5 = iVar2;
    }
    local_58 = 1;
  }
  local_54 = 0;
  local_4c = (CDockablePane *)0x0;
  local_48 = (CDockablePane *)0x0;
  CWnd::ScreenToClient(*(CWnd **)(local_50 + 0x4c),&local_34);
  CWnd::ScreenToClient(*(CWnd **)(local_50 + 0x4c),&local_24);
  CWnd::ScreenToClient(*(CWnd **)(local_50 + 0x4c),&local_44);
  uVar3 = CWnd::GetExStyle(*(CWnd **)(local_50 + 0x4c));
  if (local_5c == (CPaneContainer *)0x1000) {
    if ((uVar3 & 0x400000) == 0) {
LAB_100c5be3:
      local_44.left = iVar5 + local_34.left;
      local_24.left = local_34.left;
      local_44.right = DAT_10161280 + local_44.left;
      local_34.left = local_44.right;
      local_24.right = local_44.left;
      goto LAB_100c5bfe;
    }
LAB_100c5cca:
    local_24.right = local_34.right;
    local_44.right = local_34.right - iVar5;
    local_44.left = local_44.right - DAT_10161280;
    local_54 = 1;
    local_4c = param_1;
    local_48 = param_2;
    local_34.right = local_44.left;
    local_24.left = local_44.right;
  }
  else if (local_5c == (CPaneContainer *)0x2000) {
    local_24.top = local_34.top;
    local_44.top = iVar5 + local_34.top;
    local_44.bottom = DAT_10161280 + local_44.top;
    local_34.top = local_44.bottom;
    local_24.bottom = local_44.top;
LAB_100c5bfe:
    local_48 = param_1;
    local_4c = param_2;
  }
  else {
    if (local_5c == (CPaneContainer *)0x4000) {
      if ((uVar3 & 0x400000) == 0) goto LAB_100c5cca;
      goto LAB_100c5be3;
    }
    if (local_5c == (CPaneContainer *)0x8000) {
      local_44.bottom = local_34.bottom - iVar5;
      local_24.bottom = local_34.bottom;
      local_44.top = local_44.bottom - DAT_10161280;
      local_58 = 1;
      local_4c = param_1;
      local_48 = param_2;
      local_54 = 1;
      local_34.bottom = local_44.top;
      local_24.top = local_44.bottom;
    }
  }
  (**(code **)(*(int *)param_1 + 0x234))
            (0,local_34.left,local_34.top,local_34.right - local_34.left,
             local_34.bottom - local_34.top,0x14,0);
  (**(code **)(*(int *)param_2 + 0x234))
            (0,local_24.left,local_24.top,local_24.right - local_24.left,
             local_24.bottom - local_24.top,0x14,0);
  pCVar1 = local_50;
  pCVar4 = CreatePaneDivider(local_50,local_44.left,local_44.top,local_44.right,local_44.bottom,
                             local_58,0xffffffff);
  if (pCVar4 != (CPaneDivider *)0x0) {
    if (*(CRuntimeClass **)(pCVar1 + 0x40) == (CRuntimeClass *)0x0) {
      local_5c = FUN_1000858a(0x9c);
      local_8 = 0;
      if (local_5c == (CPaneContainer *)0x0) {
        this_00 = (CPaneContainer *)0x0;
      }
      else {
        this_00 = (CPaneContainer *)
                  CPaneContainer::CPaneContainer(local_5c,pCVar1,local_4c,local_48,pCVar4);
      }
      local_8 = 0xffffffff;
    }
    else {
      this_00 = (CPaneContainer *)CRuntimeClass::CreateObject(*(CRuntimeClass **)(pCVar1 + 0x40));
      CPaneContainer::SetPaneContainerManager(this_00,pCVar1,0);
      CPaneContainer::SetPane(this_00,local_4c,1);
      CPaneContainer::SetPane(this_00,local_48,0);
      *(CPaneDivider **)(this_00 + 0xc) = pCVar4;
    }
    CPaneContainer::AddSubPaneContainer(*(CPaneContainer **)(pCVar1 + 0x3c),this_00,local_54);
  }
LAB_100c5d3a:
  iVar5 = FUN_100f90cf();
  return iVar5;
}

