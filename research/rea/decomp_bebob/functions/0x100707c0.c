// rea decompile_all
// name: SaveState
// address: 0x100707c0
// body: available
// range: 0x100707c0-0x10070963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100707df to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMFCMenuBar::SaveState(char const *,int,unsigned int)
    public: virtual int __thiscall CMFCMenuBar::SaveState(wchar_t const *,int,unsigned int)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall SaveState(void *this,short *param_1,int param_2)

{
  CObject *pCVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  AFX_MODULE_STATE *pAVar5;
  int iVar6;
  CFrameWnd *pCVar7;
  int local_18;
  CObject *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x100707cc;
  if (*(int *)((int)this + 0xcd8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  FUN_1009b642(&param_1,DAT_10168714,param_1);
  local_8 = 0;
  CMenuHash::SaveMenuBar((CMenuHash *)&DAT_10168048,*(HMENU__ **)((int)this + 0xcd4),this);
  iVar2 = *(int *)((int)this + 0xcf8);
  CMFCMenuBar::SetMaximizeMode(this,0,(CWnd *)0x0,0);
  pAVar5 = AfxGetModuleState();
  piVar3 = *(int **)(*(int *)(pAVar5 + 4) + 0x5c);
  if ((*(int *)((int)this + 0xcc8) != 0) && (piVar3 != (int *)0x0)) {
    local_18 = (**(code **)(*piVar3 + 0x10))();
    while (local_18 != 0) {
      local_14 = (CObject *)(**(code **)(*piVar3 + 0x14))(&local_18);
      iVar6 = CObject::IsKindOf(local_14,(CRuntimeClass *)&PTR_s_CMultiDocTemplate_10134a2c);
      if ((iVar6 != 0) && (pCVar1 = local_14 + 0x88, *(HMENU__ **)pCVar1 != (HMENU__ *)0x0)) {
        local_14 = *(CObject **)(local_14 + 0x54);
        iVar6 = CMenuHash::LoadMenuBar((CMenuHash *)&DAT_10168048,*(HMENU__ **)pCVar1,this);
        if (iVar6 != 0) {
          (**(code **)(*(int *)this + 0x434))(local_14);
          SaveState(this,param_1,param_2,(int)local_14);
        }
      }
    }
  }
  iVar6 = CMenuHash::LoadMenuBar((CMenuHash *)&DAT_10168048,*(HMENU__ **)((int)this + 0xcd8),this);
  if (iVar6 != 0) {
    (**(code **)(*(int *)this + 0x434))(*(undefined4 *)((int)this + 0xce4));
    SaveState(this,param_1,param_2,0);
  }
  bVar4 = true;
  if ((*(HMENU__ **)((int)this + 0xcd4) == (HMENU__ *)0x0) ||
     (iVar6 = CMenuHash::LoadMenuBar
                        ((CMenuHash *)&DAT_10168048,*(HMENU__ **)((int)this + 0xcd4),this),
     iVar6 == 0)) {
    bVar4 = false;
  }
  if (iVar2 != 0) {
    CMFCMenuBar::RestoreMaximizeMode(this,(uint)!bVar4);
  }
  (**(code **)(*(int *)this + 0x2d4))(1);
  if (bVar4) {
    pCVar7 = CWnd::GetParentFrame(this);
    (**(code **)(*(int *)pCVar7 + 0x174))(1);
    InvalidateRect(*(HWND *)((int)this + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)((int)this + 0x20));
  }
  (**(code **)(*(int *)this + 0x208))();
  FUN_10001030((undefined4 *)(param_1 + -8));
  return 1;
}

