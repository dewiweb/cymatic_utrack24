// rea decompile_all
// name: CFrameImpl::StoreWindowPlacement
// address: 0x1006016c
// body: available
// range: 0x1006016c-0x1006022e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameImpl::StoreWindowPlacement(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameImpl::StoreWindowPlacement(CFrameImpl *this)

{
  AFX_MODULE_STATE *pAVar1;
  CObject *pCVar2;
  HWND hWnd;
  BOOL BVar3;
  int iVar4;
  tagRECT local_54;
  tagWINDOWPLACEMENT local_44;
  int local_18;
  int local_14;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pAVar1 = AfxGetModuleState();
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_1012f19c,*(CObject **)(pAVar1 + 4));
  if (pCVar2 != (CObject *)0x0) {
    hWnd = (HWND)0x0;
    if (*(int *)(this + 0xb0) != 0) {
      hWnd = *(HWND *)(*(int *)(this + 0xb0) + 0x20);
    }
    BVar3 = IsWindow(hWnd);
    if (BVar3 != 0) {
      local_44.length = 0x2c;
      iVar4 = CWnd::GetWindowPlacement(*(CWnd **)(this + 0xb0),&local_44);
      if (iVar4 != 0) {
        if (local_44.showCmd != 3) {
          local_44.showCmd = 1;
        }
        SystemParametersInfoW(0x30,0,&local_18,0);
        OffsetRect(&local_44.rcNormalPosition,local_18,local_14);
        CopyRect(&local_54,&local_44.rcNormalPosition);
        (**(code **)(*(int *)pCVar2 + 0x144))(&local_54,local_44.flags,local_44.showCmd);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

