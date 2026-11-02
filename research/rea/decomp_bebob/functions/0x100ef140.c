// rea decompile_all
// name: CMFCTasksPane::OnLButtonDown
// address: 0x100ef140
// body: available
// range: 0x100ef140-0x100ef23f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTasksPane::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCTasksPane::OnLButtonDown(CMFCTasksPane *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  POINT pt;
  POINT pt_00;
  undefined4 uVar1;
  CMFCTasksPaneTask *pCVar2;
  BOOL BVar3;
  int iVar4;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  uVar1 = (**(code **)(*(int *)this + 1000))(param_3,param_4);
  *(undefined4 *)(this + 0x51c) = uVar1;
  pCVar2 = TaskHitTest(this,param_3,param_4);
  *(CMFCTasksPaneTask **)(this + 0x448) = pCVar2;
  if (pCVar2 != (CMFCTasksPaneTask *)0x0) {
    local_20.x = *(LONG *)(pCVar2 + 0xc);
    local_20.y = *(LONG *)(pCVar2 + 0x10);
    ClientToScreen(*(HWND *)(this + 0x20),&local_20);
    NotifyWinEvent(0x8005,*(HWND *)(this + 0x20),-4,
                   CONCAT22((undefined2)local_20.y,(undefined2)local_20.x));
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  pt.y = param_4;
  pt.x = param_3;
  BVar3 = PtInRect(&local_18,pt);
  if (BVar3 != 0) {
    pt_00.y = param_4;
    pt_00.x = param_3;
    BVar3 = PtInRect((RECT *)(this + 0x3fc),pt_00);
    if (BVar3 == 0) {
      iVar4 = (**(code **)(*(int *)this + 0x3c8))();
      if (iVar4 != 0) {
        CWnd::SetFocus((CWnd *)this);
      }
      goto LAB_100ef230;
    }
  }
  CDockablePane::OnLButtonDown((CDockablePane *)this,param_1,param_3,param_4);
LAB_100ef230:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

