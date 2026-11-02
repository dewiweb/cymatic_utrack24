// rea decompile_all
// name: CMFCTasksPane::PreTranslateMessage
// address: 0x100ee221
// body: available
// range: 0x100ee221-0x100ee2f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ee2d3 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCTasksPane::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCTasksPane::PreTranslateMessage(CMFCTasksPane *this,tagMSG *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  POINT pt;
  LPARAM LVar3;
  undefined4 *puVar4;
  int iVar5;
  BOOL BVar6;
  undefined4 *puVar7;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (param_1->message == 0x203) {
    puVar7 = *(undefined4 **)(this + 0x46c);
    while (puVar7 != (undefined4 *)0x0) {
      if (puVar7 == (undefined4 *)0x0) {
LAB_100ee2d3:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      piVar1 = puVar7 + 2;
      puVar7 = (undefined4 *)*puVar7;
      puVar4 = *(undefined4 **)(*piVar1 + 0x10);
      while (puVar4 != (undefined4 *)0x0) {
        if (puVar4 == (undefined4 *)0x0) goto LAB_100ee2d3;
        piVar1 = puVar4 + 2;
        puVar4 = (undefined4 *)*puVar4;
        if (*(HWND *)(*piVar1 + 0x2c) == param_1->hwnd) goto LAB_100ee2d8;
      }
    }
    uVar2 = *(undefined2 *)((int)&param_1->lParam + 2);
    LVar3 = param_1->lParam;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    iVar5 = (**(code **)(*(int *)this + 0x3c8))();
    if (iVar5 != 0) {
      InflateRect(&local_18,-1,-1);
    }
    pt.y._0_2_ = uVar2;
    pt.x = (uint)(ushort)LVar3;
    pt.y._2_2_ = 0;
    BVar6 = PtInRect(&local_18,pt);
    if (BVar6 != 0) goto LAB_100ee2e0;
  }
LAB_100ee2d8:
  CDockablePane::PreTranslateMessage((CDockablePane *)this,param_1);
LAB_100ee2e0:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}

