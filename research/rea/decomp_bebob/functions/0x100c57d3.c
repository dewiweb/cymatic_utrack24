// rea decompile_all
// name: CPaneContainerManager::AddPaneAndPaneContainer
// address: 0x100c57d3
// body: available
// range: 0x100c57d3-0x100c59d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: int __thiscall CPaneContainerManager::AddPaneAndPaneContainer(class CDockablePane
   *,class CPaneContainer *,unsigned long)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CPaneContainerManager::AddPaneAndPaneContainer
          (CPaneContainerManager *this,CDockablePane *param_1,CPaneContainer *param_2,ulong param_3)

{
  CPaneContainerManager *pCVar1;
  ulong uVar2;
  CPaneDivider *pCVar3;
  CPaneContainer *pCVar4;
  int iVar5;
  undefined4 local_68;
  CDockablePane *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  CPaneContainerManager *local_50;
  CPaneContainer *local_4c;
  CPaneContainer *local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x100c57df;
  local_64 = param_1;
  local_4c = param_2;
  local_50 = this;
  if (*(int *)(this + 0x3c) != 0) {
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
    SetRectEmpty(&local_44);
    local_58 = 0;
    local_54 = 0;
    (**(code **)(*(int *)param_1 + 0x26c))(&local_58);
    local_60 = 0;
    local_5c = 0;
    (**(code **)(*(int *)local_4c + 0x10))(&local_60);
    GetWindowRect(*(HWND *)(param_1 + 0x20),&local_34);
    (**(code **)(*(int *)local_4c + 0xc))(&local_24,0);
    local_48 = (CPaneContainer *)0x1;
    CWnd::ScreenToClient(*(CWnd **)(this + 0x4c),&local_34);
    CWnd::ScreenToClient(*(CWnd **)(this + 0x4c),&local_24);
    CWnd::ScreenToClient(*(CWnd **)(this + 0x4c),&local_44);
    uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 0x4c));
    CalcRects(this,&local_34,&local_24,&local_44,&local_48,param_3,local_58,local_54,local_60,
              local_5c);
    (**(code **)(*(int *)param_1 + 0x230))(&local_34,1,0);
    pCVar4 = local_4c;
    local_68 = 0;
    (**(code **)(*(int *)local_4c + 0x48))
              (local_24.left,local_24.top,local_24.right,local_24.bottom,&local_68,0);
    (**(code **)(*(int *)pCVar4 + 0x30))(local_24.left,local_24.top);
    pCVar1 = local_50;
    pCVar3 = CreatePaneDivider(local_50,local_44.left,local_44.top,local_44.right,local_44.bottom,
                               local_48,0xffffffff);
    if (pCVar3 != (CPaneDivider *)0x0) {
      if (*(CRuntimeClass **)(pCVar1 + 0x40) == (CRuntimeClass *)0x0) {
        local_48 = FUN_1000858a(0x9c);
        local_8 = 0;
        if (local_48 == (CPaneContainer *)0x0) {
          pCVar4 = (CPaneContainer *)0x0;
        }
        else {
          pCVar4 = (CPaneContainer *)
                   CPaneContainer::CPaneContainer
                             (local_48,(CPaneContainerManager *)0x0,(CDockablePane *)0x0,
                              (CDockablePane *)0x0,(CPaneDivider *)0x0);
        }
        local_8 = 0xffffffff;
      }
      else {
        pCVar4 = (CPaneContainer *)CRuntimeClass::CreateObject(*(CRuntimeClass **)(pCVar1 + 0x40));
      }
      CPaneContainer::SetPaneContainerManager(pCVar4,local_50,0);
      *(CPaneDivider **)(pCVar4 + 0xc) = pCVar3;
      local_48 = (CPaneContainer *)(uint)((param_3 & 0xc000) != 0);
      if ((uVar2 & 0x400000) != 0) {
        local_48 = (CPaneContainer *)(param_3 & 0x1000);
      }
      CPaneContainer::SetPane(pCVar4,local_64,(int)local_48);
      CPaneContainer::SetPaneContainer(pCVar4,local_4c,(uint)(local_48 == (CPaneContainer *)0x0));
      BringWindowToTop(*(HWND *)(pCVar3 + 0x20));
      CPaneContainer::AddSubPaneContainer
                (*(CPaneContainer **)(local_50 + 0x3c),pCVar4,(int)local_48);
    }
  }
  iVar5 = FUN_100f90cf();
  return iVar5;
}

