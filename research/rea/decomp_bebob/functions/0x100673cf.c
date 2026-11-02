// rea decompile_all
// name: CGlobalUtils::AdjustRectToWorkArea
// address: 0x100673cf
// body: available
// range: 0x100673cf-0x10067512 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CGlobalUtils::AdjustRectToWorkArea(class CRect &,class CRect *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CGlobalUtils::AdjustRectToWorkArea(CGlobalUtils *this,CRect *param_1,CRect *param_2)

{
  POINT pt;
  HMONITOR hMonitor;
  BOOL BVar1;
  int iVar2;
  tagMONITORINFO *lpmi;
  tagPOINT local_50;
  CRect *local_48;
  int local_44;
  tagMONITORINFO local_40;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_48 = param_2;
  local_50.x = 0;
  local_50.y = 0;
  if (*(int *)(this + 8) == 0) {
    local_50.x = *(LONG *)param_1;
    local_50.y = *(LONG *)(param_1 + 4);
  }
  else {
    GetCursorPos(&local_50);
  }
  lpmi = &local_40;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_40.cbSize = 0x28;
  pt.y = local_50.y;
  pt.x = local_50.x;
  hMonitor = MonitorFromPoint(pt,2);
  BVar1 = GetMonitorInfoW(hMonitor,lpmi);
  if (BVar1 == 0) {
    SystemParametersInfoW(0x30,0,&local_18,0);
  }
  else {
    CopyRect(&local_18,&local_40.rcWork);
  }
  if (param_2 == (CRect *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)param_2;
  }
  if (*(int *)(param_1 + 8) <= local_18.left + iVar2) {
    OffsetRect((LPRECT)param_1,(local_18.left - *(int *)(param_1 + 8)) + iVar2,0);
  }
  if (local_48 == (CRect *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = *(int *)(local_48 + 8);
  }
  if (local_18.right - local_44 <= *(int *)param_1) {
    OffsetRect((LPRECT)param_1,(local_18.right - *(int *)param_1) - local_44,0);
  }
  if (local_48 == (CRect *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = *(int *)(local_48 + 0xc);
  }
  if (local_18.bottom - local_44 <= *(int *)(param_1 + 4)) {
    OffsetRect((LPRECT)param_1,0,(local_18.bottom - *(int *)(param_1 + 4)) - local_44);
  }
  if (local_48 == (CRect *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(local_48 + 4);
  }
  if (*(int *)(param_1 + 0xc) < local_18.top + iVar2) {
    OffsetRect((LPRECT)param_1,0,(local_18.top - *(int *)(param_1 + 0xc)) + iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

