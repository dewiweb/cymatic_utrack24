// rea decompile_all
// name: FID_conflict:GetMinSizeLeft
// address: 0x100c9280
// body: available
// range: 0x100c9280-0x100c930f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: virtual void __thiscall CPaneContainer::GetMinSizeLeft(class CSize &)const 
    public: virtual void __thiscall CPaneContainer::GetMinSizeRight(class CSize &)const 
   
   Library: Visual Studio 2010 Release */

void __thiscall FID_conflict_GetMinSizeLeft(void *this,int *param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = CPaneContainerManager::IsAutoHideMode(*(CPaneContainerManager **)((int)this + 0x1c));
  local_14 = 0;
  local_10 = 0;
  if (*(CWnd **)((int)this + 8) != (CWnd *)0x0) {
    uVar2 = CWnd::GetExStyle(*(CWnd **)((int)this + 8));
    if (((uVar2 & 0x10000000) != 0) || (iVar1 != 0)) {
      (**(code **)(**(int **)((int)this + 8) + 0x26c))(&local_14);
    }
  }
  local_c = 0;
  local_8 = 0;
  if (*(CPaneContainer **)((int)this + 0x14) != (CPaneContainer *)0x0) {
    iVar3 = CPaneContainer::IsVisible(*(CPaneContainer **)((int)this + 0x14));
    if ((iVar3 != 0) || (iVar1 != 0)) {
      (**(code **)(**(int **)((int)this + 0x14) + 0x10))(&local_c);
    }
  }
  if (local_14 <= local_c) {
    local_14 = local_c;
  }
  *param_1 = local_14;
  if (local_10 <= local_8) {
    local_10 = local_8;
  }
  param_1[1] = local_10;
  return;
}

