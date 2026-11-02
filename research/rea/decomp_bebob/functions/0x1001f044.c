// rea decompile_all
// name: CMDIChildWndEx::IsTaskbarTabsSupportEnabled
// address: 0x1001f044
// body: available
// range: 0x1001f044-0x1001f0a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMDIChildWndEx::IsTaskbarTabsSupportEnabled(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMDIChildWndEx::IsTaskbarTabsSupportEnabled(CMDIChildWndEx *this)

{
  CFrameWnd *pCVar1;
  CObject *pCVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  ulong uVar5;
  
  pCVar1 = CWnd::GetTopLevelFrame((CWnd *)this);
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)pCVar1);
  if (pCVar2 != (CObject *)0x0) {
    pAVar3 = AfxGetModuleState();
    if (*(int **)(pAVar3 + 4) != (int *)0x0) {
      iVar4 = (**(code **)(**(int **)(pAVar3 + 4) + 0x100))();
      if (iVar4 != 0) {
        iVar4 = (**(code **)(*(int *)this + 0x1e8))();
        if ((iVar4 != 0) && (DAT_10166c18 != 0)) {
          uVar5 = CWnd::GetExStyle((CWnd *)this);
          if ((uVar5 & 0x80000) == 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

