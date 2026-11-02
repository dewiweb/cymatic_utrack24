// rea decompile_all
// name: CPaneContainerManager::CheckForMiniFrameAndCaption
// address: 0x100c5f52
// body: available
// range: 0x100c5f52-0x100c6036 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPaneContainerManager::CheckForMiniFrameAndCaption(class
   CPoint,class CDockablePane * *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CPaneContainerManager::CheckForMiniFrameAndCaption
          (CPaneContainerManager *this,int param_2,int param_3,undefined4 *param_4)

{
  POINT pt;
  undefined4 *puVar1;
  CObject *pCVar2;
  BOOL BVar3;
  int iVar4;
  RECT local_28;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  puVar1 = param_4;
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_10162338,
                              *(CObject **)(this + 0x4c));
  *puVar1 = 0;
  if ((pCVar2 != (CObject *)0x0) && (iVar4 = (**(code **)(*(int *)this + 0x54))(), iVar4 < 2)) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    (**(code **)(*(int *)pCVar2 + 0x1c4))(&local_28);
    ScreenToClient(*(HWND *)(pCVar2 + 0x20),(LPPOINT)&param_2);
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    (**(code **)(*(int *)pCVar2 + 0x1b8))(&local_18);
    iVar4 = (**(code **)(*(int *)pCVar2 + 0x16c))();
    param_3 = param_3 + iVar4 + local_14;
    param_2 = param_2 + local_18;
    pt.y = param_3;
    pt.x = param_2;
    BVar3 = PtInRect(&local_28,pt);
    if (BVar3 != 0) {
      pCVar2 = (CObject *)(**(code **)(*(int *)this + 0x78))();
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar2);
      *puVar1 = pCVar2;
    }
  }
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

