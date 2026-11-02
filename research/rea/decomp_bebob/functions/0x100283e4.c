// rea decompile_all
// name: CMFCToolBar::OnDragOver
// address: 0x100283e4
// body: available
// range: 0x100283e4-0x10028559 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual unsigned long __thiscall CMFCToolBar::OnDragOver(class COleDataObject
   *,unsigned long,class CPoint)
   
   Library: Visual Studio 2010 Release */

ulong __thiscall
CMFCToolBar::OnDragOver
          (CMFCToolBar *this,COleDataObject *param_1,uint param_2,undefined4 param_4,
          undefined4 param_5)

{
  CMFCToolBarButton *pCVar1;
  int iVar2;
  undefined4 uVar3;
  BOOL BVar4;
  int iVar5;
  ulong uVar6;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (((*(int *)(this + 0xb04) == 0) && (*(int *)(this + 0xb44) == 0)) &&
     (pCVar1 = CMFCToolBarButton::CreateFromOleData(param_1), pCVar1 != (CMFCToolBarButton *)0x0)) {
    iVar2 = (**(code **)(*(int *)pCVar1 + 0x10))(this);
    (**(code **)(*(int *)pCVar1 + 4))(1);
    if (iVar2 != 0) {
      *(uint *)(this + 0xb2c) = param_2 & 8;
      if (*(int *)(this + 0xc98) == 0) {
        iVar2 = *(int *)(this + 0xb80);
        *(undefined4 *)(this + 0xb80) = 0xffffffff;
        if (iVar2 != -1) {
          InvalidateButton(this,iVar2);
          UpdateWindow(*(HWND *)(this + 0x20));
        }
      }
      local_18.left = *(LONG *)(this + 0xc58);
      local_18.top = *(LONG *)(this + 0xc5c);
      local_18.right = *(LONG *)(this + 0xc60);
      local_18.bottom = *(LONG *)(this + 0xc64);
      uVar3 = (**(code **)(*(int *)this + 0x3dc))(param_4,param_5,this + 0xc58);
      BVar4 = EqualRect(&local_18,(RECT *)(this + 0xc58));
      if (BVar4 == 0) {
        *(undefined4 *)(this + 0xb8c) = uVar3;
        InflateRect(&local_18,2,2);
        InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
        local_18.left = ((RECT *)(this + 0xc58))->left;
        local_18.top = *(LONG *)(this + 0xc5c);
        local_18.right = *(LONG *)(this + 0xc60);
        local_18.bottom = *(LONG *)(this + 0xc64);
        InflateRect(&local_18,2,2);
        InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0xc58),1);
        UpdateWindow(*(HWND *)(this + 0x20));
      }
      iVar2 = *(int *)(this + 0xb7c);
      iVar5 = (**(code **)(*(int *)this + 0x390))(param_4,param_5);
      *(int *)(this + 0xb7c) = iVar5;
      if (iVar2 != iVar5) {
        (**(code **)(*(int *)this + 0x3b0))(iVar5);
      }
    }
  }
  uVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar6;
}

