// rea decompile_all
// name: CDockablePane::DockPaneContainer
// address: 0x1007c0b3
// body: available
// range: 0x1007c0b3-0x1007c195 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007c17b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CDockablePane::DockPaneContainer(class CPaneContainerManager
   &,unsigned long,enum AFX_DOCK_METHOD)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CDockablePane::DockPaneContainer
          (CDockablePane *this,CPaneContainerManager *param_1,ulong param_2,AFX_DOCK_METHOD param_3)

{
  undefined4 *puVar1;
  BOOL BVar2;
  CObject *this_00;
  undefined4 uVar3;
  CPaneDivider *pCVar4;
  int iVar5;
  undefined4 *puVar6;
  CObList local_30 [4];
  undefined4 *local_2c;
  CObject *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x1007c0bf;
  if ((*(HWND *)(this + 0x33c) != (HWND)0x0) &&
     (BVar2 = IsWindow(*(HWND *)(this + 0x33c)), BVar2 != 0)) {
    CObList::CObList(local_30,10);
    local_8 = 0;
    CPaneContainerManager::AddPanesToList(param_1,local_30,(CObList *)0x0);
    puVar6 = local_2c;
    while (puVar6 != (undefined4 *)0x0) {
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = puVar6 + 2;
      puVar6 = (undefined4 *)*puVar6;
      this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)*puVar1
                                  );
      local_14 = this_00;
      CBasePane::InsertPane((CBasePane *)this,(CBasePane *)this_00,(CBasePane *)this,1);
      SetDefaultPaneDivider((CDockablePane *)this_00,*(HWND__ **)(this + 0x33c));
      iVar5 = *(int *)this_00;
      uVar3 = (**(code **)(*(int *)this + 400))();
      (**(code **)(iVar5 + 0x1dc))(uVar3);
    }
    pCVar4 = GetDefaultPaneDivider(this);
    if (pCVar4 != (CPaneDivider *)0x0) {
      iVar5 = (**(code **)(*(int *)pCVar4 + 0x284))(this,param_1,param_2);
      local_8 = 0xffffffff;
      FUN_1001e259(local_30);
      return iVar5;
    }
    local_8 = 0xffffffff;
    FUN_1001e259(local_30);
  }
  return 0;
}

