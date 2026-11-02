// rea decompile_all
// name: CPaneFrameWnd::OnContextMenu
// address: 0x1003b5ef
// body: available
// range: 0x1003b5ef-0x1003b70f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPaneFrameWnd::OnContextMenu(class CWnd *,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CPaneFrameWnd::OnContextMenu(CPaneFrameWnd *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  POINT pt;
  CObject *pCVar1;
  int iVar2;
  BOOL BVar3;
  CWnd *pCVar4;
  RECT local_38;
  tagRECT local_28;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (((DAT_10166e54 == 0) && (this[0x99] == (CPaneFrameWnd)0x0)) && (DAT_1016843c == 0)) {
    (**(code **)(*(int *)this + 0x234))();
    pCVar1 = (CObject *)(**(code **)(*(int *)this + 0x1a8))();
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,pCVar1);
    if ((pCVar1 != (CObject *)0x0) &&
       (iVar2 = (**(code **)(*(int *)pCVar1 + 0x2e4))(param_3,param_4), iVar2 == 0)) {
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0x20),&local_28);
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      (**(code **)(*(int *)this + 0x1b8))(&local_18);
      local_38.left = local_18 + local_28.left;
      local_38.top = local_14 + local_28.top;
      local_38.right = local_28.right - local_10;
      local_38.bottom = *(int *)(this + 0xa0) + local_14 + local_28.top;
      pt.y = param_4;
      pt.x = param_3;
      BVar3 = PtInRect(&local_38,pt);
      if ((BVar3 != 0) &&
         (pCVar4 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xbc)), pCVar4 != (CWnd *)0x0)) {
        (**(code **)(*(int *)pCVar1 + 0x244))(this,param_3,param_4);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

