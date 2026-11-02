// rea decompile_all
// name: FUN_1003a659
// address: 0x1003a659
// body: available
// range: 0x1003a659-0x1003a89f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_1003a659(void *this,int param_1,RECT *param_2)

{
  CObject *this_00;
  int iVar1;
  CWnd *pCVar2;
  int iVar3;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  CWnd *local_58;
  CObject *local_54;
  int local_50;
  int local_4c;
  tagRECT local_48;
  tagRECT local_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_58 = this;
  CWnd::Default(this);
  if (*(int *)((int)this + 0x84) != 0) goto LAB_1003a88f;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)((int)this + 0x20),&local_18);
  CopyRect(&local_38,param_2);
  local_48.left = 0;
  local_48.top = 0;
  local_48.right = 0;
  local_48.bottom = 0;
  GetClientRect(*(HWND *)((int)this + 0x20),&local_48);
  if ((param_1 == 1) || (param_1 == 2)) {
    local_4c = 1;
    iVar1 = local_38.right - local_38.left;
    iVar3 = local_18.right - local_18.left;
  }
  else {
    iVar1 = local_38.bottom - local_38.top;
    iVar3 = local_18.bottom - local_18.top;
    local_4c = 0;
  }
  if (iVar1 == iVar3) goto LAB_1003a88f;
  pCVar2 = CWnd::FromHandlePermanent(*(HWND__ **)((int)this + 200));
  local_54 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10160470,(CObject *)pCVar2);
  if (local_54 == (CObject *)0x0) goto LAB_1003a88f;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  (**(code **)(*(int *)this + 0x1b8))(&local_28);
  iVar1 = (((local_38.bottom - *(int *)((int)this + 0xa0)) - local_38.top) - local_1c) - local_24;
  iVar3 = ((local_38.right - local_38.left) - local_20) - local_28;
  (**(code **)(*(int *)local_54 + 0x2a4))(&local_68,0);
  this_00 = local_54;
  if (local_4c != 0) {
    iVar1 = iVar3;
  }
  (**(code **)(*(int *)local_54 + 0x204))(&local_60,iVar1,local_4c == 0);
  local_5c = local_5c - local_64;
  local_60 = local_60 - local_68;
  if (local_60 == 0) {
    if ((local_5c == 0) &&
       (iVar1 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CMFCBaseToolBar_1012c6f8),
       iVar1 != 0)) {
      param_2->left = local_18.left;
      param_2->top = local_18.top;
      param_2->right = local_18.right;
      param_2->bottom = local_18.bottom;
      goto LAB_1003a88f;
    }
    if (param_1 == 2) {
      param_2->right = local_18.right;
    }
    else {
      param_2->left = local_18.left;
    }
  }
  else if (param_1 == 2) {
    param_2->right = (param_2->left - local_18.left) + local_18.right + local_60;
  }
  else {
    param_2->left = ((param_2->right - local_18.right) - local_60) + local_18.left;
  }
  if (local_5c == 0) {
    iVar1 = local_18.top;
    iVar3 = local_18.bottom;
    if (param_1 != 6) goto LAB_1003a83c;
LAB_1003a834:
    param_2->bottom = iVar3;
  }
  else {
    if (((param_1 == 6) || (param_1 == 2)) || (param_1 == 1)) {
      iVar3 = (param_2->top - local_18.top) + local_18.bottom + local_5c;
      goto LAB_1003a834;
    }
    iVar1 = ((param_2->bottom - local_18.bottom) - local_5c) + local_18.top;
LAB_1003a83c:
    param_2->top = iVar1;
  }
  (**(code **)(*(int *)this_00 + 0x20c))();
  local_50 = 0;
  SystemParametersInfoW(0x26,0,&local_50,0);
  if ((local_50 == 0) &&
     (iVar1 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CMFCBaseToolBar_1012c6f8),
     iVar1 != 0)) {
    CWnd::SetWindowPos(local_58,(CWnd *)0x0,param_2->left,param_2->top,
                       param_2->right - param_2->left,param_2->bottom - param_2->top,0x14);
  }
LAB_1003a88f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

