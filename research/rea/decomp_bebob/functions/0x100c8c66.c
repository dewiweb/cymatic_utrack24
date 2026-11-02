// rea decompile_all
// name: CPaneContainer::OnShowPane
// address: 0x100c8c66
// body: available
// range: 0x100c8c66-0x100c8d2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainer::OnShowPane(class CDockablePane *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneContainer::OnShowPane(CPaneContainer *this,CDockablePane *param_1,int param_2)

{
  CWnd *this_00;
  CDockablePane *pCVar1;
  int *piVar2;
  undefined4 local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    this_00 = (CWnd *)(**(code **)(**(int **)(this + 0x1c) + 0x74))();
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    (**(code **)(*(int *)this + 0xc))(&local_18,1);
    CWnd::ScreenToClient(this_00,&local_18);
    pCVar1 = *(CDockablePane **)(this + 4);
    if (((pCVar1 == (CDockablePane *)0x0) || (pCVar1 == param_1)) &&
       ((pCVar1 = *(CDockablePane **)(this + 8), pCVar1 == (CDockablePane *)0x0 ||
        (pCVar1 == param_1)))) {
      if (*(int *)(this + 0x10) == 0) {
        if (*(int *)(this + 0x14) == 0) goto LAB_100c8d1e;
        piVar2 = *(int **)(this + 0x14);
      }
      else {
        piVar2 = *(int **)(this + 0x10);
      }
      local_1c = 0;
      (**(code **)(*piVar2 + 0x48))
                (local_18.left,local_18.top,local_18.right,local_18.bottom,&local_1c,1);
    }
    else {
      (**(code **)(*(int *)pCVar1 + 0x234))
                (0,local_18.left,local_18.top,local_18.right - local_18.left,
                 local_18.bottom - local_18.top,0x14,0);
    }
  }
LAB_100c8d1e:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

