// rea decompile_all
// name: CMFCRibbonColorMenuButton::OnDraw
// address: 0x100ec72d
// body: available
// range: 0x100ec72d-0x100ec942 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonColorMenuButton::OnDraw(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonColorMenuButton::OnDraw(CMFCRibbonColorMenuButton *this,CDC *param_1)

{
  int iVar1;
  CDC *pCVar2;
  BOOL BVar3;
  CMFCVisualManager *pCVar4;
  int iVar5;
  AFX_MODULE_STATE *pAVar6;
  undefined4 extraout_ECX;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_3c;
  int local_38;
  RECT *local_34;
  CDC *local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_34 = (RECT *)(this + 0x18);
  local_30 = param_1;
  BVar3 = IsRectEmpty(local_34);
  if (BVar3 != 0) goto LAB_100ec932;
  pCVar4 = CMFCVisualManager::GetInstance();
  uVar7 = (**(code **)(*(int *)pCVar4 + 0x2d0))();
  uVar8 = FUN_10026c8e(extraout_ECX,(int)((ulonglong)uVar7 >> 0x20),&local_3c);
  local_38 = (int)uVar7 * 2 + 2 + *(int *)uVar8;
  iVar5 = (**(code **)(*(int *)this + 0x1cc))(param_1);
  local_2c = -1;
  if (*(int *)(this + 0x78) == 0) {
    if (iVar5 != -1) goto LAB_100ec7b4;
  }
  else {
    if (iVar5 == -1) {
      pCVar4 = CMFCVisualManager::GetInstance();
      iVar5 = (**(code **)(*(int *)pCVar4 + 0xc4))();
    }
LAB_100ec7b4:
    local_2c = (**(code **)(*(int *)param_1 + 0x30))(iVar5);
  }
  local_18.top = local_34->top;
  local_18.right = local_34->right;
  local_18.bottom = local_34->bottom;
  local_18.left = local_34->left + 3 + local_38;
  InflateRect(&local_18,-*(int *)(this + 0xbc),-*(int *)(this + 0xbc));
  pCVar2 = local_30;
  (**(code **)(*(int *)local_30 + 0x68))
            (*(int *)(this + 4),*(undefined4 *)(*(int *)(this + 4) + -0xc),&local_18,0x8024);
  if (local_2c != -1) {
    (**(code **)(*(int *)pCVar2 + 0x30))(local_2c);
  }
  iVar5 = local_38;
  if (*(int *)(this + 0x168) == 2) {
    iVar1 = local_34->left;
    local_28.top = local_34->top;
    local_28.right = local_34->right;
    local_28.bottom = local_34->bottom;
    local_28.left = iVar1;
    if (DAT_10166ba8 == (HICON)0x0) {
      pAVar6 = AfxGetModuleState();
      DAT_10166ba8 = LoadImageW(*(HINSTANCE *)(pAVar6 + 0xc),(LPCWSTR)0x42d1,1,0x10,0x10,0x8000);
    }
    DrawIconEx(*(HDC *)(local_30 + 4),(iVar5 + -0x10) / 2 + iVar1,
               ((local_28.bottom - local_28.top) + -0x10) / 2 + local_28.top,DAT_10166ba8,0x10,0x10,
               0,(HBRUSH)0x0,3);
  }
  else if (*(int *)(this + 0x168) == 1) {
    local_28.left = local_34->left;
    local_28.top = local_34->top;
    local_28.bottom = local_34->bottom;
    local_28.right = local_28.left + local_38;
    InflateRect(&local_28,-2,-2);
    iVar5 = local_28.bottom - local_28.top;
    local_38 = local_28.right - local_28.left;
    if (iVar5 <= local_28.right - local_28.left) {
      local_38 = iVar5;
    }
    local_28.left = ((local_28.right - local_38) - local_28.left) / 2 + local_28.left;
    local_28.top = (iVar5 - local_38) / 2 + local_28.top;
    local_3c = local_28.left + local_38;
    local_38 = local_28.top + local_38;
    local_28.right = local_3c;
    local_28.bottom = local_38;
    (**(code **)(**(int **)(this + 0x164) + 0x1fc))
              (local_30,local_28.left,local_28.top,local_3c,local_38,0xffffffff,0,0xffffffff);
  }
LAB_100ec932:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

