// rea decompile_all
// name: CPaneContainerManager::GetMinMaxOffset
// address: 0x100c54d7
// body: available
// range: 0x100c54d7-0x100c56f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainerManager::GetMinMaxOffset(class CPaneDivider *,int
   &,int &,int &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CPaneContainerManager::GetMinMaxOffset
          (CPaneContainerManager *this,CPaneDivider *param_1,int *param_2,int *param_3,int *param_4)

{
  CWnd *pCVar1;
  CDockingManager *pCVar2;
  uint uVar3;
  int iVar4;
  LONG LVar5;
  CPaneContainer *pCVar6;
  tagRECT *ptVar7;
  int local_50;
  CPaneContainerManager *local_4c;
  int local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  *param_3 = 0;
  *param_2 = 0;
  *param_4 = -1;
  local_3c = param_2;
  local_40 = param_3;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_4c = this;
  GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
  if (*(int *)(param_1 + 0x11c) == 0) {
    pCVar6 = CPaneContainer::FindSubPaneContainer
                       (*(CPaneContainer **)(this + 0x3c),(CObject *)param_1,2);
    if (pCVar6 == (CPaneContainer *)0x0) goto LAB_100c56e9;
    (**(code **)(*(int *)pCVar6 + 0xc))(&local_28,0);
    local_48 = 0;
    local_44 = 0;
    local_50 = 0;
    local_4c = (CPaneContainerManager *)0x0;
    (**(code **)(*(int *)pCVar6 + 0x14))(&local_48);
    (**(code **)(*(int *)pCVar6 + 0x18))(&local_50);
    iVar4 = (**(code **)(*(int *)param_1 + 0x160))();
    if (iVar4 == 0) {
      *local_3c = (local_48 - local_18.left) + local_28.left;
      iVar4 = (local_28.right - local_50) - local_18.right;
    }
    else {
      *local_3c = (local_44 - local_18.top) + 1 + local_28.top;
      iVar4 = (local_28.bottom - (int)local_4c) - local_18.bottom;
    }
    *local_40 = iVar4 + -1;
    iVar4 = *(int *)pCVar6;
  }
  else {
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    pCVar1 = (CWnd *)(**(code **)(*(int *)param_1 + 0x198))();
    pCVar2 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar1);
    (**(code **)(**(int **)(this + 0x3c) + 0xc))(&local_28,0);
    local_48 = 0;
    local_44 = 0;
    (**(code **)(**(int **)(this + 0x3c) + 0x10))(&local_48);
    InflateRect(&local_28,-local_48,-local_44);
    local_38.left = *(LONG *)(pCVar2 + 0xf8);
    local_38.top = *(LONG *)(pCVar2 + 0xfc);
    local_38.right = *(LONG *)(pCVar2 + 0x100);
    ptVar7 = &local_38;
    local_38.bottom = *(LONG *)(pCVar2 + 0x104);
    pCVar1 = (CWnd *)(**(code **)(*(int *)param_1 + 0x198))();
    CWnd::ClientToScreen(pCVar1,ptVar7);
    InflateRect(&local_38,-DAT_1016230c,-DAT_1016230c);
    uVar3 = (**(code **)(*(int *)param_1 + 400))();
    if ((uVar3 & 0x1000) == 0) {
      if ((uVar3 & 0x2000) != 0) {
        *local_3c = (local_28.top - local_18.top) + 1;
        LVar5 = local_38.bottom;
LAB_100c563c:
        iVar4 = LVar5 - local_18.bottom;
        goto LAB_100c563f;
      }
      if ((uVar3 & 0x4000) != 0) {
        *local_3c = (local_38.left - local_18.left) + 1;
        LVar5 = local_28.right;
        goto LAB_100c55f1;
      }
      if ((uVar3 & 0x8000) != 0) {
        *local_3c = (local_38.top - local_18.top) + 1;
        LVar5 = local_28.bottom;
        goto LAB_100c563c;
      }
    }
    else {
      *local_3c = (local_28.left - local_18.left) + 1;
      LVar5 = local_38.right;
LAB_100c55f1:
      iVar4 = LVar5 - local_18.right;
LAB_100c563f:
      *local_40 = iVar4 + -1;
    }
    iVar4 = **(int **)(local_4c + 0x3c);
  }
  iVar4 = (**(code **)(iVar4 + 0x1c))();
  *param_4 = iVar4;
LAB_100c56e9:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

