// rea decompile_all
// name: CMFCRibbonLabel::OnDraw
// address: 0x100dca71
// body: available
// range: 0x100dca71-0x100dcbe1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonLabel::OnDraw(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonLabel::OnDraw(CMFCRibbonLabel *this,CDC *param_1)

{
  BOOL BVar1;
  int iVar2;
  CMFCVisualManager *pCVar3;
  undefined4 uVar4;
  int local_24;
  int local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  BVar1 = IsRectEmpty((RECT *)(this + 0x18));
  if (BVar1 == 0) {
    local_18.left = ((RECT *)(this + 0x18))->left;
    local_18.top = *(LONG *)(this + 0x1c);
    local_18.right = *(LONG *)(this + 0x20);
    local_18.bottom = *(LONG *)(this + 0x24);
    InflateRect(&local_18,-*(int *)(this + 0xbc),0);
    local_24 = -1;
    iVar2 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this);
    if (iVar2 == 0) {
      pCVar3 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar3 + 0x270))
                (param_1,this,*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                 *(undefined4 *)(this + 0x20),*(undefined4 *)(this + 0x24));
    }
    else {
      local_18.bottom = local_18.bottom + -2;
      pCVar3 = CMFCVisualManager::GetInstance();
      iVar2 = (**(code **)(*(int *)pCVar3 + 0x4c))
                        (param_1,*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                         *(undefined4 *)(this + 0x20),*(undefined4 *)(this + 0x24));
      if (iVar2 != -1) {
        local_24 = (**(code **)(*(int *)param_1 + 0x30))(iVar2);
      }
    }
    local_20 = 0;
    iVar2 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this);
    if (iVar2 != 0) {
      local_20 = (**(code **)(*(int *)param_1 + 0x28))(&DAT_10166bc4);
    }
    iVar2 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this);
    if ((iVar2 != 0) || (uVar4 = 0x810, *(int *)(this + 0x94) == 0)) {
      uVar4 = 0x824;
    }
    iVar2 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this);
    if ((iVar2 == 0) && (*(int *)(this + 0x94) != 0)) {
      iVar2 = ((local_18.bottom - *(int *)(this + 0xb0)) - local_18.top) / 2;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      InflateRect(&local_18,0,-iVar2);
    }
    (**(code **)(*(int *)this + 0x1bc))
              (param_1,this + 4,local_18.left,local_18.top,local_18.right,local_18.bottom,uVar4,
               0xffffffff);
    if (local_20 != 0) {
      (**(code **)(*(int *)param_1 + 0x28))(local_20);
    }
    if (local_24 != -1) {
      (**(code **)(*(int *)param_1 + 0x30))(local_24);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

