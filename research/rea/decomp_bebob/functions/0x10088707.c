// rea decompile_all
// name: CPane::Dock
// address: 0x10088707
// body: available
// range: 0x10088707-0x10088850 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CPane::Dock(class CBasePane *,struct tagRECT const *,enum
   AFX_DOCK_METHOD)
   
   Library: Visual Studio 2010 Release */

int __thiscall CPane::Dock(CPane *this,CBasePane *param_1,tagRECT *param_2,AFX_DOCK_METHOD param_3)

{
  char cVar1;
  CWnd *pCVar2;
  CDockingManager *this_00;
  int iVar3;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((param_3 == 2) && (param_1 = *(CBasePane **)(this + 500), param_1 == (CBasePane *)0x0)) {
    pCVar2 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
    this_00 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar2);
    CDockingManager::DockPane(this_00,(CBasePane *)this,0,(tagRECT *)0x0);
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x184))(param_1);
    if ((iVar3 != 0) && (iVar3 = (**(code **)(*(int *)param_1 + 0x180))(this), iVar3 != 0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      SetRectEmpty(&local_18);
      GetWindowRect(*(HWND *)(this + 0x20),&local_18);
      cVar1 = '\x01';
      iVar3 = (**(code **)(*(int *)this + 0x224))(0);
      if (iVar3 != 0) {
        cVar1 = *(char *)(iVar3 + 0x99);
      }
      SendMessageW(*(HWND *)(param_1 + 0x20),0xb,0,0);
      (**(code **)(*(int *)this + 0x29c))(param_1,param_3);
      if (param_3 == 1) {
        (**(code **)(**(int **)(this + 0xac) + 0x270))(this,1,&local_18);
        if (cVar1 != '\0') {
          (**(code **)(*(int *)this + 0x2f0))();
        }
      }
      else if ((param_3 == 4) || (param_3 == 2)) {
        (**(code **)(**(int **)(this + 0xac) + 0x270))(this,param_3,param_2);
      }
      SendMessageW(*(HWND *)(param_1 + 0x20),0xb,1,0);
    }
  }
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

