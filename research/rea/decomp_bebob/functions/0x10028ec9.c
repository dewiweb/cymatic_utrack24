// rea decompile_all
// name: CMFCToolBar::OnSetCursor
// address: 0x10028ec9
// body: available
// range: 0x10028ec9-0x10028fe5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCToolBar::OnSetCursor(class CWnd *,unsigned int,unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBar::OnSetCursor(CMFCToolBar *this,CWnd *param_1,uint param_2,uint param_3)

{
  POINT pt;
  int iVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  BOOL BVar5;
  HCURSOR hCursor;
  tagPOINT local_28;
  tagPOINT local_20;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar3 = *(int *)(this + 0xb30);
  local_20.x = 0;
  local_20.y = 0;
  GetCursorPos(&local_20);
  hCursor = DAT_10166b88;
  if (iVar3 == 0) {
    if (((DAT_10166e54 != 0) && (*(int *)(this + 0xb80) != -1)) && (*(int *)(this + 0xb04) == 0)) {
      ScreenToClient(*(HWND *)(this + 0x20),&local_20);
      iVar3 = *(int *)(this + 0xb80);
      iVar1 = (**(code **)(*(int *)this + 0x390))(local_20.x,local_20.y);
      if (iVar1 == iVar3) {
        piVar2 = (int *)FUN_100261ef(this,iVar3);
        iVar3 = (**(code **)(*piVar2 + 0x3c))();
        if ((iVar3 != 0) &&
           (lVar4 = _labs(local_20.x - piVar2[0x17]), hCursor = DAT_10166b88, lVar4 < 7))
        goto LAB_10028f6b;
      }
    }
    local_28.x = local_20.x;
    local_28.y = local_20.y;
    ScreenToClient(*(HWND *)(this + 0x20),&local_28);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    CMFCControlBarImpl::GetGripperRect((CMFCControlBarImpl *)(this + 0xb6c),(CRect *)&local_18,1);
    pt.y = local_28.y;
    pt.x = local_28.x;
    BVar5 = PtInRect(&local_18,pt);
    if ((BVar5 == 0) || (hCursor = DAT_10166b94, DAT_1016843c != 0)) {
      CWnd::Default((CWnd *)this);
      goto LAB_10028fd5;
    }
  }
LAB_10028f6b:
  SetCursor(hCursor);
LAB_10028fd5:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

