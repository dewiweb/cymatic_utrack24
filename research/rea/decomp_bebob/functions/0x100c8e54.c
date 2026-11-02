// rea decompile_all
// name: CPaneContainer::GetWindowRect
// address: 0x100c8e54
// body: available
// range: 0x100c8e54-0x100c9020 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainer::GetWindowRect(class CRect &,int)const 
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneContainer::GetWindowRect(CPaneContainer *this,CRect *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  BOOL BVar3;
  int iVar4;
  int local_44;
  int local_40;
  LPRECT local_3c;
  RECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_3c = (LPRECT)param_1;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  SetRectEmpty((LPRECT)param_1);
  SetRectEmpty(&local_28);
  SetRectEmpty(&local_18);
  iVar1 = CPaneContainerManager::IsAutoHideMode(*(CPaneContainerManager **)(this + 0x1c));
  if (*(CWnd **)(this + 4) != (CWnd *)0x0) {
    uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 4));
    if ((((uVar2 & 0x10000000) != 0) || (param_2 != 0)) || (iVar1 != 0)) {
      ::GetWindowRect(*(HWND *)(*(int *)(this + 4) + 0x20),&local_28);
      BVar3 = IsRectEmpty(&local_28);
      if (BVar3 != 0) {
        local_44 = 0;
        local_40 = 0;
        (**(code **)(**(int **)(this + 4) + 0x26c))(&local_44);
        if (local_28.right == local_28.left) {
          local_28.right = local_28.right + local_44;
        }
        if (local_28.bottom == local_28.top) {
          local_28.bottom = local_28.bottom + local_40;
        }
      }
    }
  }
  if (*(CWnd **)(this + 8) != (CWnd *)0x0) {
    uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 8));
    if ((((uVar2 & 0x10000000) != 0) || (param_2 != 0)) || (iVar1 != 0)) {
      ::GetWindowRect(*(HWND *)(*(int *)(this + 8) + 0x20),&local_18);
      BVar3 = IsRectEmpty(&local_18);
      if (BVar3 != 0) {
        local_44 = 0;
        local_40 = 0;
        (**(code **)(**(int **)(this + 8) + 0x26c))(&local_44);
        if (local_18.right == local_18.left) {
          local_18.right = local_18.right + local_44;
        }
        if (local_18.bottom == local_18.top) {
          local_18.bottom = local_18.bottom + local_40;
        }
      }
    }
  }
  UnionRect(local_3c,&local_28,&local_18);
  if (*(CPaneContainer **)(this + 0x10) != (CPaneContainer *)0x0) {
    iVar4 = IsVisible(*(CPaneContainer **)(this + 0x10));
    if (((iVar4 != 0) || (param_2 != 0)) || (iVar1 != 0)) {
      (**(code **)(**(int **)(this + 0x10) + 0xc))(&local_38,0);
      UnionRect(local_3c,local_3c,&local_38);
    }
  }
  if (*(CPaneContainer **)(this + 0x14) != (CPaneContainer *)0x0) {
    iVar4 = IsVisible(*(CPaneContainer **)(this + 0x14));
    if (((iVar4 != 0) || (param_2 != 0)) || (iVar1 != 0)) {
      (**(code **)(**(int **)(this + 0x14) + 0xc))(&local_38,0);
      UnionRect(local_3c,local_3c,&local_38);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

