// rea decompile_all
// name: CMFCTasksPane::ChangeActivePage
// address: 0x100f13be
// body: available
// range: 0x100f13be-0x100f14c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f1425 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTasksPane::ChangeActivePage(int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCTasksPane::ChangeActivePage(CMFCTasksPane *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  __POSITION *p_Var3;
  CWnd *this_00;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((((-1 < param_1) && (param_1 < *(int *)(this + 0x50c))) && (-1 < param_2)) &&
     (param_2 < *(int *)(this + 0x50c))) {
    iVar2 = *(int *)(*(int *)(this + 0x508) + param_2 * 4);
    if (*(int *)(*(int *)(this + 0x508) + param_1 * 4) != iVar2) {
      if ((this == (CMFCTasksPane *)0x0) || (*(int *)(this + 0x20) == 0)) {
        (**(code **)(*(int *)this + 0x3d4))();
        RebuildMenu(this);
      }
      else {
        p_Var3 = CObList::FindIndex((CObList *)(this + 0x44c),iVar2);
        if (p_Var3 == (__POSITION *)0x0) goto LAB_100f1425;
        iVar2 = *(int *)(p_Var3 + 8);
        puVar4 = *(undefined4 **)(this + 0x46c);
        while (puVar4 != (undefined4 *)0x0) {
          if (puVar4 == (undefined4 *)0x0) goto LAB_100f1425;
          piVar1 = puVar4 + 2;
          puVar4 = (undefined4 *)*puVar4;
          if (*(int *)(*piVar1 + 4) == iVar2) {
            puVar5 = *(undefined4 **)(*piVar1 + 0x10);
            while (puVar5 != (undefined4 *)0x0) {
              if (puVar5 == (undefined4 *)0x0) goto LAB_100f1425;
              piVar1 = puVar5 + 2;
              puVar5 = (undefined4 *)*puVar5;
              if (*(HWND__ **)(*piVar1 + 0x2c) != (HWND__ *)0x0) {
                this_00 = CWnd::FromHandle(*(HWND__ **)(*piVar1 + 0x2c));
                CWnd::ShowWindow(this_00,0);
              }
            }
          }
        }
        UpdateCaption(this);
        (**(code **)(*(int *)this + 0x3d4))();
        RebuildMenu(this);
        *(undefined4 *)(this + 0x380) = 0;
        AdjustScroll(this);
        (**(code **)(*(int *)this + 0x3e4))(0);
        InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
        UpdateWindow(*(HWND *)(this + 0x20));
      }
    }
    return;
  }
LAB_100f1425:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

