// rea decompile_all
// name: RestorePosition
// address: 0x1006022f
// body: available
// range: 0x1006022f-0x100603a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CFrameImpl::RestorePosition(struct tagCREATESTRUCTA &)
    protected: void __thiscall CFrameImpl::RestorePosition(struct tagCREATESTRUCTW &)
   
   Library: Visual Studio 2010 Release */

void RestorePosition(int param_1)

{
  POINT pt;
  AFX_MODULE_STATE *pAVar1;
  CObject *pCVar2;
  int iVar3;
  HMONITOR hMonitor;
  BOOL BVar4;
  tagMONITORINFO *lpmi;
  undefined4 local_68;
  int local_64;
  tagMONITORINFO local_60;
  tagRECT local_38;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pAVar1 = AfxGetModuleState();
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_1012f19c,*(CObject **)(pAVar1 + 4));
  if ((pCVar2 != (CObject *)0x0) && (*(int *)(param_1 + 4) != 0)) {
    local_18.left = *(int *)(param_1 + 0x1c);
    local_68 = 0;
    local_18.top = *(int *)(param_1 + 0x18);
    local_18.bottom = *(int *)(param_1 + 0x10) + local_18.top;
    local_18.right = local_18.left + *(int *)(param_1 + 0x14);
    local_64 = 1;
    iVar3 = (**(code **)(*(int *)pCVar2 + 0x140))(&local_18,&local_68,&local_64);
    if (iVar3 != 0) {
      if (local_64 != 3) {
        local_64 = 1;
      }
      pAVar1 = AfxGetModuleState();
      iVar3 = *(int *)(*(int *)(pAVar1 + 4) + 0x4c);
      if ((iVar3 < 2) || ((3 < iVar3 && (1 < iVar3 - 6U)))) {
        pAVar1 = AfxGetModuleState();
        *(int *)(*(int *)(pAVar1 + 4) + 0x4c) = local_64;
      }
      lpmi = &local_60;
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      local_38.left = 0;
      local_38.top = 0;
      local_38.right = 0;
      local_38.bottom = 0;
      local_60.cbSize = 0x28;
      pt.y = local_18.top;
      pt.x = local_18.left;
      hMonitor = MonitorFromPoint(pt,2);
      BVar4 = GetMonitorInfoW(hMonitor,lpmi);
      if (BVar4 == 0) {
        SystemParametersInfoW(0x30,0,&local_28,0);
      }
      else {
        CopyRect(&local_28,&local_60.rcWork);
      }
      if (local_64 == 3) {
        *(LONG *)(param_1 + 0x1c) = local_28.left;
        *(LONG *)(param_1 + 0x18) = local_28.top;
        *(LONG *)(param_1 + 0x14) = local_28.right - local_28.left;
        iVar3 = local_28.bottom - local_28.top;
      }
      else {
        BVar4 = IntersectRect(&local_38,&local_28,&local_18);
        if (BVar4 == 0) goto LAB_10060396;
        *(LONG *)(param_1 + 0x1c) = local_38.left;
        *(LONG *)(param_1 + 0x18) = local_38.top;
        *(LONG *)(param_1 + 0x14) = local_18.right - local_18.left;
        iVar3 = local_18.bottom - local_18.top;
      }
      *(int *)(param_1 + 0x10) = iVar3;
    }
  }
LAB_10060396:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

