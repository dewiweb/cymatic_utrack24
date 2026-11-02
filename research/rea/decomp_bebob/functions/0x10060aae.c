// rea decompile_all
// name: CFrameImpl::OnGetMinMaxInfo
// address: 0x10060aae
// body: available
// range: 0x10060aae-0x10060c4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10060ad1 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameImpl::OnGetMinMaxInfo(struct tagMINMAXINFO *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameImpl::OnGetMinMaxInfo(CFrameImpl *this,tagMINMAXINFO *param_1)

{
  POINT pt;
  ulong uVar1;
  HMONITOR hMonitor;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  tagMONITORINFO *lpmi;
  tagMONITORINFO local_70;
  tagRECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (param_1 == (tagMINMAXINFO *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  uVar1 = CWnd::GetExStyle(*(CWnd **)(this + 0xb0));
  if ((uVar1 & 0xc00000) != 0) {
    uVar1 = CWnd::GetExStyle(*(CWnd **)(this + 0xb0));
    if ((uVar1 & 0x800000) != 0) goto LAB_10060c3a;
  }
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  GetWindowRect(*(HWND *)(*(int *)(this + 0xb0) + 0x20),&local_28);
  local_18 = 0;
  lpmi = &local_70;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_70.cbSize = 0x28;
  pt.y = (local_28.top + local_28.bottom) / 2;
  pt.x = (local_28.left + local_28.right) / 2;
  hMonitor = MonitorFromPoint(pt,2);
  BVar2 = GetMonitorInfoW(hMonitor,lpmi);
  if (BVar2 == 0) {
    SystemParametersInfoW(0x30,0,&local_18,0);
  }
  else {
    CopyRect(&local_38,&local_70.rcWork);
    CopyRect(&local_48,&local_70.rcMonitor);
    local_18 = local_38.left - local_48.left;
    local_14 = local_38.top - local_48.top;
    local_10 = (local_38.right - local_38.left) + local_18;
    local_c = (local_38.bottom - local_38.top) + local_14;
  }
  uVar3 = AFX_GLOBAL_DATA::GetShellAutohideBars((AFX_GLOBAL_DATA *)&DAT_10166aa0);
  if ((uVar3 & 8) != 0) {
    local_c = local_c + -2;
  }
  if ((uVar3 & 4) != 0) {
    local_14 = local_14 + 2;
  }
  if ((uVar3 & 2) != 0) {
    local_10 = local_10 + -2;
  }
  if ((uVar3 & 1) != 0) {
    local_18 = local_18 + 2;
  }
  *(int *)(param_1 + 0x10) = local_18;
  *(int *)(param_1 + 0x14) = local_14;
  *(int *)(param_1 + 8) = local_10 - local_18;
  *(int *)(param_1 + 0xc) = local_c - local_14;
  iVar4 = *(int *)(this + 0xfc);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) && (*(int *)(iVar4 + 0x314) != 0)) {
    iVar4 = AFX_GLOBAL_DATA::DwmIsCompositionEnabled((AFX_GLOBAL_DATA *)&DAT_10166aa0);
    if (iVar4 == 0) {
      iVar4 = GetSystemMetrics(0x22);
      *(int *)(param_1 + 0x18) = iVar4;
      iVar4 = GetSystemMetrics(0x23);
      *(int *)(param_1 + 0x1c) = iVar4;
    }
  }
LAB_10060c3a:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

