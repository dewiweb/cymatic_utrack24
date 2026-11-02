// rea decompile_all
// name: CMDIClientAreaWnd::GetMDITabsContextMenuAllowedItems
// address: 0x10064798
// body: available
// range: 0x10064798-0x10064843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: unsigned long __thiscall CMDIClientAreaWnd::GetMDITabsContextMenuAllowedItems(void)
   
   Library: Visual Studio 2010 Release */

ulong __thiscall CMDIClientAreaWnd::GetMDITabsContextMenuAllowedItems(CMDIClientAreaWnd *this)

{
  CMFCTabCtrl *pCVar1;
  int iVar2;
  CObject *pCVar3;
  CFrameWnd *pCVar4;
  CObject *pCVar5;
  uint uVar6;
  
  pCVar1 = FindActiveTabWndByActiveChild(this);
  uVar6 = 0;
  if (pCVar1 != (CMFCTabCtrl *)0x0) {
    uVar6 = 0;
    iVar2 = (**(code **)(*(int *)pCVar1 + 0x1a8))();
    if (1 < iVar2) {
      if (*(int *)(this + 0x28dc) < 2) {
        uVar6 = 3;
      }
      else {
        uVar6 = (*(int *)(this + 0x2968) != 1) + 1;
      }
    }
    if (pCVar1 != *(CMFCTabCtrl **)(*(int *)(this + 0x28d4) + 8)) {
      uVar6 = uVar6 | 4;
    }
    if (pCVar1 != *(CMFCTabCtrl **)(*(int *)(this + 0x28d8) + 8)) {
      uVar6 = uVar6 | 8;
    }
    pCVar3 = (CObject *)(**(code **)(*(int *)pCVar1 + 0x20c))();
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,pCVar3);
    pCVar4 = CWnd::GetParentFrame((CWnd *)this);
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)pCVar4);
    if ((((pCVar3 != (CObject *)0x0) && (*(int *)(pCVar3 + 0x434) != 0)) &&
        (pCVar5 != (CObject *)0x0)) && (*(int *)(pCVar5 + 0x40c) == 0)) {
      uVar6 = uVar6 | 0x10;
    }
  }
  return uVar6;
}

